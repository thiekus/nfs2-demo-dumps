# Need For Speed II Demo symbols dumps

Here you find raw and pre-processed Need For Speed II first edition demo `NFSW.EXE` (sha256sum `4d65702588632a806515985aa943400f043293a2e8fce2aa61ce5251dc902f57`) inside `nfs2demo.exe` (sha256sum `b73ed58f8a3d36f733fceba70192137f01654fa75e10827c7c4be7f63ff0e6d9`) which once available [publicly released on official website](https://web.archive.org/web/19980529152855fw_/http://www.nfs2.com/demo.html) for years before they actually shut down official NFS2 website (thankfully Internet Archive saved this). I assume why this symbols got embedded in EXE overlay because someone on EA Seattle enable debug info generation and uncheck `Produce symbol file[op symf]` on Watcom IDE linker options, which instead of making debug symbol as separate *.sym file (and EXE size would be unaffected), linker just defaults to embed debug info on EXE overlay.

Symbols were processed using [OpenWatcom](https://github.com/open-watcom/open-watcom-v2) `wdump` utility. Although that debug symbols is incomplete as missing of EAClib functions, most if not all game code is covered by this debug symbols, and seems almost all modules globals names were exposed regadless of modules. It means can be useful for modders and reverse engineers who needs understanding of game internals and mechanics. See `MODULES.md` for list of modules covered by debug symbols.

Need For Speed game is copyright by Electronic Arts. This repo did not intend to infringe their intelectual property and provided only for references for modding supports and educational purposes.

## Dumping the symbols

Download and install [OpenWatcom v2 C/C++](https://github.com/open-watcom/open-watcom-v2/releases) (or older OpenWatcom v1.9, although I didn't test yet). This contains `wdump` which is important to convert debug into meaningful information.

Watcom `wdump` and generated symbols divided into each separate modules: Globals, Modules Locals, Modules Types and Modules Line numbers.

To dump Globals to `nfs2_globals.txt`, which contains all off global functions, variables and consts:

```sh
wdump -q -Dg nfsw.exe > nfs2_globals.txt
```

To dump locals variables to `nfs2_locals.txt` (including global vars, function, etc per modules):

```sh
wdump -q -Dml nfsw.exe > nfs2_locals.txt
```

To dump types definitions per modules to `nfs2_types.txt`:

```sh
wdump -q -Dmt nfsw.exe > nfs2_types.txt
```

To dump line numbers per modules to `nfs2_lines.txt`:

```sh
wdump -q -Dmn nfsw.exe > nfs2_lines.txt
```

For easier to peek, splitted globals and locals per file were included in this repo. The `globals` directory contains raw wdump output which has splitted per module, resulting `globals_processed`. Also similar for `locals` directory which resulting `types_processed`.

In addition, headers list used by each modules is extracted manually without wdump by directly open `nfsw.exe` using notepad, find the full path module name, then replace null bytes with line breaks symbols. This may useful to find relations of between modules and library used.

## Making fake PDB

Perhaps the most interesting for modders and reverse engineers is able to read debug information inside EXE. Since original debug information is using pretty uncommon Watcom debug format, we need convert them into fake PDB debug information using [map2pdb](https://github.com/andersmelander/map2pdb) (which originally designed for Delphi/Borland mapfiles format). To produce fake PDB:

```sh
map2pdb -v nfsw.map
```

Then put `nfsw.pdb` on same directory as `nfsw.exe`. I tested some programs which is able to read symbols from fake pdb such as:

* OllyDbg v2
* Cheat Engine v7.6 (only works on Windows, not Wine)
* Ghidra 12 (you must not make analysis first, load from menu file > load PDB. It will complain PDB is mismatch but just proceed anyway. Uncheck `Function ID` before start analysis).
* IDA Free v5.0 (uncheck FLIRT on analysis options).

However it didn't works on:

* IDA Pro v9.x (might because later IDA read `LOCAL` sections rather than `GLOBAL` section on PDB which map2pdb produced, workarounds with load `nfsw.exe` from IDA Free 5.0, load PDB from there, then convert IDA database from old 32-bit database to newer one).

## TODO

* Publish scripts that generates them, currently in forms of quick and dirty spagetti code of python scripts.

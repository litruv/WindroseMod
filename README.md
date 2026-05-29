# WindroseMod

LogicMods pak for retail Windrose (UE4SS `BPModLoaderMod`). **Requires Unreal Engine 5.6**

**Setup:** UE 5.6 (Epic), Windrose (Steam), UE4SS. Optional: `UE_ROOT` (engine folder), `WINDROSE_GAME_EXE` (shipping exe).

```bat
BuildAndLaunch-WindroseMod.bat
BuildAndLaunch-WindroseMod.bat -clean
LaunchEditor.bat
```

Pak install name defaults to `windrosemod` (edit `PAK_BASENAME` in `BuildAndLaunch-WindroseMod.bat`).

Cooks `/Game/Mods/WindroseMod` → `windrosemod` in `R5\Content\Paks\LogicMods\`. Entry: `ModActor` (parent `Actor`), UI `W_ModStartup`.

Header-dump rebuild: `../UHTHeaderDump/` + `Tools/ImportPipeline/`.

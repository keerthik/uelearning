# Setup (Windows)

In your active project, if you haven't already used any plugins, create the Plugins folder. You should just copy this Plugin folder into the GameFeatures folder if this asset isn't in your repository already. If you have multiple projects that need to reference this plugin, reference this project's assets via symlink. You can use a hard or soft link, it should compile fine.

Example, if this plugin is in the tutorial5 Plugins folder:
```
mkdir Plugins/GameFeatures; cd Plugins/GameFeatures
cmd /c mklink /D ..\..\..\tutorial5\Plugins\GameFeatures\BasicMenu\
```

Ensure you have access to the plugins' assets:
- edit -> project settings -> asset ref policy -> default project content rule +can reference these domains [plugin name, ...]

Open the Input Mapping Context you are using, and reference IA_PauseKey and add a key (I use F10)

Open your PlayerController BP, and add
- enhancedinputaction IA_pausekey -> Toggle pause+menu -> (set var) output to `pauseMenu` + (set input) `Existing Menu` to `pauseMenu`

If you update Engine/Editor versions, you may need to redo some of the above steps as references may break.
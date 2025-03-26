# 250326 Plugin development

enable UE5 plugins
- edit -> plugins -> "game features" + "modular gameplay"
- restart

create UE5 plugin + class
- edit -> plugins -> +add -> game feature (with C++) -> /pluginname/ -> create
- content browser -> plugins//pluginname/ C++ classes/ -> right click + create C++ class -> public (private classes can only be used internally in the module)
    - select BlueprintFunctionLibrary

update code
- UBlueprintFunctionLibrary can only have static functions
- [linker errors checklist !! see below]
	- added //PluginNameRuntime// to //project//.Build.cs pubdeps
	- added UE deps referenced by //plugin// to //plugin//.Build.cs pub/privdeps
	- deleted Intermediate, Binaries, DerivedDataCache and rebuilt project
- [cannot ref plugin content in project BP/content !! edit -> project settings -> game - asset referencing policy -> project content -> default project content rule -> can reference these domains -> //plugin//]
	- [ref](https://forums.unrealengine.com/t/ga-hero-death-uasset-illegally-references-asset-you-may-only-reference-assets-from-enginecontent/1212662/4)
- most functions will need APlayerController passed in
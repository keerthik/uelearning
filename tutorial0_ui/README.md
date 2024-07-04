## 240623 Basic UI

making widget
- new BP -> widget -> user widget
- add Canvas panel -> text -> anchor dropdown -> alignment (anchor position rel to size)
- adding a font, let UE figure it out after placing TTF in folder. works pretty well
- navigating the UI widget anchor stuff.

adding the menu using blueprint
- project settings -> Engine/Input -> Action bindings 
- [deprecated? use Engine/Enhanced Input]
	- create new Input Action (eg: IA_pause) in Content -> ? -> Input
	- open Content -> ? -> Input -> IMC_Default
		- add new IA, set default key (chose F10)
- [had to convert playerclass from data->full BP? because C++ project]
- BP -> BeginPlay -> Create widget -> [set ref !! to use as target for Add to Viewport]
	- [UI widget needs to be "owned"? which playercontroller sees it]
- add EnhancedInputAction by searching action name you set (eg: IA_pause)
- [Add to Viewport -> not found !! some BP options only available pre-connected. start drawing out from source, then type]
- similarly, boolean NOT shown only when dragged from bool
- set IA_Pause Action/Trigger when Paused to true
- [had to use sequence to get updated pause info?]

adding buttons and functionality
- grid layout pretty intuitive
- button defaults and auto-layout intuitive and looks decent
- [setting default font non-intuitive]
- [accessing button ! IsVariable bool on button details pane can be hidden if too narrow]
- Switch to widget -> graph view (top right)
- select button variable -> Add OnClicked event

migrating "verbose" BP functionality to C++
- used GPT to inform where to add C++ "toggle pause and show menu" functionality
- [compiling !! needed to add "UMG" to /gamename/.build.cs libs list]
- ! seems like a good idea to tag things exposed in BP, and keep simple logic in BP to save compile/iteration time
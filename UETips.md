# General tips and sources

- Edit -> Editor Preferences -> Blueprint Editor Settings -> Experimental -> Allow impure node disabling.
    [Source](https://youtu.be/K-gGpteu4wU?t=208) Lets you disable BP nodes (comment out code). I found this extremely useful while migrating functionality to C++. It is similar to disconnecting the node, but it has significant bonuses:
    - you can shift/box-select several nodes to disable/enable rather than manipulating individual connections
    - the BP retains the logic connections through disabled nodes (so you don't forget)
    - the BP will continue execution after the disabled nodes without changing connections

- Set up for VS Code with Intellisense support and rebuilds [Source](https://dev.epicgames.com/documentation/en-us/unreal-engine/setting-up-visual-studio-code-for-unreal-engine)


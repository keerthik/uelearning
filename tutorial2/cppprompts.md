## A log of AI prompts to convert BP functionality to C++

Getting viewport in GameMode
> okay. how do i get the screen viewport size in my gamemode C++ class? i want to set my local variable Xbounds to the viewport width, and the var Ybounds to the viewport height. i also want to get the scale factor of the editor viewport, if the game is running in the editor, and multiply Xbounds and Ybounds by that scale factor.

Assigning camera scale factor to wrap bounds
> I have an ActorComponent C++ class. It needs to have a Camera variable `GameCamera` which can be assigned a reference to an orthographic camera in blueprint. It should use this orthographic camera in the `BeginPlay` function to determine the ratio of world scale units to pixels as seen through `GameCamera` as FVector2D `ScaleFactor`. Assuming `GameCamera`'s transform world position has X, Y = 0, `ScaleFactor.X * Viewport.X` should be equal to the WorldPosition X value at the edge of `GameCamera`'s viewport, that is the edge of the screen. Provide the C++ code for the `BeginPlay` function.

Iterating over scenecomponents
> In my ActorComponent C++ class's tick function, I wish to iterate over every scene component in the owner with the tag "wrap" and obtain the component's world position in the loop body, using a `foreach` loop.
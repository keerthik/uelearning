basic game
- added "World Settings" to editor UI
- level: like unity scene
- game mode (bp): like game director, but specifically not an actor or controller (unity doesn't have one, we just use monobehaviours)
- pawn (bp): [not a player controller?] an actor (including mesh) that player can represents player or is controlled by player
- set: 
	- game mode/default pawn->BP_playerpawn
	- world settings/game mode->GM_mine
- [why is camera angle and pawn location weird every time !! place "player start" in world]
- i looked at the C++ for the top-down sample (tutorial0).

input
- tute uses Engine/input, we should use Enhanced Input
	- [axis mappings "scale" -1 and +1 does not exist !! you need to apply modifier "Negate" on one instance of the action]
	- created IA for move (axis, confused) and shoot
![[Pasted image 20240704032427.png]]

- BP_pawn has an "event graph" (the actual blueprint)
- input mappings make more sense on a playercontroller, but can be put on any BP if you add mapping context
	- [Get PlayerController for player0 -> create Enhanced Input Local Player Subsystem Node -> Add Mapping Context where target is input subsystem interface]

firing a bullet
- Add a "scene component" to any BP to create an "empty transform"
- [initial bullet spawn location caused my plane to behave weird and jump around ? trying to spawn bullets within the convex bounds of my plane mesh might have tried to displace the ship to accommodate the bullet]

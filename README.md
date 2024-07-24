# Learning Unreal

This repository contains my journey through various tutorials learning Unreal Engine 5. 

## How I use this repository
- Each tutorial project is based on some tutorial content from the internet. I then expand on the tutorial by a small amount to exercise my understanding. 

- If I am learning a lot of new things and doing them while constantly referencing the tutorial, I like to try and practice it one more time, by branching off the initial commit and trying to accomplish everything I learned without referencing the source.

- After I have wrapped up a project, I add my learnings, questions, answers, expansions, and inferences in each project's readme, before merging it all back to `master`. Special annotations in my notes:
    - [xyz ? abc] means i am not sure why/how/what xyz, but abc is my guess
    - [xyz !! abc] means abc is a discovery that answers xyz

My favorite expansion is to try and migrate ugly BP graphs into C++ but leave it exposed to BP, after I have it all working. I will work on constructing a heurestic for when this seems like a good idea, and to what extent.

## My background
I come from a programming background, with Unity experience starting around 2011. Initially, my experience was working on hobby games with early Unity versions. I never gained much 3D modeling, animation or texturing experience, I mostly worked with static meshes. I have some, but limited experience with shader programming or shader-graph-like tools.

I have however been professionally using the Unity engine and programming in C# for it extensively since 2012, building a mobile non-game application. A typical AAA-style game programmer would primarily focus on animation logic, multiplayer, or AI behaviours. My experience was mostly gained on platform engineering, general software architecture and UI manipulation.

# Tutorials

## Covered/ongoing
### tutorial0: UI and basic Unreal
- [NuMakesGames' Pause Menu](https://www.youtube.com/watch?v=hBGVwOsezi0) part 1. 
- Part 2, customizing keybinds, will be returned to, as it was made using legacy Input system, not new Enhanced Input.
- 🕜 2-3h

### tutorial1: "first game" <abandoned>
- abandoned partway -- goes over a few too many features
- [Epic's official "first game" tutorial](https://dev.epicgames.com/community/learning/tutorials/e2V/your-first-game-in-unreal-engine-5)

### tutorial2: Basic game project (asteroids)
- [RGBGuy's Asteroids](https://www.youtube.com/watch?v=vRA9DKV-fd4&list=PLSPtS15mOXMfB488RbiM6QK3CUKut0gZ2) playlist.
- 🕜 2-3h x 4

## Planned
### tutorial3: Save & Load game
[Ali's Save & Load guide](https://www.youtube.com/watch?v=H6rqJbwjRIk)

### tutorial4: Object pools
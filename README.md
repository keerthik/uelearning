# Learning Unreal

This repository contains my journey through various tutorials learning Unreal Engine 5. 

## My background
I come from a programming background, with Unity experience starting around 2011. Initially, my experience was working on hobby games with early Unity versions. I never gained much 3D modeling, animation or texturing experience, I mostly worked with static meshes. I have some, but limited experience with shader programming or shader-graph-like tools.

I have however been professionally using the Unity engine and programming in C# for it extensively since 2012, building a mobile non-game application. A typical AAA-style game programmer would primarily focus on animation logic, synchronous multiplayer, real-time performance, or AI behaviours. My experience of these topics is at a hobbyist level. My professional experience was mostly gained on cross-platform stability, async backend interaction, general software architecture and 2D UI.

Depending on how similar my background is to yours, you may find the structure of my "tutorial roadmap" more or less useful.

# How I use this repository

- Each tutorial project is based on some tutorial content from the internet, listed below. I try to follow the tutorial pretty closely, occasionally exchanging the assets or level basis for my own.

- If I am learning a lot of new things and doing them while constantly referencing the tutorial, I like to try and practice it one more time, by branching off an early commit and trying to accomplish everything I learned without referencing the source.

- If I want to explore Unreal's experience with some new module or topic a tutorial exposed me to, I may work on some expansions to the tutorial content (see below).

- After I have wrapped up a project, I add my learnings, questions, answers, expansions, and inferences in each project's readme, before merging it all back to `master`. Special annotations in my notes:
    - [xyz ? abc] means i am not sure why/how/what xyz, but abc is my guess
    - [xyz !! abc] means abc is a discovery that answers xyz

## Expansions

I have three classes of expansions I try to do, that won't be covered by the tutorials listed below.

- Simple improvements to the game feel, styling, or algorithmic structure of what the tutorial covered, usually within Blueprint (BP)
- Migration of complex and unreadable BP graphs into C++ functions, and then refactoring the BP to invoke the C++. This improves my understanding of the engine code API, and intuition for the relationship between C++ & BP.
- Integration of newly learned concepts into a prior more complex project, to see how to navigate building functionality around an existing codebase.

# Tutorials

These are tutorials I have previewed before starting to work on them. My goal is ordering these is to build out my understanding in the way that let's me get started working on my own game as soon as possible, roughly in this order:

- Understand the shortest path to accomplishing the basics: UI, controls, asset pipeline and tying them together in a simple but specific game (constraints simplify the learning space)
- Understand how to implement certain core game functionality with game-agnostic principles (save/load, pause menu, modify controls)
- Understand implementations of common game dev paradigms (object pools, broadcasters, etc)


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

### tutorial3: Save & Load game
- [Ali's Save & Load guide](https://www.youtube.com/watch?v=H6rqJbwjRIk)


## Planned
### tutorial4: Object pools
- [Ali's ObjectPool pattern guide](https://www.youtube.com/watch?v=f797l7YTcgc)

### Expansion1: Remake Asteroids with tutorial0-4 learnings
- a 2D pause UI
- save/load functionality
- close full game UX flow*
- improve gameplay feedback*
- bullets and asteroids from an objectpool

### tutorial5: Observer pattern
- [Ali's Observer pattern guide](https://www.youtube.com/watch?v=YFtLd-bKl-U)

### tutorial6: Advanced audio management guide
- [still evaluating a good guide]

### Replay system
- [still looking for a good tutorial]


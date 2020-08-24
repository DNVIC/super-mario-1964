# Super Mario 1964

Romhack of the game to (try) to make it black and white. 
Changed the textures using the PNG to RGBA converter and changed the vertex colors and lights using a script.
Fog done mainly manually, as fog is strange and acts weird.
Requires a copy of the US version of Super Mario 64 to build.

oh yeah its console compatible if you're into that.

## Known problems:
#### 1: The game looks weird in some places (like star doors for example)
Reason: Vertex colors. Averaging vertex colors causes stuff to look weird in some places. However, if I dont average vertex colors, some other places look weird because there is color.
#### 2: HMC and DDD entrances look weird (but in a different way)
Reason: I have no idea.
#### 3: Mario face is in color and only appears after save & quit or game over
Reason: Goddard is a completely different thing from the rest of the game and I really dont feel like changing it.

# What the Patch Does
✅Uses raw mouse input while on the ground, when aiming / not aiming.

✅Removes the vertical camera auto centering that happens when walking for about 3 seconds without moving the camera, or in other situations such as when walking on stairs.

✅Uses raw mouse input in zero gravity, when aiming / not aiming.

✅Uses raw mouse input when climbing ladders.

✅While inside the SK1P fast travel shuttle: It makes the camera movement more responsive; removes the automatic camera centering; very small mouse movements are not ignored.

# What the Patch Doesn’t Do
❌At the start of the game, there is a section where Tim is sliding on snow, and has to shoot a jet engine that is on fire. This section does not use raw mouse input. This section only lasts for a couple of seconds, so I may not fix it, but I would like to.

❌At the start of the game, as soon as the player gains control of Isaac, there is a tutorial to pick up a health pack. During this tutorial the camera does not use raw mouse input. Fixing this is pretty much pointless.

❓There may be some other relevant cases that require raw mouse input, which I have not yet discovered. The patch will be updated if more relevant cases are found.

# For Players
To use the patch, copy the "dinput8.dll" (see Releases) into the folder where the "deadspace3.exe" is located (e.g., E:\EALibrary\Dead Space 3). The game will automatically use the DLL.

To remove the patch, simply remove, rename, or delete the "dinput8.dll".

# For Developers
This is a Visual Studio DLL project; it should be possible to simply open and compile it.
It may require to initialize the minhook submodule first, using "git submodule update --init".
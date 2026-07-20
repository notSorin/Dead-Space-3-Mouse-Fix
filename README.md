# What the Patch Does
✅Uses raw mouse input while on the ground, when aiming / not aiming.

✅Removes the vertical camera auto centering that happens when walking for about 3 seconds without moving the camera, or in other situations such as when walking on stairs.

✅Uses raw mouse input in zero gravity, when aiming / not aiming.

✅Uses raw mouse input when manning the cannon in chapter 6.

✅Uses raw mouse input for the reticle movement while piloting the ship in chapter 7.

✅There is a specific type of camera that is used in certain situations such as when sitting inside the SK1P fast travel shuttle, or when fixing the ship that is piloted in chapter 7. This type of camera now uses raw mouse input, its automatic centering has been removed, and very small mouse movements are not ignored.

✅Camera movement when climbing ladders has been improved, although it does not feel entirely right. I may tweak it further.

# What the Patch Doesn’t Do
❌At the start of the game, there is a section where Tim is sliding on snow, and has to shoot a jet engine that is on fire. This section does not use raw mouse input. This section only lasts for a couple of seconds, so I may not fix it, but I would like to.

❌At the start of the game, as soon as the player gains control of Isaac, there is a tutorial to pick up a health pack. During this tutorial the camera does not use raw mouse input. Fixing this is pretty much pointless.

❓There may be some other relevant cases that require raw mouse input, which I have not yet discovered. The patch will be updated if more relevant cases are found.

# For Players
To use the patch, copy the "dinput8.dll" into the folder where the "deadspace3.exe" is located (e.g., E:\EALibrary\Dead Space 3). The game will automatically use the DLL when launched.

The "dinput8.dll" can be found under Releases, and the latest one is recommended as it contains the most fixes.

To remove the patch, simply move, rename, or delete the "dinput8.dll".

# For Developers
This is a Visual Studio DLL project; it should be possible to simply open the solution file and build it.
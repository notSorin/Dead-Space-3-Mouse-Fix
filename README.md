# What the Patch Does
The patch applies raw mouse input in the following cases:

✅While on the ground, when aiming / not aiming (Also, camera auto centering has been disabled.)

✅In zero gravity, when aiming / not aiming

✅When Tim is sliding on snow at the beginning of the game

✅When manning the cannon in chapter 6

✅When piloting the ship in chapter 7, and using the ship's reticle to shoot mines

✅In certain situations such as when sitting inside the SK1P fast travel shuttle, or when repairing the ship that is piloted in chapter 7

✅When climbing ladders (This one does not feel entirely raw. I may tweak it further.)

The cases mentioned above were all that I could find that can use raw mouse input, but there may be some which I have not yet discovered. The patch will be updated if more relevant cases are found.

# For Players
To use the patch, copy the "dinput8.dll" into the folder where the "deadspace3.exe" is located (e.g., E:\EALibrary\Dead Space 3). The game will automatically use the DLL when launched.

The "dinput8.dll" can be found under Releases, and the latest one is recommended as it contains the most fixes.

To remove the patch, simply move, rename, or delete the "dinput8.dll".

# For Developers
This is a Visual Studio DLL project; simply open and build it.
#pragma once

#include <cstdio>
#include <intrin.h>
#include <MinHook.h>
#include "config.h"

const uintptr_t GAME_BASE_ADDRESS = (uintptr_t)GetModuleHandle(NULL);

constexpr float DEGREES_TO_RADIANS = 0.01745329f;
float const * const _DAT_00ec8b70 = (float *)(GAME_BASE_ADDRESS + 0xac8b70);
float const * const _DAT_00ec8b74 = (float *)(GAME_BASE_ADDRESS + 0xac8b74);
BYTE const * const DAT_01229172 = (BYTE *)(GAME_BASE_ADDRESS + 0xe29172);

typedef void (__thiscall * HandleCameraMovementOnGroundNotAiming)(void * _this, float param_1);
HandleCameraMovementOnGroundNotAiming HandleCameraMovementOnGroundNotAiming_Original = nullptr;
const HandleCameraMovementOnGroundNotAiming HandleCameraMovementOnGroundNotAiming_Address = (HandleCameraMovementOnGroundNotAiming)(GAME_BASE_ADDRESS + 0x33f310);

//typedef void (__thiscall * HandleCameraMovementOnGroundAiming)(void * _this, int param_1, float frameDelta);
//HandleCameraMovementOnGroundAiming HandleCameraMovementOnGroundAiming_Original = nullptr;
//const HandleCameraMovementOnGroundAiming HandleCameraMovementOnGroundAiming_Address = (HandleCameraMovementOnGroundAiming)(GAME_BASE_ADDRESS + 0x152030);

typedef void (__thiscall * ReadMouseValuesOnGroundAiming)(int * _this, float param_1, float * param_2, float * param_3);
ReadMouseValuesOnGroundAiming ReadMouseValuesOnGroundAiming_Original = nullptr;
const ReadMouseValuesOnGroundAiming ReadMouseValuesOnGroundAiming_Address = (ReadMouseValuesOnGroundAiming)(GAME_BASE_ADDRESS + 0x149ea0);
const uintptr_t ReadMouseValuesOnGroundAiming_Return_In_HandleCameraMovementOnGroundAiming = (GAME_BASE_ADDRESS + 0x1520a8);

typedef double (__fastcall * ObtainValueForReadMouseValuesOnGroundAiming1)(float * param_1, int param_2, float frameDelta, float param_4, float mouseValue, float param_6);
ObtainValueForReadMouseValuesOnGroundAiming1 ObtainValueForReadMouseValuesOnGroundAiming1_Original = nullptr;
const ObtainValueForReadMouseValuesOnGroundAiming1 ObtainValueForReadMouseValuesOnGroundAiming1_Address = (ObtainValueForReadMouseValuesOnGroundAiming1)(GAME_BASE_ADDRESS + 0x1438a0);

typedef double (__fastcall * ObtainValueForReadMouseValuesOnGroundAiming2)(int param_1);
ObtainValueForReadMouseValuesOnGroundAiming2 ObtainValueForReadMouseValuesOnGroundAiming2_Original = nullptr;
const ObtainValueForReadMouseValuesOnGroundAiming2 ObtainValueForReadMouseValuesOnGroundAiming2_Address = (ObtainValueForReadMouseValuesOnGroundAiming2)(GAME_BASE_ADDRESS + 0x3af60);

typedef double (__fastcall * ObtainValueForReadMouseValuesOnGroundAiming3)(int param_1);
ObtainValueForReadMouseValuesOnGroundAiming3 ObtainValueForReadMouseValuesOnGroundAiming3_Original = nullptr;
const ObtainValueForReadMouseValuesOnGroundAiming3 ObtainValueForReadMouseValuesOnGroundAiming3_Address = (ObtainValueForReadMouseValuesOnGroundAiming3)(GAME_BASE_ADDRESS + 0x3af20);

typedef void (__thiscall * ReadValuesFromMouse)(int _this, int param_1, int param_2, float * x, float * y, char param_5, char param_6, float param_7, float param_8, float param_9);
ReadValuesFromMouse ReadValuesFromMouse_Original = nullptr;
const ReadValuesFromMouse ReadValuesFromMouse_Address = (ReadValuesFromMouse)(GAME_BASE_ADDRESS + 0x6bc510);
const uintptr_t ReadValuesFromMouse_Return_In_HandleCameraMovementOnGroundNotAiming = (GAME_BASE_ADDRESS + 0x33f3ed);
const uintptr_t ReadValuesFromMouse_Return_In_ReadMouseValuesOnGroundAiming = (GAME_BASE_ADDRESS + 0x149f17);

typedef unsigned int (__thiscall * ClampValuesToAnalogStick)(int * param_1_00, float param_1, float * param_2, float * param_3);
ClampValuesToAnalogStick ClampValuesToAnalogStick_Original = nullptr;
const ClampValuesToAnalogStick ClampValuesToAnalogStick_Address = (ClampValuesToAnalogStick)(GAME_BASE_ADDRESS + 0xd820);
const uintptr_t ClampValuesToAnalogStick_Return_In_HandleCameraMovementOnGroundNotAiming = (GAME_BASE_ADDRESS + 0x33f407);
const uintptr_t ClampValuesToAnalogStick_Return_In_ReadMouseValuesOnGroundAiming = (GAME_BASE_ADDRESS + 0x149f2e);
const uintptr_t ClampValuesToAnalogStick_Return_In_ReadMouseValuesForZeroG = (GAME_BASE_ADDRESS + 0x14f806);
const uintptr_t ClampValuesToAnalogStick_Return_In_HandleCameraMovementOnLadder = (GAME_BASE_ADDRESS + 0x34e6a5);
const uintptr_t ClampValuesToAnalogStick_Return_In_HandleCameraMovementOnCannon = 0x67a4ba;
const uintptr_t ClampValuesToAnalogStick_Return_In_ReadMouseValuesForPilotingShip = 0x67932c;

typedef float (__thiscall * ObtainValueForOnGroundNotAiming1)(int param_1_00, char param_1);
ObtainValueForOnGroundNotAiming1 ObtainValueForOnGroundNotAiming1_Original = nullptr;
const ObtainValueForOnGroundNotAiming1 ObtainValueForOnGroundNotAiming1_Address = (ObtainValueForOnGroundNotAiming1)(GAME_BASE_ADDRESS + 0x2ed00);
const uintptr_t ObtainValueForOnGroundNotAiming1_Return_In_HandleCameraMovementOnGroundNotAiming = (GAME_BASE_ADDRESS + 0x33f756);

typedef float (__thiscall * ObtainValueForOnGroundNotAiming2)(int param_1_00, char param_1);
ObtainValueForOnGroundNotAiming2 ObtainValueForOnGroundNotAiming2_Original = nullptr;
const ObtainValueForOnGroundNotAiming2 ObtainValueForOnGroundNotAiming2_Address = (ObtainValueForOnGroundNotAiming2)(GAME_BASE_ADDRESS + 0x2ed80);
const uintptr_t ObtainValueForOnGroundNotAiming2_Return_In_HandleCameraMovementOnGroundNotAiming = (GAME_BASE_ADDRESS + 0x33f763);

typedef float (__thiscall * ObtainValueForOnGroundNotAiming3)(int param_1_00, char param_1);
ObtainValueForOnGroundNotAiming3 ObtainValueForOnGroundNotAiming3_Original = nullptr;
const ObtainValueForOnGroundNotAiming3 ObtainValueForOnGroundNotAiming3_Address = (ObtainValueForOnGroundNotAiming3)(GAME_BASE_ADDRESS + 0x2ee00);
const uintptr_t ObtainValueForOnGroundNotAiming3_Return_In_HandleCameraMovementOnGroundNotAiming = (GAME_BASE_ADDRESS + 0x33f76a);

typedef float (__thiscall * ObtainValueForOnGroundNotAiming4)(int param_1_00, char param_1);
ObtainValueForOnGroundNotAiming4 ObtainValueForOnGroundNotAiming4_Original = nullptr;
const ObtainValueForOnGroundNotAiming4 ObtainValueForOnGroundNotAiming4_Address = (ObtainValueForOnGroundNotAiming4)(GAME_BASE_ADDRESS + 0x2ee80);
const uintptr_t ObtainValueForOnGroundNotAiming4_Return_In_HandleCameraMovementOnGroundNotAiming = (GAME_BASE_ADDRESS + 0x33f779);

typedef void (__thiscall * FUN_009e0e60)(void * _this, char * str);
FUN_009e0e60 FUN_009e0e60Original = nullptr;
const FUN_009e0e60 FUN_009e0e60Address = (FUN_009e0e60)(GAME_BASE_ADDRESS + 0x5e0e60);

typedef float (__fastcall * ObtainValueForAiming1)(int * param_1);
ObtainValueForAiming1 ObtainValueForAiming1_Original = nullptr;
const ObtainValueForAiming1 ObtainValueForAiming1_Address = (ObtainValueForAiming1)(GAME_BASE_ADDRESS + 0x16d150);
const uintptr_t ObtainValueForAiming1_Return_In_HandleCameraMovementOnGroundNotAiming = (GAME_BASE_ADDRESS + 0x33f7c9);
const uintptr_t ObtainValueForAiming1_Return_In_HandleCameraMovementInZeroG = (GAME_BASE_ADDRESS + 0x14fb67);

typedef void (__fastcall * FUN_005547c0)(int _this);
FUN_005547c0 FUN_005547c0Original = nullptr;
const FUN_005547c0 FUN_005547c0Address = (FUN_005547c0)(GAME_BASE_ADDRESS + 0x1547c0);

typedef void (__thiscall * UpdateViewAngles)(void *_this, float y, float x, float param_3, int param_4);
UpdateViewAngles UpdateViewAngles_Original = nullptr;
const UpdateViewAngles UpdateViewAngles_Address = (UpdateViewAngles)(GAME_BASE_ADDRESS + 0x321bd0);

typedef void (__thiscall * ReadMouseValuesForZeroG)(void * _this, float param_1);
ReadMouseValuesForZeroG ReadMouseValuesForZeroG_Original = nullptr;
const ReadMouseValuesForZeroG ReadMouseValuesForZeroG_Address = (ReadMouseValuesForZeroG)(GAME_BASE_ADDRESS + 0x14f740);

typedef void (__thiscall * HandleCameraMovementInZeroG)(void * _this, float frameDelta);
HandleCameraMovementInZeroG HandleCameraMovementInZeroG_Original = nullptr;
const HandleCameraMovementInZeroG HandleCameraMovementInZeroG_Address = (HandleCameraMovementInZeroG)(GAME_BASE_ADDRESS + 0x14f910);

typedef void (__cdecl * ModifyMouseValuesZeroG)(float * x, float * y, void * param_3);
ModifyMouseValuesZeroG ModifyMouseValuesZeroG_Original = nullptr;
const ModifyMouseValuesZeroG ModifyMouseValuesZeroG_Address = (ModifyMouseValuesZeroG)(GAME_BASE_ADDRESS + 0x14a7e0);
const uintptr_t ModifyMouseValuesZeroG_Return_In_ReadMouseValuesForZeroG = (GAME_BASE_ADDRESS + 0x14f845);

typedef double (__fastcall * ObtainValueForZeroGHorizontalMovement)(int param_1);
ObtainValueForZeroGHorizontalMovement ObtainValueForZeroGHorizontalMovement_Original = nullptr;
const ObtainValueForZeroGHorizontalMovement ObtainValueForZeroGHorizontalMovement_Address = (ObtainValueForZeroGHorizontalMovement)(GAME_BASE_ADDRESS + 0x2ef60);
const uintptr_t ObtainValueForZeroGHorizontalMovement_Return_In_HandleCameraMovementInZeroG = (GAME_BASE_ADDRESS + 0x14fb86);

typedef double (__fastcall * ObtainValueForZeroGVerticalMovement)(int param_1);
ObtainValueForZeroGVerticalMovement ObtainValueForZeroGVerticalMovement_Original = nullptr;
const ObtainValueForZeroGVerticalMovement ObtainValueForZeroGVerticalMovement_Address = (ObtainValueForZeroGVerticalMovement)(GAME_BASE_ADDRESS + 0x2ef30);
const uintptr_t ObtainValueForZeroGVerticalMovement_Return_In_HandleCameraMovementInZeroG = (GAME_BASE_ADDRESS + 0x14fb93);

typedef double (__cdecl * ClampValue)(float param_1, int *param_2);
ClampValue ClampValue_Original = nullptr;
const ClampValue ClampValue_Address = (ClampValue)(GAME_BASE_ADDRESS + 0x15fa80);
const uintptr_t ClampValue_Return_In_HandleCameraMovementInZeroG_For_X = (GAME_BASE_ADDRESS + 0x14fa55);
const uintptr_t ClampValue_Return_In_HandleCameraMovementInZeroG_For_Y = (GAME_BASE_ADDRESS + 0x14fa6c);
const uintptr_t ClampValue_Return_In_HandleReticleMovementWhenPilotingShip_For_X = 0x67962f;
const uintptr_t ClampValue_Return_In_HandleReticleMovementWhenPilotingShip_For_Y = 0x67965b;

typedef int (__thiscall * FUN_00aa22d0)(void * _this, int param_1);
FUN_00aa22d0 FUN_00aa22d0_Original = nullptr;
const FUN_00aa22d0 FUN_00aa22d0_Address = (FUN_00aa22d0)(GAME_BASE_ADDRESS + 0x6a22d0);

typedef void (__thiscall * HandleCameraMovementOnLadder)(void *, float);
HandleCameraMovementOnLadder HandleCameraMovementOnLadder_Original = nullptr;
const HandleCameraMovementOnLadder HandleCameraMovementOnLadder_Address = (HandleCameraMovementOnLadder)(GAME_BASE_ADDRESS + 0x34e480);
const uintptr_t ReadValuesFromMouse_Return_In_HandleCameraMovementOnLadder = (GAME_BASE_ADDRESS + 0x34e68b);
const uintptr_t ReadValuesFromMouse_Return_In_HandleCameraMovementOnCannon = 0x67a4f9;
//const uintptr_t ReadValuesFromMouse_Return_In_ReadMouseValuesForPilotingShip_Ship_Movement = 0x67929b;
const uintptr_t ReadValuesFromMouse_Return_In_ReadMouseValuesForPilotingShip_Reticle_Movement = 0x679318;
const uintptr_t ReadValuesFromMouse_Return_In_HandleCameraMovementInSK1P = 0x64fd91;

typedef double (__cdecl * ClamperFunction)(float value, float min, float max);
ClamperFunction ClamperFunction_Original = nullptr;
const ClamperFunction ClamperFunction_Address = (ClamperFunction)(GAME_BASE_ADDRESS + 0x1040);
const uintptr_t ClamperFunction_Return_In_HandleCameraMovementOnLadder_For_X = (GAME_BASE_ADDRESS + 0x34e7a1);
const uintptr_t ClamperFunction_Return_In_HandleCameraMovementOnLadder_For_Y = (GAME_BASE_ADDRESS + 0x34e7f7);

typedef void (__thiscall * HandleCameraMovementInSK1P)(void * _this, float param_1, float param_2, int unused, int param_4);
HandleCameraMovementInSK1P HandleCameraMovementInSK1P_Original = nullptr;
const HandleCameraMovementInSK1P HandleCameraMovementInSK1P_Address = (HandleCameraMovementInSK1P)(GAME_BASE_ADDRESS + 0x24fce0);

typedef void (__thiscall * ReadMouseValuesForHandleCameraMovementOnCannon)(void * _this, float frameDelta);
ReadMouseValuesForHandleCameraMovementOnCannon ReadMouseValuesForHandleCameraMovementOnCannon_Original = nullptr;
const ReadMouseValuesForHandleCameraMovementOnCannon ReadMouseValuesForHandleCameraMovementOnCannon_Address = (ReadMouseValuesForHandleCameraMovementOnCannon)0x67a420;

typedef void (__thiscall * HandleCameraMovementOnCannon)(void * _this, float frameDelta);
HandleCameraMovementOnCannon HandleCameraMovementOnCannon_Original = nullptr;
const HandleCameraMovementOnCannon HandleCameraMovementOnCannon_Address = (HandleCameraMovementOnCannon)0x6a57b0;

//typedef void (__thiscall * ReadMouseValuesForPilotingShip)(void * _this, int param_1, float param_2, unsigned int param_3, int * param_4, int param_5);
//ReadMouseValuesForPilotingShip ReadMouseValuesForPilotingShip_Original = nullptr;
//const ReadMouseValuesForPilotingShip ReadMouseValuesForPilotingShip_Address = (ReadMouseValuesForPilotingShip)0x679250;

//Returns some value that is used to calculate the horizontal view angle on ground when not aiming,
//and also in zero gravity.
float __fastcall ObtainValueForAiming1_Wrapper(int * param_1)
{
   uintptr_t ret = reinterpret_cast<uintptr_t>(_ReturnAddress());

   if(ret == ObtainValueForAiming1_Return_In_HandleCameraMovementOnGroundNotAiming || ret == ObtainValueForAiming1_Return_In_HandleCameraMovementInZeroG)
   {
      return 0.f; //Return 0 so that the operation where it is used has a final value of 1.
   }

   return ObtainValueForAiming1_Original(param_1);
}

//This function handles oxygen time in vacuum.
//Not relevant for the mouse fix.
/*void __fastcall FUN_005547c0Wrapper(int _this)
{
   float inOxygen = *(float *)(_this + 0x60);

   FUN_005547c0Original(_this);

   *(float *)(_this + 0x60) = inOxygen;
}*/

//It somehow alters the raw value that was read from the mouse.
double __fastcall ObtainValueForReadMouseValuesOnGroundAiming1_Wrapper(float * param_1, int param_2, float frameDelta, float param_4, float mouseValue, float param_6)
{
   return mouseValue; //Just return the same value that was read from the mouse.
}

//Returns some value that is used in a multiplication to calculate the horizontal angle when aiming.
double __fastcall ObtainValueForReadMouseValuesOnGroundAiming2_Wrapper(int param_1)
{
   return 1.0; //I believe the original one returns 1 anyway...
}

//Returns some value that is used in a multiplication to calculate the vertical angle when aiming.
double __fastcall ObtainValueForReadMouseValuesOnGroundAiming3_Wrapper(int param_1)
{
   return 1.0; //I believe the original one returns 1 anyway...
}

struct Hooks
{
   //This function handles camera movement on ground when not aiming.
   static void __thiscall HandleCameraMovementOnGroundNotAiming_Wrapper(void * _this, float frameDelta)
   {
      //The result of (fStack_4c * _DAT_012a9aa8 * *(float *)((int)pvVar1 + 0x70)) (which seems to always be 0),
      //is always added to the new horizontal view angle.
      //This commented code makes sure that the result of that multiplication is always 0 and the new angle,
      //remains unchanged, but since fStack_4c seems to always be 0, I am leaving it commented as it makes no difference.
      /*if (*(int *)((int)_this + 0x7c) != 0)
      {
         void * this_00 = (void *)(*(int *)((int)_this + 0x7c) + -0x10);

         if(this_00 != 0)
         {
            int iVar8 = FUN_00aa22d0_Original(this_00, (unsigned int)*DAT_01229172);

            if(iVar8 != 0)
            {
               iVar8 = *(int *)(iVar8 + 0x220);

               if(iVar8 != 0)
               {
                  //float fStack_4c = *(float *)(iVar8 + 0x1c4);

                  //printf("%f\n", fStack_4c);
                  *(float *)(iVar8 + 0x1c4) = 0.f;
               }
            }
         }
      }*/


      //The following variable is used in a multiplication when calculating the new horizontal and vertical view angles.
      //Set it to 1 so it has no effect on the new view angles.
      *(float *)((int)_this + 0x70) = 1.f;

      //The following variable is used in a multiplication when calculating the new horizontal view angle.
      //It can be set to DEGREES_TO_RADIANS in order to convert the mouse value to radians.
      *(float *)((int)_this + 0x150) = DEGREES_TO_RADIANS;

      //The following variable is used in a multiplication when calculating the new vertical view angle.
      //It can be set to DEGREES_TO_RADIANS in order to convert the mouse value to radians.
      *(float *)((int)_this + 0x158) = DEGREES_TO_RADIANS;

      if(!ds3Config::enableVerticalAutoCentering)
      {
         //These following variables are used in operations to automatically center the camera vertically.
         //Set them to 1 so the centering calculations have no effect when they take place.
         *(float *)((int)_this + 0x134) = 1.f;
         *(float *)((int)_this + 0x164) = 1.f;
      }

      HandleCameraMovementOnGroundNotAiming_Original(_this, frameDelta);

      return;
   }

   //This function handles the camera movement on ground when aiming.
   //It is not required to alter its logic.
   /*static void __thiscall HandleCameraMovementOnGroundAiming_Wrapper(void * _this, int param_1, float frameDelta)
   {
      HandleCameraMovementOnGroundAiming_Original(_this, param_1, frameDelta);
   }*/

   //This function reads mouse values on ground when aiming.
   static void __thiscall ReadMouseValuesOnGroundAiming_Wrapper(int * _this, float frameDelta, float * outX, float * outY)
   {
      uintptr_t ret = reinterpret_cast<uintptr_t>(_ReturnAddress());

      if(ret == ReadMouseValuesOnGroundAiming_Return_In_HandleCameraMovementOnGroundAiming)
      {
         //The following char is used to decide if clamping in range [-1, 1] should be applied
         //to the raw values read from the mouse. Set it to 1 so clamping does not happen.
         *(char *)((int)_this + 0x9c) = '\1';

         //Pass 1 as frame delta to have no impact on the values read.
         ReadMouseValuesOnGroundAiming_Original(_this, 1.f, outX, outY);

         return;
      }

      ReadMouseValuesOnGroundAiming_Original(_this, frameDelta, outX, outY);
   }

   //This function reads values from the mouse. It is called from many places in the game.
   //After a lot of trial and error, I found out that by passing param_5 = 0, and param_6 = 0,
   //it will return raw values from the mouse, instead of clamping them in range [-1, 1].
   static void __thiscall ReadValuesFromMouse_Wrapper(int _this, int param_1, int param_2, float * x, float * y, char param_5, char param_6, float param_7, float param_8, float param_9)
   {
      uintptr_t ret = reinterpret_cast<uintptr_t>(_ReturnAddress());

      if(
         ret == ReadValuesFromMouse_Return_In_HandleCameraMovementOnGroundNotAiming ||
         ret == ReadValuesFromMouse_Return_In_ReadMouseValuesOnGroundAiming ||
         ret == ReadValuesFromMouse_Return_In_HandleCameraMovementOnLadder)
      {
         ReadValuesFromMouse_Original(_this, param_1, param_2, x, y, 0, 0, param_7, param_8, param_9);

         return;
      }

      if(ret == ReadValuesFromMouse_Return_In_ReadMouseValuesForPilotingShip_Reticle_Movement)
      {
         ReadValuesFromMouse_Original(_this, param_1, param_2, x, y, 0, 0, param_7, param_8, param_9);

         //The raw mouse values are a bit too small to be used for the ship's reticle movement.
         //This is probably because the values from the mouse are used as pixel units, not to be
         //transformed into radians.
         //Scale them up for more responsive movement.
         *x = *x * 2.5f;
         *y = *y * 2.5f;

         return;
      }

      if(ret == ReadValuesFromMouse_Return_In_HandleCameraMovementInSK1P)
      {
         //Internally, it is already called with 0,0, but make sure of it regardless.
         ReadValuesFromMouse_Original(_this, param_1, param_2, x, y, 0, 0, param_7, param_8, param_9);

         /*
         The logic when moving the camera inside the SK1P shuttle (and also in other
         situations such as when fixing the ship when piloting it in chapter 7), is as follows:
         1. Read values from the mouse.
         2. Add the values read from the mouse to an internal 2D vector (which is
            subsequently used to determine how far away from the center of the view
            the camera will go.) (The vector is located at [this + 0x3c] and [this + 0x40].)
         3. If necessary, scale the vector to length 1.0 if its length is greater than 1.0.
         4. Multiply the vector by some view angle bounds, in order to calculate the new view's angles.
            The view's angle bounds depend on the scene for which this method is used, and are
            located at [this + 0x10], [this + 0x14], [this + 0x18], [this + 0x1c].

         Because the values read from the mouse are added to a 2D vector whose length is supposed
         to be at most 1.0, the raw values from the mouse will quickly make this vector reach
         length 1.0 even with small movements, because raw mouse values are commonly greater that 1.0.
         To avoid this issue, scale the raw mouse values down, significantly.
         The value of DEGREES_TO_RADIANS can be used for this. It is not a must to use
         DEGREES_TO_RADIANS; what matters is that they are scaled down significantly to avoid
         too quick camera movement (which is not required in these situations anyway).
         */
         *x = *x * DEGREES_TO_RADIANS;
         *y = *y * DEGREES_TO_RADIANS;

         return;
      }

      ReadValuesFromMouse_Original(_this, param_1, param_2, x, y, param_5, param_6, param_7, param_8, param_9);
   }

   //This function clamps the mouse values it receives in range of about [-2.6, 2.6].
   //I believe it is used to simulate camera movement using an analog stick.
   static unsigned int __thiscall ClampValuesToAnalogStick_Wrapper(int * self, float dt, float * x, float * y)
   {
      uintptr_t ret = reinterpret_cast<uintptr_t>(_ReturnAddress());

      //Simply don't do anything in here in the cases where this function is called
      //from within specific functions that handle camera movement.
      if(ret == ClampValuesToAnalogStick_Return_In_HandleCameraMovementOnGroundNotAiming ||
         ret == ClampValuesToAnalogStick_Return_In_ReadMouseValuesOnGroundAiming ||
         ret == ClampValuesToAnalogStick_Return_In_ReadMouseValuesForZeroG ||
         ret == ClampValuesToAnalogStick_Return_In_HandleCameraMovementOnLadder ||
         ret == ClampValuesToAnalogStick_Return_In_HandleCameraMovementOnCannon ||
         ret == ClampValuesToAnalogStick_Return_In_ReadMouseValuesForPilotingShip)
      {
         return 0;
      }

      return ClampValuesToAnalogStick_Original(self, dt, x, y);
   }

   //This function returns some value that is used in a multiplication to alter the X value read from the mouse.
   static float __thiscall ObtainValueForOnGroundNotAiming1_Wrapper(int param_1_00, char param_1)
   {
      uintptr_t ret = reinterpret_cast<uintptr_t>(_ReturnAddress());

      if(ret == ObtainValueForOnGroundNotAiming1_Return_In_HandleCameraMovementOnGroundNotAiming)
      {
         return 1.f; //Return 1 so that it does not alter the value read from the mouse.
      }

      return ObtainValueForOnGroundNotAiming1_Original(param_1_00, param_1);
   }

   //This function returns some value that is used in a multiplication to alter the X value read from the mouse.
   static float __thiscall ObtainValueForOnGroundNotAiming2_Wrapper(int param_1_00, char param_1)
   {
      uintptr_t ret = reinterpret_cast<uintptr_t>(_ReturnAddress());

      if(ret == ObtainValueForOnGroundNotAiming2_Return_In_HandleCameraMovementOnGroundNotAiming)
      {
         return 1.f; //Return 1 so that it does not alter the value read from the mouse.
      }

      return ObtainValueForOnGroundNotAiming2_Original(param_1_00, param_1);
   }

   //This function returns some value that is used in a multiplication to alter the X value read from the mouse.
   static float __thiscall ObtainValueForOnGroundNotAiming3_Wrapper(int param_1_00, char param_1)
   {
      uintptr_t ret = reinterpret_cast<uintptr_t>(_ReturnAddress());

      if(ret == ObtainValueForOnGroundNotAiming3_Return_In_HandleCameraMovementOnGroundNotAiming)
      {
         return 1.f; //Return 1 so that it does not alter the value read from the mouse.
      }

      return ObtainValueForOnGroundNotAiming3_Original(param_1_00, param_1);
   }

   //This function returns some value that is used in a multiplication to alter the Y value read from the mouse.
   static float __thiscall ObtainValueForOnGroundNotAiming4_Wrapper(int param_1_00, char param_1)
   {
      uintptr_t ret = reinterpret_cast<uintptr_t>(_ReturnAddress());

      if(ret == ObtainValueForOnGroundNotAiming4_Return_In_HandleCameraMovementOnGroundNotAiming)
      {
         return 1.f; //Return 1 so that it does not alter the value read from the mouse.
      }

      return ObtainValueForOnGroundNotAiming4_Original(param_1_00, param_1);
   }

   //This function writes text to different UI elements such as remaining oxygen, ammo, or item names.
   //Not relevant for the mouse fix.
   /*static void __thiscall FUN_009e0e60Wrapper(void * _this, char * str)
   {
      char txt[6] = "hello";
      txt[5] = '\0';

      FUN_009e0e60Original(_this, txt);
   }*/

   //The function that sets the final view angles.
   //It can be used to easily trace at which points the view angles are updated,
   //but I realized that not every situation uses it. For instance, it is not
   //used for camera movement on ladders.
   static void __thiscall UpdateViewAngles_Wrapper(void *_this,float y,float x,float param_3,int param_4)
   {
      uintptr_t ret = reinterpret_cast<uintptr_t>(_ReturnAddress());

      printf("Returning to %x\n", ret);

      UpdateViewAngles_Original(_this, y, x, param_3, param_4);
   }

   //Obtains mouse values in zero gravity into (_this + 0x8c) and (_this + 0x90), which are later used in HandleCameraMovementInZeroG.
   //It also seems to obtain values that are used for Isaac's movement in zero gravity.
   //The logic within this function is correct, therefore there is no need to hook nor alter it.
   static void __thiscall ReadMouseValuesForZeroG_Wrapper(void * _this, float frameDelta)
   {
      ReadMouseValuesForZeroG_Original(_this, frameDelta);
   }

   //This is the function that calculates and sets the new angles in zero gravity,
   //based on what was already read from the mouse in ReadMouseValuesForZeroG.
   static void __thiscall HandleCameraMovementInZeroG_Wrapper(void * _this, float frameDelta)
   {
      //This logic to obtain fVar12 is the same as in the original HandleCameraMovementInZeroG.
      //fVar12 is needed here in order to calculate its inverse, so it has no
      //effect on the calculation of the final view angles.
      float fVar12 = *_DAT_00ec8b70;
      int * iVar1 = (int *)(*(int *)((int)_this + 0x60));

      if ((*(unsigned int *)(iVar1 + 0x344) >> 0x11 & 1) != 0)
      {
         fVar12 = *_DAT_00ec8b74;
      }

      //(*(float *)((int)_this + 0x94) + 1.0) is used in the final angle calculations.
      //Set *(float *)((int)_this + 0x94) to 0 so the actual value used in the multiplication is 1.0.
      *(float *)((int)_this + 0x94) = 0.f;

      //Since the frame delta is used to calculate the final angles anyway, use it as
      //the inverse of fVar12 to undo the effect of both the frame delta and fVar12.
      frameDelta = 1.f / fVar12;

      HandleCameraMovementInZeroG_Original(_this, frameDelta);
   }

   //This function is required to obtain a value in HandleCameraMovementOnGroundNotAiming_Wrapper
   /*static int __thiscall FUN_00aa22d0_Wrapper(void * _this, int param_1)
   {
      return FUN_00aa22d0_Original(_this, param_1);
   }*/

   //This function handles camera movement when climbing ladders.
   static void __thiscall HandleCameraMovementOnLadder_Wrapper(void * _this, float frameDelta)
   {
      //This local_30 is used to alter the values read from the mouse,
      //so use it to invert its effect.
      float local_30 = frameDelta <= 0.f ? 1.f : frameDelta * 30.f;

      //0x16c seems to always be 0.061087 (which may represent 3.5 degrees in radians)
      //0x170 seems to always be 0.061087
      //Regardless of what they represent, they can be used to undo the impact that
      //the frameDelta has on the new angles calculated in here, and at the same time
      //convert the values read from the mouse to radians.
      *(float *)((int)_this + 0x16c) = DEGREES_TO_RADIANS / local_30;
      *(float *)((int)_this + 0x170) = DEGREES_TO_RADIANS / local_30;

      HandleCameraMovementOnLadder_Original(_this, frameDelta);
   }

   //This function handles the camera movement while inside the SK1P shuttle,
   //but also in the main menu where you can move the camera around by moving
   //the cursor to the edges of the screen, and in chapter 7 when fixing the ship.
   static void __thiscall HandleCameraMovementInSK1P_Wrapper(void * _this, float frameDelta, float param_2, int unused, int param_4)
   {
      //Set these values to 0 to use only what was read from the mouse, and avoid unnecessary
      //modifications to the final view angles.
      *(float *)((int)_this + 0x2c) = 0.f;
      *(float *)((int)_this + 0x30) = 0.f;

      //Pass 1/30 as frameDelta so an internal variable becomes 1, and avoid unnecessary
      //modifications to the final view angles.
      //I believe that param_2 is always 1.0 (which is correct for the view's final angles
      //calculations), but I am forcing it to 1.0 to make sure.
      HandleCameraMovementInSK1P_Original(_this, 1.f / 30.f, 1.f, unused, param_4);
   }

   //Reads values from the mouse while using the cannon in chapter 6.
   static void __thiscall ReadMouseValuesForHandleCameraMovementOnCannon_Wrapper(void * _this, float frameDelta)
   {
      //The fix here involves passing 0 as the frame delta when calling
      //ReadMouseValuesForHandleCameraMovementOnCannon_Original, so that
      //the frame rate has no impact on the mouse values.
      //But a side effect of this is that when mouse movement stops, the mouse
      //values from the previous frame will be used in the current frame,
      //which causes continuous camera movement when no movement is read from the mouse.
      //To fix this, set the mouse values to 0 before reading from it.
      *(float *)((int)_this + 0x130) = 0.f;
      *(float *)((int)_this + 0x134) = 0.f;

      ReadMouseValuesForHandleCameraMovementOnCannon_Original(_this, 0.f);
   }

   //Handles camera movement while using the cannon in chapter 6.
   static void __thiscall HandleCameraMovementOnCannon_Wrapper(void * _this, float frameDelta)
   {
      //The calculation of the new view angles is dependent on the frame rate
      //and a maximum of 120 degrees of movement per second. Apply the
      //inverse of this, so the final view angles are calculated using only the
      //values read from the mouse.
      float inverse = 1.f / (frameDelta * 120.f);

      //Place the inverse at these 2 addresses which are used to calculate the final view angles.
      *(float *)(*(int *)((*(int *)((int)_this + 0x78) - 0x10) + 0xc) + 0x184) = inverse;
      *(float *)(*(int *)((*(int *)((int)_this + 0x78) - 0x10) + 0xc) + 0x180) = inverse;

      HandleCameraMovementOnCannon_Original(_this, frameDelta);
   }

   //Reads values from the mouse to be used while piloting the ship in chapter 7.
   //It is not required to change its behavior.
   /*static void __thiscall ReadMouseValuesForPilotingShip_Wrapper(void * _this, int param_1, float param_2, unsigned int param_3, int * param_4, int param_5)
   {
       ReadMouseValuesForPilotingShip_Original(_this, param_1, param_2, param_3, param_4, param_5);
   }*/
};

//This funtion is called in ReadMouseValuesForZeroG after calling ReadValuesFromMouse, and
//it further modifies them somehow.
void __cdecl ModifyMouseValuesZeroG_Wrapper(float * x, float * y, void * param_3)
{
   uintptr_t ret = reinterpret_cast<uintptr_t>(_ReturnAddress());

   //Although the original does indeed modify the x and y values it receives,
   //it doesn't seem to have an actual impact.
   //I am not calling the original anyway even though it seems to have no impact.
   if(ret == ModifyMouseValuesZeroG_Return_In_ReadMouseValuesForZeroG)
   {
      return;
   }

   ModifyMouseValuesZeroG_Original(x, y, param_3);
}

//This function returns a value that is used in a multiplication to calculate the horizontal angle in zero gravity.
double __fastcall ObtainValueForZeroGHorizontalMovement_Wrapper(int param_1)
{
   uintptr_t ret = reinterpret_cast<uintptr_t>(_ReturnAddress());

   if(ret == ObtainValueForZeroGHorizontalMovement_Return_In_HandleCameraMovementInZeroG)
   {
      return 1.f; //Return 1 so it has no impact on the calculation of the final angle.
   }

   return ObtainValueForZeroGHorizontalMovement_Original(param_1);
}

//This function returns a value that is used in a multiplication to calculate the vertical angle in zero gravity.
double __fastcall ObtainValueForZeroGVerticalMovement_Wrapper(int param_1)
{
   uintptr_t ret = reinterpret_cast<uintptr_t>(_ReturnAddress());

   if(ret == ObtainValueForZeroGVerticalMovement_Return_In_HandleCameraMovementInZeroG)
   {
      return 1.f; //Return 1 so it has no impact on the calculation of the final angle.
   }

   return ObtainValueForZeroGVerticalMovement_Original(param_1);
}

//This function is called from within HandleCameraMovementInZeroG to clamp param_1 is in range [-1, 1].
//param_1 takes the values of what was read from the mouse in ReadMouseValuesForZeroG.
//It is also called when piloting the ship in chapter 7 to clamp what was read from the mouse.
double __cdecl ClampValue_Wrapper(float param_1, int * param_2)
{
   uintptr_t ret = reinterpret_cast<uintptr_t>(_ReturnAddress());

   if(ret == ClampValue_Return_In_HandleCameraMovementInZeroG_For_X ||
      ret == ClampValue_Return_In_HandleCameraMovementInZeroG_For_Y ||
      ret == ClampValue_Return_In_HandleReticleMovementWhenPilotingShip_For_X ||
      ret == ClampValue_Return_In_HandleReticleMovementWhenPilotingShip_For_Y)
   {
      //Return the same value that was read from the mouse in order to avoid clamping.
      return param_1;
   }

   return ClampValue_Original(param_1, param_2);
}

/*
This ClamperFunction does this:
   if value < min
      return min
   
   if value > max
      return max

   return value

Used for testing only.
*/
double __cdecl ClamperFunction_Wrapper(float value, float min, float max)
{
   uintptr_t ret = reinterpret_cast<uintptr_t>(_ReturnAddress());
   double r = ClamperFunction_Original(value, min, max);

   if(
      //ret == ClamperFunction_Return_In_HandleCameraMovementOnLadder_For_X)
      ret == ClamperFunction_Return_In_HandleCameraMovementOnLadder_For_Y)
   {
      printf("clamper received %f %f %f\n", value, min, max);
      printf("returning %f\n\n", r);
   }

   return r;
}

//Helper function to patch memory with NOP (0x90) instructions.
bool NopMemory(void * destination, size_t size) 
{
    DWORD oldProtect;

    //1. Change memory page permission to Read/Write/Execute.
    if (!VirtualProtect(destination, size, PAGE_EXECUTE_READWRITE, &oldProtect)) 
        return false;

    //2. Overwrite the target address with NOPs (0x90).
    //0x90 is the opcode for "No Operation" in x86/x64.
    memset(destination, 0x90, size);

    //3. Restore the original memory permissions.
    DWORD temp;

    if(!VirtualProtect(destination, size, oldProtect, &temp))
       return false;

    //4. (Crucial for x86/x64) Clear the instruction cache.
    //The CPU might have already cached the old instructions. This forces a reload.
    return FlushInstructionCache(GetCurrentProcess(), destination, size) != 0;
}

//Helper function to write raw machine code bytes to an address
bool WriteRawBytes(uintptr_t targetAddress, const std::vector<unsigned char>& bytes)
{
    size_t size = bytes.size();
    DWORD oldProtect;

    //1. Change the memory page permissions to Read/Write/Execute
    if (!VirtualProtect(reinterpret_cast<LPVOID>(targetAddress), size, PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;

    //2. Copy the bytes directly into the target memory location
    memcpy(reinterpret_cast<void*>(targetAddress), bytes.data(), size);

    //3. Restore the original page permissions
    DWORD temp;

    if(!VirtualProtect(reinterpret_cast<LPVOID>(targetAddress), size, oldProtect, &temp))
       return false;

    //4. Force the CPU to clear its cache of the old instructions
    return FlushInstructionCache(GetCurrentProcess(), reinterpret_cast<LPCVOID>(targetAddress), size);
}

//This function patches 2 assembly instructions related to the calculation of the new
//vertical angle when Isaac is on a ladder, which I could not fix from within
//HandleCameraMovementOnLadder_Wrapper.
void PatchCameraMovementOnLadder()
{
   //With the changes in HandleCameraMovementOnLadder_Wrapper, the final vertical angle is
   //correctly calculated in HandleCameraMovementOnLadder using the raw mouse values, but
   //immediately after that, the 2 instructions located at the following addresses change
   //it if the difference between the new and old vertical angle is too big.
   //Replace these instructions with NOPs, so that if it's the case where the difference
   //between the new and old vertical angle is too big, the new angle remains unaltered.
   void * targetAddress1 = (void*)(GAME_BASE_ADDRESS + 0x34e83f);
   void * targetAddress2 = (void*)(GAME_BASE_ADDRESS + 0x34e81f);
   size_t instructionSize = 6;

   if (NopMemory(targetAddress1, instructionSize))
       printf("PatchCameraMovementOnLadder OK\n");
   else
       printf("PatchCameraMovementOnLadder ERROR\n");

   if (NopMemory(targetAddress2, instructionSize))
       printf("PatchCameraMovementOnLadder OK\n");
   else
       printf("PatchCameraMovementOnLadder ERROR\n");
}

//Removes the camera auto centering while inside the SK1P shuttle.
void PatchSK1PAutoCentering()
{
   //The instructions that center the camera start at the following address,
   //and they take up 22 bytes; replace those with NOP, so the angles remain unchanged.
   void * targetAddress = (void*)(0x64fe2e);
   size_t instructionSize = 22;

   if (NopMemory(targetAddress, instructionSize))
       printf("PatchSK1PAutoCentering OK\n");
   else
       printf("PatchSK1PAutoCentering ERROR\n");
}

//Changes the logic so that even very small mouse movements are taken into
//consideration while inside the SK1P shuttle.
void PatchSK1PIgnoreSmallValues()
{
   uintptr_t targetAddress = 0x64fde9;
   //The following payload will change a conditional to "value >= 0", instead of "value >= 0.05".
   std::vector<unsigned char> payload = { 0xd9, 0xee, 0x90, 0x90, 0x90, 0x90 };

   if (WriteRawBytes(targetAddress, payload))
      printf("PatchSK1PCameraMovement ignore small values OK\n");
   else
      printf("PatchSK1PCameraMovement ignore small values ERROR\n");
}

//Removes snapping the camera to the center of the view when the distance
//from the center is <= 0.2 while inside the SK1P shuttle.
void PatchSK1PCameraSnapping()
{
   uintptr_t targetAddress = 0x650013;
   //The following payload will simply pop a value from the FPU, instead of popping
   //and storing into a local variable which would alter the final view angles.
   std::vector<unsigned char> payload = { 0xdd, 0xd8, 0x90 };

   if (WriteRawBytes(targetAddress, payload))
      printf("PatchSK1PCameraMovement snapping 1 OK\n");
   else
      printf("PatchSK1PCameraMovement snapping 1 ERROR\n");

   targetAddress = 0x650042;
   payload = { 0xdd, 0xd8, 0x90 };

   if (WriteRawBytes(targetAddress, payload))
      printf("PatchSK1PCameraMovement snapping 2 OK\n");
   else
      printf("PatchSK1PCameraMovement snapping 2 ERROR\n");
}

void CreateHookAndEnable(LPVOID pTarget, LPVOID pDetour, LPVOID * ppOriginal, const char * functionName)
{
   printf("Hooking %50s:", functionName);

   MH_STATUS status = MH_CreateHook(pTarget, pDetour, ppOriginal);

   if(status == MH_OK)
      printf(" Creation OK");
   else
      printf(" Creation failed (status %s)", MH_StatusToString(status));

   if(status == MH_OK)
   {
      status = MH_EnableHook(pTarget);

      if(status == MH_OK)
         printf(" | Enabling OK");
      else
         printf(" | Enabling failed (status %s)", MH_StatusToString(status));
   }

   printf("\n");
}

void CreateHookWithoutEnabling(LPVOID pTarget, LPVOID pDetour, LPVOID * ppOriginal, const char * functionName)
{
   printf("Hooking %50s:", functionName);

   MH_STATUS status = MH_CreateHook(pTarget, pDetour, ppOriginal);

   if(status == MH_OK)
      printf(" Creation OK | Not enabling on purpose");
   else
      printf(" Creation failed (status %s)", MH_StatusToString(status));

   printf("\n");
}

void InitializeMinHook()
{
   MH_STATUS status = MH_Initialize();

   if(status == MH_OK)
      printf("MinHook initialized successfully.\n");
   else
      printf("MinHook failed to initialize with error: %s\n", MH_StatusToString(status));
}

void InitializeHooks()
{
   InitializeMinHook();

   //Hooks for on ground, not aiming
   CreateHookAndEnable(HandleCameraMovementOnGroundNotAiming_Address, Hooks::HandleCameraMovementOnGroundNotAiming_Wrapper, (void**)&HandleCameraMovementOnGroundNotAiming_Original, "HandleCameraMovementOnGroundNotAiming");
   CreateHookAndEnable(ObtainValueForOnGroundNotAiming1_Address, Hooks::ObtainValueForOnGroundNotAiming1_Wrapper, (void**)&ObtainValueForOnGroundNotAiming1_Original, "ObtainValueForOnGroundNotAiming1");
   CreateHookAndEnable(ObtainValueForOnGroundNotAiming2_Address, Hooks::ObtainValueForOnGroundNotAiming2_Wrapper, (void**)&ObtainValueForOnGroundNotAiming2_Original, "ObtainValueForOnGroundNotAiming2");
   CreateHookAndEnable(ObtainValueForOnGroundNotAiming3_Address, Hooks::ObtainValueForOnGroundNotAiming3_Wrapper, (void**)&ObtainValueForOnGroundNotAiming3_Original, "ObtainValueForOnGroundNotAiming3");
   CreateHookAndEnable(ObtainValueForOnGroundNotAiming4_Address, Hooks::ObtainValueForOnGroundNotAiming4_Wrapper, (void**)&ObtainValueForOnGroundNotAiming4_Original, "ObtainValueForOnGroundNotAiming4");

   //Hooks for on ground, aiming
   CreateHookAndEnable(ReadMouseValuesOnGroundAiming_Address, Hooks::ReadMouseValuesOnGroundAiming_Wrapper, (void**)&ReadMouseValuesOnGroundAiming_Original, "ReadMouseValuesOnGroundAiming");
   CreateHookAndEnable(ObtainValueForReadMouseValuesOnGroundAiming1_Address, ObtainValueForReadMouseValuesOnGroundAiming1_Wrapper, (void**)&ObtainValueForReadMouseValuesOnGroundAiming1_Original, "ObtainValueForReadMouseValuesOnGroundAiming1");
   CreateHookAndEnable(ObtainValueForReadMouseValuesOnGroundAiming2_Address, ObtainValueForReadMouseValuesOnGroundAiming2_Wrapper, (void**)&ObtainValueForReadMouseValuesOnGroundAiming2_Original, "ObtainValueForReadMouseValuesOnGroundAiming2");
   CreateHookAndEnable(ObtainValueForReadMouseValuesOnGroundAiming3_Address, ObtainValueForReadMouseValuesOnGroundAiming3_Wrapper, (void**)&ObtainValueForReadMouseValuesOnGroundAiming3_Original, "ObtainValueForReadMouseValuesOnGroundAiming3");

   //Hooks for zero gravity
   CreateHookAndEnable(HandleCameraMovementInZeroG_Address, Hooks::HandleCameraMovementInZeroG_Wrapper, (void**)&HandleCameraMovementInZeroG_Original, "HandleCameraMovementInZeroG");
   CreateHookAndEnable(ModifyMouseValuesZeroG_Address, ModifyMouseValuesZeroG_Wrapper, (void**)&ModifyMouseValuesZeroG_Original, "ModifyMouseValuesZeroG");
   CreateHookAndEnable(ObtainValueForZeroGHorizontalMovement_Address, ObtainValueForZeroGHorizontalMovement_Wrapper, (void**)&ObtainValueForZeroGHorizontalMovement_Original, "ObtainValueForZeroGHorizontalMovement");
   CreateHookAndEnable(ObtainValueForZeroGVerticalMovement_Address, ObtainValueForZeroGVerticalMovement_Wrapper, (void**)&ObtainValueForZeroGVerticalMovement_Original, "ObtainValueForZeroGVerticalMovement");
   CreateHookAndEnable(ClampValue_Address, ClampValue_Wrapper, (void**)&ClampValue_Original, "ClampValue");

   //Hooks for climbing ladders
   CreateHookAndEnable(HandleCameraMovementOnLadder_Address, Hooks::HandleCameraMovementOnLadder_Wrapper, (void**)&HandleCameraMovementOnLadder_Original, "HandleCameraMovementOnLadder");
   PatchCameraMovementOnLadder();

   //Other general hooks
   CreateHookAndEnable(ReadValuesFromMouse_Address, Hooks::ReadValuesFromMouse_Wrapper, (void**)&ReadValuesFromMouse_Original, "ReadValuesFromMouse");
   CreateHookAndEnable(ClampValuesToAnalogStick_Address, Hooks::ClampValuesToAnalogStick_Wrapper, (void**)&ClampValuesToAnalogStick_Original, "ClampValuesToAnalogStick");
   CreateHookAndEnable(ObtainValueForAiming1_Address, ObtainValueForAiming1_Wrapper, (void**)&ObtainValueForAiming1_Original, "ObtainValueForAiming1");

   //Fixes for SK1P shuttle
   CreateHookAndEnable(HandleCameraMovementInSK1P_Address, Hooks::HandleCameraMovementInSK1P_Wrapper, (void**)&HandleCameraMovementInSK1P_Original, "HandleCameraMovementInSK1P");
   PatchSK1PIgnoreSmallValues();
   PatchSK1PAutoCentering();
   PatchSK1PCameraSnapping();

   //Hooks for the cannon in chapter 6
   CreateHookAndEnable(ReadMouseValuesForHandleCameraMovementOnCannon_Address, Hooks::ReadMouseValuesForHandleCameraMovementOnCannon_Wrapper, (void**)&ReadMouseValuesForHandleCameraMovementOnCannon_Original, "ReadMouseValuesForHandleCameraMovementOnCannon");
   CreateHookAndEnable(HandleCameraMovementOnCannon_Address, Hooks::HandleCameraMovementOnCannon_Wrapper, (void**)&HandleCameraMovementOnCannon_Original, "HandleCameraMovementOnCannon");
}

void FreeHooks()
{
   MH_Uninitialize();
}
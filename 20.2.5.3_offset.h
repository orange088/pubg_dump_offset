#pragma once

#ifndef Offset_h
#define Offset_h

constexpr auto Offset_GObjects = 0x09155B20;
constexpr auto Offset_GWorld = 0x09196ED0;
constexpr auto Offset_XenuineDecrypt = 0x07B82C28;
constexpr auto Offset_FNameEntry = 0x093758F0;
constexpr auto Offset_ChunkSize = 0x4048;
constexpr auto Offset_ObjID = 0x0014;

constexpr auto Offset_XorKey1 = 0x55D62FF9;
constexpr auto Offset_XorKey2 = 0x2F7A8293;
constexpr auto Offset_RorValue = 0x05;
constexpr auto Offset_IsingRor = false;

constexpr auto Offset_CurrentLevel = 0x0138;
constexpr auto Offset_Actors = 0x0048;
constexpr auto Offset_GameInstance = 0x0458;
constexpr auto Offset_LocalPlayers = 0x00D8;
constexpr auto Offset_PlayerController = 0x0038;
constexpr auto Offset_AcknowledgedPawn = 0x0478;
constexpr auto Offset_PlayerCameraManager = 0x0498;
constexpr auto Offset_LocalPlayersPTR = 0x092D22F0;

constexpr auto Offset_PlayerState = 0x0408;
constexpr auto Offset_PlayerStatistics = 0x09E0;
constexpr auto Offset_SpectatedCount = 0x1B94;
constexpr auto Offset_LastRenderTime = 0x076C;
constexpr auto Offset_Health = 0x0860;
constexpr auto Offset_GroggyHealth = 0x2218;
constexpr auto Offset_Team = 0x21C0;
constexpr auto Offset_LastTeamNum = 0x21C8;
constexpr auto Offset_LastSquadMemberIndex = 0x21D0;
constexpr auto Offset_CharacterName = 0x0F90;
constexpr auto Offset_LastAimOffsets = 0x159C;
constexpr auto Offset_AimOffsets = 0x1590;
constexpr auto Offset_ControlRotation = 0x0440;

constexpr auto Offset_RootComponent = 0x0150;
constexpr auto Offset_ComponentLocation = 0x0270;

constexpr auto Offset_Mesh = 0x0540;
constexpr auto Offset_StaticMesh = 0x0AE0;
constexpr auto Offset_ComponentToWorld = 0x0260;

constexpr auto Offset_CameraLocation = 0x0FD4;
constexpr auto Offset_CameraRotation = 0x0A4C;
constexpr auto Offset_CameraFov = 0x0A34;

constexpr auto Offset_ItemPackage = 0x0558;
constexpr auto Offset_ItemInformationComponent = 0x00B0;
constexpr auto Offset_ItemID = 0x0248;
constexpr auto Offset_DroppedItem = 0x0418;
constexpr auto Offset_DroppedItemGroup = 0x0328;
constexpr auto Offset_DroppedItemGroup_UItem = 0x0748;

constexpr auto Offset_WeaponProcessor = 0x0878;
constexpr auto Offset_EquippedWeapons = 0x0208;
constexpr auto Offset_CurrentWeaponIndex = 0x02E9;
constexpr auto Offset_WeaponTrajectoryData = 0x1008;
constexpr auto Offset_TrajectoryGravityZ = 0x0F84;
constexpr auto Offset_TrajectoryConfig = 0x0108;
constexpr auto Offset_FloatCurves = 0x0038;
constexpr auto Offset_CharacterMovement = 0x0490;
constexpr auto Offset_Acceleration = 0x03A8;
constexpr auto Offset_MaxAcceleration = 0x0308;
constexpr auto Offset_LastUpdateVelocity = 0x03D0;

constexpr auto Offset_AnimScriptInstance = 0x0C80;
constexpr auto Offset_ControlRotation_CP = 0x0774;
constexpr auto Offset_RecoilADSRotation_CP = 0x09CC;
constexpr auto Offset_LeanLeftAlpha_CP = 0x0DDC;
constexpr auto Offset_LeanRightAlpha_CP = 0x0DE0;
constexpr auto Offset_bIsScoping_CP = 0x0CF6;
constexpr auto Offset_bIsReloading_CP = 0x08C0;

constexpr auto Offset_VehicleRiderComponent = 0x1C70;
constexpr auto Offset_SeatIndex = 0x0228;
constexpr auto Offset_LastVehiclePawn = 0x0260;
constexpr auto Offset_ReplicatedMovement = 0x0068;

constexpr auto Offset_BackpackState = 0x093A68A1;
constexpr auto Offset_IsHall = 0x08F94B38;
constexpr auto Offset_MapState = 0x06B8;
constexpr auto Offset_WorldOrigin = 0x0870;

//TslWheeledVehicle
constexpr auto Offset_VehicleCommonComponent = 0x0B20;
constexpr auto Offset_vehiclesHealth = 0x02D8;
constexpr auto Offset_vehiclesHealthMax = 0x02DC;
constexpr auto Offset_vehiclesFuel = 0x02E0;
constexpr auto Offset_vehiclesFuelMax = 0x02E4;

//ATslProjectile
constexpr auto Offset_TickStartVelocity = 0x0810;
constexpr auto Offset_TimeTillExplosion = 0x0714;
constexpr auto Offset_PreExplosionTime = 0x0710;
constexpr auto Offset_ExplosionDelay = 0x05B0;
constexpr auto Offset_ProjectileConfig = 0x05B8;
constexpr auto Offset_ExplodeState = 0x0558;

#endif

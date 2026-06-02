
#pragma once
#include "Includes.h"

namespace Offset
{
    const DWORD STExtraBaseCharacter = 0x1F50;

    const DWORD GameState = 0x2f8;
    const DWORD bNoAliveHumanPlayer = 0x81c;
    const DWORD AlivePlayerNum = 0x934;
    const DWORD ElapsedTime = 0x3f0;
    const DWORD NoneAIGameTime = 0x894;
    const DWORD PlayerNum = 0x654;
    const DWORD RealPlayerNum = 0x5d8;
    const DWORD AliveTeamNum = 0x938;
    const DWORD PlayerNumPerTeam = 0xc2c;

    const DWORD EncryptedActors_Offset = 0x334;// NOT UPDATED
    const DWORD GameModeID = 0xd38;
    const DWORD CurCircleWave = 0x8bc;
    const DWORD GameReplayType = 0x7d8;
    const DWORD PersistentLevel = 0x20;
    const DWORD NetDriver = 0x24;
    const DWORD ServerConnection = 0x64;
    const DWORD PlayerController = 0x20;
    const DWORD AcknowledgedPawn = 0x400;
    const DWORD RootComponent = 0x1b0;
    const DWORD CurrentStates = 0xc48;
    const DWORD LastUpdateVelocity = 0x2b0;
    const DWORD TeamId = 0x748;
    const DWORD IsBot = 0x7ED;
    const DWORD Name = 0x720;
    const DWORD Nation = 0x72c;
    const DWORD IsDead = 0xa5c;
    const DWORD PlayerUID = 0x73c;
    const DWORD Health = 0xae8;
    const DWORD HealthMax = 0xaec;
    const DWORD NearDeathBreath = 0x1570;
    const DWORD NearDeatchComponent = 0x1560;
    const DWORD BreathMax = 0x164;
    const DWORD ControlRotation = 0x3c8;
    const DWORD ComponentVelocity = 0x250;
    const DWORD CurrentVehicle = 0xb24;
    const DWORD ReplicatedMovement = 0xd8;
    const DWORD RelativeLocation = 0x178;
    const DWORD RelativeRotation = 0x184;
    const DWORD Mesh = 0x3f0;
    const DWORD BodyAddv = 0x1A0;
    const DWORD MinLOD = 0x7F4;
    const DWORD CurrentWeaponReplicated = 0x4bc;
    const DWORD WeaponManagerComponent = 0x1D80;
    const DWORD CurrentReloadWeapon = 0x25d4;
    const DWORD ShootWeaponComponent = 0xca0;
    const DWORD ShootMode = 0xd18;
    const DWORD OwnerShootWeapon = 0x23c;
    const DWORD CurBulletNumInClip = 0x0;
    const DWORD CurMaxBulletNumInOneClip = 0xd08;
    const DWORD ShootWeaponEntity = 0xf8c;
    const DWORD ShootWeaponEffectComp = 0xf90;
    const DWORD CameraShakeInnerRadius = 0x218;
    const DWORD CameraShakeOuterRadius = 0x1B0;
    const DWORD CameraShakFalloff = 0x220;
    const DWORD CharacterOverrideAttrs = 0xED0;
    const DWORD BulletFireSpeed = 0x484;
    const DWORD BulletMomentum = 0x5c0;
    const DWORD BulletRange = 0x5d0;
    const DWORD BaseImpactDamage = 0x5b4;
    const DWORD VehicleDamageScale = 0x5bc;
    const DWORD LaunchGravityScale = 0x4B4;
    const DWORD ShootInterval = 0x4b4;
    const DWORD bHasSingleFireMode = 0x500;
    const DWORD bHasAutoFireMode = 0x501;
    const DWORD bHasBurstFireMode = 0x502;
    const DWORD BurstShootInterval = 0x530;
    const DWORD ReloadRate = 0x7bc;
    const DWORD AccessoriesVRecoilFactor = 0x9c4;
    const DWORD AccessoriesHRecoilFactor = 0x9cc;
    const DWORD AccessoriesRecoveryFactor = 0x9c8;
    const DWORD ShotGunCenterPerc = 0xa20;
    const DWORD ShotGunVerticalSpread = 0xa24;
    const DWORD ShotGunHorizontalSpread = 0xa28;
    const DWORD EntityList = 0x70; //
    const DWORD EntityCount = EntityList + 0x4;
    const DWORD GameDeviationFactor = 0xa18;
    const DWORD GameDeviationAccuracy = 0xa1c;
    const DWORD CurrentWeapon = 0x20CC;
    const DWORD AccessoriesDeviationFactor = 0x9dc;
    const DWORD VehicleWeaponDeviationAngle = 0xa38;
    const DWORD RecoilKickADS = 0xad8;
    const DWORD HP = 0x27c;
    const DWORD HPMax = 0x278;
    const DWORD Fuel = 0x32c;
    const DWORD FuelMax = 0x328;
    const DWORD VehicleMovement = 0x182C;
    const DWORD VehicleCommon = 0x95c;
    const DWORD lastForwardSpeed = 0x9f0;
    const DWORD PickUpDataList = 0x7788;
    const DWORD STPlayerController = 0x3B28;
    const DWORD PlayerCameraManager = 0x410;
    const DWORD CameraCache = 0x420;
    const DWORD ScopeFov = 0x1650;
    const DWORD ScopeCameraComp = 0x1694;
    const DWORD IsFPPGameMode = 0x7e8;
    const DWORD SwitchWeaponSpeedScale = 0x2200;
    const DWORD CharacterParachuteComponent = 0x11f4;
    const DWORD CurrentFallSpeed = 0x1a8;
    const DWORD PoseState = 0x1228;
    const DWORD Position = 0x1b0;
    const DWORD CharacterMovement = 0x3f4;
    const DWORD SpringArmComp = 0x167C;
    const DWORD MeshContainer = 0x1508;
    const DWORD STPlayerController1 = 0x3b2c;
    const DWORD HitPerform = 0x4b0;
    const DWORD bIsEngineStarted = 0x92c;
    const DWORD ExtraBoostFactor = 0x1894;
    const DWORD Status = 0x35c;
    const DWORD RelativeScale3D = 0x138;
    const DWORD ShootWeaponEntityComp = 0xf8c;
    const DWORD STCharacterMovement = 0x1758;
    const DWORD bIsFPPOnVehicle = 0x11B0;
    const DWORD IsNetFPP = 0x1970;
    const DWORD IsGameModeFpp = 0x7c8;
    const DWORD GameModeState = 0x830;
    const DWORD IsCanSwitchFPP = 0x7e9;
    const DWORD bIsGunADS = 0xcf4;
    const DWORD bIsAirOpen = 0x580;
    const DWORD Kills = 0x5a0;
    const DWORD bIsWeaponFiring = 0x1218;
    const DWORD AvatarComponent2 = 0x22d0;
    const DWORD SynData = 0x590;
    const DWORD NetAvatarData = 0x2a8;


    namespace PlayerCameraManager1 {
        constexpr auto CameraCache = 0x420;//CameraCacheEntry CameraCache;//[Offset:
    }
    namespace PlayerController1 {
        constexpr auto MyHUD = 0x3b4;//HUD* MyHUD;//[Offset:
    }
    const DWORD AutoFire = 0x501;

}

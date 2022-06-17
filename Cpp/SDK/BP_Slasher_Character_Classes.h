#pragma once

/**
 * Name: DBD
 * Version: 601
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_Slasher_Character.BP_Slasher_Character_C
	 * Size -> 0x037D (FullSize[0x199D] - InheritedSize[0x1620])
	 */
	class ABP_Slasher_Character_C : public ASlasherPlayer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1620(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPositionLagCompensationComponent*                   PositionLagCompensation;                                 // 0x1628(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCharacterOptimizer*                                 CharacterOptimizer;                                      // 0x1630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWiggleMotionComponent*                              WiggleMotion;                                            // 0x1638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UEtherealComponent*                                  Ethereal;                                                // 0x1640(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UKillerFlashlightSFXComponent*                       KillerFlashlightSFX;                                     // 0x1648(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UInteractionAnalyticsComponent*                      InteractionAnalytics;                                    // 0x1650(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBlindFlashlightTargetFXComponent*                   BlindFlashlightTargetFX;                                 // 0x1658(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFlashlightableComponent*                            BodyFlashlightable;                                      // 0x1660(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFlashlightableComponent*                            EyesFlashlightable;                                      // 0x1668(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_KillerLeftFootGroundDetector_C*                  LeftFootGroundDetector;                                  // 0x1670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_KillerRightFootGroundDetector_C*                 RightFootGroundDetector;                                 // 0x1678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UQuestEventsHandler*                                 QuestEventsHandler;                                      // 0x1680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_RedStainComponent_C*                             RedStainComponent;                                       // 0x1688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGameEventListenerCollectionComponent*               GameEventListenerCollection;                             // 0x1690(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsulePlayerOverlapComponent*                      pawnDetector;                                            // 0x1698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UScreenSpaceLocationComponent*                       ScreenSpaceLocation_MiddleT;                             // 0x16A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            P_Vignette_EndGame_Top;                                  // 0x16A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UEndGameEffectsComponent_C*                          EndGameEffectsComponent;                                 // 0x16B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    Camera1;                                                 // 0x16B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USlasherOutlineUpdateStrategy*                       SlasherOutlineUpdateStrategy;                            // 0x16C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCustomizedAudioComponent*                           CustomizedAudio;                                         // 0x16C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               BlindedPostProcess_new;                                  // 0x16D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                AttackZone_004;                                          // 0x16D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    audioAmbientDetector;                                    // 0x16E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                AttackZone_Wedge_Large;                                  // 0x16E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                AttackZone_Wedge_Standard;                               // 0x16F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               VignetteBloodlust;                                       // 0x16F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirecrackerEffectHandlerComponent*                  FirecrackerEffectHandler;                                // 0x1700(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                AttackZoneHigh_003;                                      // 0x1708(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                AttackZoneHigh_002;                                      // 0x1710(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                AttackZoneHigh_001;                                      // 0x1718(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       ObstructionShape;                                        // 0x1720(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                AttackZone_003;                                          // 0x1728(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                AttackZone_002;                                          // 0x1730(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                AttackZone_001;                                          // 0x1738(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     attackZonePivot;                                         // 0x1740(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        Ak_Audio_Killer;                                         // 0x1748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       ChainsawObstruction;                                     // 0x1750(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   InteractionDetector;                                     // 0x1758(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     CamperDropOffPoint;                                      // 0x1760(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDBDOutlineComponent*                                DBDOutline;                                              // 0x1768(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCustomizedSkeletalMesh*                             CustomizedSkeletalMesh;                                  // 0x1770(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_Mesh2SoundPlayer_C*                              BP_Mesh2SoundPlayer;                                     // 0x1778(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       BlinkAttackLockZone;                                     // 0x1780(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UScreenSpaceLocationComponent*                       ScreenSpaceLocation_LeftT;                               // 0x1788(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UScreenSpaceLocationComponent*                       ScreenSpaceLocation_RightT;                              // 0x1790(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            P_Vignette_LeftB;                                        // 0x1798(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UScreenSpaceLocationComponent*                       ScreenSpaceLocation_LeftB;                               // 0x17A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            P_Vignette_RightB;                                       // 0x17A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UScreenSpaceLocationComponent*                       ScreenSpaceLocation_RightB;                              // 0x17B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ULoudNoiseHUDIndicator*                              LoudNoiseHUDIndicator;                                   // 0x17B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Fx_FSbloodfx;                                            // 0x17C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      TML_LungeAttack_Vignette_C6A1D26A45B8D21BE38076A15A900F67; // 0x17C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TML_LungeAttack__Direction_C6A1D26A45B8D21BE38076A15A900F67; // 0x17CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9P6M[0x3];                                   // 0x17CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TML_LungeAttack;                                         // 0x17D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BloodSplatterOpacityAnim_NewTrack_0_C8565C8848DC851A61C85CA0D1C69D9F; // 0x17D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         BloodSplatterOpacityAnim__Direction_C8565C8848DC851A61C85CA0D1C69D9F; // 0x17DC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G6J1[0x3];                                   // 0x17DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  BloodSplatterOpacityAnim;                                // 0x17E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BloodSplatterFrameAnim_NewTrack_0_89AF70DC41EF75E7CD3BF6B72CCE267B; // 0x17E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         BloodSplatterFrameAnim__Direction_89AF70DC41EF75E7CD3BF6B72CCE267B; // 0x17EC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1VDJ[0x3];                                   // 0x17ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  BloodSplatterFrameAnim;                                  // 0x17F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_BlackSmoke_Atlanta_Fade_655F805E4CE3AB7F8F28689998ED7469; // 0x17F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TML_BlackSmoke_Atlanta__Direction_655F805E4CE3AB7F8F28689998ED7469; // 0x17FC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UT4F[0x3];                                   // 0x17FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TML_BlackSmoke_Atlanta;                                  // 0x1800(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_BlackSmoke_Distortion_B6144BAE404061D5F806EBBCA47DA5A3; // 0x1808(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_BlackSmoke_Fade_B6144BAE404061D5F806EBBCA47DA5A3;    // 0x180C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TML_BlackSmoke__Direction_B6144BAE404061D5F806EBBCA47DA5A3; // 0x1810(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N5M8[0x7];                                   // 0x1811(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TML_BlackSmoke;                                          // 0x1818(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Bloodlust_Timeline_Blend_7510578B48E7070D9984B9923F94253F; // 0x1820(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Bloodlust_Timeline__Direction_7510578B48E7070D9984B9923F94253F; // 0x1824(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IKBF[0x3];                                   // 0x1825(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Bloodlust_Timeline;                                      // 0x1828(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_1_Dissolve_99584B454ECDABDE86BE6E8CD0241B00;    // 0x1830(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_1__Direction_99584B454ECDABDE86BE6E8CD0241B00;  // 0x1834(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZRS0[0x3];                                   // 0x1835(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x1838(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BaseTurnRate;                                            // 0x1840(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BaseLookUpRate;                                          // 0x1844(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1Z52[0x8];                                   // 0x1848(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          CenterOfWorld;                                           // 0x1850(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Attack;                                                  // 0x1880(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6BXE[0x3];                                   // 0x1881(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IsTurning;                                               // 0x1884(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            CharacterHeadMesh;                                       // 0x1888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkinnedMeshComponent*                               MeshMachette;                                            // 0x1890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            Trap_Material;                                           // 0x1898(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TrapPlacementValid;                                      // 0x18A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4RFN[0x3];                                   // 0x18A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Trap_Indicator_Offset;                                   // 0x18A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BaseMaxWalkSpeed;                                        // 0x18A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      baseTerrorRadius;                                        // 0x18AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACamperPlayer*                                       SurvivorBeingKilled;                                     // 0x18B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              DissolveMaterialGroupName;                               // 0x18B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              FirstPersonMaterialGroupName;                            // 0x18C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              DissolveGroupName;                                       // 0x18D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              FirstPersonDissolve;                                     // 0x18E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              FirstPersonGroupName;                                    // 0x18F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       IsDissolving;                                            // 0x1908(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WEA3[0x3];                                   // 0x1909(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Weapon;                                                  // 0x190C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RootMeshIsHeadOnly;                                      // 0x1918(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TOZX[0x3];                                   // 0x1919(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TrapPlacementRaycastStart;                               // 0x191C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             TrapPlacementRaycastEnd;                                 // 0x1928(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2875[0x4];                                   // 0x1934(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            MID_Damage;                                              // 0x1938(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MID_LockOn;                                              // 0x1940(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         BlindnessCurve;                                          // 0x1948(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         BlindnessMaterialCurve;                                  // 0x1950(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            PP_Stun;                                                 // 0x1958(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            PP_Smoke;                                                // 0x1960(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            PP_Chase;                                                // 0x1968(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            PP_Flashlight;                                           // 0x1970(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            PP_SlasherBlood;                                         // 0x1978(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DOF_Focus_Point;                                         // 0x1980(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KIGN[0x4];                                   // 0x1984(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            PP_LungeAttack;                                          // 0x1988(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CameraSocketName;                                        // 0x1990(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSnowmanActive_;                                        // 0x199C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetTrapPlacementLocation_World(struct FVector* World_Location);
		void GetSlasherAudioComponent(class UAkComponent** Audio_Component);
		void IsTrapPlacementValid(bool* Result);
		void SetAudioSwitchSubKillerState(const class FString& switchState);
		void Initialize_Blinding_FX_Component();
		void PlayAudioKillerGameStart();
		void CreateSlasherBloodPP();
		void IsActivePhaseWalking(bool* Result);
		void ShouldShowBlackVignette(bool* Show);
		void IsPassivePhaseWalking(bool* Result);
		bool LocallyObservedCharacterIsShowingFakeKillerStain();
		class UCustomizedSkeletalMesh* GetCustomizedSkeletalMesh();
		struct FVector GetPlayerDropOffPoint();
		bool IsCloaking();
		void GetCurrentStalkTier(float* currentTier);
		void UpdateStalkModeEffect(float StalkModePercent);
		void SetDetectionZones(EAttackZoneSet Attack_Zones);
		void isFirstPerson(bool* First_Person);
		bool IsUncloaking();
		void SetMacheteCustomDepth();
		void ResetMaterials();
		void ApplyFirstPersonShaders();
		void UserConstructionScript();
		void TML_BlackSmoke__FinishedFunc();
		void TML_BlackSmoke__UpdateFunc();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void Bloodlust_Timeline__FinishedFunc();
		void Bloodlust_Timeline__UpdateFunc();
		void TML_BlackSmoke_Atlanta__FinishedFunc();
		void TML_BlackSmoke_Atlanta__UpdateFunc();
		void TML_LungeAttack__FinishedFunc();
		void TML_LungeAttack__UpdateFunc();
		void BloodSplatterOpacityAnim__FinishedFunc();
		void BloodSplatterOpacityAnim__UpdateFunc();
		void BloodSplatterFrameAnim__FinishedFunc();
		void BloodSplatterFrameAnim__UpdateFunc();
		void Stop_Travelling_Dissolve();
		void Start_Pounce_VFX();
		void Stop_Pounce_VFX();
		void Start_Saliva_VFX();
		void Stop_Saliva_VFX();
		void Stop_Travelling_PP();
		void ActivatePounceStateVFX();
		void Switch_Kanobo_To_Demon_Mode();
		void Switch_Kanobo_to_Normal_Mode();
		void Hide_Oni_Katana();
		void Show_Oni_Katana();
		void Destroy_Blood_Orb();
		void Switch_Oni_Weapons_To_Normal();
		void ShowDemonCosmetic();
		void HideDemonCosmetic();
		void DisableDemonMode();
		void Hide_Oni_Katana_TPV();
		void ShowGunBullet();
		void HideGunBullet();
		void SpawnFakeBullet();
		void ActivateSacrificeCamBlood();
		void StartDeathBedDissolve();
		void DeactivateKnockoutVFX();
		void ActivateKnockoutVFX();
		void SpawnFullScreenBlood();
		void StartDeathBedRelocateVignette();
		void ActivateAttemptEscapeVFX();
		void ShowSyringe();
		void HideSyringe();
		void AnimateLiquidSyringe();
		void ActivateVignetteOnWallCollision();
		void HideSyringeOnStun();
		void K22_SpawnWipeVFX();
		void K22_HighlightDormantMain(bool IsDormantMain_);
		void K22_HighlightDormant(bool IsDormant_);
		void K22_HighlightMissJump();
		void K22_DormantAttachedSlasher();
		void K22_JumpTrail_Activate();
		void K22_JumpTrail_Deactivate();
		void K22_ReleaseBrother();
		void K22_MembraneRecovery();
		void K22_MembraneDelete();
		void K22_BabyBloodDissolve();
		void K22_BabyRespawn();
		void K22_Jump_Active();
		void K22_Jump_Inactive();
		void On_Execution();
		void K22_WrongLanding(bool Wrong_Landing);
		void K22_AttachedToSurvivor_VFX();
		void K22_DetachedFromSurvivor_VFX();
		void K22_WrongLandingVignette(bool WrongLanding);
		void K12_GetToxinVignette(EBombType Bomb_Type);
		void K12_GetAntidoteVignette();
		void K12_Killer_AntidoteEnd();
		void K12_Killer_AntidoteBegin();
		void K12_Killer_BombSmokeColor();
		void K12_Killer_RemoveVignette();
		void K12_Killer_PlaceVignette();
		void K22_QuickDissolveBrother();
		void Camper_AntidoteBoostVignette_Start();
		void Camper_AntidoteBoostVignette_End();
		void K22_BrotherDissolveLocker();
		void K22_HighlightMissJump_Stop();
		void K23_CamperHitByKnife(bool IsLocallyObserved, float lacerationPercent, bool isDangerous);
		void K22_IsAttachedLocker(bool IsAttachedLocker);
		void K23_ShowKnifeLT();
		void K23_ShowKnifeRT();
		void K23_ShowBat();
		void K23_HideBat();
		void K23_HideKnifeRT();
		void K23_HideKnifeLT();
		void AddBloodDrippingGKMoriMale();
		void ReturnOniToNormal();
		void Survivor_BoonRadius_Enter();
		void Survivor_BoonRadius_Exit();
		void Boon_Unbound();
		void BndEvt__BlindFlashlightable_K2Node_ComponentBoundEvent_1_OnFlashlightAddedRemovedEvent__DelegateSignature(class UFlashlightComponent* Flashlight);
		void BndEvt__BlindFlashlightable_K2Node_ComponentBoundEvent_0_OnFlashlightAddedRemovedEvent__DelegateSignature(class UFlashlightComponent* Flashlight);
		void Start_Travelling_Dissolve();
		void Start_Travelling_PP();
		void BndEvt__BodyFlashlightable_K2Node_ComponentBoundEvent_2_OnFlashlightLitChangedEvent__DelegateSignature(bool IsLit);
		void BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory Category, const class FString& switchState);
		void ActivatePlayerGlitchVFX(class UMaterialInstanceDynamic* GlitchFX, bool Face, bool Madness, bool killer);
		void ActivatePlayerLightningVFX(class UMaterialInstanceDynamic* LightningFX, bool intense);
		void SetHighlightedVFX();
		void Dissolve(bool Dissolve);
		void SetPlayerExposedVFX();
		void Telekinesis_On();
		void Telekinesis_Off();
		void ActivateLocalPlayerExposedVFX();
		void NurseInvisible_On();
		void NurseInvisible_Off();
		void FX_SetTrap();
		void FX_TrapImpact();
		void FX_TrapImpact_Off();
		void FX_BloodDrops();
		void ActivatePlayerExposedVFX();
		void UpdateRageTierEffect(int32_t previousTier, int32_t currentTier);
		void FX_TreatmentStart();
		void FX_BloodDropWipe();
		void FX_WI_BloodDrops();
		void ActivateEndGameVignette(bool IsActive);
		void K23_StunnedByPallet();
		void EvaluateBlackVignetteVisibility();
		void OnStealthChanged(bool stealth);
		void K23_Hide_LTKnife();
		void K23_Hide_RTKnife();
		void ReturnToDemonMode();
		void PlayBloodHitsEffects();
		void PostProcessBloodFX();
		void K23_Show_LTKnife();
		void K23_Show_RTKnife();
		void K05_BloodDrops();
		void K05_TrapImpactOff();
		void K05_TrapImpact();
		void K05_SetTrap();
		void K23_Exit_SuperMode();
		void K07_TreatmentStart();
		void K04_InvisibleOff();
		void K04_InvisibleOn();
		void K04_TelekinesisOff();
		void K04_TelekinesisOn();
		void K23_Enter_SuperMode();
		void Killer_LungeAttack_Start();
		void Killer_LungeAttack_End();
		void EventK23Camper();
		void StopBloodSplatter();
		void PlayBloodSplatter();
		void ReceiveBeginPlay();
		void OnDestroyed_Event_Machete_Copy(class AActor* DestroyedActor);
		void OnClientRestart();
		void OnEscapeDoorActivated();
		void OnFirecrackerInRangeBegin(const struct FFirecrackerEffectData& effectData);
		void OnLocallyObservedChanged();
		void SetAttackDetectionZoneSet(EAttackZoneSet attackZoneSet);
		void OnIntroCompletedBP();
		void SetAnimationCrouchState(bool crouched);
		void DisplayAttackZones(bool Display);
		void MergeLockOnDamageZones(bool enable);
		void OnLevelReadyToPlay();
		void Cosmetic_OnPickUpEnd();
		void Cosmetic_OnDropCamperEnd();
		void BndEvt___characterChaseVisualComponent_K2Node_ComponentBoundEvent_0_ActorComponentChaseStartSignature__DelegateSignature();
		void BndEvt___characterChaseVisualComponent_K2Node_ComponentBoundEvent_1_ActorComponentChaseEndSignature__DelegateSignature();
		void OnIntroCompleted();
		void UpdateDOF();
		void Cosmetic_OnCancelCarry();
		void ExecuteUbergraph_BP_Slasher_Character(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

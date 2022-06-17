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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function GameplayUtilities.CharacterPusherComponent.SetIgnoredCharacter
	 */
	struct UCharacterPusherComponent_SetIgnoredCharacter_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ignore;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayUtilities.CharacterPusherComponent.OnCharacterDetectorOverlapExit
	 */
	struct UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayUtilities.CharacterPusherComponent.Construct
	 */
	struct UCharacterPusherComponent_Construct_Params
	{
	public:
		class UCapsuleComponent*                                   characterDetector;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCapsuleComponent*                                   characterCollision;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UBasePushStrategyComponent*                          pushStrategy;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayUtilities.BasePoolableActorComponent.SetAcquired
	 */
	struct UBasePoolableActorComponent_SetAcquired_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayUtilities.BasePoolableActorComponent.IsAcquired
	 */
	struct UBasePoolableActorComponent_IsAcquired_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayUtilities.AuthoritativePoolableActorComponent.OnRep_Acquired
	 */
	struct UAuthoritativePoolableActorComponent_OnRep_Acquired_Params
	{	};

	/**
	 * Function GameplayUtilities.AuthoritativeActorPoolComponent.OnRep_Pool
	 */
	struct UAuthoritativeActorPoolComponent_OnRep_Pool_Params
	{
	public:
		TArray<class AActor*>                                      previousPool;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayUtilities.AuthoritativeActorPoolComponent.Authority_OnActorDestroyed
	 */
	struct UAuthoritativeActorPoolComponent_Authority_OnActorDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayUtilities.BoxOcclusionQueryComponent.GetVisiblePercentOfScreen
	 */
	struct UBoxOcclusionQueryComponent_GetVisiblePercentOfScreen_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayUtilities.BoxOcclusionQueryComponent.GetNumberOfVisiblePixels
	 */
	struct UBoxOcclusionQueryComponent_GetNumberOfVisiblePixels_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayUtilities.BoxOcclusionQueryComponent.GetEstimatedRenderedPixelCount
	 */
	struct UBoxOcclusionQueryComponent_GetEstimatedRenderedPixelCount_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayUtilities.CameraUtilities.IsLookingTowards
	 */
	struct UCameraUtilities_IsLookingTowards_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             position;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      precisionAngle;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GameplayUtilities.CharacterSightableComponent.OnHighestSightStatusChangedBP__DelegateSignature
	 */
	struct UCharacterSightableComponent_OnHighestSightStatusChangedBP__DelegateSignature_Params
	{
	public:
		ESightStatus                                               Status;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayUtilities.CharacterSightableComponent.GetHighestSightStatus
	 */
	struct UCharacterSightableComponent_GetHighestSightStatus_Params
	{
	public:
		ESightStatus                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayUtilities.CharacterSightComponent.SetScreenVisibilityZoneRadiusPercent
	 */
	struct UCharacterSightComponent_SetScreenVisibilityZoneRadiusPercent_Params
	{
	public:
		float                                                      ValueX;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ValueY;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterVisiblePixelsPercent
	 */
	struct UCharacterSightComponent_SetMinimumCharacterVisiblePixelsPercent_Params
	{
	public:
		float                                                      Trigger;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      untrigger;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterScreenPercentNotInZone
	 */
	struct UCharacterSightComponent_SetMinimumCharacterScreenPercentNotInZone_Params
	{
	public:
		float                                                      Trigger;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      untrigger;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterScreenPercentInZone
	 */
	struct UCharacterSightComponent_SetMinimumCharacterScreenPercentInZone_Params
	{
	public:
		float                                                      Trigger;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      untrigger;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayUtilities.CharacterSightComponent.SetMaximumSightDistance
	 */
	struct UCharacterSightComponent_SetMaximumSightDistance_Params
	{
	public:
		float                                                      value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayUtilities.CharacterSightComponent.Server_UpdateDiscernedCharacters
	 */
	struct UCharacterSightComponent_Server_UpdateDiscernedCharacters_Params
	{
	public:
		TArray<class ACharacter*>                                  Characters;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayUtilities.CharacterSightComponent.OnRep_DiscernibleCharacters
	 */
	struct UCharacterSightComponent_OnRep_DiscernibleCharacters_Params
	{	};

	/**
	 * Function GameplayUtilities.CharacterSightComponent.OnRep_CanSee
	 */
	struct UCharacterSightComponent_OnRep_CanSee_Params
	{	};

	/**
	 * Function GameplayUtilities.ChargeableUtilities.ConvertSecondsToAddToRateMultiplier
	 */
	struct UChargeableUtilities_ConvertSecondsToAddToRateMultiplier_Params
	{
	public:
		float                                                      secondsToAdd;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      baseMaxSeconds;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      baseRate;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayUtilities.MovementUtilities.Local_MoveActorTo
	 */
	struct UMovementUtilities_Local_MoveActorTo_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayUtilities.PawnUtilities.GetOwningPawn
	 */
	struct UPawnUtilities_GetOwningPawn_Params
	{
	public:
		class AActor*                                              Origin;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayUtilities.PawnUtilities.GetLocallyObservedPawn
	 */
	struct UPawnUtilities_GetLocallyObservedPawn_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function Winter2021.HideInSnowmanInteraction.Multicast_StopControllingSnowman
	 */
	struct UHideInSnowmanInteraction_Multicast_StopControllingSnowman_Params
	{
	public:
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Winter2021.HideInSnowmanInteraction.Multicast_StartControllingSnowman
	 */
	struct UHideInSnowmanInteraction_Multicast_StartControllingSnowman_Params
	{
	public:
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Winter2021.HideInSnowmanInteraction.Multicast_OnAbleToRunAndExitSnowmanStart
	 */
	struct UHideInSnowmanInteraction_Multicast_OnAbleToRunAndExitSnowmanStart_Params
	{	};

	/**
	 * Function Winter2021.Snowman.OnRep_SurvivorUsingSnowman
	 */
	struct ASnowman_OnRep_SurvivorUsingSnowman_Params
	{	};

	/**
	 * Function Winter2021.Snowman.OnRep_SnowmanState
	 */
	struct ASnowman_OnRep_SnowmanState_Params
	{	};

	/**
	 * Function Winter2021.Snowman.OnRep_SnowmanDestructionType
	 */
	struct ASnowman_OnRep_SnowmanDestructionType_Params
	{	};

	/**
	 * Function Winter2021.Snowman.OnRep_IsMoving
	 */
	struct ASnowman_OnRep_IsMoving_Params
	{	};

	/**
	 * Function Winter2021.Snowman.Multicast_StartSnowmanDestruction
	 */
	struct ASnowman_Multicast_StartSnowmanDestruction_Params
	{
	public:
		ESnowmanDestructionType                                    snowmanDestructionType;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       unlockRequirementsSatisfiedForSurvivor;                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       unlockRequirementsSatisfiedForKiller;                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Winter2021.Snowman.Multicast_SpawnSnowman
	 */
	struct ASnowman_Multicast_SpawnSnowman_Params
	{
	public:
		struct FSnowmanSpawnData                                   spawnData;                                               // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Winter2021.Snowman.Multicast_SetSnowmanMaterialVariant
	 */
	struct ASnowman_Multicast_SetSnowmanMaterialVariant_Params
	{
	public:
		int32_t                                                    materialVariantIndex;                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Winter2021.Snowman.Multicast_SetSnowmanHiddenInGame
	 */
	struct ASnowman_Multicast_SetSnowmanHiddenInGame_Params
	{
	public:
		bool                                                       IsHidden;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Winter2021.Snowman.Multicast_OnSnowmanStartBeingUsedBySurvivor
	 */
	struct ASnowman_Multicast_OnSnowmanStartBeingUsedBySurvivor_Params
	{
	public:
		class ACamperPlayer*                                       survivorUsingSnowman;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Winter2021.Snowman.Multicast_OnSnowmanStartBeingControlledBySurvivor
	 */
	struct ASnowman_Multicast_OnSnowmanStartBeingControlledBySurvivor_Params
	{
	public:
		class ACamperPlayer*                                       survivorUsingSnowman;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Winter2021.Snowman.Multicast_DrawDebugCollisionCheck
	 */
	struct ASnowman_Multicast_DrawDebugCollisionCheck_Params
	{
	public:
		struct FVector                                             BoxExtent;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      debugLifetime;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Winter2021.Snowman.Cosmetic_SetSnowmanMaterialVariant
	 */
	struct ASnowman_Cosmetic_SetSnowmanMaterialVariant_Params
	{
	public:
		int32_t                                                    materialVariantIndex;                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Winter2021.Snowman.Cosmetic_OnSnowmanStartBeingUsedBySurvivor
	 */
	struct ASnowman_Cosmetic_OnSnowmanStartBeingUsedBySurvivor_Params
	{
	public:
		class ACamperPlayer*                                       survivorUsingSnowman;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Winter2021.Snowman.Cosmetic_OnSnowmanStartBeingControlledBySurvivor
	 */
	struct ASnowman_Cosmetic_OnSnowmanStartBeingControlledBySurvivor_Params
	{
	public:
		class ACamperPlayer*                                       survivorUsingSnowman;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Winter2021.Snowman.Cosmetic_OnSnowmanSpawned
	 */
	struct ASnowman_Cosmetic_OnSnowmanSpawned_Params
	{	};

	/**
	 * Function Winter2021.Snowman.Cosmetic_OnSnowmanDestroyedBySurvivorRunExit
	 */
	struct ASnowman_Cosmetic_OnSnowmanDestroyedBySurvivorRunExit_Params
	{
	public:
		class ACamperPlayer*                                       survivorUsingSnowman;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Winter2021.Snowman.Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty
	 */
	struct ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty_Params
	{
	public:
		class ASlasherPlayer*                                      killerAttackingSnowman;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Winter2021.Snowman.Cosmetic_OnSnowmanDestroyedByAttackWhileControlled
	 */
	struct ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileControlled_Params
	{
	public:
		class ACamperPlayer*                                       survivorUsingSnowman;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ASlasherPlayer*                                      killerAttackingSnowman;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Winter2021.Snowman.Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor
	 */
	struct ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor_Params
	{
	public:
		class ACamperPlayer*                                       survivorUsingSnowman;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Winter2021.Snowman.Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller
	 */
	struct ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller_Params
	{
	public:
		class ASlasherPlayer*                                      killerAttackingSnowman;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Winter2021.SnowmanAnimInstance.Cosmetic_OnSnowmanDestroyedEvent
	 */
	struct USnowmanAnimInstance_Cosmetic_OnSnowmanDestroyedEvent_Params
	{
	public:
		ESnowmanDestructionType                                    snowmanDestructionType;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Winter2021.SnowmanSpawnPlacementStrategy.Authority_OnIntroCompletedOrLevelReadyToPlay
	 */
	struct USnowmanSpawnPlacementStrategy_Authority_OnIntroCompletedOrLevelReadyToPlay_Params
	{	};

	/**
	 * Function Winter2021.Winter2021EventComponent.DBD_Winter2021VisualizeCalculatedSpawnData
	 */
	struct UWinter2021EventComponent_DBD_Winter2021VisualizeCalculatedSpawnData_Params
	{
	public:
		float                                                      numberOfSeconds;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Winter2021.Winter2021EventComponent.DBD_Winter2021ShowSnowmenSpawnCollisionChecks
	 */
	struct UWinter2021EventComponent_DBD_Winter2021ShowSnowmenSpawnCollisionChecks_Params
	{
	public:
		float                                                      numberOfSeconds;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Winter2021.Winter2021EventComponent.DBD_Winter2021RecalculateSpawnPoints
	 */
	struct UWinter2021EventComponent_DBD_Winter2021RecalculateSpawnPoints_Params
	{	};

	/**
	 * Function Winter2021.Winter2021EventComponent.DBD_Winter2021ForceRespawnAllSnowmen
	 */
	struct UWinter2021EventComponent_DBD_Winter2021ForceRespawnAllSnowmen_Params
	{	};

	/**
	 * Function Winter2021.Winter2021PlayerComponent.Client_UnlockCosmetic
	 */
	struct UWinter2021PlayerComponent_Client_UnlockCosmetic_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

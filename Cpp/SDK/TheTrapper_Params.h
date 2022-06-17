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
	 * Function TheTrapper.BearTrap.TrySetTrappedPlayer
	 */
	struct ABearTrap_TrySetTrappedPlayer_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTrapper.BearTrap.SetTrappedPlayerSinceMoved
	 */
	struct ABearTrap_SetTrappedPlayerSinceMoved_Params
	{
	public:
		bool                                                       didTrap;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTrapper.BearTrap.SetTrappedPlayer
	 */
	struct ABearTrap_SetTrappedPlayer_Params
	{
	public:
		class ADBDPlayer*                                          trappedPlayer;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTrapper.BearTrap.PlayMontage
	 */
	struct ABearTrap_PlayMontage_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTrapper.BearTrap.OnTrappedPlayerPickedUp
	 */
	struct ABearTrap_OnTrappedPlayerPickedUp_Params
	{
	public:
		class ADBDPlayer*                                          picker;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTrapper.BearTrap.OnTrapDetectionZoneOverlapEnd
	 */
	struct ABearTrap_OnTrapDetectionZoneOverlapEnd_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTrapper.BearTrap.OnTrapDetectionZoneOverlapBegin
	 */
	struct ABearTrap_OnTrapDetectionZoneOverlapBegin_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          SweepResult;                                             // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTrapper.BearTrap.OnSlasherSet
	 */
	struct ABearTrap_OnSlasherSet_Params
	{
	public:
		class ASlasherPlayer*                                      Slasher;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTrapper.BearTrap.OnSafetyZoneEndOverlap
	 */
	struct ABearTrap_OnSafetyZoneEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTrapper.BearTrap.OnLevelReadyToPlay_Implementation
	 */
	struct ABearTrap_OnLevelReadyToPlay_Implementation_Params
	{	};

	/**
	 * Function TheTrapper.BearTrap.OnCollectUpdateStart
	 */
	struct ABearTrap_OnCollectUpdateStart_Params
	{	};

	/**
	 * Function TheTrapper.BearTrap.OnCollectUpdateEnd
	 */
	struct ABearTrap_OnCollectUpdateEnd_Params
	{	};

	/**
	 * Function TheTrapper.BearTrap.IsTrapperOutOfSafetyZone
	 */
	struct ABearTrap_IsTrapperOutOfSafetyZone_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTrapper.BearTrap.InitializeTrapSurvivorInteraction
	 */
	struct ABearTrap_InitializeTrapSurvivorInteraction_Params
	{
	public:
		class UInteractionDefinition*                              Interaction;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTrapper.BearTrap.InitializeTrapKillerInteraction
	 */
	struct ABearTrap_InitializeTrapKillerInteraction_Params
	{
	public:
		class UInteractionDefinition*                              Interaction;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTrapper.BearTrap.InitializeMainInteractor
	 */
	struct ABearTrap_InitializeMainInteractor_Params
	{
	public:
		class UInteractor*                                         Interactor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTrapper.BearTrap.HasTrappedPlayerSinceMoved
	 */
	struct ABearTrap_HasTrappedPlayerSinceMoved_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTrapper.BearTrap.HasTrappedPlayer
	 */
	struct ABearTrap_HasTrappedPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTrapper.BearTrap.GetTrappedPlayer
	 */
	struct ABearTrap_GetTrappedPlayer_Params
	{
	public:
		class ADBDPlayer*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTrapper.BearTrap.GetAnimInstance
	 */
	struct ABearTrap_GetAnimInstance_Params
	{
	public:
		class UBearTrapAnimInstance*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTrapper.BearTrap.GetAkAudioComponent
	 */
	struct ABearTrap_GetAkAudioComponent_Params
	{
	public:
		class UAkComponent*                                        ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTrapper.BearTrap.Cosmetic_OnPlayerTrapped
	 */
	struct ABearTrap_Cosmetic_OnPlayerTrapped_Params
	{
	public:
		class ADBDPlayer*                                          trappedPlayer;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTrapper.BearTrapAnimInstance.SetWasJustDisarmed
	 */
	struct UBearTrapAnimInstance_SetWasJustDisarmed_Params
	{
	public:
		bool                                                       wasJustDisarmed;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTrapper.BearTrapAnimInstance.SetIsTrapSet
	 */
	struct UBearTrapAnimInstance_SetIsTrapSet_Params
	{
	public:
		bool                                                       IsTrapSet;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTrapper.BearTrapAnimInstance.SetIsBeingCollected
	 */
	struct UBearTrapAnimInstance_SetIsBeingCollected_Params
	{
	public:
		bool                                                       isBeingCollected;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTrapper.BearTrapAnimInstance.SetContainsSurvivor
	 */
	struct UBearTrapAnimInstance_SetContainsSurvivor_Params
	{
	public:
		bool                                                       containsSurvivor;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTrapper.BearTrapKillerComponent.Server_TryDisarmTrap
	 */
	struct UBearTrapKillerComponent_Server_TryDisarmTrap_Params
	{
	public:
		class ABearTrap*                                           trapToDisarm;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTrapper.BearTrapKillerComponent.Multicast_DisarmTrap
	 */
	struct UBearTrapKillerComponent_Multicast_DisarmTrap_Params
	{
	public:
		class ABearTrap*                                           trapToDisarm;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTrapper.Untrap.GetTrap
	 */
	struct UUntrap_GetTrap_Params
	{
	public:
		class ABearTrap*                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

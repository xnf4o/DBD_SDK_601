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
	 * Function DBDInteraction.ActivePhaseWalkInteraction.OnPowerCollected
	 */
	struct UActivePhaseWalkInteraction_OnPowerCollected_Params
	{
	public:
		class ADBDPlayer*                                          collector;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInteraction.ActivePhaseWalkInteraction.OnPlayerLocallyObservedChanged
	 */
	struct UActivePhaseWalkInteraction_OnPlayerLocallyObservedChanged_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInteraction.ActivePhaseWalkInteraction.GetChargeTime
	 */
	struct UActivePhaseWalkInteraction_GetChargeTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInteraction.ActivePhaseWalkInteraction.Cosmetic_ResetChargeVFX
	 */
	struct UActivePhaseWalkInteraction_Cosmetic_ResetChargeVFX_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInteraction.BaseStalkModeInteraction.GetStalkerComponent
	 */
	struct UBaseStalkModeInteraction_GetStalkerComponent_Params
	{
	public:
		class UStalkerComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInteraction.BaseStalkModeInteraction.CanStalk
	 */
	struct UBaseStalkModeInteraction_CanStalk_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInteraction.BasicChargeableInteraction.OnRep_SpawnedChargeable
	 */
	struct UBasicChargeableInteraction_OnRep_SpawnedChargeable_Params
	{	};

	/**
	 * Function DBDInteraction.BlessTotem.GetTotem
	 */
	struct UBlessTotem_GetTotem_Params
	{
	public:
		class ATotem*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInteraction.CollectItemInteraction.GetItem
	 */
	struct UCollectItemInteraction_GetItem_Params
	{
	public:
		class ACollectable*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInteraction.DestroyDemogorgonPortalInteraction.Authority_OnChargeApplied
	 */
	struct UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Params
	{
	public:
		float                                                      individualChargeAmount;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      totalChargeAmount;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              chargeInstigator;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       wasCoop;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInteraction.DropItemInteraction.GetItem
	 */
	struct UDropItemInteraction_GetItem_Params
	{
	public:
		class ACollectable*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInteraction.GeneratorDamageInteraction.Authority_DamageGenerator
	 */
	struct UGeneratorDamageInteraction_Authority_DamageGenerator_Params
	{
	public:
		class ADBDPlayer*                                          damageBy;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGenerator*                                          Generator;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInteraction.GeneratorRepairInteraction.SetIsObstructed
	 */
	struct UGeneratorRepairInteraction_SetIsObstructed_Params
	{
	public:
		bool                                                       obstructed;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInteraction.GeneratorRepairInteraction.GetOwningGenerator
	 */
	struct UGeneratorRepairInteraction_GetOwningGenerator_Params
	{
	public:
		class AGenerator*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInteraction.GeneratorToolboxRepairInteraction.HasChargedToolBox
	 */
	struct UGeneratorToolboxRepairInteraction_HasChargedToolBox_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInteraction.GeneratorToolboxRepairInteraction.GetInteractionTextWhenEmpty
	 */
	struct UGeneratorToolboxRepairInteraction_GetInteractionTextWhenEmpty_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInteraction.HealInteraction.GetTargetSurvivor
	 */
	struct UHealInteraction_GetTargetSurvivor_Params
	{
	public:
		class ACamperPlayer*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInteraction.HealInteraction.Authority_OnChargeApplied
	 */
	struct UHealInteraction_Authority_OnChargeApplied_Params
	{
	public:
		float                                                      individualChargeAmount;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      totalChargeAmount;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              chargeInstigator;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       wasCoop;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInteraction.HookSurvivorDefinition.GetMeatHook
	 */
	struct UHookSurvivorDefinition_GetMeatHook_Params
	{
	public:
		class AMeatHook*                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInteraction.LinkedVomitInteraction.IsVomiting
	 */
	struct ULinkedVomitInteraction_IsVomiting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInteraction.LinkedVomitInteraction.GetVomitStateComponent
	 */
	struct ULinkedVomitInteraction_GetVomitStateComponent_Params
	{
	public:
		class UVomitStateComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInteraction.SearchChestInteractionBase.FireChestScoreEvent
	 */
	struct USearchChestInteractionBase_FireChestScoreEvent_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInteraction.OpenChestInteraction.CollectItemIfEmptyHanded
	 */
	struct UOpenChestInteraction_CollectItemIfEmptyHanded_Params
	{
	public:
		class ACollectable*                                        Collectable;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInteraction.TeleportToDemogorgonPortalInteraction.OnTeleportInteractionCanceledVFX
	 */
	struct UTeleportToDemogorgonPortalInteraction_OnTeleportInteractionCanceledVFX_Params
	{	};

	/**
	 * Function DBDInteraction.TeleportToDemogorgonPortalInteraction.OnSlasherSet
	 */
	struct UTeleportToDemogorgonPortalInteraction_OnSlasherSet_Params
	{
	public:
		class ASlasherPlayer*                                      Slasher;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInteraction.ThrowInteraction.InitThrowCancellationExitTime
	 */
	struct UThrowInteraction_InitThrowCancellationExitTime_Params
	{
	public:
		float                                                      value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInteraction.ThrowInteraction.HasCancelledThrow
	 */
	struct UThrowInteraction_HasCancelledThrow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInteraction.UnhookReplicationComponent.Multicast_SetPlayerBeingUnhooked
	 */
	struct UUnhookReplicationComponent_Multicast_SetPlayerBeingUnhooked_Params
	{
	public:
		class UUnhook*                                             unhookInteraction;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACamperPlayer*                                       playerBeingUnhooked;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

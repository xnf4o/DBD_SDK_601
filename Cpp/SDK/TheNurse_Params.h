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
	 * Function TheNurse.AnxiousGaspAddon.PlayScream
	 */
	struct UAnxiousGaspAddon_PlayScream_Params
	{
	public:
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheNurse.AnxiousGaspAddon.OnDetectorOverlapBegin
	 */
	struct UAnxiousGaspAddon_OnDetectorOverlapBegin_Params
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
	 * Function TheNurse.BalancedLanding.Server_WarnBalancedLandingPredicted
	 */
	struct UBalancedLanding_Server_WarnBalancedLandingPredicted_Params
	{	};

	/**
	 * Function TheNurse.BalancedLanding.Client_UnvalidateBalanceLanding
	 */
	struct UBalancedLanding_Client_UnvalidateBalanceLanding_Params
	{	};

	/**
	 * Function TheNurse.BlinkPlayerComponent.Server_StartBlink
	 */
	struct UBlinkPlayerComponent_Server_StartBlink_Params
	{
	public:
		struct FBlinkParams                                        Params;                                                  // 0x0000(0x0040)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheNurse.BlinkPlayerComponent.Server_EndBlink
	 */
	struct UBlinkPlayerComponent_Server_EndBlink_Params
	{	};

	/**
	 * Function TheNurse.BlinkPlayerComponent.Multicast_StartBlink
	 */
	struct UBlinkPlayerComponent_Multicast_StartBlink_Params
	{
	public:
		struct FBlinkParams                                        Params;                                                  // 0x0000(0x0040)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheNurse.BlinkPlayerComponent.Multicast_EndBlink
	 */
	struct UBlinkPlayerComponent_Multicast_EndBlink_Params
	{	};

	/**
	 * Function TheNurse.BlinkPlayerComponent.Local_OnMovementModeChanged
	 */
	struct UBlinkPlayerComponent_Local_OnMovementModeChanged_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              PreviousCustomMode;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheNurse.BlinkPowerPlayerComponent.Setup
	 */
	struct UBlinkPowerPlayerComponent_Setup_Params
	{
	public:
		struct FBlinkPowerSetupParams                              Params;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheNurse.BlinkPowerPlayerComponent.Server_TriggerCooldown
	 */
	struct UBlinkPowerPlayerComponent_Server_TriggerCooldown_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheNurse.BlinkPowerPlayerComponent.Server_TriggerChainBlink
	 */
	struct UBlinkPowerPlayerComponent_Server_TriggerChainBlink_Params
	{
	public:
		int32_t                                                    remainingBlinkCharges;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheNurse.BlinkPowerPlayerComponent.Server_SetState
	 */
	struct UBlinkPowerPlayerComponent_Server_SetState_Params
	{
	public:
		EBlinkPowerState                                           State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheNurse.BlinkPowerPlayerComponent.Server_InterruptDuringChainBlink
	 */
	struct UBlinkPowerPlayerComponent_Server_InterruptDuringChainBlink_Params
	{
	public:
		class AActor*                                              interruptedPlayer;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheNurse.BlinkPowerPlayerComponent.OnRep_BlinkState
	 */
	struct UBlinkPowerPlayerComponent_OnRep_BlinkState_Params
	{
	public:
		EBlinkPowerState                                           oldState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheNurse.BlinkPowerPlayerComponent.OnRep_BlinkCharges
	 */
	struct UBlinkPowerPlayerComponent_OnRep_BlinkCharges_Params
	{	};

	/**
	 * Function TheNurse.BlinkPowerPlayerComponent.OnLevelReadyToPlay
	 */
	struct UBlinkPowerPlayerComponent_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheNurse.BlinkPowerPlayerComponent.OnAttackStarted
	 */
	struct UBlinkPowerPlayerComponent_OnAttackStarted_Params
	{
	public:
		EAttackType                                                attackType;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheNurse.BlinkPowerPlayerComponent.OnAttackFinished
	 */
	struct UBlinkPowerPlayerComponent_OnAttackFinished_Params
	{
	public:
		EAttackType                                                attackType;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheNurse.BlinkPowerPlayerComponent.IsChargingBlink
	 */
	struct UBlinkPowerPlayerComponent_IsChargingBlink_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheNurse.BlinkPowerPlayerComponent.IsChargeFull
	 */
	struct UBlinkPowerPlayerComponent_IsChargeFull_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheNurse.BlinkPowerPlayerComponent.IsBlinking
	 */
	struct UBlinkPowerPlayerComponent_IsBlinking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheNurse.BlinkPowerPlayerComponent.GetRechargeProgressPercent
	 */
	struct UBlinkPowerPlayerComponent_GetRechargeProgressPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheNurse.BlinkPowerPlayerComponent.GetPowerState
	 */
	struct UBlinkPowerPlayerComponent_GetPowerState_Params
	{
	public:
		EBlinkPowerState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheNurse.BlinkPowerPlayerComponent.GetCooldownTimerDuration
	 */
	struct UBlinkPowerPlayerComponent_GetCooldownTimerDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheNurse.BlinkPowerPlayerComponent.GetCooldownRemainingTime
	 */
	struct UBlinkPowerPlayerComponent_GetCooldownRemainingTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheNurse.BlinkPowerPlayerComponent.GetCooldownProgressPercent
	 */
	struct UBlinkPowerPlayerComponent_GetCooldownProgressPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheNurse.BlinkPowerPlayerComponent.GetChainBlinkTimerDuration
	 */
	struct UBlinkPowerPlayerComponent_GetChainBlinkTimerDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheNurse.BlinkPowerPlayerComponent.GetChainBlinkRemainingTime
	 */
	struct UBlinkPowerPlayerComponent_GetChainBlinkRemainingTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheNurse.BlinkPowerPlayerComponent.GetChainBlinkProgressPercent
	 */
	struct UBlinkPowerPlayerComponent_GetChainBlinkProgressPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheNurse.BlinkPowerPlayerComponent.GetBlinkCharges
	 */
	struct UBlinkPowerPlayerComponent_GetBlinkCharges_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheNurse.NurseAnimInstance.OnBlinkTriggered
	 */
	struct UNurseAnimInstance_OnBlinkTriggered_Params
	{	};

	/**
	 * Function TheNurse.NurseHelper.GetBlinkPowerItem
	 */
	struct UNurseHelper_GetBlinkPowerItem_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ABlinkPowerItem*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheNurse.StreetwiseEffect.Authority_OnInRangeChanged
	 */
	struct UStreetwiseEffect_Authority_OnInRangeChanged_Params
	{
	public:
		bool                                                       InRange;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

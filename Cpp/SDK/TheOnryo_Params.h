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
	 * Function TheOnryo.Addon_K27Power_19.Authority_OnIntroCompleted
	 */
	struct UAddon_K27Power_19_Authority_OnIntroCompleted_Params
	{	};

	/**
	 * Function TheOnryo.Addon_K27Power_21.Cosmetic_OnAddonTriggered
	 */
	struct UAddon_K27Power_21_Cosmetic_OnAddonTriggered_Params
	{
	public:
		bool                                                       televisionsWerePowered;                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.Addon_K27Power_21.Client_OnAddonTriggered
	 */
	struct UAddon_K27Power_21_Client_OnAddonTriggered_Params
	{
	public:
		bool                                                       televisionsWerePowered;                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.BaseManifestInteraction.Cosmetic_OnInteractionSucceeded
	 */
	struct UBaseManifestInteraction_Cosmetic_OnInteractionSucceeded_Params
	{
	public:
		class ADBDPlayer*                                          onryo;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.BaseManifestInteraction.Cosmetic_OnInteractionStarted
	 */
	struct UBaseManifestInteraction_Cosmetic_OnInteractionStarted_Params
	{
	public:
		class ADBDPlayer*                                          onryo;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.BaseManifestInteraction.Cosmetic_OnInteractionCancelled
	 */
	struct UBaseManifestInteraction_Cosmetic_OnInteractionCancelled_Params
	{
	public:
		class ADBDPlayer*                                          onryo;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.CondemnedComponent.OnRep_HoldingVHS
	 */
	struct UCondemnedComponent_OnRep_HoldingVHS_Params
	{	};

	/**
	 * Function TheOnryo.CondemnedComponent.OnRep_CondemnedLevel
	 */
	struct UCondemnedComponent_OnRep_CondemnedLevel_Params
	{
	public:
		float                                                      previousValue;                                           // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.CondemnedComponent.OnKillerSet
	 */
	struct UCondemnedComponent_OnKillerSet_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.CondemnedComponent.GetCondemnedPercent
	 */
	struct UCondemnedComponent_GetCondemnedPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.CondemnedComponent.DBD_SetCondemnMoriableAndDownAllSurvivors
	 */
	struct UCondemnedComponent_DBD_SetCondemnMoriableAndDownAllSurvivors_Params
	{	};

	/**
	 * Function TheOnryo.CondemnedComponent.DBD_SetCondemnedLevel
	 */
	struct UCondemnedComponent_DBD_SetCondemnedLevel_Params
	{
	public:
		float                                                      Level;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.CondemnedComponent.Cosmetic_OnReceiveTape
	 */
	struct UCondemnedComponent_Cosmetic_OnReceiveTape_Params
	{
	public:
		class ACamperPlayer*                                       camper;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.CondemnedComponent.Cosmetic_OnPickedUpByKiller
	 */
	struct UCondemnedComponent_Cosmetic_OnPickedUpByKiller_Params
	{
	public:
		class ACamperPlayer*                                       camper;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.CondemnedComponent.Cosmetic_OnLoseTape
	 */
	struct UCondemnedComponent_Cosmetic_OnLoseTape_Params
	{
	public:
		class ACamperPlayer*                                       camper;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.CondemnedComponent.Cosmetic_OnLoseCondemnStack
	 */
	struct UCondemnedComponent_Cosmetic_OnLoseCondemnStack_Params
	{
	public:
		class ACamperPlayer*                                       camper;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      currentStacks;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.CondemnedComponent.Cosmetic_OnGainCondemnStack
	 */
	struct UCondemnedComponent_Cosmetic_OnGainCondemnStack_Params
	{
	public:
		class ACamperPlayer*                                       camper;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      currentStacks;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.CondemnedComponent.Cosmetic_OnFullyCondemned
	 */
	struct UCondemnedComponent_Cosmetic_OnFullyCondemned_Params
	{
	public:
		class ACamperPlayer*                                       camper;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      currentStacks;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.CondemnedComponent.Cosmetic_OnDroppedByKiller
	 */
	struct UCondemnedComponent_Cosmetic_OnDroppedByKiller_Params
	{
	public:
		class ACamperPlayer*                                       camper;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.K27Addon_16_ScreamRevealComponent.Server_RevealAndMakeSurvivorScream
	 */
	struct UK27Addon_16_ScreamRevealComponent_Server_RevealAndMakeSurvivorScream_Params
	{
	public:
		class ADBDPlayer*                                          survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      screamRevealDuration;                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.K27Addon_16_ScreamRevealComponent.Multicast_RevealAndMakeSurvivorScream
	 */
	struct UK27Addon_16_ScreamRevealComponent_Multicast_RevealAndMakeSurvivorScream_Params
	{
	public:
		class ADBDPlayer*                                          survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      screamRevealDuration;                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.K27Addon_16_ScreamRevealComponent.BP_RevealAndMakeSurvivorScream
	 */
	struct UK27Addon_16_ScreamRevealComponent_BP_RevealAndMakeSurvivorScream_Params
	{
	public:
		class ADBDPlayer*                                          survivorPlayer;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      screamRevealDuration;                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.K27P01.Authority_OnSurvivorUnhookedOffScourgeHook
	 */
	struct UK27P01_Authority_OnSurvivorUnhookedOffScourgeHook_Params
	{
	public:
		struct FGameEventData                                      GameEventData;                                           // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.K27P02.Multicast_ShowBubbleNotification
	 */
	struct UK27P02_Multicast_ShowBubbleNotification_Params
	{
	public:
		class AGenerator*                                          triggeringGenerator;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.K27P02.Multicast_AddGeneratorAura
	 */
	struct UK27P02_Multicast_AddGeneratorAura_Params
	{
	public:
		class AGenerator*                                          Generator;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.K27P02.Cosmetic_ShowBubbleNotification
	 */
	struct UK27P02_Cosmetic_ShowBubbleNotification_Params
	{
	public:
		class AGenerator*                                          triggeringGenerator;                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.K27P03.Multicast_HighlightBlockedGeneratorForKiller
	 */
	struct UK27P03_Multicast_HighlightBlockedGeneratorForKiller_Params
	{
	public:
		class AGenerator*                                          Generator;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.ManifestationComponent.OnRep_LingeringUndetectableEndTimeStamp
	 */
	struct UManifestationComponent_OnRep_LingeringUndetectableEndTimeStamp_Params
	{	};

	/**
	 * Function TheOnryo.ManifestationComponent.OnRep_IsManifested
	 */
	struct UManifestationComponent_OnRep_IsManifested_Params
	{	};

	/**
	 * Function TheOnryo.ManifestationComponent.OnLingeringUndetectableTimerCompleted
	 */
	struct UManifestationComponent_OnLingeringUndetectableTimerCompleted_Params
	{	};

	/**
	 * Function TheOnryo.ManifestationComponent.Multicast_OnManifestationTransitionComplete
	 */
	struct UManifestationComponent_Multicast_OnManifestationTransitionComplete_Params
	{	};

	/**
	 * Function TheOnryo.ManifestationComponent.Multicast_OnManifestationChanged
	 */
	struct UManifestationComponent_Multicast_OnManifestationChanged_Params
	{
	public:
		bool                                                       isManifested;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isImmediateManifest;                                     // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.ManifestationComponent.Authority_OnMoriStarted
	 */
	struct UManifestationComponent_Authority_OnMoriStarted_Params
	{	};

	/**
	 * Function TheOnryo.NearPoweredTelevisionWithLingerTime.OnLevelReadyToPlay
	 */
	struct UNearPoweredTelevisionWithLingerTime_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheOnryo.NearPoweredTelevisionWithLingerTime.GetPercentRemainingDuration
	 */
	struct UNearPoweredTelevisionWithLingerTime_GetPercentRemainingDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.OnryoAfterImageComponent.ShouldShowAfterImageChanged
	 */
	struct UOnryoAfterImageComponent_ShouldShowAfterImageChanged_Params
	{
	public:
		bool                                                       shouldBeVisible;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.OnryoAfterImageComponent.ShouldShowAfterImage
	 */
	struct UOnryoAfterImageComponent_ShouldShowAfterImage_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.OnryoAfterImageComponent.IsOnryoInvisible
	 */
	struct UOnryoAfterImageComponent_IsOnryoInvisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.OnryoAfterImageComponent.IsInteracting
	 */
	struct UOnryoAfterImageComponent_IsInteracting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.OnryoAfterImageComponent.IsAttacking
	 */
	struct UOnryoAfterImageComponent_IsAttacking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.OnryoAfterImageComponent.GetKiller
	 */
	struct UOnryoAfterImageComponent_GetKiller_Params
	{
	public:
		class ASlasherPlayer*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.OnryoFXInterface.Cosmetic_OnTeleportSuccess
	 */
	struct UOnryoFXInterface_Cosmetic_OnTeleportSuccess_Params
	{	};

	/**
	 * Function TheOnryo.OnryoFXInterface.Cosmetic_OnTeleportStart
	 */
	struct UOnryoFXInterface_Cosmetic_OnTeleportStart_Params
	{	};

	/**
	 * Function TheOnryo.OnryoFXInterface.Cosmetic_OnTeleportFinished
	 */
	struct UOnryoFXInterface_Cosmetic_OnTeleportFinished_Params
	{	};

	/**
	 * Function TheOnryo.OnryoFXInterface.Cosmetic_OnTeleportCancelled
	 */
	struct UOnryoFXInterface_Cosmetic_OnTeleportCancelled_Params
	{	};

	/**
	 * Function TheOnryo.OnryoFXInterface.Cosmetic_OnManifestStateChanged
	 */
	struct UOnryoFXInterface_Cosmetic_OnManifestStateChanged_Params
	{
	public:
		bool                                                       isManifested;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isImmediateManifest;                                     // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.OnryoFXInterface.Cosmetic_OnKillerVisibilityChanged
	 */
	struct UOnryoFXInterface_Cosmetic_OnKillerVisibilityChanged_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isFlickering;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isManifested;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isInvisibleDueToOutOfVisibiltyRange;                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       force;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.OnryoFXInterface.Cosmetic_OnChargeUnmanifestSuccess
	 */
	struct UOnryoFXInterface_Cosmetic_OnChargeUnmanifestSuccess_Params
	{	};

	/**
	 * Function TheOnryo.OnryoFXInterface.Cosmetic_OnChargeUnmanifestStart
	 */
	struct UOnryoFXInterface_Cosmetic_OnChargeUnmanifestStart_Params
	{	};

	/**
	 * Function TheOnryo.OnryoFXInterface.Cosmetic_OnChargeUnmanifestCancelled
	 */
	struct UOnryoFXInterface_Cosmetic_OnChargeUnmanifestCancelled_Params
	{	};

	/**
	 * Function TheOnryo.OnryoFXInterface.Cosmetic_OnChargeManifestSuccess
	 */
	struct UOnryoFXInterface_Cosmetic_OnChargeManifestSuccess_Params
	{	};

	/**
	 * Function TheOnryo.OnryoFXInterface.Cosmetic_OnChargeManifestStart
	 */
	struct UOnryoFXInterface_Cosmetic_OnChargeManifestStart_Params
	{	};

	/**
	 * Function TheOnryo.OnryoFXInterface.Cosmetic_OnChargeManifestCancelled
	 */
	struct UOnryoFXInterface_Cosmetic_OnChargeManifestCancelled_Params
	{	};

	/**
	 * Function TheOnryo.OnryoPower.PowerCooldownEnd_Cosmetic
	 */
	struct AOnryoPower_PowerCooldownEnd_Cosmetic_Params
	{	};

	/**
	 * Function TheOnryo.OnryoTelevision.OnRep_SurvivorsThatCanInsertTape
	 */
	struct AOnryoTelevision_OnRep_SurvivorsThatCanInsertTape_Params
	{	};

	/**
	 * Function TheOnryo.OnryoTelevision.OnRep_IsPowered
	 */
	struct AOnryoTelevision_OnRep_IsPowered_Params
	{
	public:
		bool                                                       previousIsPowered;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.OnryoTelevision.OnLocallyObservedChanged
	 */
	struct AOnryoTelevision_OnLocallyObservedChanged_Params
	{	};

	/**
	 * Function TheOnryo.OnryoTelevision.OnKillerSet
	 */
	struct AOnryoTelevision_OnKillerSet_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.OnryoTelevision.OnCosmeticTransitionStateFinished
	 */
	struct AOnryoTelevision_OnCosmeticTransitionStateFinished_Params
	{	};

	/**
	 * Function TheOnryo.OnryoTelevision.IsAnySurvivorWithoutTapeNearby
	 */
	struct AOnryoTelevision_IsAnySurvivorWithoutTapeNearby_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.OnryoTelevision.GetTelevisionCosmeticState
	 */
	struct AOnryoTelevision_GetTelevisionCosmeticState_Params
	{
	public:
		ETelevisionCosmeticState                                   ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.OnryoTelevision.Cosmetic_SetIsTeleportTarget
	 */
	struct AOnryoTelevision_Cosmetic_SetIsTeleportTarget_Params
	{
	public:
		bool                                                       Target;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.OnryoTelevision.Cosmetic_OnTVSelectedByLocalSurvivor
	 */
	struct AOnryoTelevision_Cosmetic_OnTVSelectedByLocalSurvivor_Params
	{
	public:
		class ADBDPlayer*                                          survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.OnryoTelevision.Cosmetic_OnTelevisionCosmeticStateChanged
	 */
	struct AOnryoTelevision_Cosmetic_OnTelevisionCosmeticStateChanged_Params
	{
	public:
		ETelevisionCosmeticState                                   NextState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETelevisionCosmeticState                                   previousState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.OnryoTelevision.Cosmetic_OnTeleportStarted
	 */
	struct AOnryoTelevision_Cosmetic_OnTeleportStarted_Params
	{	};

	/**
	 * Function TheOnryo.OnryoTelevision.Cosmetic_OnTeleportCompleted
	 */
	struct AOnryoTelevision_Cosmetic_OnTeleportCompleted_Params
	{	};

	/**
	 * Function TheOnryo.OnryoTelevision.Cosmetic_OnTeleportCancelled
	 */
	struct AOnryoTelevision_Cosmetic_OnTeleportCancelled_Params
	{	};

	/**
	 * Function TheOnryo.OnryoTelevision.Cosmetic_OnStatusEffectZoneVFXActiveChanged
	 */
	struct AOnryoTelevision_Cosmetic_OnStatusEffectZoneVFXActiveChanged_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.OnryoTelevision.Cosmetic_OnCamperCanInsertTapeChanged
	 */
	struct AOnryoTelevision_Cosmetic_OnCamperCanInsertTapeChanged_Params
	{
	public:
		bool                                                       canInsertTape;                                           // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.OnryoTelevision.Authority_OnRepowerTimerDone
	 */
	struct AOnryoTelevision_Authority_OnRepowerTimerDone_Params
	{	};

	/**
	 * Function TheOnryo.OnryoTVInitialCooldownStateComponent.OnRep_IsDone
	 */
	struct UOnryoTVInitialCooldownStateComponent_OnRep_IsDone_Params
	{	};

	/**
	 * Function TheOnryo.OnryoTVInitialCooldownStateComponent.OnCooldownDone
	 */
	struct UOnryoTVInitialCooldownStateComponent_OnCooldownDone_Params
	{	};

	/**
	 * Function TheOnryo.OnryoTVInitialCooldownStateComponent.Authority_TryStartCooldown
	 */
	struct UOnryoTVInitialCooldownStateComponent_Authority_TryStartCooldown_Params
	{	};

	/**
	 * Function TheOnryo.OnryoUnmanifestCooldownInteraction.SetOnryoPower
	 */
	struct UOnryoUnmanifestCooldownInteraction_SetOnryoPower_Params
	{
	public:
		class AOnryoPower*                                         OnryoPower;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.OnryoVisibilityComponent.OnLocallyObservedChanged
	 */
	struct UOnryoVisibilityComponent_OnLocallyObservedChanged_Params
	{	};

	/**
	 * Function TheOnryo.OnryoVisibilityComponent.OnKillerInSurvivorSightRangeChanged
	 */
	struct UOnryoVisibilityComponent_OnKillerInSurvivorSightRangeChanged_Params
	{
	public:
		bool                                                       InRange;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.OnryoVisibilityComponent.OnIntroCompleted
	 */
	struct UOnryoVisibilityComponent_OnIntroCompleted_Params
	{	};

	/**
	 * Function TheOnryo.OnryoVisibilityComponent.Multicast_OnManifestationStateChanged
	 */
	struct UOnryoVisibilityComponent_Multicast_OnManifestationStateChanged_Params
	{
	public:
		bool                                                       isManifested;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isImmediateManifest;                                     // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.S30P02.GetHealingOthersBonus
	 */
	struct US30P02_GetHealingOthersBonus_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.OnryoTeleportTargeterComponent.Server_SetTeleportTarget
	 */
	struct UOnryoTeleportTargeterComponent_Server_SetTeleportTarget_Params
	{
	public:
		class AOnryoTelevision*                                    TV;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOnryo.OnryoTeleportTargeterComponent.OnRep_TargetTelevision
	 */
	struct UOnryoTeleportTargeterComponent_OnRep_TargetTelevision_Params
	{	};

	/**
	 * Function TheOnryo.UnmanifestInteraction.SetOnryoPower
	 */
	struct UUnmanifestInteraction_SetOnryoPower_Params
	{
	public:
		class AOnryoPower*                                         OnryoPower;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

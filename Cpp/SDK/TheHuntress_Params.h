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
	 * Function TheHuntress.DeadHard.GetExhaustedDuration
	 */
	struct UDeadHard_GetExhaustedDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheHuntress.HatchetLauncher.IsLaunchedHatchetFullyCharged
	 */
	struct UHatchetLauncher_IsLaunchedHatchetFullyCharged_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheHuntress.HatchetRack.SetMovableHatchetVisibility
	 */
	struct AHatchetRack_SetMovableHatchetVisibility_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheHuntress.HatchetThrow.GetOwningHatchetSpawner
	 */
	struct UHatchetThrow_GetOwningHatchetSpawner_Params
	{
	public:
		class ATheHuntressPower*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheHuntress.ReloadHatchet.IsInteractionPossible_Shared
	 */
	struct UReloadHatchet_IsInteractionPossible_Shared_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheHuntress.TheHuntressPower.StartHatchetShineCosmetic
	 */
	struct ATheHuntressPower_StartHatchetShineCosmetic_Params
	{	};

	/**
	 * Function TheHuntress.TheHuntressPower.SetPercentThrowStrength
	 */
	struct ATheHuntressPower_SetPercentThrowStrength_Params
	{
	public:
		float                                                      percentStrength;                                         // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheHuntress.TheHuntressPower.SetHatchetVisible
	 */
	struct ATheHuntressPower_SetHatchetVisible_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheHuntress.TheHuntressPower.PrintDebugThrowInfo
	 */
	struct ATheHuntressPower_PrintDebugThrowInfo_Params
	{	};

	/**
	 * Function TheHuntress.TheHuntressPower.IsHatchetThrowFullyCharged
	 */
	struct ATheHuntressPower_IsHatchetThrowFullyCharged_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheHuntress.TheHuntressPower.HasHatchet
	 */
	struct ATheHuntressPower_HasHatchet_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheHuntress.TheHuntressPower.GetOwningKiller
	 */
	struct ATheHuntressPower_GetOwningKiller_Params
	{
	public:
		class ASlasherPlayer*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheHuntress.TheHuntressPower.GetHatchetProjectileLauncher
	 */
	struct ATheHuntressPower_GetHatchetProjectileLauncher_Params
	{
	public:
		class UBaseProjectileLauncher*                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheHuntress.TheHuntressPower.GetHatchetCooldown
	 */
	struct ATheHuntressPower_GetHatchetCooldown_Params
	{
	public:
		class UHatchetCooldown*                                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheHuntress.TheHuntressPower.GetAkAudioHatchetSpawner
	 */
	struct ATheHuntressPower_GetAkAudioHatchetSpawner_Params
	{
	public:
		class UAkComponent*                                        ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionStart
	 */
	struct ATheHuntressPower_Cosmetic_OnThrowInteractionStart_Params
	{	};

	/**
	 * Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionCancelled
	 */
	struct ATheHuntressPower_Cosmetic_OnThrowInteractionCancelled_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

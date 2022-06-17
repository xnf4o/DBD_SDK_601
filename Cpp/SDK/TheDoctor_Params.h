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
	 * Function TheDoctor.SurvivorMadnessEffect.Server_AddMadness
	 */
	struct USurvivorMadnessEffect_Server_AddMadness_Params
	{
	public:
		float                                                      madnessToAdd;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.SurvivorMadnessEffect.OnStaticBlastReceived_BP
	 */
	struct USurvivorMadnessEffect_OnStaticBlastReceived_BP_Params
	{	};

	/**
	 * Function TheDoctor.SurvivorMadnessEffect.OnStaticBlastReceived
	 */
	struct USurvivorMadnessEffect_OnStaticBlastReceived_Params
	{	};

	/**
	 * Function TheDoctor.SurvivorMadnessEffect.OnSnapOutOfIt_BP
	 */
	struct USurvivorMadnessEffect_OnSnapOutOfIt_BP_Params
	{	};

	/**
	 * Function TheDoctor.SurvivorMadnessEffect.OnSnapOutOfIt
	 */
	struct USurvivorMadnessEffect_OnSnapOutOfIt_Params
	{	};

	/**
	 * Function TheDoctor.SurvivorMadnessEffect.OnShockTherapyReceived_BP
	 */
	struct USurvivorMadnessEffect_OnShockTherapyReceived_BP_Params
	{	};

	/**
	 * Function TheDoctor.SurvivorMadnessEffect.OnShockTherapyReceived
	 */
	struct USurvivorMadnessEffect_OnShockTherapyReceived_Params
	{	};

	/**
	 * Function TheDoctor.SurvivorMadnessEffect.OnMadnessTierUp_BP
	 */
	struct USurvivorMadnessEffect_OnMadnessTierUp_BP_Params
	{	};

	/**
	 * Function TheDoctor.SurvivorMadnessEffect.OnMadnessTierDown_BP
	 */
	struct USurvivorMadnessEffect_OnMadnessTierDown_BP_Params
	{	};

	/**
	 * Function TheDoctor.SurvivorMadnessEffect.Multicast_UpdateMadnessPlayerTags
	 */
	struct USurvivorMadnessEffect_Multicast_UpdateMadnessPlayerTags_Params
	{
	public:
		int32_t                                                    newMadness;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.SurvivorMadnessEffect.Multicast_OnMadnessTierUp
	 */
	struct USurvivorMadnessEffect_Multicast_OnMadnessTierUp_Params
	{	};

	/**
	 * Function TheDoctor.SurvivorMadnessEffect.Multicast_OnMadnessTierDown
	 */
	struct USurvivorMadnessEffect_Multicast_OnMadnessTierDown_Params
	{	};

	/**
	 * Function TheDoctor.SurvivorMadnessEffect.GetMadnessValue
	 */
	struct USurvivorMadnessEffect_GetMadnessValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.SurvivorMadnessEffect.GetMadnessTier
	 */
	struct USurvivorMadnessEffect_GetMadnessTier_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.SurvivorMadnessEffect.ChangeMadnessAudio_Cosmetic
	 */
	struct USurvivorMadnessEffect_ChangeMadnessAudio_Cosmetic_Params
	{
	public:
		int32_t                                                    madnessTier;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.SurvivorMadnessEffect.Authority_OnMadnessScreamTimerEnd_BP
	 */
	struct USurvivorMadnessEffect_Authority_OnMadnessScreamTimerEnd_BP_Params
	{	};

	/**
	 * Function TheDoctor.TheDoctorUtilities.IsTotallyInsane
	 */
	struct UTheDoctorUtilities_IsTotallyInsane_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.TheDoctorUtilities.GetSurvivorMadnessEffect
	 */
	struct UTheDoctorUtilities_GetSurvivorMadnessEffect_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USurvivorMadnessEffect*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.TheDoctorUtilities.GetMadnessTier
	 */
	struct UTheDoctorUtilities_GetMadnessTier_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.TheDoctorUtilities.CanGainInsanity
	 */
	struct UTheDoctorUtilities_CanGainInsanity_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

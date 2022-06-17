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
	 * Function DBDAudio.AudioUtilities.PostAkAudioEvent
	 */
	struct UAudioUtilities_PostAkAudioEvent_Params
	{
	public:
		class UAkAudioEvent*                                       AudioEvent;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAudio.AudioUtilities.DBD_PostUiEvent
	 */
	struct UAudioUtilities_DBD_PostUiEvent_Params
	{
	public:
		class UAkAudioEvent*                                       Event;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAudio.AudioUtilities.DBD_LoadPersistentBankByAssetPtr
	 */
	struct UAudioUtilities_DBD_LoadPersistentBankByAssetPtr_Params
	{
	public:
		class UObject*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAudio.AudioUtilities.DBD_LoadPersistentBankAsync
	 */
	struct UAudioUtilities_DBD_LoadPersistentBankAsync_Params
	{
	public:
		class UAkAudioBank*                                        Bank;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAudio.AudioUtilities.DBD_LoadPersistentBank
	 */
	struct UAudioUtilities_DBD_LoadPersistentBank_Params
	{
	public:
		class UAkAudioBank*                                        Bank;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAudio.InteractionAudioComponent.PostAkEvent
	 */
	struct UInteractionAudioComponent_PostAkEvent_Params
	{
	public:
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

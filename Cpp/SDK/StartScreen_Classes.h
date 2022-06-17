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
	 * BlueprintGeneratedClass StartScreen.StartScreen_C
	 * Size -> 0x0010 (FullSize[0x0248] - InheritedSize[0x0238])
	 */
	class AStartScreen_C : public AStartScreenBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AMatineeActor*                                       MatineeActor_1_ExecuteUbergraph_StartScreen_RefProperty; // 0x0240(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void K2Node_MatineeController_1_FadedOutEvent();
		void K2Node_MatineeController_1_Finished();
		void ReceiveBeginPlay();
		void BeginDestroyTravelSequence();
		void ExecuteUbergraph_StartScreen(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

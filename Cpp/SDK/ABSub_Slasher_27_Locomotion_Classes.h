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
	 * AnimBlueprintGeneratedClass ABSub_Slasher_27_Locomotion.ABSub_Slasher_27_Locomotion_C
	 * Size -> 0x00A7 (FullSize[0x1E18] - InheritedSize[0x1D71])
	 */
	class UABSub_Slasher_27_Locomotion_C : public UAB_Slasher_SubGraph_Locomotion_Override_27_C
	{
	public:
		unsigned char                                              UnknownData_LUK9[0x7];                                   // 0x1D71(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1D78(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FASet_Slasher_27_Locomotion                         AnimSet;                                                 // 0x1D80(0x0098) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_ABSub_Slasher_27_Locomotion(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

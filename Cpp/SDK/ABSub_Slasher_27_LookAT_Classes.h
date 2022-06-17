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
	 * AnimBlueprintGeneratedClass ABSub_Slasher_27_LookAT.ABSub_Slasher_27_LookAT_C
	 * Size -> 0x004F (FullSize[0x2460] - InheritedSize[0x2411])
	 */
	class UABSub_Slasher_27_LookAT_C : public UAB_Slasher_SubGraph_LookAT_00_C
	{
	public:
		unsigned char                                              UnknownData_2IHF[0x7];                                   // 0x2411(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x2418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FASet_Slasher_27_LookAT                             AnimSet;                                                 // 0x2420(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash

	public:
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_ABSub_Slasher_27_LookAT(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

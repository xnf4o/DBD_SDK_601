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
	 * AnimBlueprintGeneratedClass AB_K24_SW00_Menu.AB_K24_SW00_Menu_C
	 * Size -> 0x00A8 (FullSize[0x0368] - InheritedSize[0x02C0])
	 */
	class UAB_K24_SW00_Menu_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0038)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x0300(0x0018)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0318(0x0050)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_AB_K24_SW00_Menu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * AnimBlueprintGeneratedClass AB_S29_Tablete.AB_S29_Tablete_C
	 * Size -> 0x0141 (FullSize[0x0401] - InheritedSize[0x02C0])
	 */
	class UAB_S29_Tablete_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0038)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x0300(0x0018)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0318(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0350(0x00B0)
		bool                                                       Role_Selected;                                           // 0x0400(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_AB_S29_Tablete(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

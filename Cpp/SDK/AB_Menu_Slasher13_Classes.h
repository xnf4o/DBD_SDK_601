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
	 * AnimBlueprintGeneratedClass AB_Menu_Slasher13.AB_Menu_Slasher13_C
	 * Size -> 0x3B12 (FullSize[0x3DE2] - InheritedSize[0x02D0])
	 */
	class UAB_Menu_Slasher13_C : public UBaseMenuAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02D8(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0310(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0390(0x0080)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_12;                           // 0x0410(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_11;                           // 0x0870(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_10;                           // 0x0CD0(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_9;                            // 0x1130(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_8;                            // 0x1590(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_7;                            // 0x19F0(0x0460)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_2;                              // 0x1E50(0x0138)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone;                                // 0x1F88(0x0138)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_6;                            // 0x20C0(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_5;                            // 0x2520(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_4;                            // 0x2980(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_3;                            // 0x2DE0(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_2;                            // 0x3240(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics;                              // 0x36A0(0x0460)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x3B00(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x3B20(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x3B40(0x00A0)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x3BE0(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x3C58(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x3CF8(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x3D30(0x00B0)
		bool                                                       Role_Selected;                                           // 0x3DE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Is_Online;                                               // 0x3DE1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_FX_HK_MenuInt_MakeWeaponAppear();
		void AnimNotify_FX_HK_MenuInt_MakeWeaponDisappear();
		void AnimNotify_FX_HK_MenuBack_MakeSwordVisible();
		void AnimNotify_FX_HK_Menu_MakeSwordInvisible();
		void ExecuteUbergraph_AB_Menu_Slasher13(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

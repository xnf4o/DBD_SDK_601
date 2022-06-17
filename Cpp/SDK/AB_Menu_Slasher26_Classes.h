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
	 * AnimBlueprintGeneratedClass AB_Menu_Slasher26.AB_Menu_Slasher26_C
	 * Size -> 0x0604 (FullSize[0x08D4] - InheritedSize[0x02D0])
	 */
	class UAB_Menu_Slasher26_C : public UBaseMenuAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02D8(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0310(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0338(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0360(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0388(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x03B0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0430(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0468(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x04E8(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0520(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x05A0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x0620(0x00A0)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x06C0(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0738(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x07D8(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0810(0x00B0)
		bool                                                       Role_Selected;                                           // 0x08C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Is_Online;                                               // 0x08C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       _interrupt02;                                            // 0x08C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KF6I[0x5];                                   // 0x08C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Menu_Slasher26_C*                                KillerBP;                                                // 0x08C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RandomInterupt;                                          // 0x08D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void OnNotifyBegin_0B64AF184ABD119B2E2270BFA977CABB(const class FName& NotifyName);
		void OnInterrupted_0B64AF184ABD119B2E2270BFA977CABB(const class FName& NotifyName);
		void OnBlendOut_0B64AF184ABD119B2E2270BFA977CABB(const class FName& NotifyName);
		void OnCompleted_0B64AF184ABD119B2E2270BFA977CABB(const class FName& NotifyName);
		void OnNotifyEnd_0B64AF184ABD119B2E2270BFA977CABB(const class FName& NotifyName);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher26_AnimGraphNode_TransitionResult_59A388FC4E690DF0F2E3D890704EDD1A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher26_AnimGraphNode_TransitionResult_B7FBDE744D7EABF276D9EBA9F4661A25();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher26_AnimGraphNode_TransitionResult_6E64C09E483F3071218CA5B4D896DFA4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher26_AnimGraphNode_TransitionResult_05E0BAAB4A85C91D9E56BA88B668A259();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void AnimNotify_Interupt02Start();
		void AnimNotify_Idle();
		void ExecuteUbergraph_AB_Menu_Slasher26(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * AnimBlueprintGeneratedClass AB_Slasher_SubGraph_LookAT_00.AB_Slasher_SubGraph_LookAT_00_C
	 * Size -> 0x2131 (FullSize[0x2411] - InheritedSize[0x02E0])
	 */
	class UAB_Slasher_SubGraph_LookAT_00_C : public ULookAtKillerSubAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02E8(0x0038)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_SubInput;                                  // 0x0320(0x0120)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x0440(0x0158)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0598(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x05C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x05E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0610(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0638(0x0080)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x06B8(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4;                        // 0x06E8(0x00C0)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_5;                // 0x07A8(0x0198)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0940(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0978(0x0080)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x09F8(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x0A28(0x00C0)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_4;                // 0x0AE8(0x0198)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0C80(0x0038)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x0CB8(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x0CE8(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x0D18(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x0DD8(0x0030)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_3;                // 0x0E08(0x0198)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0FA0(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x1060(0x0030)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_2;                // 0x1090(0x0198)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x1228(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x1248(0x0020)
		unsigned char                                              UnknownData_T1XC[0x8];                                   // 0x1268(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_3;                            // 0x1270(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_2;                            // 0x16D0(0x0460)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x1B30(0x00A0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1BD0(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1BF0(0x0020)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics;                              // 0x1C10(0x0460)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x2070(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x20A0(0x00A0)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace;                  // 0x2140(0x0198)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x22D8(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x2310(0x00B0)
		class UBlendSpaceBase*                                     AimOffset_FPV;                                           // 0x23C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpaceBase*                                     AimOffset;                                               // 0x23C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      _animPitch;                                              // 0x23D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       _firstPersonView;                                        // 0x23D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VKTS[0x3];                                   // 0x23D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlendSpaceBase*                                     CarryAimOffset;                                          // 0x23D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       TurnLeftSequence;                                        // 0x23E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       TurnRightSequence;                                       // 0x23E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IgnoreUpperbodyTurn;                                     // 0x23F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_19NE[0x3];                                   // 0x23F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LeftHandDynamicAlpha;                                    // 0x23F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RightHandDynamicAlpha;                                   // 0x23F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsUsingIKJoints;                                         // 0x23FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_239U[0x3];                                   // 0x23FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       CarryTurnLeftSequence;                                   // 0x2400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       CarryTurnRightSequence;                                  // 0x2408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCarrying;                                              // 0x2410(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAT_00_AnimGraphNode_RotationOffsetBlendSpace_F2E9164149EBA3BEF7E4658217D7702A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAT_00_AnimGraphNode_SequencePlayer_A86C754F43E22CD04677B78B3BF05536();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAT_00_AnimGraphNode_LayeredBoneBlend_CED70AB34E0EB4FF8560498A7702002D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAT_00_AnimGraphNode_RotationOffsetBlendSpace_B52F1DE9400B2BB756AF71BC3F67616B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAT_00_AnimGraphNode_SequencePlayer_5E9099CA456E0548A7AC85A4EF54068D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAT_00_AnimGraphNode_LayeredBoneBlend_FFBA7C0D43344F445E8772964EBD7A30();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAT_00_AnimGraphNode_RotationOffsetBlendSpace_FA66E6DB4CC73EAA560B049A3162E01D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAT_00_AnimGraphNode_TransitionResult_1B8AF629484F1B2CF50217A5F4472832();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAT_00_AnimGraphNode_TransitionResult_65A4890B4241B8E2D7A58487CD7F5895();
		void AnimNotify_TurnEnd();
		void ExecuteUbergraph_AB_Slasher_SubGraph_LookAT_00(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

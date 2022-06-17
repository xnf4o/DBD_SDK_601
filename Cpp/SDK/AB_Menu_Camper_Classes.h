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
	 * AnimBlueprintGeneratedClass AB_Menu_Camper.AB_Menu_Camper_C
	 * Size -> 0x1858 (FullSize[0x1B18] - InheritedSize[0x02C0])
	 */
	class UAB_Menu_Camper_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0300(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0328(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0350(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x0378(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x03A8(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x03E0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x0460(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x0500(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x0580(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x05B8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0638(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x0670(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0720(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x07A0(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x07D8(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x0888(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0928(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x09A8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0A28(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0AA8(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x0B28(0x0158)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0C80(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0CA8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x0CD0(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0D00(0x0038)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x0D38(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x0D58(0x0030)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x0D88(0x0020)
		unsigned char                                              UnknownData_OBHQ[0x8];                                   // 0x0DA8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics;                              // 0x0DB0(0x0460)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone;                                // 0x1210(0x0138)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x1348(0x0038)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x1380(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x13B0(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x13E8(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x1498(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x1538(0x0030)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x1568(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x16C0(0x0030)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x16F0(0x0110)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1800(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1820(0x0020)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x1840(0x00C0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x1900(0x00C0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x19C0(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x1A60(0x00A0)
		EItemHandPosition                                          Hand_Position;                                           // 0x1B00(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ODZ9[0x3];                                   // 0x1B01(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SelectedIdleIndex;                                       // 0x1B04(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Role_Selected;                                           // 0x1B08(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Dynamic_Override;                                        // 0x1B09(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Override_nea;                                            // 0x1B0A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Override_Jane;                                           // 0x1B0B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       _weaponRT_adjustment;                                    // 0x1B0C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MenuInterrupt;                                           // 0x1B0D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YI5X[0x2];                                   // 0x1B0E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADBDMenuPlayer*                                      DBDMenuPlayer;                                           // 0x1B10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_TransitionResult_87CDC7454897F2F416A5B78669C05DF6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_144CBC12420AC4B1AEB6C483367DB5D1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_D31FAC3144F53773EC44BF83B1E4C609();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_942BFBC04EC5441670A131B2CBD7B90D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_31D12DEB4EEE47CA5AFD35BA4FF29D01();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_ModifyBone_F80FCF524110A51D7C4B38A1720994C7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_747405E04A935FAD9C72CBB1F0F32382();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_TransitionResult_BA6696174B4541A7601209A8053A34AA();
		void AnimNotify_IsPlayingMenuInterruptFromTransition();
		void AnimNotify_IsLeavingMenuInterruptFromTransition();
		void RandomTimer();
		void IsPlayingMenuInterrupt(bool IsPlayingAnimation);
		void ExecuteUbergraph_AB_Menu_Camper(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

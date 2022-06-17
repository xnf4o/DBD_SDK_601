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
	 * AnimBlueprintGeneratedClass AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C
	 * Size -> 0x136A (FullSize[0x197A] - InheritedSize[0x0610])
	 */
	class UAB_Slasher_SubGraph_BaseAttack_00_C : public UKillerAttackSubAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0610(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0618(0x0038)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_SubInput;                                  // 0x0650(0x0120)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x0770(0x0158)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21;                       // 0x08C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0x08F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x0918(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x0940(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x0968(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x0990(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x09B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x09E0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x0A08(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x0A30(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x0A58(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0A80(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x0B00(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0B38(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x0BB8(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0BF0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x0C70(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0CA8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x0D28(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0D60(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x0DE0(0x0038)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_10;                          // 0x0E18(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x0E48(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x0E80(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x0F30(0x0158)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x1088(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x10B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x10D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x1100(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x1128(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x1150(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x1178(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x11A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x11C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x11F0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x1218(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4;                        // 0x1248(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x1308(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x1338(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x13F8(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x1428(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x14E8(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x1518(0x0038)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x1550(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x1580(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x15B0(0x00C0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x1670(0x0038)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x16A8(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x16D8(0x0038)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x1710(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x1740(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x1778(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x1828(0x0038)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x1860(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1890(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x18C8(0x00B0)
		bool                                                       _isIdle;                                                 // 0x1978(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       _isAttack;                                               // 0x1979(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_64A870D94C5BBB4145B273A43D530989();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_B50A67404182E787316715BE18637400();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_0E0E289545D87547ADD7629603810F1A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_45287DF740DD3332676783AC3B85138E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_342A66F848F32A23C26F1E905C58406D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_7A7167C2435FA741869C96BE3B8AB485();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_E641D7DC48F31981B233F3AC03771762();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_EA11CD8745C33480B79FFF97AB1F33C4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_EA7C5D464C165E9C940C15A81932636A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_0A357C3A41BE982F3FBF4298AABDDC8F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_DF31B43E4347AF97EF880CB0C46FDDDB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_36E899A04054E48D0E447BAD9F85D6D8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_685EC00942748326C6A2F0B95223E4A2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_536BEE4049AB5907F033B3ABD67EEC4F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_D3A76D6047C3FF393368398A9E02B6F6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_6F6204FB454B3950C32C518A52645928();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_71A6612B43EE8076A3E736847A5D18F0();
		void AnimNotify_FX_MakeTag_MaskFPV_Hidden();
		void AnimNotify_FX_MakeTag_MaskFPV_Visible();
		void AnimNotify_FX_MakeSlasherInvisible();
		void AnimNotify_FX_MakeSlasherVisible();
		void SetAttackAnimationFromMainAB(const struct FAset_Slasher_BaseAttack& AttackAnimset);
		void ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * AnimBlueprintGeneratedClass AB_Slasher_28.AB_Slasher_27_C
	 * Size -> 0x1D14 (FullSize[0x2344] - InheritedSize[0x0630])
	 */
	class UAB_Slasher_27_C : public UOnryoAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0630(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0638(0x0038)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x0670(0x0050)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x06C0(0x0050)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_3;                         // 0x0710(0x00A8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x07B8(0x0050)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_2;                         // 0x0808(0x00A8)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_SubInstance;                               // 0x08B0(0x00A8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x0958(0x0158)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0AB0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0AD8(0x0080)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x0B58(0x0018)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0B70(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0C10(0x0038)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x0C48(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0C78(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0CB0(0x00B0)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph;                           // 0x0D60(0x00A8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0E08(0x00C0)
		unsigned char                                              UnknownData_9WFY[0x8];                                   // 0x0EC8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_4;                            // 0x0ED0(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_3;                            // 0x1330(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_2;                            // 0x1790(0x0460)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1BF0(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1C10(0x0020)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics;                              // 0x1C30(0x0460)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x2090(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x20C0(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x20F8(0x00B0)
		bool                                                       __CustomProperty__enableTurnInPlace_33F2B9724D749B46BA07B1B300E9C013; // 0x21A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_IsCarrying_33F2B9724D749B46BA07B1B300E9C013; // 0x21A9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_IsUsingIKJoints_33F2B9724D749B46BA07B1B300E9C013; // 0x21AA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_IgnoreUpperbodyTurn_33F2B9724D749B46BA07B1B300E9C013; // 0x21AB(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty__FirstPersonView_33F2B9724D749B46BA07B1B300E9C013; // 0x21AC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OBAQ[0x3];                                   // 0x21AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      __CustomProperty__animPitch_33F2B9724D749B46BA07B1B300E9C013; // 0x21B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty__isFirstPersonView_30F5B8C94CE06CF23DD252A5E9EDE39C; // 0x21B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty__newLocomotion_30F5B8C94CE06CF23DD252A5E9EDE39C; // 0x21B5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LH0J[0x2];                                   // 0x21B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      __CustomProperty__forwardVelocity_30F5B8C94CE06CF23DD252A5E9EDE39C; // 0x21B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty__lateralVelocity_30F5B8C94CE06CF23DD252A5E9EDE39C; // 0x21BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty__isAttacking_30F5B8C94CE06CF23DD252A5E9EDE39C; // 0x21C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty__isIdle_30F5B8C94CE06CF23DD252A5E9EDE39C; // 0x21C1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty__isInAir_30F5B8C94CE06CF23DD252A5E9EDE39C; // 0x21C2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		EInteractionAnimation                                      __CustomProperty__interactionType_30F5B8C94CE06CF23DD252A5E9EDE39C; // 0x21C3(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty__isCarrying_30F5B8C94CE06CF23DD252A5E9EDE39C; // 0x21C4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_isMoving_05C674654E31B1BDC4AD979988D88A45; // 0x21C5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_IsInOtherWorld_05C674654E31B1BDC4AD979988D88A45; // 0x21C6(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_IsExitingManifest_05C674654E31B1BDC4AD979988D88A45; // 0x21C7(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_IsEnteringManifest_05C674654E31B1BDC4AD979988D88A45; // 0x21C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_IsTeleporting_05C674654E31B1BDC4AD979988D88A45; // 0x21C9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_IsTeleportCancelled_05C674654E31B1BDC4AD979988D88A45; // 0x21CA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_IsStartingUpTeleport_05C674654E31B1BDC4AD979988D88A45; // 0x21CB(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_IsCrawlingOutOfTV_05C674654E31B1BDC4AD979988D88A45; // 0x21CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty__idle_05C674654E31B1BDC4AD979988D88A45; // 0x21CD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_isFPV_05C674654E31B1BDC4AD979988D88A45; // 0x21CE(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty__firstPersonView_C7B5989F49CD280AECC70E98AB545B32; // 0x21CF(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      __CustomProperty__direction_C7B5989F49CD280AECC70E98AB545B32; // 0x21D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty__isAttack_C7B5989F49CD280AECC70E98AB545B32; // 0x21D4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty__isIdle_C7B5989F49CD280AECC70E98AB545B32; // 0x21D5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U5OB[0x2];                                   // 0x21D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       Attack_In;                                               // 0x21D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Attack_In_FPV;                                           // 0x21E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Attack_Swing;                                            // 0x21E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Attack_Swing_FPV;                                        // 0x21F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Attack_Hit;                                              // 0x21F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Attack_Hit_FPV;                                          // 0x2200(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Attack_Miss;                                             // 0x2208(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Attack_Miss_FPV;                                         // 0x2210(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Attack_BOW;                                              // 0x2218(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Attack_BOW_FPV;                                          // 0x2220(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpace*                                         BS_Locomotion;                                           // 0x2228(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpace*                                         BS_Locomotion_FPV;                                       // 0x2230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Idle;                                                    // 0x2238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Idle_FPV;                                                // 0x2240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Carry_Idle;                                              // 0x2248(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Carry_Idle_FPV;                                          // 0x2250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Search_Locker;                                           // 0x2258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       WalkToFall;                                              // 0x2260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       WalktoFall_FPV;                                          // 0x2268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Falling;                                                 // 0x2270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Falling_FPV;                                             // 0x2278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       LandLight;                                               // 0x2280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       LandLight_FPV;                                           // 0x2288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpace1D*                                       BS_Land;                                                 // 0x2290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpace1D*                                       BS_Land_FPV;                                             // 0x2298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpace*                                         BS_Carry_Locomotion;                                     // 0x22A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpace*                                         BS_Carry_locomotion_FPV;                                 // 0x22A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAimOffsetBlendSpace*                                AimOffset;                                               // 0x22B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAimOffsetBlendSpace*                                AimOffset_FPV;                                           // 0x22B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Carry_Attack_In;                                         // 0x22C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Carry_Attack_In_FPV;                                     // 0x22C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Carry_Attack_Swing;                                      // 0x22D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Carry_Attack_Swing_FPV;                                  // 0x22D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Carry_Attack_Out;                                        // 0x22E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Carry_Attack_Out_FPV;                                    // 0x22E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Carry_Attack_BOW;                                        // 0x22F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Carry_Attack_BOW_FPV;                                    // 0x22F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Stand;                                                   // 0x2300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      _SpeedRate;                                              // 0x2308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CUD0[0x4];                                   // 0x230C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlendSpace1D*                                       BS_TT_PushBack_RT;                                       // 0x2310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpace1D*                                       BS_TT_PushBack_LT;                                       // 0x2318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       EndGameWalk;                                             // 0x2320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   _Intro;                                                  // 0x2328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HairDynamics;                                            // 0x2330(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A6A4[0x3];                                   // 0x2331(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CameraFOV;                                               // 0x2334(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsLegendary;                                             // 0x2338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_10SE[0x3];                                   // 0x2339(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LookUp;                                                  // 0x233C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      LookRight;                                               // 0x2340(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void FX_K27_InteractionStart_Vignette();
		void CosmeticOnUnmanifestChargeChanged(float Charge_Percent);
		void CosmeticOnManifestChargeChanged(float Charge_Percent);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_LayeredBoneBlend_F41A42584CB2FDCF950E51843DC55766();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_LinkedAnimGraph_33F2B9724D749B46BA07B1B300E9C013();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_LinkedAnimGraph_05C674654E31B1BDC4AD979988D88A45();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_TransitionResult_A9EBC3F241464D8B3B7F3990D8938E3D();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_FX_K27_InteractionStart_Vignette();
		void ExecuteUbergraph_AB_Slasher_28(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

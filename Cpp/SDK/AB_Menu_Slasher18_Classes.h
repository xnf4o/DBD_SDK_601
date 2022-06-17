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
	 * AnimBlueprintGeneratedClass AB_Menu_Slasher18.AB_Menu_Slasher18_C
	 * Size -> 0x02FA (FullSize[0x05CA] - InheritedSize[0x02D0])
	 */
	class UAB_Menu_Slasher18_C : public UBaseMenuAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02D8(0x0038)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x0310(0x00A0)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x03B0(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0428(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x04C8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0548(0x0080)
		bool                                                       Role_Selected;                                           // 0x05C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Is_Online;                                               // 0x05C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_FX_SK_SwitchClub_DemonMode();
		void AnimNotify_FX_SK_SwitchClub_NormalMode();
		void AnimNotify_FK_SK_ShowKatana();
		void AnimNotify_FX_SK_HideKatana();
		void AnimNotify_FX_SK_ShowDemonCosmetic();
		void AnimNotify_FX_SK_HideDemonCosmetic();
		void AnimNotify_FX_SK_HideKatana_TPV();
		void BlueprintInitializeAnimation();
		void AnimNotify_FX_SK_ReturnToNormal();
		void ExecuteUbergraph_AB_Menu_Slasher18(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

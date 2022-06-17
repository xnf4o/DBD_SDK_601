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
	 * AnimBlueprintGeneratedClass AB_Menu_S31.AB_Menu_S31_C
	 * Size -> 0x0009 (FullSize[0x1B21] - InheritedSize[0x1B18])
	 */
	class UAB_Menu_S31_C : public UAB_Menu_Camper_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1B18(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       radioInterruptTransition;                                // 0x1B20(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_IsPlayingMenuInterruptFromTransition();
		void AnimNotify_IsLeavingMenuInterruptFromTransition();
		void ExecuteUbergraph_AB_Menu_S31(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

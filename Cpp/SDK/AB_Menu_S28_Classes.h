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
	 * AnimBlueprintGeneratedClass AB_Menu_S28.AB_Menu_S28_C
	 * Size -> 0x0008 (FullSize[0x1B20] - InheritedSize[0x1B18])
	 */
	class UAB_Menu_S28_C : public UAB_Menu_Camper_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1B18(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void AnimNotify_FX_ShowProps();
		void AnimNotify_FX_HideProps();
		void AnimNotify_IsPlayingMenuInterruptFromTransition();
		void ExecuteUbergraph_AB_Menu_S28(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

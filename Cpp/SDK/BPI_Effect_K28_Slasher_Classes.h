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
	 * BlueprintGeneratedClass BPI_Effect_K28_Slasher.BPI_Effect_K28_Slasher_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBPI_Effect_K28_Slasher_C : public UInterface
	{
	public:
		void FX_K28_HideKiller();
		void FX_K28_ShowKiller();
		void FX_K28_ExitingLocker();
		void FX_K28_NightEnds();
		void FX_K28_NightBegins();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

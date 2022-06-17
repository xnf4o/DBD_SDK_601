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
	 * BlueprintGeneratedClass BPI_Effect_K23.BPI_Effect_K23_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBPI_Effect_K23_C : public UInterface
	{
	public:
		void K23_StunnedByPallet();
		void K23_Hide_LTKnife();
		void K23_Hide_RTKnife();
		void K23_Show_LTKnife();
		void K23_Show_RTKnife();
		void K23_Exit_SuperMode();
		void K23_Enter_SuperMode();
		void EventK23Camper();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

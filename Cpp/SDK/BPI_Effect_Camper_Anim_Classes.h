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
	 * BlueprintGeneratedClass BPI_Effect_Camper_Anim.BPI_Effect_Camper_Anim_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBPI_Effect_Camper_Anim_C : public UInterface
	{
	public:
		void HideProps();
		void ShowProps();
		void AddBloodOnCamper();
		void CK_StartSacrificeDissolve();
		void StartEndGameDissolve();
		void GoToAddVomitDecal();
		void GoToAddMoriVomitStain();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * BlueprintGeneratedClass BPI_Effect_K27.BPI_Effect_K27_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBPI_Effect_K27_C : public UInterface
	{
	public:
		void FX_FadeCondemnedStatus();
		void FX_K27_Camper_Tape_InsertEnd();
		void FX_K27_Camper_TapeRetrieved();
		void FX_K27_Camper_InsertTapeExit();
		void FX_K27_Camper_TapeInserted();
		void FX_K27_Camper_Tape_StartInsert();
		void FX_K27_Camper_Tape_InsertTransfer();
		void FX_K27_Camper_StartRetrievingTape();
		void FX_K27_Camper_End_Tape_In_Hand();
		void FX_K27_TapeInteractionFinished();
		void FX_K27_Camper_TapeInHand();
		void FX_K27_Camper_RetrieveTapeExit();
		void FX_K27_SpawnMiniMoriVignette();
		void FX_K27_InsertTape();
		void FX_K27_HoldingTape();
		void FX_K27_Teleport_ShowMesh();
		void FX_K27_Teleport_HideMesh();
		void FX_K27_CondemnedAddToken(float currentStacks);
		void FX_K27_CondemnedStatusStop(float currentStacks);
		void FX_K27_CondemnedStatusFull(float currentStacks);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

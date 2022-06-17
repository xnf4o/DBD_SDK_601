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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPI_Effect_K27.BPI_Effect_K27_C.FX_FadeCondemnedStatus
	 */
	struct UBPI_Effect_K27_C_FX_FadeCondemnedStatus_Params
	{	};

	/**
	 * Function BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_Camper_Tape_InsertEnd
	 */
	struct UBPI_Effect_K27_C_FX_K27_Camper_Tape_InsertEnd_Params
	{	};

	/**
	 * Function BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_Camper_TapeRetrieved
	 */
	struct UBPI_Effect_K27_C_FX_K27_Camper_TapeRetrieved_Params
	{	};

	/**
	 * Function BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_Camper_InsertTapeExit
	 */
	struct UBPI_Effect_K27_C_FX_K27_Camper_InsertTapeExit_Params
	{	};

	/**
	 * Function BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_Camper_TapeInserted
	 */
	struct UBPI_Effect_K27_C_FX_K27_Camper_TapeInserted_Params
	{	};

	/**
	 * Function BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_Camper_Tape_StartInsert
	 */
	struct UBPI_Effect_K27_C_FX_K27_Camper_Tape_StartInsert_Params
	{	};

	/**
	 * Function BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_Camper_Tape_InsertTransfer
	 */
	struct UBPI_Effect_K27_C_FX_K27_Camper_Tape_InsertTransfer_Params
	{	};

	/**
	 * Function BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_Camper_StartRetrievingTape
	 */
	struct UBPI_Effect_K27_C_FX_K27_Camper_StartRetrievingTape_Params
	{	};

	/**
	 * Function BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_Camper_End_Tape_In_Hand
	 */
	struct UBPI_Effect_K27_C_FX_K27_Camper_End_Tape_In_Hand_Params
	{	};

	/**
	 * Function BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_TapeInteractionFinished
	 */
	struct UBPI_Effect_K27_C_FX_K27_TapeInteractionFinished_Params
	{	};

	/**
	 * Function BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_Camper_TapeInHand
	 */
	struct UBPI_Effect_K27_C_FX_K27_Camper_TapeInHand_Params
	{	};

	/**
	 * Function BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_Camper_RetrieveTapeExit
	 */
	struct UBPI_Effect_K27_C_FX_K27_Camper_RetrieveTapeExit_Params
	{	};

	/**
	 * Function BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_SpawnMiniMoriVignette
	 */
	struct UBPI_Effect_K27_C_FX_K27_SpawnMiniMoriVignette_Params
	{	};

	/**
	 * Function BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_InsertTape
	 */
	struct UBPI_Effect_K27_C_FX_K27_InsertTape_Params
	{	};

	/**
	 * Function BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_HoldingTape
	 */
	struct UBPI_Effect_K27_C_FX_K27_HoldingTape_Params
	{	};

	/**
	 * Function BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_Teleport_ShowMesh
	 */
	struct UBPI_Effect_K27_C_FX_K27_Teleport_ShowMesh_Params
	{	};

	/**
	 * Function BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_Teleport_HideMesh
	 */
	struct UBPI_Effect_K27_C_FX_K27_Teleport_HideMesh_Params
	{	};

	/**
	 * Function BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_CondemnedAddToken
	 */
	struct UBPI_Effect_K27_C_FX_K27_CondemnedAddToken_Params
	{
	public:
		float                                                      currentStacks;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_CondemnedStatusStop
	 */
	struct UBPI_Effect_K27_C_FX_K27_CondemnedStatusStop_Params
	{
	public:
		float                                                      currentStacks;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_CondemnedStatusFull
	 */
	struct UBPI_Effect_K27_C_FX_K27_CondemnedStatusFull_Params
	{
	public:
		float                                                      currentStacks;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function BP_AfterImageComponent.BP_AfterImageComponent_C.InOtherWorld
	 */
	struct UBP_AfterImageComponent_C_InOtherWorld_Params
	{
	public:
		bool                                                       InPhysicalWorld;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AfterImageComponent.BP_AfterImageComponent_C.GetRandomLocationNearKillerMesh
	 */
	struct UBP_AfterImageComponent_C_GetRandomLocationNearKillerMesh_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AfterImageComponent.BP_AfterImageComponent_C.SpawnAfterImage
	 */
	struct UBP_AfterImageComponent_C_SpawnAfterImage_Params
	{
	public:
		struct FTransform                                          huskTransform;                                           // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      opacityValue;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      speedValue;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AfterImageComponent.BP_AfterImageComponent_C.ReceiveBeginPlay
	 */
	struct UBP_AfterImageComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_AfterImageComponent.BP_AfterImageComponent_C.AfterImagesSpawningLoop
	 */
	struct UBP_AfterImageComponent_C_AfterImagesSpawningLoop_Params
	{	};

	/**
	 * Function BP_AfterImageComponent.BP_AfterImageComponent_C.OnLevelReadyToPlay
	 */
	struct UBP_AfterImageComponent_C_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function BP_AfterImageComponent.BP_AfterImageComponent_C.ShouldShowAfterImageChanged
	 */
	struct UBP_AfterImageComponent_C_ShouldShowAfterImageChanged_Params
	{
	public:
		bool                                                       shouldBeVisible;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AfterImageComponent.BP_AfterImageComponent_C.UpdateCustomization
	 */
	struct UBP_AfterImageComponent_C_UpdateCustomization_Params
	{	};

	/**
	 * Function BP_AfterImageComponent.BP_AfterImageComponent_C.ExecuteUbergraph_BP_AfterImageComponent
	 */
	struct UBP_AfterImageComponent_C_ExecuteUbergraph_BP_AfterImageComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

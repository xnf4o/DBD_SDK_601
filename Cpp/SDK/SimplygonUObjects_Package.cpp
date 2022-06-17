/**
 * Name: DBD
 * Version: 601
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USimplygonStandinPipeline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimplygonStandinPipeline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.SimplygonStandinPipeline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UStandinNearPipeline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStandinNearPipeline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.StandinNearPipeline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UStandinFarPipeline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStandinFarPipeline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.StandinFarPipeline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBillboardCloudPipeline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBillboardCloudPipeline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.BillboardCloudPipeline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USimplygonPipeline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimplygonPipeline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.SimplygonPipeline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFlipbookPipeline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlipbookPipeline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.FlipbookPipeline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBillboardCloudVegetationPipeline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBillboardCloudVegetationPipeline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.BillboardCloudVegetationPipeline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USimplygonMaterialCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimplygonMaterialCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.SimplygonMaterialCaster");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USimplygonColorCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimplygonColorCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.SimplygonColorCaster");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseColorCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseColorCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.BaseColorCaster");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMetallicCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMetallicCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.MetallicCaster");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USpecualarCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpecualarCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.SpecualarCaster");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URoughnessCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URoughnessCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.RoughnessCaster");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USimplygonNormalCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimplygonNormalCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.SimplygonNormalCaster");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNormalCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNormalCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.NormalCaster");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USimplygonOpacityCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimplygonOpacityCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.SimplygonOpacityCaster");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOpacityCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpacityCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.OpacityCaster");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEmissiveCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmissiveCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.EmissiveCaster");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOpacityMaskCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpacityMaskCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.OpacityMaskCaster");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAmbientOcclusionMaskCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmbientOcclusionMaskCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.AmbientOcclusionMaskCaster");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UReductionPipeline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReductionPipeline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.ReductionPipeline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URemeshingPipeline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemeshingPipeline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.RemeshingPipeline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAggregationPipeline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAggregationPipeline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.AggregationPipeline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USimplygonDisplacementCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimplygonDisplacementCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.SimplygonDisplacementCaster");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USimplygonAmbientOcclusionCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimplygonAmbientOcclusionCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.SimplygonAmbientOcclusionCaster");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USimplygonGeometryDataCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimplygonGeometryDataCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.SimplygonGeometryDataCaster");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USimplygonVertexColorCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimplygonVertexColorCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimplygonUObjects.SimplygonVertexColorCaster");
		return ptr;
	}

}



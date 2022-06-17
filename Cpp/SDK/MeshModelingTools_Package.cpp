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
	 * 		Name   -> PredefindFunction UAddPatchToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddPatchToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddPatchToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddPatchToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddPatchToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddPatchToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddPatchTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddPatchTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddPatchTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddPrimitiveToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddPrimitiveToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddPrimitiveToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProceduralShapeToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralShapeToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralShapeToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProceduralRectangleToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralRectangleToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralRectangleToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProceduralBoxToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralBoxToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralBoxToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProceduralRoundedRectangleToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralRoundedRectangleToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralRoundedRectangleToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProceduralDiscToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralDiscToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralDiscToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProceduralPuncturedDiscToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralPuncturedDiscToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralPuncturedDiscToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProceduralTorusToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralTorusToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralTorusToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProceduralCylinderToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralCylinderToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralCylinderToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProceduralConeToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralConeToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralConeToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProceduralArrowToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralArrowToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralArrowToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProceduralSphereToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralSphereToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralSphereToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProceduralSphericalBoxToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralSphericalBoxToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralSphericalBoxToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULastActorInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULastActorInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.LastActorInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddPrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddPrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddPrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddBoxPrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddBoxPrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddBoxPrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddCylinderPrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddCylinderPrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddCylinderPrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddConePrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddConePrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddConePrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddRectanglePrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddRectanglePrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddRectanglePrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddRoundedRectanglePrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddRoundedRectanglePrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddRoundedRectanglePrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddDiscPrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddDiscPrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddDiscPrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddPuncturedDiscPrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddPuncturedDiscPrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddPuncturedDiscPrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddTorusPrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddTorusPrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddTorusPrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddArrowPrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddArrowPrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddArrowPrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddSpherePrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddSpherePrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddSpherePrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddSphericalBoxPrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddSphericalBoxPrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddSphericalBoxPrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAlignObjectsToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAlignObjectsToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AlignObjectsToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAlignObjectsToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAlignObjectsToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AlignObjectsToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAlignObjectsTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAlignObjectsTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AlignObjectsTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBakeMeshAttributeMapsToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeMeshAttributeMapsToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BakeMeshAttributeMapsToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03912270
	 * 		Name   -> Function MeshModelingTools.BakeMeshAttributeMapsToolProperties.GetUVLayerNamesFunc
	 * 		Flags  -> (Final, Native, Public)
	 */
	TArray<class FString> UBakeMeshAttributeMapsToolProperties::GetUVLayerNamesFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.BakeMeshAttributeMapsToolProperties.GetUVLayerNamesFunc");
		
		UBakeMeshAttributeMapsToolProperties_GetUVLayerNamesFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBakeMeshAttributeMapsToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeMeshAttributeMapsToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BakeMeshAttributeMapsToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBakedNormalMapToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakedNormalMapToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BakedNormalMapToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBakedOcclusionMapToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakedOcclusionMapToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BakedOcclusionMapToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBakedOcclusionMapVisualizationProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakedOcclusionMapVisualizationProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BakedOcclusionMapVisualizationProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBakedCurvatureMapToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakedCurvatureMapToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BakedCurvatureMapToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBakedTexture2DImageProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakedTexture2DImageProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BakedTexture2DImageProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBakeMeshAttributeMapsTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeMeshAttributeMapsTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BakeMeshAttributeMapsTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBakeTransformToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeTransformToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BakeTransformToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBakeTransformToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeTransformToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BakeTransformToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBakeTransformTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeTransformTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BakeTransformTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPhysicsObjectToolPropertySet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhysicsObjectToolPropertySet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PhysicsObjectToolPropertySet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCollisionGeometryVisualizationProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCollisionGeometryVisualizationProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CollisionGeometryVisualizationProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCombineMeshesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCombineMeshesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CombineMeshesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCombineMeshesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCombineMeshesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CombineMeshesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCombineMeshesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCombineMeshesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CombineMeshesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UConvertToPolygonsToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConvertToPolygonsToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ConvertToPolygonsToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UConvertToPolygonsToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConvertToPolygonsToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ConvertToPolygonsToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UConvertToPolygonsTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConvertToPolygonsTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ConvertToPolygonsTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCSGMeshesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGMeshesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CSGMeshesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCSGMeshesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGMeshesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CSGMeshesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCSGMeshesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGMeshesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CSGMeshesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDeformMeshPolygonsToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeformMeshPolygonsToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DeformMeshPolygonsToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDeformMeshPolygonsTransformProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeformMeshPolygonsTransformProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DeformMeshPolygonsTransformProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDeformMeshPolygonsTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeformMeshPolygonsTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DeformMeshPolygonsTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03912270
	 * 		Name   -> Function MeshModelingTools.DisplaceMeshCommonProperties.GetWeightMapsFunc
	 * 		Flags  -> (Final, Native, Public)
	 */
	TArray<class FString> UDisplaceMeshCommonProperties::GetWeightMapsFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.DisplaceMeshCommonProperties.GetWeightMapsFunc");
		
		UDisplaceMeshCommonProperties_GetWeightMapsFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDisplaceMeshCommonProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDisplaceMeshCommonProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DisplaceMeshCommonProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDisplaceMeshTextureMapProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDisplaceMeshTextureMapProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DisplaceMeshTextureMapProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDisplaceMeshDirectionalFilterProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDisplaceMeshDirectionalFilterProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DisplaceMeshDirectionalFilterProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDisplaceMeshPerlinNoiseProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDisplaceMeshPerlinNoiseProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DisplaceMeshPerlinNoiseProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDisplaceMeshSineWaveProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDisplaceMeshSineWaveProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DisplaceMeshSineWaveProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDisplaceMeshToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDisplaceMeshToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DisplaceMeshToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDisplaceMeshTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDisplaceMeshTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DisplaceMeshTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDrawAndRevolveToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawAndRevolveToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawAndRevolveToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URevolveProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevolveProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RevolveProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URevolveToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevolveToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RevolveToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URevolveOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevolveOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RevolveOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDrawAndRevolveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawAndRevolveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawAndRevolveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDrawPolygonToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPolygonToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolygonToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDrawPolygonToolStandardProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPolygonToolStandardProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolygonToolStandardProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDrawPolygonToolSnapProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPolygonToolSnapProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolygonToolSnapProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDrawPolygonTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPolygonTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolygonTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDrawPolyPathToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPolyPathToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolyPathToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDrawPolyPathProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPolyPathProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolyPathProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDrawPolyPathExtrudeProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPolyPathExtrudeProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolyPathExtrudeProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDrawPolyPathTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPolyPathTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolyPathTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDynamicMeshBrushTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicMeshBrushTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DynamicMeshBrushTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDynamicMeshSculptToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicMeshSculptToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DynamicMeshSculptToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBrushSculptProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBrushSculptProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BrushSculptProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03916EC0
	 * 		Name   -> Function MeshModelingTools.DynamicSculptToolActions.DiscardAttributes
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UDynamicSculptToolActions::DiscardAttributes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.DynamicSculptToolActions.DiscardAttributes");
		
		UDynamicSculptToolActions_DiscardAttributes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDynamicSculptToolActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicSculptToolActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DynamicSculptToolActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshConstraintProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshConstraintProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshConstraintProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URemeshProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemeshProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemeshProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBrushRemeshProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBrushRemeshProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BrushRemeshProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFixedPlaneBrushProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFixedPlaneBrushProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.FixedPlaneBrushProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDynamicMeshSculptTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicMeshSculptTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DynamicMeshSculptTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEdgeLoopInsertionToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEdgeLoopInsertionToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EdgeLoopInsertionToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEdgeLoopInsertionProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEdgeLoopInsertionProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EdgeLoopInsertionProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEdgeLoopInsertionOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEdgeLoopInsertionOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EdgeLoopInsertionOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEdgeLoopInsertionTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEdgeLoopInsertionTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EdgeLoopInsertionTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditMeshPolygonsToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPolyEditCommonProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditCommonProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditCommonProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditMeshPolygonsToolActionPropertySet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsToolActionPropertySet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolActionPropertySet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BC20
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Retriangulate
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::Retriangulate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Retriangulate");
		
		UEditMeshPolygonsToolActions_Retriangulate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BC00
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.RecalcNormals
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::RecalcNormals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.RecalcNormals");
		
		UEditMeshPolygonsToolActions_RecalcNormals_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BBA0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Outset
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::Outset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Outset");
		
		UEditMeshPolygonsToolActions_Outset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BB80
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Offset
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::Offset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Offset");
		
		UEditMeshPolygonsToolActions_Offset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BB60
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Merge
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::Merge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Merge");
		
		UEditMeshPolygonsToolActions_Merge_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BB20
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Inset
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::Inset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Inset");
		
		UEditMeshPolygonsToolActions_Inset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BAC0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Flip
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::Flip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Flip");
		
		UEditMeshPolygonsToolActions_Flip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BA80
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Extrude
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::Extrude()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Extrude");
		
		UEditMeshPolygonsToolActions_Extrude_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BA60
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Disconnect
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::Disconnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Disconnect");
		
		UEditMeshPolygonsToolActions_Disconnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BA40
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Delete
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::Delete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Delete");
		
		UEditMeshPolygonsToolActions_Delete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BA20
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Decompose
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::Decompose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Decompose");
		
		UEditMeshPolygonsToolActions_Decompose_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BA00
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.CutFaces
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::CutFaces()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.CutFaces");
		
		UEditMeshPolygonsToolActions_CutFaces_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditMeshPolygonsToolActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsToolActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BC00
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.RecalcNormals
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions_Triangles::RecalcNormals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.RecalcNormals");
		
		UEditMeshPolygonsToolActions_Triangles_RecalcNormals_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BBE0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Poke
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions_Triangles::Poke()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Poke");
		
		UEditMeshPolygonsToolActions_Triangles_Poke_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BBA0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Outset
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions_Triangles::Outset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Outset");
		
		UEditMeshPolygonsToolActions_Triangles_Outset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BB80
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Offset
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions_Triangles::Offset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Offset");
		
		UEditMeshPolygonsToolActions_Triangles_Offset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BB20
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Inset
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions_Triangles::Inset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Inset");
		
		UEditMeshPolygonsToolActions_Triangles_Inset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BAC0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Flip
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions_Triangles::Flip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Flip");
		
		UEditMeshPolygonsToolActions_Triangles_Flip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BA80
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Extrude
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions_Triangles::Extrude()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Extrude");
		
		UEditMeshPolygonsToolActions_Triangles_Extrude_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BA60
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Disconnect
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions_Triangles::Disconnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Disconnect");
		
		UEditMeshPolygonsToolActions_Triangles_Disconnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BA40
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Delete
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions_Triangles::Delete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Delete");
		
		UEditMeshPolygonsToolActions_Triangles_Delete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BA00
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.CutFaces
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions_Triangles::CutFaces()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.CutFaces");
		
		UEditMeshPolygonsToolActions_Triangles_CutFaces_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditMeshPolygonsToolActions_Triangles.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsToolActions_Triangles::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolActions_Triangles");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BBC0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolUVActions.PlanarProjection
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolUVActions::PlanarProjection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolUVActions.PlanarProjection");
		
		UEditMeshPolygonsToolUVActions_PlanarProjection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditMeshPolygonsToolUVActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsToolUVActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolUVActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BCE0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Weld
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolEdgeActions::Weld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Weld");
		
		UEditMeshPolygonsToolEdgeActions_Weld_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BCA0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Straighten
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolEdgeActions::Straighten()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Straighten");
		
		UEditMeshPolygonsToolEdgeActions_Straighten_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BAA0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.FillHole
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolEdgeActions::FillHole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.FillHole");
		
		UEditMeshPolygonsToolEdgeActions_FillHole_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditMeshPolygonsToolEdgeActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsToolEdgeActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolEdgeActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BCE0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Weld
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolEdgeActions_Triangles::Weld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Weld");
		
		UEditMeshPolygonsToolEdgeActions_Triangles_Weld_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BC80
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Split
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolEdgeActions_Triangles::Split()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Split");
		
		UEditMeshPolygonsToolEdgeActions_Triangles_Split_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BAE0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Flip
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolEdgeActions_Triangles::Flip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Flip");
		
		UEditMeshPolygonsToolEdgeActions_Triangles_Flip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BAA0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.FillHole
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolEdgeActions_Triangles::FillHole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.FillHole");
		
		UEditMeshPolygonsToolEdgeActions_Triangles_FillHole_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391B9E0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Collapse
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolEdgeActions_Triangles::Collapse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Collapse");
		
		UEditMeshPolygonsToolEdgeActions_Triangles_Collapse_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditMeshPolygonsToolEdgeActions_Triangles.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsToolEdgeActions_Triangles::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPolyEditExtrudeProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditExtrudeProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditExtrudeProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPolyEditOffsetProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditOffsetProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditOffsetProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPolyEditInsetProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditInsetProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditInsetProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPolyEditOutsetProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditOutsetProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditOutsetProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPolyEditCutProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditCutProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditCutProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPolyEditSetUVProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditSetUVProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditSetUVProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditMeshPolygonsTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditNormalsToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditNormalsToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditNormalsToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditNormalsToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditNormalsToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditNormalsToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditNormalsAdvancedProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditNormalsAdvancedProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditNormalsAdvancedProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditNormalsOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditNormalsOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditNormalsOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditNormalsTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditNormalsTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditNormalsTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditPivotToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditPivotToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditPivotToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditPivotToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditPivotToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditPivotToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BCC0
	 * 		Name   -> Function MeshModelingTools.EditPivotToolActionPropertySet.Top
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditPivotToolActionPropertySet::Top()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditPivotToolActionPropertySet.Top");
		
		UEditPivotToolActionPropertySet_Top_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BC40
	 * 		Name   -> Function MeshModelingTools.EditPivotToolActionPropertySet.Right
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditPivotToolActionPropertySet::Right()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditPivotToolActionPropertySet.Right");
		
		UEditPivotToolActionPropertySet_Right_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BB40
	 * 		Name   -> Function MeshModelingTools.EditPivotToolActionPropertySet.Left
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditPivotToolActionPropertySet::Left()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditPivotToolActionPropertySet.Left");
		
		UEditPivotToolActionPropertySet_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BB00
	 * 		Name   -> Function MeshModelingTools.EditPivotToolActionPropertySet.Front
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditPivotToolActionPropertySet::Front()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditPivotToolActionPropertySet.Front");
		
		UEditPivotToolActionPropertySet_Front_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391B9A0
	 * 		Name   -> Function MeshModelingTools.EditPivotToolActionPropertySet.Center
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditPivotToolActionPropertySet::Center()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditPivotToolActionPropertySet.Center");
		
		UEditPivotToolActionPropertySet_Center_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391B980
	 * 		Name   -> Function MeshModelingTools.EditPivotToolActionPropertySet.Bottom
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditPivotToolActionPropertySet::Bottom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditPivotToolActionPropertySet.Bottom");
		
		UEditPivotToolActionPropertySet_Bottom_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391B960
	 * 		Name   -> Function MeshModelingTools.EditPivotToolActionPropertySet.Back
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditPivotToolActionPropertySet::Back()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditPivotToolActionPropertySet.Back");
		
		UEditPivotToolActionPropertySet_Back_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditPivotToolActionPropertySet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditPivotToolActionPropertySet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditPivotToolActionPropertySet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditPivotTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditPivotTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditPivotTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditUVIslandsToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditUVIslandsToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditUVIslandsToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditUVIslandsTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditUVIslandsTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditUVIslandsTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UExtractCollisionGeometryToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExtractCollisionGeometryToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ExtractCollisionGeometryToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UExtractCollisionGeometryTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExtractCollisionGeometryTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ExtractCollisionGeometryTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGroupEdgeInsertionToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroupEdgeInsertionToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.GroupEdgeInsertionToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGroupEdgeInsertionProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroupEdgeInsertionProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.GroupEdgeInsertionProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGroupEdgeInsertionOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroupEdgeInsertionOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.GroupEdgeInsertionOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGroupEdgeInsertionTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroupEdgeInsertionTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.GroupEdgeInsertionTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoleFillToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoleFillToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.HoleFillToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USmoothHoleFillProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmoothHoleFillProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SmoothHoleFillProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoleFillToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoleFillToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.HoleFillToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391BC60
	 * 		Name   -> Function MeshModelingTools.HoleFillToolActions.SelectAll
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UHoleFillToolActions::SelectAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.HoleFillToolActions.SelectAll");
		
		UHoleFillToolActions_SelectAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0391B9C0
	 * 		Name   -> Function MeshModelingTools.HoleFillToolActions.Clear
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UHoleFillToolActions::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.HoleFillToolActions.Clear");
		
		UHoleFillToolActions_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoleFillToolActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoleFillToolActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.HoleFillToolActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoleFillStatisticsProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoleFillStatisticsProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.HoleFillStatisticsProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoleFillOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoleFillOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.HoleFillOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoleFillTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoleFillTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.HoleFillTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshSculptBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSculptBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSculptBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseKelvinletBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseKelvinletBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BaseKelvinletBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UScaleKelvinletBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScaleKelvinletBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ScaleKelvinletBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPullKelvinletBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPullKelvinletBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PullKelvinletBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USharpPullKelvinletBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USharpPullKelvinletBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SharpPullKelvinletBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwistKelvinletBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwistKelvinletBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.TwistKelvinletBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshAnalysisProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshAnalysisProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshAnalysisProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshAttributePaintToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshAttributePaintToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshAttributePaintToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshAttributePaintToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshAttributePaintToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshAttributePaintToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshAttributePaintEditActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshAttributePaintEditActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshAttributePaintEditActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshAttributePaintTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshAttributePaintTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshAttributePaintTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshBoundaryToolBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshBoundaryToolBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshBoundaryToolBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInflateBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInflateBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.InflateBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshInspectorToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshInspectorToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshInspectorToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshInspectorProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshInspectorProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshInspectorProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshInspectorTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshInspectorTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshInspectorTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNewMeshMaterialProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNewMeshMaterialProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.NewMeshMaterialProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UExistingMeshMaterialProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExistingMeshMaterialProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ExistingMeshMaterialProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshEditingViewProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshEditingViewProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshEditingViewProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMoveBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoveBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MoveBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPinchBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPinchBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PinchBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBasePlaneBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasePlaneBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BasePlaneBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPlaneBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaneBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PlaneBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UViewAlignedPlaneBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UViewAlignedPlaneBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ViewAlignedPlaneBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFixedPlaneBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFixedPlaneBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.FixedPlaneBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UStandardSculptBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStandardSculptBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.StandardSculptBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UViewAlignedSculptBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UViewAlignedSculptBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ViewAlignedSculptBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USculptMaxBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USculptMaxBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SculptMaxBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USculptBrushProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USculptBrushProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SculptBrushProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UKelvinBrushProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKelvinBrushProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.KelvinBrushProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWorkPlaneProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorkPlaneProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.WorkPlaneProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USculptMaxBrushProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USculptMaxBrushProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SculptMaxBrushProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshSculptToolBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSculptToolBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSculptToolBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshSelectionToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSelectionToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshSelectionToolActionPropertySet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSelectionToolActionPropertySet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionToolActionPropertySet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03920F70
	 * 		Name   -> Function MeshModelingTools.MeshSelectionEditActions.Shrink
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionEditActions::Shrink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionEditActions.Shrink");
		
		UMeshSelectionEditActions_Shrink_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03920F30
	 * 		Name   -> Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByTriCount
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionEditActions::SelectLargestComponentByTriCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByTriCount");
		
		UMeshSelectionEditActions_SelectLargestComponentByTriCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03920F10
	 * 		Name   -> Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByArea
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionEditActions::SelectLargestComponentByArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByArea");
		
		UMeshSelectionEditActions_SelectLargestComponentByArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03920EF0
	 * 		Name   -> Function MeshModelingTools.MeshSelectionEditActions.SelectAll
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionEditActions::SelectAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionEditActions.SelectAll");
		
		UMeshSelectionEditActions_SelectAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03920ED0
	 * 		Name   -> Function MeshModelingTools.MeshSelectionEditActions.OptimizeSelection
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionEditActions::OptimizeSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionEditActions.OptimizeSelection");
		
		UMeshSelectionEditActions_OptimizeSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03920EB0
	 * 		Name   -> Function MeshModelingTools.MeshSelectionEditActions.Invert
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionEditActions::Invert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionEditActions.Invert");
		
		UMeshSelectionEditActions_Invert_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03920E90
	 * 		Name   -> Function MeshModelingTools.MeshSelectionEditActions.Grow
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionEditActions::Grow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionEditActions.Grow");
		
		UMeshSelectionEditActions_Grow_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03920E50
	 * 		Name   -> Function MeshModelingTools.MeshSelectionEditActions.ExpandToConnected
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionEditActions::ExpandToConnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionEditActions.ExpandToConnected");
		
		UMeshSelectionEditActions_ExpandToConnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03920DD0
	 * 		Name   -> Function MeshModelingTools.MeshSelectionEditActions.Clear
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionEditActions::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionEditActions.Clear");
		
		UMeshSelectionEditActions_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshSelectionEditActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSelectionEditActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionEditActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03920F50
	 * 		Name   -> Function MeshModelingTools.MeshSelectionMeshEditActions.SeparateTriangles
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionMeshEditActions::SeparateTriangles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionMeshEditActions.SeparateTriangles");
		
		UMeshSelectionMeshEditActions_SeparateTriangles_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03920E70
	 * 		Name   -> Function MeshModelingTools.MeshSelectionMeshEditActions.FlipNormals
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionMeshEditActions::FlipNormals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionMeshEditActions.FlipNormals");
		
		UMeshSelectionMeshEditActions_FlipNormals_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03920E30
	 * 		Name   -> Function MeshModelingTools.MeshSelectionMeshEditActions.DisconnectTriangles
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionMeshEditActions::DisconnectTriangles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionMeshEditActions.DisconnectTriangles");
		
		UMeshSelectionMeshEditActions_DisconnectTriangles_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03920E10
	 * 		Name   -> Function MeshModelingTools.MeshSelectionMeshEditActions.DeleteTriangles
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionMeshEditActions::DeleteTriangles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionMeshEditActions.DeleteTriangles");
		
		UMeshSelectionMeshEditActions_DeleteTriangles_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03920DF0
	 * 		Name   -> Function MeshModelingTools.MeshSelectionMeshEditActions.CreatePolygroup
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshSelectionMeshEditActions::CreatePolygroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionMeshEditActions.CreatePolygroup");
		
		UMeshSelectionMeshEditActions_CreatePolygroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshSelectionMeshEditActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSelectionMeshEditActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionMeshEditActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshSelectionToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSelectionToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshSelectionTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSelectionTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseSmoothBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseSmoothBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BaseSmoothBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USmoothBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmoothBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SmoothBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USecondarySmoothBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USecondarySmoothBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SecondarySmoothBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USmoothFillBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmoothFillBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SmoothFillBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFlattenBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlattenBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.FlattenBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEraseBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEraseBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EraseBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshSpaceDeformerToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSpaceDeformerToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSpaceDeformerToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USpaceDeformerOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpaceDeformerOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SpaceDeformerOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshSpaceDeformerTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSpaceDeformerTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSpaceDeformerTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshStatisticsProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshStatisticsProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshStatisticsProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshVertexSculptToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshVertexSculptToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshVertexSculptToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVertexBrushSculptProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVertexBrushSculptProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.VertexBrushSculptProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshVertexSculptTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshVertexSculptTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshVertexSculptTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMirrorToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMirrorToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MirrorToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMirrorToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMirrorToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MirrorToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMirrorOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMirrorOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MirrorOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03925DC0
	 * 		Name   -> Function MeshModelingTools.MirrorToolActionPropertySet.Up
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMirrorToolActionPropertySet::Up()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MirrorToolActionPropertySet.Up");
		
		UMirrorToolActionPropertySet_Up_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03925DA0
	 * 		Name   -> Function MeshModelingTools.MirrorToolActionPropertySet.ShiftToCenter
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMirrorToolActionPropertySet::ShiftToCenter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MirrorToolActionPropertySet.ShiftToCenter");
		
		UMirrorToolActionPropertySet_ShiftToCenter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03925D80
	 * 		Name   -> Function MeshModelingTools.MirrorToolActionPropertySet.Right
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMirrorToolActionPropertySet::Right()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MirrorToolActionPropertySet.Right");
		
		UMirrorToolActionPropertySet_Right_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03925D60
	 * 		Name   -> Function MeshModelingTools.MirrorToolActionPropertySet.Left
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMirrorToolActionPropertySet::Left()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MirrorToolActionPropertySet.Left");
		
		UMirrorToolActionPropertySet_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03925D40
	 * 		Name   -> Function MeshModelingTools.MirrorToolActionPropertySet.Forward
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMirrorToolActionPropertySet::Forward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MirrorToolActionPropertySet.Forward");
		
		UMirrorToolActionPropertySet_Forward_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03925D20
	 * 		Name   -> Function MeshModelingTools.MirrorToolActionPropertySet.Down
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMirrorToolActionPropertySet::Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MirrorToolActionPropertySet.Down");
		
		UMirrorToolActionPropertySet_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03925CE0
	 * 		Name   -> Function MeshModelingTools.MirrorToolActionPropertySet.Backward
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMirrorToolActionPropertySet::Backward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MirrorToolActionPropertySet.Backward");
		
		UMirrorToolActionPropertySet_Backward_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMirrorToolActionPropertySet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMirrorToolActionPropertySet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MirrorToolActionPropertySet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMirrorTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMirrorTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MirrorTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOffsetMeshToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOffsetMeshToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.OffsetMeshToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOffsetWeightMapSetProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOffsetWeightMapSetProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.OffsetWeightMapSetProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIterativeOffsetProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIterativeOffsetProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.IterativeOffsetProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UImplicitOffsetProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImplicitOffsetProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ImplicitOffsetProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOffsetMeshTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOffsetMeshTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.OffsetMeshTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOffsetMeshToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOffsetMeshToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.OffsetMeshToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPhysicsInspectorToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhysicsInspectorToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PhysicsInspectorToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPhysicsInspectorTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhysicsInspectorTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PhysicsInspectorTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPlaneCutToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaneCutToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PlaneCutToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAcceptOutputProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAcceptOutputProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AcceptOutputProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPlaneCutToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaneCutToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PlaneCutToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPlaneCutOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaneCutOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PlaneCutOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03925D00
	 * 		Name   -> Function MeshModelingTools.PlaneCutTool.Cut
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UPlaneCutTool::Cut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.PlaneCutTool.Cut");
		
		UPlaneCutTool_Cut_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPlaneCutTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaneCutTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PlaneCutTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPositionPlaneGizmoBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPositionPlaneGizmoBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PositionPlaneGizmoBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPositionPlaneGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPositionPlaneGizmo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PositionPlaneGizmo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPositionPlaneOnSceneInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPositionPlaneOnSceneInputBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PositionPlaneOnSceneInputBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProjectToTargetToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProjectToTargetToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProjectToTargetToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URemeshMeshToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemeshMeshToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemeshMeshToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProjectToTargetToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProjectToTargetToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProjectToTargetToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URemeshMeshTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemeshMeshTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemeshMeshTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProjectToTargetTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProjectToTargetTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProjectToTargetTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URemeshMeshToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemeshMeshToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemeshMeshToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URemoveOccludedTrianglesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoveOccludedTrianglesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemoveOccludedTrianglesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URemoveOccludedTrianglesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoveOccludedTrianglesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemoveOccludedTrianglesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URemoveOccludedTrianglesAdvancedProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoveOccludedTrianglesAdvancedProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemoveOccludedTrianglesAdvancedProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URemoveOccludedTrianglesOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoveOccludedTrianglesOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemoveOccludedTrianglesOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URemoveOccludedTrianglesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoveOccludedTrianglesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemoveOccludedTrianglesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URevolveBoundaryToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevolveBoundaryToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RevolveBoundaryToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URevolveBoundaryOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevolveBoundaryOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RevolveBoundaryOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URevolveBoundaryToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevolveBoundaryToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RevolveBoundaryToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URevolveBoundaryTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevolveBoundaryTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RevolveBoundaryTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USeamSculptToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeamSculptToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SeamSculptToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USeamSculptToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeamSculptToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SeamSculptToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USeamSculptTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeamSculptTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SeamSculptTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USelfUnionMeshesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelfUnionMeshesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SelfUnionMeshesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USelfUnionMeshesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelfUnionMeshesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SelfUnionMeshesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USelfUnionMeshesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelfUnionMeshesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SelfUnionMeshesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USetCollisionGeometryToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetCollisionGeometryToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SetCollisionGeometryToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USetCollisionGeometryToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetCollisionGeometryToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SetCollisionGeometryToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USetCollisionGeometryTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetCollisionGeometryTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SetCollisionGeometryTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USmoothMeshToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmoothMeshToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SmoothMeshToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIterativeSmoothProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIterativeSmoothProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.IterativeSmoothProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDiffusionSmoothProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiffusionSmoothProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DiffusionSmoothProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UImplicitSmoothProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImplicitSmoothProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ImplicitSmoothProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USmoothWeightMapSetProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmoothWeightMapSetProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SmoothWeightMapSetProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USmoothMeshTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmoothMeshTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SmoothMeshTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USmoothMeshToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmoothMeshToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SmoothMeshToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTransformMeshesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransformMeshesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.TransformMeshesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTransformMeshesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransformMeshesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.TransformMeshesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTransformMeshesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransformMeshesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.TransformMeshesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUVProjectionToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUVProjectionToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUVProjectionToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUVProjectionToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUVProjectionAdvancedProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUVProjectionAdvancedProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionAdvancedProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUVProjectionOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUVProjectionOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUVProjectionTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUVProjectionTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelBlendMeshesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelBlendMeshesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.VoxelBlendMeshesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelBlendMeshesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelBlendMeshesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.VoxelBlendMeshesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelBlendMeshesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelBlendMeshesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.VoxelBlendMeshesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelMorphologyMeshesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelMorphologyMeshesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.VoxelMorphologyMeshesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelMorphologyMeshesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelMorphologyMeshesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.VoxelMorphologyMeshesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelMorphologyMeshesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelMorphologyMeshesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.VoxelMorphologyMeshesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelSolidifyMeshesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelSolidifyMeshesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.VoxelSolidifyMeshesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelSolidifyMeshesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelSolidifyMeshesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.VoxelSolidifyMeshesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelSolidifyMeshesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelSolidifyMeshesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.VoxelSolidifyMeshesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWeldMeshEdgesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeldMeshEdgesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.WeldMeshEdgesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWeldMeshEdgesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeldMeshEdgesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.WeldMeshEdgesTool");
		return ptr;
	}

}



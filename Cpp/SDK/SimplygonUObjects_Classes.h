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
	 * Class SimplygonUObjects.SimplygonStandinPipeline
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class USimplygonStandinPipeline : public UObject
	{
	public:
		struct FChartAggregatorSettings                            ChartAggregatorSettings;                                 // 0x0030(0x0038) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.StandinNearPipeline
	 * Size -> 0x01A0 (FullSize[0x0208] - InheritedSize[0x0068])
	 */
	class UStandinNearPipeline : public USimplygonStandinPipeline
	{
	public:
		struct FAggregationPipelineSettings                        Settings;                                                // 0x0068(0x01A0) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.StandinFarPipeline
	 * Size -> 0x01A8 (FullSize[0x0210] - InheritedSize[0x0068])
	 */
	class UStandinFarPipeline : public USimplygonStandinPipeline
	{
	public:
		struct FRemeshingPipelineSettings                          Settings;                                                // 0x0068(0x01A8) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.BillboardCloudPipeline
	 * Size -> 0x00F0 (FullSize[0x0158] - InheritedSize[0x0068])
	 */
	class UBillboardCloudPipeline : public USimplygonStandinPipeline
	{
	public:
		struct FBillboardCloudPipelineSettings                     Settings;                                                // 0x0068(0x00F0) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.SimplygonPipeline
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USimplygonPipeline : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.FlipbookPipeline
	 * Size -> 0x00D8 (FullSize[0x0108] - InheritedSize[0x0030])
	 */
	class UFlipbookPipeline : public USimplygonPipeline
	{
	public:
		struct FFlipbookPipelineSettings                           Settings;                                                // 0x0030(0x00D8) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.BillboardCloudVegetationPipeline
	 * Size -> 0x00F0 (FullSize[0x0120] - InheritedSize[0x0030])
	 */
	class UBillboardCloudVegetationPipeline : public USimplygonPipeline
	{
	public:
		struct FBillboardCloudVegetationPipelineSettings           Settings;                                                // 0x0030(0x00F0) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.SimplygonMaterialCaster
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USimplygonMaterialCaster : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.SimplygonColorCaster
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class USimplygonColorCaster : public USimplygonMaterialCaster
	{
	public:
		struct FColorCasterSettings                                ColorCasterSettings;                                     // 0x0030(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.BaseColorCaster
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UBaseColorCaster : public USimplygonColorCaster
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.MetallicCaster
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UMetallicCaster : public UBaseColorCaster
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.SpecualarCaster
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class USpecualarCaster : public UBaseColorCaster
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.RoughnessCaster
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class URoughnessCaster : public UBaseColorCaster
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.SimplygonNormalCaster
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class USimplygonNormalCaster : public USimplygonMaterialCaster
	{
	public:
		struct FNormalCasterSettings                               NormalCasterSettings;                                    // 0x0030(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.NormalCaster
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UNormalCaster : public USimplygonNormalCaster
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.SimplygonOpacityCaster
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class USimplygonOpacityCaster : public USimplygonMaterialCaster
	{
	public:
		struct FOpacityCasterSettings                              OpacityCasterSettings;                                   // 0x0030(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.OpacityCaster
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UOpacityCaster : public USimplygonOpacityCaster
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.EmissiveCaster
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UEmissiveCaster : public UBaseColorCaster
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.OpacityMaskCaster
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UOpacityMaskCaster : public USimplygonOpacityCaster
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.AmbientOcclusionMaskCaster
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UAmbientOcclusionMaskCaster : public UBaseColorCaster
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.ReductionPipeline
	 * Size -> 0x0210 (FullSize[0x0240] - InheritedSize[0x0030])
	 */
	class UReductionPipeline : public USimplygonPipeline
	{
	public:
		struct FReductionPipelineSettings                          Settings;                                                // 0x0030(0x0210) Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.RemeshingPipeline
	 * Size -> 0x01A8 (FullSize[0x01D8] - InheritedSize[0x0030])
	 */
	class URemeshingPipeline : public USimplygonPipeline
	{
	public:
		struct FRemeshingPipelineSettings                          Settings;                                                // 0x0030(0x01A8) Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.AggregationPipeline
	 * Size -> 0x01A0 (FullSize[0x01D0] - InheritedSize[0x0030])
	 */
	class UAggregationPipeline : public USimplygonPipeline
	{
	public:
		struct FAggregationPipelineSettings                        Settings;                                                // 0x0030(0x01A0) Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.SimplygonDisplacementCaster
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class USimplygonDisplacementCaster : public USimplygonMaterialCaster
	{
	public:
		struct FDisplacementCasterSettings                         DisplacementCasterSettings;                              // 0x0030(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.SimplygonAmbientOcclusionCaster
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class USimplygonAmbientOcclusionCaster : public USimplygonMaterialCaster
	{
	public:
		struct FAmbientOcclusionCasterSettings                     AmbientOcclusionCasterSettings;                          // 0x0030(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.SimplygonGeometryDataCaster
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class USimplygonGeometryDataCaster : public USimplygonMaterialCaster
	{
	public:
		struct FGeometryDataCasterSettings                         GeometryDataCasterSettings;                              // 0x0030(0x0060) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimplygonUObjects.SimplygonVertexColorCaster
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class USimplygonVertexColorCaster : public USimplygonMaterialCaster
	{
	public:
		struct FVertexColorCasterSettings                          VertexColorCasterSettings;                               // 0x0030(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

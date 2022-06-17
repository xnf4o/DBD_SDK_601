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
	 * Class ModelingComponents.BaseCreateFromSelectedToolBuilder
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UBaseCreateFromSelectedToolBuilder : public UInteractiveToolBuilder
	{
	public:
		unsigned char                                              UnknownData_ZGU7[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.OnAcceptHandleSourcesProperties
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UOnAcceptHandleSourcesProperties : public UInteractiveToolPropertySet
	{
	public:
		EHandleSourcesMethod                                       OnToolAccept;                                            // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CC8A[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.BaseCreateFromSelectedHandleSourceProperties
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	class UBaseCreateFromSelectedHandleSourceProperties : public UOnAcceptHandleSourcesProperties
	{
	public:
		EBaseCreateFromSelectedTargetType                          WriteOutputTo;                                           // 0x0070(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EMGL[0x3];                                   // 0x0070(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_TXVD[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OutputName;                                              // 0x0078(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OutputAsset;                                             // 0x0088(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.TransformInputsToolProperties
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UTransformInputsToolProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bShowTransformUI;                                        // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToWorldGrid;                                        // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MQ6A[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.BaseCreateFromSelectedTool
	 * Size -> 0x0060 (FullSize[0x00F8] - InheritedSize[0x0098])
	 */
	class UBaseCreateFromSelectedTool : public UMultiSelectionTool
	{
	public:
		unsigned char                                              UnknownData_FU7R[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformInputsToolProperties*                      TransformProperties;                                     // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBaseCreateFromSelectedHandleSourceProperties*       HandleSourcesProperties;                                 // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMeshOpPreviewWithBackgroundCompute*                 Preview;                                                 // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UTransformProxy*>                             TransformProxies;                                        // 0x00B8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UTransformGizmo*>                             TransformGizmos;                                         // 0x00C8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FVector>                                     TransformInitialScales;                                  // 0x00D8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IU42[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.BaseDynamicMeshComponent
	 * Size -> 0x0050 (FullSize[0x0520] - InheritedSize[0x04D0])
	 */
	class UBaseDynamicMeshComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_RJ88[0x50];                                  // 0x04D0(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.BaseMeshProcessingToolBuilder
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBaseMeshProcessingToolBuilder : public UInteractiveToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.BaseMeshProcessingTool
	 * Size -> 0x0370 (FullSize[0x0400] - InheritedSize[0x0090])
	 */
	class UBaseMeshProcessingTool : public USingleSelectionTool
	{
	public:
		unsigned char                                              UnknownData_YB41[0x28];                                  // 0x0090(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMeshOpPreviewWithBackgroundCompute*                 Preview;                                                 // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KZXH[0x340];                                 // 0x00C0(0x0340) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.BaseVoxelTool
	 * Size -> 0x0018 (FullSize[0x0110] - InheritedSize[0x00F8])
	 */
	class UBaseVoxelTool : public UBaseCreateFromSelectedTool
	{
	public:
		class UVoxelProperties*                                    VoxProperties;                                           // 0x00F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RCZN[0x10];                                  // 0x0100(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.CollectSurfacePathMechanic
	 * Size -> 0x0528 (FullSize[0x0560] - InheritedSize[0x0038])
	 */
	class UCollectSurfacePathMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_3TR9[0x528];                                 // 0x0038(0x0528) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.ConstructionPlaneMechanic
	 * Size -> 0x00C8 (FullSize[0x0100] - InheritedSize[0x0038])
	 */
	class UConstructionPlaneMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_60ZP[0xA0];                                  // 0x0038(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformGizmo*                                     PlaneTransformGizmo;                                     // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTransformProxy*                                     PlaneTransformProxy;                                     // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6GYC[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USingleClickInputBehavior*                           ClickToSetPlaneBehavior;                                 // 0x00F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.CurveControlPointsMechanic
	 * Size -> 0x0618 (FullSize[0x0650] - InheritedSize[0x0038])
	 */
	class UCurveControlPointsMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_551Z[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USingleClickInputBehavior*                           ClickBehavior;                                           // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMouseHoverBehavior*                                 HoverBehavior;                                           // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_43HM[0x490];                                 // 0x0058(0x0490) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APreviewGeometryActor*                               PreviewGeometryActor;                                    // 0x04E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPointSetComponent*                                  DrawnControlPoints;                                      // 0x04F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULineSetComponent*                                   DrawnControlSegments;                                    // 0x04F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPointSetComponent*                                  PreviewPoint;                                            // 0x0500(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULineSetComponent*                                   PreviewSegment;                                          // 0x0508(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XXHM[0x78];                                  // 0x0510(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformProxy*                                     PointTransformProxy;                                     // 0x0588(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTransformGizmo*                                     PointTransformGizmo;                                     // 0x0590(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4ARV[0xB8];                                  // 0x0598(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.DynamicMeshReplacementChangeTarget
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UDynamicMeshReplacementChangeTarget : public UObject
	{
	public:
		unsigned char                                              UnknownData_4JA5[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.LineSetComponent
	 * Size -> 0x0060 (FullSize[0x0530] - InheritedSize[0x04D0])
	 */
	class ULineSetComponent : public UMeshComponent
	{
	public:
		class UMaterialInterface*                                  LineMaterial;                                            // 0x04D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FBoxSphereBounds                                    Bounds;                                                  // 0x04D8(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bBoundsDirty;                                            // 0x04F4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E0P4[0x3B];                                  // 0x04F5(0x003B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.MeshCommandChangeTarget
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMeshCommandChangeTarget : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.MeshOpPreviewWithBackgroundCompute
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UMeshOpPreviewWithBackgroundCompute : public UObject
	{
	public:
		unsigned char                                              UnknownData_A351[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPreviewMesh*                                        PreviewMesh;                                             // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          StandardMaterials;                                       // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  OverrideMaterial;                                        // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  WorkingMaterial;                                         // 0x0080(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E2QA[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.MeshReplacementCommandChangeTarget
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMeshReplacementCommandChangeTarget : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.MeshVertexCommandChangeTarget
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMeshVertexCommandChangeTarget : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.MultiTransformer
	 * Size -> 0x0120 (FullSize[0x0150] - InheritedSize[0x0030])
	 */
	class UMultiTransformer : public UObject
	{
	public:
		unsigned char                                              UnknownData_0WHA[0x48];                                  // 0x0030(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInteractiveGizmoManager*                            GizmoManager;                                            // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A3IV[0x68];                                  // 0x0080(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformGizmo*                                     TransformGizmo;                                          // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTransformProxy*                                     TransformProxy;                                          // 0x00F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7047[0x58];                                  // 0x00F8(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.OctreeDynamicMeshComponent
	 * Size -> 0x0110 (FullSize[0x0630] - InheritedSize[0x0520])
	 */
	class UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent
	{
	public:
		unsigned char                                              UnknownData_NVCY[0x10];                                  // 0x0520(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bExplicitShowWireframe;                                  // 0x0530(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_REP7[0xFF];                                  // 0x0531(0x00FF) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PlaneDistanceFromHitMechanic
	 * Size -> 0x0488 (FullSize[0x04C0] - InheritedSize[0x0038])
	 */
	class UPlaneDistanceFromHitMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_3RGZ[0x488];                                 // 0x0038(0x0488) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PointSetComponent
	 * Size -> 0x0060 (FullSize[0x0530] - InheritedSize[0x04D0])
	 */
	class UPointSetComponent : public UMeshComponent
	{
	public:
		class UMaterialInterface*                                  PointMaterial;                                           // 0x04D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FBoxSphereBounds                                    Bounds;                                                  // 0x04D8(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bBoundsDirty;                                            // 0x04F4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RH3M[0x3B];                                  // 0x04F5(0x003B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PreviewMesh
	 * Size -> 0x00B8 (FullSize[0x00E8] - InheritedSize[0x0030])
	 */
	class UPreviewMesh : public UObject
	{
	public:
		unsigned char                                              UnknownData_0TT7[0x18];                                  // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bBuildSpatialDataStructure;                              // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawOnTop;                                              // 0x0049(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V9OU[0xE];                                   // 0x004A(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USimpleDynamicMeshComponent*                         DynamicMeshComponent;                                    // 0x0058(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DGZI[0x88];                                  // 0x0060(0x0088) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PolyEditPreviewMesh
	 * Size -> 0x03F0 (FullSize[0x04D8] - InheritedSize[0x00E8])
	 */
	class UPolyEditPreviewMesh : public UPreviewMesh
	{
	public:
		unsigned char                                              UnknownData_3U07[0x3F0];                                 // 0x00E8(0x03F0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PolygonSelectionMechanicProperties
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UPolygonSelectionMechanicProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bSelectFaces;                                            // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectEdges;                                            // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectVertices;                                         // 0x006A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectEdgeLoops;                                        // 0x006B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectEdgeRings;                                        // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreferProjectedElement;                                 // 0x006D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectDownRay;                                          // 0x006E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreOcclusion;                                        // 0x006F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PolygonSelectionMechanic
	 * Size -> 0x07F8 (FullSize[0x0830] - InheritedSize[0x0038])
	 */
	class UPolygonSelectionMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_VUHL[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPolygonSelectionMechanicProperties*                 Properties;                                              // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DPI1[0x4C0];                                 // 0x0060(0x04C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APreviewGeometryActor*                               PreviewGeometryActor;                                    // 0x0520(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTriangleSetComponent*                               DrawnTriangleSetComponent;                               // 0x0528(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6IRH[0x50];                                  // 0x0530(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  HighlightedFaceMaterial;                                 // 0x0580(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QY5W[0x2A8];                                 // 0x0588(0x02A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PreviewGeometryActor
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class APreviewGeometryActor : public AInternalToolFrameworkActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PreviewGeometry
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UPreviewGeometry : public UObject
	{
	public:
		class APreviewGeometryActor*                               ParentActor;                                             // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class ULineSetComponent*>              LineSets;                                                // 0x0038(0x0050) ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		bool SetLineSetVisibility(const class FString& LineSetIdentifier, bool bVisible);
		bool SetLineSetMaterial(const class FString& LineSetIdentifier, class UMaterialInterface* NewMaterial);
		void SetAllLineSetsMaterial(class UMaterialInterface* Material);
		bool RemoveLineSet(const class FString& LineSetIdentifier, bool bDestroy);
		void RemoveAllLineSets(bool bDestroy);
		class APreviewGeometryActor* GetActor();
		class ULineSetComponent* FindLineSet(const class FString& LineSetIdentifier);
		void Disconnect();
		void CreateInWorld(class UWorld* World, const struct FTransform& WithTransform);
		class ULineSetComponent* AddLineSet(const class FString& LineSetIdentifier);
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PreviewMeshActor
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class APreviewMeshActor : public AInternalToolFrameworkActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.SimpleDynamicMeshComponent
	 * Size -> 0x0150 (FullSize[0x0670] - InheritedSize[0x0520])
	 */
	class USimpleDynamicMeshComponent : public UBaseDynamicMeshComponent
	{
	public:
		unsigned char                                              UnknownData_INSW[0x30];                                  // 0x0520(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bExplicitShowWireframe;                                  // 0x0550(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SBBF[0x4F];                                  // 0x0551(0x004F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bDrawOnTop;                                              // 0x05A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0W1M[0xCF];                                  // 0x05A1(0x00CF) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.SpaceCurveDeformationMechanicPropertySet
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class USpaceCurveDeformationMechanicPropertySet : public UInteractiveToolPropertySet
	{
	public:
		ESpaceCurveControlPointTransformMode                       TransformMode;                                           // 0x0068(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R4F6[0x3];                                   // 0x0068(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ESpaceCurveControlPointOriginMode                          TransformOrigin;                                         // 0x006C(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YCBY[0x3];                                   // 0x006C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      Softness;                                                // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESpaceCurveControlPointFalloffType                         SoftFalloff;                                             // 0x0074(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3JUB[0x3];                                   // 0x0074(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.SpaceCurveDeformationMechanic
	 * Size -> 0x0288 (FullSize[0x02C0] - InheritedSize[0x0038])
	 */
	class USpaceCurveDeformationMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_28Z8[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USingleClickInputBehavior*                           ClickBehavior;                                           // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMouseHoverBehavior*                                 HoverBehavior;                                           // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UFUW[0x18];                                  // 0x0058(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USpaceCurveDeformationMechanicPropertySet*           TransformProperties;                                     // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GXYT[0xF8];                                  // 0x0078(0x00F8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APreviewGeometryActor*                               PreviewGeometryActor;                                    // 0x0170(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPointSetComponent*                                  RenderPoints;                                            // 0x0178(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULineSetComponent*                                   RenderSegments;                                          // 0x0180(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O2ZV[0x38];                                  // 0x0188(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformProxy*                                     PointTransformProxy;                                     // 0x01C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTransformGizmo*                                     PointTransformGizmo;                                     // 0x01C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XBG4[0xF0];                                  // 0x01D0(0x00F0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.SpatialCurveDistanceMechanic
	 * Size -> 0x03C8 (FullSize[0x0400] - InheritedSize[0x0038])
	 */
	class USpatialCurveDistanceMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_XICS[0x3C8];                                 // 0x0038(0x03C8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.TriangleSetComponent
	 * Size -> 0x00E0 (FullSize[0x05B0] - InheritedSize[0x04D0])
	 */
	class UTriangleSetComponent : public UMeshComponent
	{
	public:
		struct FBoxSphereBounds                                    Bounds;                                                  // 0x04D0(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bBoundsDirty;                                            // 0x04EC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IN2J[0xC3];                                  // 0x04ED(0x00C3) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.UVLayoutPreviewProperties
	 * Size -> 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
	 */
	class UUVLayoutPreviewProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bVisible;                                                // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B8BD[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScaleFactor;                                             // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUVLayoutPreviewSide                                       WhichSide;                                               // 0x0070(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5Q1B[0x3];                                   // 0x0070(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bShowWireframe;                                          // 0x0074(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U6GZ[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Shift;                                                   // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.UVLayoutPreview
	 * Size -> 0x0120 (FullSize[0x0150] - InheritedSize[0x0030])
	 */
	class UUVLayoutPreview : public UObject
	{
	public:
		class UUVLayoutPreviewProperties*                          Settings;                                                // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPreviewMesh*                                        PreviewMesh;                                             // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTriangleSetComponent*                               TriangleComponent;                                       // 0x0040(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowBackingRectangle;                                   // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S442[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  BackingRectangleMaterial;                                // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AE12[0xF8];                                  // 0x0058(0x00F8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.VoxelProperties
	 * Size -> 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
	 */
	class UVoxelProperties : public UInteractiveToolPropertySet
	{
	public:
		int32_t                                                    VoxelCount;                                              // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoSimplify;                                           // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveInternalSurfaces;                                 // 0x006D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CGBS[0x2];                                   // 0x006E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SimplifyMaxErrorFactor;                                  // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     CubeRootMinComponentVolume;                              // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.WeightMapSetProperties
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UWeightMapSetProperties : public UInteractiveToolPropertySet
	{
	public:
		class FName                                                WeightMap;                                               // 0x0068(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FSN3[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      WeightMapsList;                                          // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bInvertWeightMap;                                        // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FLD5[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)

	public:
		TArray<class FString> GetWeightMapsFunc();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

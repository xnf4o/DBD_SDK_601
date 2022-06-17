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
	 * Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.RebuildAtlas
	 */
	struct UGMAdaptiveShadowMapControllerComponent_RebuildAtlas_Params
	{	};

	/**
	 * Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.IsControllerDonePreallocatingTiles
	 */
	struct UGMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileSize
	 */
	struct UGMAdaptiveShadowMapControllerComponent_GetTileSize_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileCountY
	 */
	struct UGMAdaptiveShadowMapControllerComponent_GetTileCountY_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileCountX
	 */
	struct UGMAdaptiveShadowMapControllerComponent_GetTileCountX_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.DumpDebugInfo
	 */
	struct UGMAdaptiveShadowMapControllerComponent_DumpDebugInfo_Params
	{	};

	/**
	 * Function GraphicsExtensions.GMAdaptiveShadowMapSourceComponent.SetLightRadiusWithBounds
	 */
	struct UGMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds_Params
	{
	public:
		struct FVector                                             BoundingSphereCenter;                                    // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BoundingSphereRadius;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

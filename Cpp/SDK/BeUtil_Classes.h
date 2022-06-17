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
	 * Class BeUtil.BeMaterialEditorHelper
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBeMaterialEditorHelper : public UBlueprintFunctionLibrary
	{
	public:
		class UTexture* STATIC_ReloadTexture(class UTexture* InTexture, const class FString& InSourceName);
		void STATIC_EditMaterialConstant(class UMaterialInstanceConstant* InMaterialInstance, TArray<struct FBeMaterialScalar> InScalars, TArray<struct FBeMaterialVector> InVectors, TArray<struct FBeMaterialTexture> InTextures);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

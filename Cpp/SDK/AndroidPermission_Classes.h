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
	 * Class AndroidPermission.AndroidPermissionCallbackProxy
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UAndroidPermissionCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnPermissionsGrantedDynamicDelegate;                     // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_INEV[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AndroidPermission.AndroidPermissionFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_CheckPermission(const class FString& permission);
		class UAndroidPermissionCallbackProxy* STATIC_AcquirePermissions(TArray<class FString> Permissions);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

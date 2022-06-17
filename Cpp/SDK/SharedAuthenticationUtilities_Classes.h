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
	 * Class SharedAuthenticationUtilities.SharedAuthenticationComponent
	 * Size -> 0x0160 (FullSize[0x0190] - InheritedSize[0x0030])
	 */
	class USharedAuthenticationComponent : public UObject
	{
	public:
		int32_t                                                    PopupZOrder;                                             // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XGED[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AuthenticationProviderSelectionWidget;                   // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AuthenticationProviderSelectionWidgetToLoad[0x30];       // 0x0040(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              LoginBackgroundToLoadWidgetToLoadMap[0x50];              // 0x0070(0x0050) UNKNOWN PROPERTY: MapProperty
		class UObject*                                             _worldContextObject;                                     // 0x00C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BXRG[0x28];                                  // 0x00C8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         _loginBackgroundWidget;                                  // 0x00F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EMV6[0x50];                                  // 0x00F8(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUMGAuthenticationProviderSelection*                 _identityAuthenticationSelectionWidget;                  // 0x0148(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P315[0x38];                                  // 0x0150(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USharedAuthenticationMigrateComponent*               _migrateComponent;                                       // 0x0188(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SharedAuthenticationUtilities.SharedAuthenticationMigrateComponent
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class USharedAuthenticationMigrateComponent : public UObject
	{
	public:
		class UObject*                                             _worldContextObject;                                     // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MQML[0x38];                                  // 0x0038(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SharedAuthenticationUtilities.UMGAuthenticationProviderSelection
	 * Size -> 0x0038 (FullSize[0x02D0] - InheritedSize[0x0298])
	 */
	class UUMGAuthenticationProviderSelection : public UUserWidget
	{
	public:
		bool                                                       _isAsia;                                                 // 0x0298(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LZRG[0x37];                                  // 0x0299(0x0037) MISSED OFFSET (PADDING)

	public:
		void UpdateWidgetsVisibility();
		void ShowMigrationFailedPopup();
		void SetSelectedAuthenticationProvider(ESharedAuthenticationProvider Provider);
		void SetMigrateWarningMessageAndShowPopup(const class FString& playerName);
		static UClass* StaticClass();
	};

	/**
	 * Class SharedAuthenticationUtilities.UMGAutheticationProviderSelection
	 * Size -> 0x0018 (FullSize[0x02B0] - InheritedSize[0x0298])
	 */
	class UUMGAutheticationProviderSelection : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_1I1M[0x18];                                  // 0x0298(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetSelectedAuthenticationProvider(ESharedAuthenticationProvider Provider);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

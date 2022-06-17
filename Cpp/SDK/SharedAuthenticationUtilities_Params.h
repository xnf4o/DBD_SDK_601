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
	 * Function SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.UpdateWidgetsVisibility
	 */
	struct UUMGAuthenticationProviderSelection_UpdateWidgetsVisibility_Params
	{	};

	/**
	 * Function SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.ShowMigrationFailedPopup
	 */
	struct UUMGAuthenticationProviderSelection_ShowMigrationFailedPopup_Params
	{	};

	/**
	 * Function SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.SetSelectedAuthenticationProvider
	 */
	struct UUMGAuthenticationProviderSelection_SetSelectedAuthenticationProvider_Params
	{
	public:
		ESharedAuthenticationProvider                              Provider;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.SetMigrateWarningMessageAndShowPopup
	 */
	struct UUMGAuthenticationProviderSelection_SetMigrateWarningMessageAndShowPopup_Params
	{
	public:
		class FString                                              playerName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SharedAuthenticationUtilities.UMGAutheticationProviderSelection.SetSelectedAuthenticationProvider
	 */
	struct UUMGAutheticationProviderSelection_SetSelectedAuthenticationProvider_Params
	{
	public:
		ESharedAuthenticationProvider                              Provider;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

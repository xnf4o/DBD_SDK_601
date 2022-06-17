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
	 * Class TheWraith.WraithAnimInstance
	 * Size -> 0x00A0 (FullSize[0x06A0] - InheritedSize[0x0600])
	 */
	class UWraithAnimInstance : public UKillerAnimInstance
	{
	public:
		struct FPerspectiveDependentAnimSequenceSelector           _cloakingInSelector;                                     // 0x0600(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FPerspectiveDependentAnimSequenceSelector           _cloakingSelector;                                       // 0x0618(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FPerspectiveDependentAnimSequenceSelector           _cloakingOutSelector;                                    // 0x0630(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FPerspectiveDependentAnimSequenceSelector           _uncloakingInSelector;                                   // 0x0648(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FPerspectiveDependentAnimSequenceSelector           _uncloakingSelector;                                     // 0x0660(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FPerspectiveDependentAnimSequenceSelector           _uncloakingOutSelector;                                  // 0x0678(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      _cloakingPlayRate;                                       // 0x0690(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DU2L[0xC];                                   // 0x0694(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheWraith.WraithBurnable
	 * Size -> 0x0090 (FullSize[0x01A0] - InheritedSize[0x0110])
	 */
	class UWraithBurnable : public UPlayerLightBurnable
	{
	public:
		struct FDBDTunableRowHandle                                _flashlightEvasionScoreCooldown;                         // 0x0110(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y4XD[0x68];                                  // 0x0138(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

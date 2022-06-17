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
	 * ScriptStruct Customization.CharmIdSlot
	 * Size -> 0x0010
	 */
	struct FCharmIdSlot
	{
	public:
		int8_t                                                     SlotIndex;                                               // 0x0000(0x0001) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IPX7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CharmId;                                                 // 0x0004(0x000C) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Customization.EquippedPlayerCustomization
	 * Size -> 0x0020
	 */
	struct FEquippedPlayerCustomization
	{
	public:
		TArray<class FName>                                        _customizationItemIds;                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FCharmIdSlot>                                _customizationCharms;                                    // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

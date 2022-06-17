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
	 * Function GameplayTagUtilities.DBDGameplayTagUtilities.GetScoreModifierName
	 */
	struct UDBDGameplayTagUtilities_GetScoreModifierName_Params
	{
	public:
		class FName                                                scoreEventID;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTagUtilities.DBDGameplayTagUtilities.GameplayTagExists
	 */
	struct UDBDGameplayTagUtilities_GameplayTagExists_Params
	{
	public:
		class FName                                                TagName;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTagUtilities.GameplayTagContainerComponent.Remove
	 */
	struct UGameplayTagContainerComponent_Remove_Params
	{
	public:
		struct FGameplayTag                                        State;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTagUtilities.GameplayTagContainerComponent.Add
	 */
	struct UGameplayTagContainerComponent_Add_Params
	{
	public:
		struct FGameplayTag                                        State;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

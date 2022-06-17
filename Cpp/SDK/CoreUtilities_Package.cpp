/**
 * Name: DBD
 * Version: 601
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x074F8550
	 * 		Name   -> Function CoreUtilities.CoreUtilities.GetRandomValuesFromArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    Values                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            numberOfDesiredValues                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<int32_t> UCoreUtilities::STATIC_GetRandomValuesFromArray(TArray<int32_t> Values, int32_t numberOfDesiredValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoreUtilities.CoreUtilities.GetRandomValuesFromArray");
		
		UCoreUtilities_GetRandomValuesFromArray_Params params {};
		params.Values = Values;
		params.numberOfDesiredValues = numberOfDesiredValues;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x074F84C0
	 * 		Name   -> Function CoreUtilities.CoreUtilities.GetGameInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameInstance* UCoreUtilities::STATIC_GetGameInstance(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoreUtilities.CoreUtilities.GetGameInstance");
		
		UCoreUtilities_GetGameInstance_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUtilities.CoreUtilities");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x074F8AF0
	 * 		Name   -> Function CoreUtilities.PropertyParser.CopyProperties
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UActorComponent*                             Dest                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UActorComponent*                             Origin                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               copyTransform                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                propertiesToExclude                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UPropertyParser::STATIC_CopyProperties(class UActorComponent* Dest, class UActorComponent* Origin, bool copyTransform, TArray<class FName> propertiesToExclude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoreUtilities.PropertyParser.CopyProperties");
		
		UPropertyParser_CopyProperties_Params params {};
		params.Dest = Dest;
		params.Origin = Origin;
		params.copyTransform = copyTransform;
		params.propertiesToExclude = propertiesToExclude;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPropertyParser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyParser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUtilities.PropertyParser");
		return ptr;
	}

}



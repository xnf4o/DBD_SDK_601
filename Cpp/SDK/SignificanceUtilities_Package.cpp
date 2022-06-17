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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USignificanceStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USignificanceStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SignificanceUtilities.SignificanceStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCharacterOptimizer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterOptimizer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SignificanceUtilities.CharacterOptimizer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07650ED0
	 * 		Name   -> Function SignificanceUtilities.DistanceBasedTickDisabler.UnregisterComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UActorComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDistanceBasedTickDisabler::UnregisterComponent(class UActorComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SignificanceUtilities.DistanceBasedTickDisabler.UnregisterComponent");
		
		UDistanceBasedTickDisabler_UnregisterComponent_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07650E40
	 * 		Name   -> Function SignificanceUtilities.DistanceBasedTickDisabler.RegisterComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UActorComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDistanceBasedTickDisabler::RegisterComponent(class UActorComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SignificanceUtilities.DistanceBasedTickDisabler.RegisterComponent");
		
		UDistanceBasedTickDisabler_RegisterComponent_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDistanceBasedTickDisabler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDistanceBasedTickDisabler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SignificanceUtilities.DistanceBasedTickDisabler");
		return ptr;
	}

}



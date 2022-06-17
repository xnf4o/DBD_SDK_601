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
	 * 		Name   -> PredefindFunction UActivatableMock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivatableMock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Activation.ActivatableMock");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07513EE0
	 * 		Name   -> Function Activation.ActivatorComponent.SetObjectState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGameplayTagContainerComponent*              objectState                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActivatorComponent::SetObjectState(class UGameplayTagContainerComponent* objectState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Activation.ActivatorComponent.SetObjectState");
		
		UActivatorComponent_SetObjectState_Params params {};
		params.objectState = objectState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UActivatorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivatorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Activation.ActivatorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UActivatable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivatable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Activation.Activatable");
		return ptr;
	}

}



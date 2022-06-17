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
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function SlasherInteractable.SlasherInteractable_C.GetSlasher
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              Slasher                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASlasherInteractable_C::GetSlasher(class ASlasherPlayer** Slasher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlasherInteractable.SlasherInteractable_C.GetSlasher");
		
		ASlasherInteractable_C_GetSlasher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Slasher != nullptr)
			*Slasher = params.Slasher;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function SlasherInteractable.SlasherInteractable_C.IsInteractionPossibleInternal
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractor*                                 Interactor                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractionDefinition*                      definition                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputInteractionType                              interactionType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ASlasherInteractable_C::IsInteractionPossibleInternal(class ADBDPlayer* Player, class UInteractor* Interactor, class UInteractionDefinition* definition, EInputInteractionType interactionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlasherInteractable.SlasherInteractable_C.IsInteractionPossibleInternal");
		
		ASlasherInteractable_C_IsInteractionPossibleInternal_Params params {};
		params.Player = Player;
		params.Interactor = Interactor;
		params.definition = definition;
		params.interactionType = interactionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function SlasherInteractable.SlasherInteractable_C.InitInteractable
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASlasherInteractable_C::InitInteractable(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlasherInteractable.SlasherInteractable_C.InitInteractable");
		
		ASlasherInteractable_C_InitInteractable_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function SlasherInteractable.SlasherInteractable_C.ExecuteUbergraph_SlasherInteractable
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASlasherInteractable_C::ExecuteUbergraph_SlasherInteractable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlasherInteractable.SlasherInteractable_C.ExecuteUbergraph_SlasherInteractable");
		
		ASlasherInteractable_C_ExecuteUbergraph_SlasherInteractable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ASlasherInteractable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASlasherInteractable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SlasherInteractable.SlasherInteractable_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function BP_TheOnryoCondemnMoriInteraction.BP_TheOnryoCondemnMoriInteraction_C.GetExitMontage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FAnimationMontageDescriptor UBP_TheOnryoCondemnMoriInteraction_C::GetExitMontage(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TheOnryoCondemnMoriInteraction.BP_TheOnryoCondemnMoriInteraction_C.GetExitMontage");
		
		UBP_TheOnryoCondemnMoriInteraction_C_GetExitMontage_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBP_TheOnryoCondemnMoriInteraction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_TheOnryoCondemnMoriInteraction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TheOnryoCondemnMoriInteraction.BP_TheOnryoCondemnMoriInteraction_C");
		return ptr;
	}

}



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
	 * 		RVA    -> 0x0410BD60
	 * 		Name   -> Function Anniversary2021.Anniversary2021EventComponent.Authority_OnIntroComplete
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAnniversary2021EventComponent::Authority_OnIntroComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anniversary2021.Anniversary2021EventComponent.Authority_OnIntroComplete");
		
		UAnniversary2021EventComponent_Authority_OnIntroComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAnniversary2021EventComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnniversary2021EventComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Anniversary2021.Anniversary2021EventComponent");
		return ptr;
	}

}



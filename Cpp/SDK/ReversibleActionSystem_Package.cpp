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
	 * 		Name   -> PredefindFunction UBaseReversibleInstantActionHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseReversibleInstantActionHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReversibleActionSystem.BaseReversibleInstantActionHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UReversibleActionSystemComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReversibleActionSystemComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReversibleActionSystem.ReversibleActionSystemComponent");
		return ptr;
	}

}



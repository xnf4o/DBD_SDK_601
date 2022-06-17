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
	 * 		Name   -> PredefindFunction USimpleStateMachineBaseState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleStateMachineBaseState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimpleStateMachine.SimpleStateMachineBaseState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USimpleStateMachineBaseTransition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleStateMachineBaseTransition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimpleStateMachine.SimpleStateMachineBaseTransition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USimpleStateMachine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleStateMachine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimpleStateMachine.SimpleStateMachine");
		return ptr;
	}

}



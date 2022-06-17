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
	 * 		Name   -> PredefindFunction UFiniteStateMachine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFiniteStateMachine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FiniteStateMachine.FiniteStateMachine");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFSM_Condition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFSM_Condition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FiniteStateMachine.FSM_Condition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFSM_AndCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFSM_AndCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FiniteStateMachine.FSM_AndCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFSM_HasStateRanForXSecondsCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFSM_HasStateRanForXSecondsCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FiniteStateMachine.FSM_HasStateRanForXSecondsCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFSM_NotCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFSM_NotCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FiniteStateMachine.FSM_NotCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFSM_OrCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFSM_OrCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FiniteStateMachine.FSM_OrCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFSM_RefCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFSM_RefCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FiniteStateMachine.FSM_RefCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFSM_State.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFSM_State::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FiniteStateMachine.FSM_State");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFSM_Transition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFSM_Transition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FiniteStateMachine.FSM_Transition");
		return ptr;
	}

}



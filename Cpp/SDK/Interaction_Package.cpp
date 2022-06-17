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
	 * 		Name   -> PredefindFunction UAIInteractableTargetInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIInteractableTargetInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Interaction.AIInteractableTargetInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Interaction.Interaction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInteractionPerformer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractionPerformer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Interaction.InteractionPerformer");
		return ptr;
	}

}



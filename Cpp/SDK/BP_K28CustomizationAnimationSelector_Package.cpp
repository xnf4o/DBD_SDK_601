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
	 * 		Name   -> PredefindFunction UBP_K28CustomizationAnimationSelector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_K28CustomizationAnimationSelector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_K28CustomizationAnimationSelector.BP_K28CustomizationAnimationSelector_C");
		return ptr;
	}

}



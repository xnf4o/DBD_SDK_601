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
	 * 		Name   -> PredefindFunction AAIController_Slasher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIController_Slasher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIController_Slasher.AIController_Slasher_C");
		return ptr;
	}

}



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
	 * 		Name   -> PredefindFunction UBP_KillerRightFootGroundDetector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_KillerRightFootGroundDetector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_KillerRightFootGroundDetector.BP_KillerRightFootGroundDetector_C");
		return ptr;
	}

}



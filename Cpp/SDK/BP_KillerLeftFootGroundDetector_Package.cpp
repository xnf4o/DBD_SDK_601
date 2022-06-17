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
	 * 		Name   -> PredefindFunction UBP_KillerLeftFootGroundDetector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_KillerLeftFootGroundDetector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_KillerLeftFootGroundDetector.BP_KillerLeftFootGroundDetector_C");
		return ptr;
	}

}



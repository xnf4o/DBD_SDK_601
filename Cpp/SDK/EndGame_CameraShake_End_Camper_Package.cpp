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
	 * 		Name   -> PredefindFunction UEndGame_CameraShake_End_Camper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEndGame_CameraShake_End_Camper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EndGame_CameraShake_End_Camper.EndGame_CameraShake_End_Camper_C");
		return ptr;
	}

}



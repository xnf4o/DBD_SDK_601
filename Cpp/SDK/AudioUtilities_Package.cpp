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
	 * 		Name   -> PredefindFunction ASplineAudioEmitterActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASplineAudioEmitterActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioUtilities.SplineAudioEmitterActor");
		return ptr;
	}

}



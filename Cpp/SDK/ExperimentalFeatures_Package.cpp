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
	 * 		Name   -> PredefindFunction UExperimentalFeaturesManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExperimentalFeaturesManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ExperimentalFeatures.ExperimentalFeaturesManager");
		return ptr;
	}

}



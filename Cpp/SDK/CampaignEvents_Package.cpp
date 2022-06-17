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
	 * 		Name   -> PredefindFunction UCampaignEventsManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCampaignEventsManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CampaignEvents.CampaignEventsManager");
		return ptr;
	}

}



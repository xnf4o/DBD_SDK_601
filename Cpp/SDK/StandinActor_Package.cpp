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
	 * 		Name   -> PredefindFunction AStandInMeshActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStandInMeshActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StandinActor.StandInMeshActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UStandinProxyContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStandinProxyContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StandinActor.StandinProxyContainer");
		return ptr;
	}

}



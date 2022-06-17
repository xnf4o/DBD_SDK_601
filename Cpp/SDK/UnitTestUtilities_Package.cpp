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
	 * 		Name   -> PredefindFunction UTestInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UnitTestUtilities.TestInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATestActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATestActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UnitTestUtilities.TestActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTestActorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestActorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UnitTestUtilities.TestActorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTestActorComponentImplementingTestInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestActorComponentImplementingTestInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UnitTestUtilities.TestActorComponentImplementingTestInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATestActorImplementingTestInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATestActorImplementingTestInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UnitTestUtilities.TestActorImplementingTestInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATestMovableActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATestMovableActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UnitTestUtilities.TestMovableActor");
		return ptr;
	}

}



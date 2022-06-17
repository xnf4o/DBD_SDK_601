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
	 * 		Name   -> PredefindFunction UActorPairQueryEvaluatorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorPairQueryEvaluatorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class QueryService.ActorPairQueryEvaluatorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0763F570
	 * 		Name   -> Function QueryService.ActorPairQueryEvaluatorSubscriberTest.OnRangeChanged
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AActorPairQueryEvaluatorSubscriberTest::OnRangeChanged(bool InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QueryService.ActorPairQueryEvaluatorSubscriberTest.OnRangeChanged");
		
		AActorPairQueryEvaluatorSubscriberTest_OnRangeChanged_Params params {};
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AActorPairQueryEvaluatorSubscriberTest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AActorPairQueryEvaluatorSubscriberTest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class QueryService.ActorPairQueryEvaluatorSubscriberTest");
		return ptr;
	}

}



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
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function ISlasherEffectInterface.ISlasherEffectInterface_C.GetTrapPlacementLocation_World
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FVector                                     World_Location                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UISlasherEffectInterface_C::GetTrapPlacementLocation_World(struct FVector* World_Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ISlasherEffectInterface.ISlasherEffectInterface_C.GetTrapPlacementLocation_World");
		
		UISlasherEffectInterface_C_GetTrapPlacementLocation_World_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (World_Location != nullptr)
			*World_Location = params.World_Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function ISlasherEffectInterface.ISlasherEffectInterface_C.GetSlasherAudioComponent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkComponent*                                Audio_Component                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UISlasherEffectInterface_C::GetSlasherAudioComponent(class UAkComponent** Audio_Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ISlasherEffectInterface.ISlasherEffectInterface_C.GetSlasherAudioComponent");
		
		UISlasherEffectInterface_C_GetSlasherAudioComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Audio_Component != nullptr)
			*Audio_Component = params.Audio_Component;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UISlasherEffectInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UISlasherEffectInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ISlasherEffectInterface.ISlasherEffectInterface_C");
		return ptr;
	}

}



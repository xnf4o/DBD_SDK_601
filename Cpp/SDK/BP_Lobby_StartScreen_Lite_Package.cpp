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
	 * 		Name   -> Function BP_Lobby_StartScreen_Lite.BP_Lobby_StartScreen_Lite_C.BndEvt__BP_Lobby_StartScreen_Lite_P_Lobby_StartScreen_Lite_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              EmitterTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Velocity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Lobby_StartScreen_Lite_C::BndEvt__BP_Lobby_StartScreen_Lite_P_Lobby_StartScreen_Lite_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature(const class FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_StartScreen_Lite.BP_Lobby_StartScreen_Lite_C.BndEvt__BP_Lobby_StartScreen_Lite_P_Lobby_StartScreen_Lite_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature");
		
		ABP_Lobby_StartScreen_Lite_C_BndEvt__BP_Lobby_StartScreen_Lite_P_Lobby_StartScreen_Lite_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature_Params params {};
		params.EventName = EventName;
		params.EmitterTime = EmitterTime;
		params.Location = Location;
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Lobby_StartScreen_Lite.BP_Lobby_StartScreen_Lite_C.ExecuteUbergraph_BP_Lobby_StartScreen_Lite
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Lobby_StartScreen_Lite_C::ExecuteUbergraph_BP_Lobby_StartScreen_Lite(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_StartScreen_Lite.BP_Lobby_StartScreen_Lite_C.ExecuteUbergraph_BP_Lobby_StartScreen_Lite");
		
		ABP_Lobby_StartScreen_Lite_C_ExecuteUbergraph_BP_Lobby_StartScreen_Lite_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_Lobby_StartScreen_Lite_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Lobby_StartScreen_Lite_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lobby_StartScreen_Lite.BP_Lobby_StartScreen_Lite_C");
		return ptr;
	}

}



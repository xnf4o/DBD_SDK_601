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
	 * 		Name   -> Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.Spawn Niagara Particles Character Dissolve
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCustomizedSkeletalMesh*                     CustomizedSkeletalMesh                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Out                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVFX_Function_Lib_Character_C::STATIC_Spawn_Niagara_Particles_Character_Dissolve(bool Killer, class AActor* Actor, class UCustomizedSkeletalMesh* CustomizedSkeletalMesh, bool Out, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.Spawn Niagara Particles Character Dissolve");
		
		UVFX_Function_Lib_Character_C_Spawn_Niagara_Particles_Character_Dissolve_Params params {};
		params.Killer = Killer;
		params.Actor = Actor;
		params.CustomizedSkeletalMesh = CustomizedSkeletalMesh;
		params.Out = Out;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.SpawnFootstepKillerVFX
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Run                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ASlasherPlayer*                              SlasherPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVFX_Function_Lib_Character_C::STATIC_SpawnFootstepKillerVFX(bool Run, bool Left, class ASlasherPlayer* SlasherPlayer, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.SpawnFootstepKillerVFX");
		
		UVFX_Function_Lib_Character_C_SpawnFootstepKillerVFX_Params params {};
		params.Run = Run;
		params.Left = Left;
		params.SlasherPlayer = SlasherPlayer;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.SpawnFootstepVFX
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Run                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ACamperPlayer*                               CamperCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Bloody_Footprints                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        Footprint_Socket                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Surface_Type                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVFX_Function_Lib_Character_C::STATIC_SpawnFootstepVFX(bool Run, bool Left, class ACamperPlayer* CamperCharacter, class UObject* __WorldContext, bool* Bloody_Footprints, class FName* Footprint_Socket, int32_t* Surface_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.SpawnFootstepVFX");
		
		UVFX_Function_Lib_Character_C_SpawnFootstepVFX_Params params {};
		params.Run = Run;
		params.Left = Left;
		params.CamperCharacter = CamperCharacter;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Bloody_Footprints != nullptr)
			*Bloody_Footprints = params.Bloody_Footprints;
		if (Footprint_Socket != nullptr)
			*Footprint_Socket = params.Footprint_Socket;
		if (Surface_Type != nullptr)
			*Surface_Type = params.Surface_Type;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.ManageInteractiveMist
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UActorComponent*                             MistActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVFX_Function_Lib_Character_C::STATIC_ManageInteractiveMist(class APawn* Pawn, class UActorComponent* MistActor, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.ManageInteractiveMist");
		
		UVFX_Function_Lib_Character_C_ManageInteractiveMist_Params params {};
		params.Pawn = Pawn;
		params.MistActor = MistActor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.MakeCharacter_Visible
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVFX_Function_Lib_Character_C::STATIC_MakeCharacter_Visible(class ADBDPlayer* Character, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.MakeCharacter_Visible");
		
		UVFX_Function_Lib_Character_C_MakeCharacter_Visible_Params params {};
		params.Character = Character;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.MakeCharacter_Invisible
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVFX_Function_Lib_Character_C::STATIC_MakeCharacter_Invisible(class ADBDPlayer* Character, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.MakeCharacter_Invisible");
		
		UVFX_Function_Lib_Character_C_MakeCharacter_Invisible_Params params {};
		params.Character = Character;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.MaskFPV_Visible
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVFX_Function_Lib_Character_C::STATIC_MaskFPV_Visible(class ADBDPlayer* Character, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.MaskFPV_Visible");
		
		UVFX_Function_Lib_Character_C_MaskFPV_Visible_Params params {};
		params.Character = Character;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.MaskFPV_Hidden
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVFX_Function_Lib_Character_C::STATIC_MaskFPV_Hidden(class ADBDPlayer* Character, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.MaskFPV_Hidden");
		
		UVFX_Function_Lib_Character_C_MaskFPV_Hidden_Params params {};
		params.Character = Character;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVFX_Function_Lib_Character_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVFX_Function_Lib_Character_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VFX_Function_Lib_Character.VFX_Function_Lib_Character_C");
		return ptr;
	}

}



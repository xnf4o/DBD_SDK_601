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
	 * 		Name   -> PredefindFunction ABaseVFX.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseVFX::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VFXUtilities.BaseVFX");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0766AAF0
	 * 		Name   -> Function VFXUtilities.VFXUtilities.SetParticleSystemsActive
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Reset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVFXUtilities::STATIC_SetParticleSystemsActive(bool Active, bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFXUtilities.VFXUtilities.SetParticleSystemsActive");
		
		UVFXUtilities_SetParticleSystemsActive_Params params {};
		params.Active = Active;
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0766A9E0
	 * 		Name   -> Function VFXUtilities.VFXUtilities.SetParticleSystemActive
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UFXSystemComponent*                          ParticleSystem                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Reset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVFXUtilities::STATIC_SetParticleSystemActive(class UFXSystemComponent* ParticleSystem, bool Active, bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFXUtilities.VFXUtilities.SetParticleSystemActive");
		
		UVFXUtilities_SetParticleSystemActive_Params params {};
		params.ParticleSystem = ParticleSystem;
		params.Active = Active;
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVFXUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVFXUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VFXUtilities.VFXUtilities");
		return ptr;
	}

}



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
	 * 		Name   -> Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Trickster
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASlasherPlayer*                              MySlasher                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UVFX_Function_Lib_AnimNotifies_C::STATIC_HandleKillerNotifies_Trickster(const class FName& Selection, class ASlasherPlayer* MySlasher, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Trickster");
		
		UVFX_Function_Lib_AnimNotifies_C_HandleKillerNotifies_Trickster_Params params {};
		params.Selection = Selection;
		params.MySlasher = MySlasher;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Doctor
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASlasherPlayer*                              My_Slasher                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVFX_Function_Lib_AnimNotifies_C::STATIC_HandleKillerNotifies_Doctor(const class FName& Selection, class ASlasherPlayer* My_Slasher, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Doctor");
		
		UVFX_Function_Lib_AnimNotifies_C_HandleKillerNotifies_Doctor_Params params {};
		params.Selection = Selection;
		params.My_Slasher = My_Slasher;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Blight
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              My_Slasher1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UVFX_Function_Lib_AnimNotifies_C::STATIC_HandleKillerNotifies_Blight(class ASlasherPlayer* My_Slasher1, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Blight");
		
		UVFX_Function_Lib_AnimNotifies_C_HandleKillerNotifies_Blight_Params params {};
		params.My_Slasher1 = My_Slasher1;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Deathslinger
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              My_Slasher1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UVFX_Function_Lib_AnimNotifies_C::STATIC_HandleKillerNotifies_Deathslinger(class ASlasherPlayer* My_Slasher1, const class FName& Selection, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Deathslinger");
		
		UVFX_Function_Lib_AnimNotifies_C_HandleKillerNotifies_Deathslinger_Params params {};
		params.My_Slasher1 = My_Slasher1;
		params.Selection = Selection;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Oni
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Get_Killer1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UVFX_Function_Lib_AnimNotifies_C::STATIC_HandleKillerNotifies_Oni(class UObject* Target, class UObject* Get_Killer1, const class FName& Selection, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Oni");
		
		UVFX_Function_Lib_AnimNotifies_C_HandleKillerNotifies_Oni_Params params {};
		params.Target = Target;
		params.Get_Killer1 = Get_Killer1;
		params.Selection = Selection;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Demogorgon
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UVFX_Function_Lib_AnimNotifies_C::STATIC_HandleKillerNotifies_Demogorgon(const class FName& Selection, class UObject* Target, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Demogorgon");
		
		UVFX_Function_Lib_AnimNotifies_C_HandleKillerNotifies_Demogorgon_Params params {};
		params.Selection = Selection;
		params.Target = Target;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Nurse
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASlasherPlayer*                              My_Slasher1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UVFX_Function_Lib_AnimNotifies_C::STATIC_HandleKillerNotifies_Nurse(const class FName& Selection, class ASlasherPlayer* My_Slasher1, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Nurse");
		
		UVFX_Function_Lib_AnimNotifies_C_HandleKillerNotifies_Nurse_Params params {};
		params.Selection = Selection;
		params.My_Slasher1 = My_Slasher1;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Hag
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASlasherPlayer*                              My_Slasher1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UVFX_Function_Lib_AnimNotifies_C::STATIC_HandleKillerNotifies_Hag(const class FName& Selection, class ASlasherPlayer* My_Slasher1, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Hag");
		
		UVFX_Function_Lib_AnimNotifies_C_HandleKillerNotifies_Hag_Params params {};
		params.Selection = Selection;
		params.My_Slasher1 = My_Slasher1;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Trapper
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVFX_Function_Lib_AnimNotifies_C::STATIC_HandleKillerNotifies_Trapper(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Trapper");
		
		UVFX_Function_Lib_AnimNotifies_C_HandleKillerNotifies_Trapper_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_General
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              My_Slasher1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UVFX_Function_Lib_AnimNotifies_C::STATIC_HandleKillerNotifies_General(class ASlasherPlayer* My_Slasher1, const class FName& Selection, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_General");
		
		UVFX_Function_Lib_AnimNotifies_C_HandleKillerNotifies_General_Params params {};
		params.My_Slasher1 = My_Slasher1;
		params.Selection = Selection;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_WallBreak
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVFX_Function_Lib_AnimNotifies_C::STATIC_HandleKillerNotifies_WallBreak(const class FName& Selection, class UObject* WorldContextObject, class UObject* __WorldContext, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_WallBreak");
		
		UVFX_Function_Lib_AnimNotifies_C_HandleKillerNotifies_WallBreak_Params params {};
		params.Selection = Selection;
		params.WorldContextObject = WorldContextObject;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Footsteps
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASlasherPlayer*                              Slasher                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UVFX_Function_Lib_AnimNotifies_C::STATIC_HandleKillerNotifies_Footsteps(const class FName& Selection, class ASlasherPlayer* Slasher, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Footsteps");
		
		UVFX_Function_Lib_AnimNotifies_C_HandleKillerNotifies_Footsteps_Params params {};
		params.Selection = Selection;
		params.Slasher = Slasher;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVFX_Function_Lib_AnimNotifies_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVFX_Function_Lib_AnimNotifies_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C");
		return ptr;
	}

}



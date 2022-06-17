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
	 * 		Name   -> Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_Menu_Slasher13_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimGraph");
		
		UAB_Menu_Slasher13_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher13_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.BlueprintUpdateAnimation");
		
		UAB_Menu_Slasher13_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_MenuInt_MakeWeaponAppear
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Menu_Slasher13_C::AnimNotify_FX_HK_MenuInt_MakeWeaponAppear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_MenuInt_MakeWeaponAppear");
		
		UAB_Menu_Slasher13_C_AnimNotify_FX_HK_MenuInt_MakeWeaponAppear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_MenuInt_MakeWeaponDisappear
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Menu_Slasher13_C::AnimNotify_FX_HK_MenuInt_MakeWeaponDisappear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_MenuInt_MakeWeaponDisappear");
		
		UAB_Menu_Slasher13_C_AnimNotify_FX_HK_MenuInt_MakeWeaponDisappear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_MenuBack_MakeSwordVisible
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Menu_Slasher13_C::AnimNotify_FX_HK_MenuBack_MakeSwordVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_MenuBack_MakeSwordVisible");
		
		UAB_Menu_Slasher13_C_AnimNotify_FX_HK_MenuBack_MakeSwordVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_Menu_MakeSwordInvisible
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Menu_Slasher13_C::AnimNotify_FX_HK_Menu_MakeSwordInvisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_Menu_MakeSwordInvisible");
		
		UAB_Menu_Slasher13_C_AnimNotify_FX_HK_Menu_MakeSwordInvisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.ExecuteUbergraph_AB_Menu_Slasher13
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher13_C::ExecuteUbergraph_AB_Menu_Slasher13(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.ExecuteUbergraph_AB_Menu_Slasher13");
		
		UAB_Menu_Slasher13_C_ExecuteUbergraph_AB_Menu_Slasher13_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAB_Menu_Slasher13_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Menu_Slasher13_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Menu_Slasher13.AB_Menu_Slasher13_C");
		return ptr;
	}

}



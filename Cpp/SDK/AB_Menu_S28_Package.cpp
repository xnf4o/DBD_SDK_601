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
	 * 		Name   -> Function AB_Menu_S28.AB_Menu_S28_C.AnimNotify_FX_ShowProps
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Menu_S28_C::AnimNotify_FX_ShowProps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_S28.AB_Menu_S28_C.AnimNotify_FX_ShowProps");
		
		UAB_Menu_S28_C_AnimNotify_FX_ShowProps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_S28.AB_Menu_S28_C.AnimNotify_FX_HideProps
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Menu_S28_C::AnimNotify_FX_HideProps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_S28.AB_Menu_S28_C.AnimNotify_FX_HideProps");
		
		UAB_Menu_S28_C_AnimNotify_FX_HideProps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_S28.AB_Menu_S28_C.AnimNotify_IsPlayingMenuInterruptFromTransition
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Menu_S28_C::AnimNotify_IsPlayingMenuInterruptFromTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_S28.AB_Menu_S28_C.AnimNotify_IsPlayingMenuInterruptFromTransition");
		
		UAB_Menu_S28_C_AnimNotify_IsPlayingMenuInterruptFromTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_S28.AB_Menu_S28_C.ExecuteUbergraph_AB_Menu_S28
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_S28_C::ExecuteUbergraph_AB_Menu_S28(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_S28.AB_Menu_S28_C.ExecuteUbergraph_AB_Menu_S28");
		
		UAB_Menu_S28_C_ExecuteUbergraph_AB_Menu_S28_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAB_Menu_S28_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Menu_S28_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Menu_S28.AB_Menu_S28_C");
		return ptr;
	}

}



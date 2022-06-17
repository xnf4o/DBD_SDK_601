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
	 * 		Name   -> Function AB_K24_SW00_Menu.AB_K24_SW00_Menu_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_K24_SW00_Menu_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_K24_SW00_Menu.AB_K24_SW00_Menu_C.AnimGraph");
		
		UAB_K24_SW00_Menu_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_K24_SW00_Menu.AB_K24_SW00_Menu_C.ExecuteUbergraph_AB_K24_SW00_Menu
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_K24_SW00_Menu_C::ExecuteUbergraph_AB_K24_SW00_Menu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_K24_SW00_Menu.AB_K24_SW00_Menu_C.ExecuteUbergraph_AB_K24_SW00_Menu");
		
		UAB_K24_SW00_Menu_C_ExecuteUbergraph_AB_K24_SW00_Menu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAB_K24_SW00_Menu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_K24_SW00_Menu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_K24_SW00_Menu.AB_K24_SW00_Menu_C");
		return ptr;
	}

}



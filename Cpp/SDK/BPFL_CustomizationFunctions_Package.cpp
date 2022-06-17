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
	 * 		Name   -> Function BPFL_CustomizationFunctions.BPFL_CustomizationFunctions_C.GetOwningSkeletalMesh
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UAnimInstance*                               Anim_Instance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      Skeletal_Mesh_Component                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_CustomizationFunctions_C::STATIC_GetOwningSkeletalMesh(class UAnimInstance* Anim_Instance, class UObject* __WorldContext, class USkeletalMeshComponent** Skeletal_Mesh_Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_CustomizationFunctions.BPFL_CustomizationFunctions_C.GetOwningSkeletalMesh");
		
		UBPFL_CustomizationFunctions_C_GetOwningSkeletalMesh_Params params {};
		params.Anim_Instance = Anim_Instance;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Skeletal_Mesh_Component != nullptr)
			*Skeletal_Mesh_Component = params.Skeletal_Mesh_Component;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBPFL_CustomizationFunctions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFL_CustomizationFunctions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_CustomizationFunctions.BPFL_CustomizationFunctions_C");
		return ptr;
	}

}



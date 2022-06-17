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
	 * 		RVA    -> 0x075C4D60
	 * 		Name   -> Function PhysicsUtilities.DynamicCapsuleResizerComponent.SetShrinkingEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDynamicCapsuleResizerComponent::SetShrinkingEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysicsUtilities.DynamicCapsuleResizerComponent.SetShrinkingEnabled");
		
		UDynamicCapsuleResizerComponent_SetShrinkingEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075C4D40
	 * 		Name   -> Function PhysicsUtilities.DynamicCapsuleResizerComponent.OnRep_IsShrinkingAlwaysEnabled
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDynamicCapsuleResizerComponent::OnRep_IsShrinkingAlwaysEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysicsUtilities.DynamicCapsuleResizerComponent.OnRep_IsShrinkingAlwaysEnabled");
		
		UDynamicCapsuleResizerComponent_OnRep_IsShrinkingAlwaysEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075C4B60
	 * 		Name   -> Function PhysicsUtilities.DynamicCapsuleResizerComponent.OnHit
	 * 		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UDynamicCapsuleResizerComponent::OnHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysicsUtilities.DynamicCapsuleResizerComponent.OnHit");
		
		UDynamicCapsuleResizerComponent_OnHit_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDynamicCapsuleResizerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicCapsuleResizerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysicsUtilities.DynamicCapsuleResizerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075C50F0
	 * 		Name   -> Function PhysicsUtilities.PrimitiveCollection.Remove
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Primitive                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPrimitiveCollection::Remove(class UPrimitiveComponent* Primitive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysicsUtilities.PrimitiveCollection.Remove");
		
		UPrimitiveCollection_Remove_Params params {};
		params.Primitive = Primitive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075C5060
	 * 		Name   -> Function PhysicsUtilities.PrimitiveCollection.Add
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Primitive                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPrimitiveCollection::Add(class UPrimitiveComponent* Primitive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysicsUtilities.PrimitiveCollection.Add");
		
		UPrimitiveCollection_Add_Params params {};
		params.Primitive = Primitive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPrimitiveCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimitiveCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysicsUtilities.PrimitiveCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075C52F0
	 * 		Name   -> Function PhysicsUtilities.PrimitivesRegistererComponent.SetPrimitives
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UPrimitiveComponent*>                 primitives                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UPrimitivesRegistererComponent::SetPrimitives(TArray<class UPrimitiveComponent*> primitives)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysicsUtilities.PrimitivesRegistererComponent.SetPrimitives");
		
		UPrimitivesRegistererComponent_SetPrimitives_Params params {};
		params.primitives = primitives;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPrimitivesRegistererComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimitivesRegistererComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysicsUtilities.PrimitivesRegistererComponent");
		return ptr;
	}

}



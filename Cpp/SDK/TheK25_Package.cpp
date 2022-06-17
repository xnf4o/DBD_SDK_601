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
	 * 		Name   -> PredefindFunction UAddon_K25Power_17.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K25Power_17::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.Addon_K25Power_17");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAISkill_FindCollectable_LamentConfiguration.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_FindCollectable_LamentConfiguration::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.AISkill_FindCollectable_LamentConfiguration");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAISkill_InteractionBreakFreeFromChains.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionBreakFreeFromChains::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.AISkill_InteractionBreakFreeFromChains");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAISkill_InteractionUseItem_LamentConfiguration.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionUseItem_LamentConfiguration::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.AISkill_InteractionUseItem_LamentConfiguration");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDCF00
	 * 		Name   -> Function TheK25.ChainAttachedGateBlockerEffect.OnSurvivorDamageStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperDamageState                                 oldState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperDamageState                                 NewState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChainAttachedGateBlockerEffect::OnSurvivorDamageStateChanged(ECamperDamageState oldState, ECamperDamageState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.ChainAttachedGateBlockerEffect.OnSurvivorDamageStateChanged");
		
		UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged_Params params {};
		params.oldState = oldState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UChainAttachedGateBlockerEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChainAttachedGateBlockerEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.ChainAttachedGateBlockerEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsChainHuntActive.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsChainHuntActive::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.IsChainHuntActive");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25AnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25AnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25AnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDCB90
	 * 		Name   -> Function TheK25.K25AttackSubAnimInstance.OnAttackStart
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		EAttackType                                        attackType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25AttackSubAnimInstance::OnAttackStart(EAttackType attackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25AttackSubAnimInstance.OnAttackStart");
		
		UK25AttackSubAnimInstance_OnAttackStart_Params params {};
		params.attackType = attackType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25AttackSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25AttackSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25AttackSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDD350
	 * 		Name   -> Function TheK25.K25Chain.SetSplineComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USplineComponent*                            Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK25Chain::SetSplineComponent(class USplineComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Chain.SetSplineComponent");
		
		AK25Chain_SetSplineComponent_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDD2C0
	 * 		Name   -> Function TheK25.K25Chain.SetInstancedMeshComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInstancedStaticMeshComponent*               InstancedMesh                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK25Chain::SetInstancedMeshComponent(class UInstancedStaticMeshComponent* InstancedMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Chain.SetInstancedMeshComponent");
		
		AK25Chain_SetInstancedMeshComponent_Params params {};
		params.InstancedMesh = InstancedMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDC5A0
	 * 		Name   -> Function TheK25.K25Chain.IsAttachedToControlledProjectile
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AK25Chain::IsAttachedToControlledProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Chain.IsAttachedToControlledProjectile");
		
		AK25Chain_IsAttachedToControlledProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDC510
	 * 		Name   -> Function TheK25.K25Chain.GetSurvivorChainAttachmentAnchor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AK25SurvivorChainAttachmentAnchor* AK25Chain::GetSurvivorChainAttachmentAnchor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Chain.GetSurvivorChainAttachmentAnchor");
		
		AK25Chain_GetSurvivorChainAttachmentAnchor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDC3C0
	 * 		Name   -> Function TheK25.K25Chain.GetChainStartLocation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector AK25Chain::GetChainStartLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Chain.GetChainStartLocation");
		
		AK25Chain_GetChainStartLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDC380
	 * 		Name   -> Function TheK25.K25Chain.GetChainEndLocation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector AK25Chain::GetChainEndLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Chain.GetChainEndLocation");
		
		AK25Chain_GetChainEndLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Chain.Cosmetic_OnSurvivorStoppedRemovingChainSFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               hasRemovedChainDueToInteraction                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK25Chain::Cosmetic_OnSurvivorStoppedRemovingChainSFX(bool hasRemovedChainDueToInteraction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Chain.Cosmetic_OnSurvivorStoppedRemovingChainSFX");
		
		AK25Chain_Cosmetic_OnSurvivorStoppedRemovingChainSFX_Params params {};
		params.hasRemovedChainDueToInteraction = hasRemovedChainDueToInteraction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Chain.Cosmetic_OnSurvivorStartedRemovingChainSFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AK25Chain::Cosmetic_OnSurvivorStartedRemovingChainSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Chain.Cosmetic_OnSurvivorStartedRemovingChainSFX");
		
		AK25Chain_Cosmetic_OnSurvivorStartedRemovingChainSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Chain.Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK25Chain::Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Chain.Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX");
		
		AK25Chain_Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Chain.Cosmetic_OnChainUnleashedWithProjectile
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AK25Chain::Cosmetic_OnChainUnleashedWithProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Chain.Cosmetic_OnChainUnleashedWithProjectile");
		
		AK25Chain_Cosmetic_OnChainUnleashedWithProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Chain.Cosmetic_OnChainStartedToReelback
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK25Chain::Cosmetic_OnChainStartedToReelback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Chain.Cosmetic_OnChainStartedToReelback");
		
		AK25Chain_Cosmetic_OnChainStartedToReelback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Chain.Cosmetic_OnChainDisappears
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK25Chain::Cosmetic_OnChainDisappears()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Chain.Cosmetic_OnChainDisappears");
		
		AK25Chain_Cosmetic_OnChainDisappears_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Chain.Cosmetic_OnChainDetachedFromSurvivor
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EK25ChainDetachmentReason                          detachmentReason                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK25Chain::Cosmetic_OnChainDetachedFromSurvivor(EK25ChainDetachmentReason detachmentReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Chain.Cosmetic_OnChainDetachedFromSurvivor");
		
		AK25Chain_Cosmetic_OnChainDetachedFromSurvivor_Params params {};
		params.detachmentReason = detachmentReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Chain.Cosmetic_OnChainAttachedToSurvivor
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               wasReachingSurvivorAnchorPoint                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK25Chain::Cosmetic_OnChainAttachedToSurvivor(bool wasReachingSurvivorAnchorPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Chain.Cosmetic_OnChainAttachedToSurvivor");
		
		AK25Chain_Cosmetic_OnChainAttachedToSurvivor_Params params {};
		params.wasReachingSurvivorAnchorPoint = wasReachingSurvivorAnchorPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Chain.Cosmetic_OnChainAppears
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK25Chain::Cosmetic_OnChainAppears()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Chain.Cosmetic_OnChainAppears");
		
		AK25Chain_Cosmetic_OnChainAppears_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AK25Chain.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK25Chain::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25Chain");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDCEC0
	 * 		Name   -> Function TheK25.K25ChainAttachedStatusEffect.OnRep_ChainAttachementComponent
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK25ChainAttachedStatusEffect::OnRep_ChainAttachementComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainAttachedStatusEffect.OnRep_ChainAttachementComponent");
		
		UK25ChainAttachedStatusEffect_OnRep_ChainAttachementComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25ChainAttachedStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25ChainAttachedStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25ChainAttachedStatusEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0B640
	 * 		Name   -> Function TheK25.K25ChainAttachmentReplicationComponent.Multicast_StartChainReelback
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class AK25Chain*                                   chainToAttach                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25ChainAttachmentReplicationComponent::Multicast_StartChainReelback(class AK25Chain* chainToAttach)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainAttachmentReplicationComponent.Multicast_StartChainReelback");
		
		UK25ChainAttachmentReplicationComponent_Multicast_StartChainReelback_Params params {};
		params.chainToAttach = chainToAttach;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDC950
	 * 		Name   -> Function TheK25.K25ChainAttachmentReplicationComponent.Multicast_LaunchInstantHitChainTowardsSurvivor
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
	 * Parameters:
	 * 		class AK25Chain*                                   newChainToAttach                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AK25SurvivorChainAttachmentAnchor*           targetAnchor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     startPosition                                              (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25ChainAttachmentReplicationComponent::Multicast_LaunchInstantHitChainTowardsSurvivor(class AK25Chain* newChainToAttach, class AK25SurvivorChainAttachmentAnchor* targetAnchor, const struct FVector& startPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainAttachmentReplicationComponent.Multicast_LaunchInstantHitChainTowardsSurvivor");
		
		UK25ChainAttachmentReplicationComponent_Multicast_LaunchInstantHitChainTowardsSurvivor_Params params {};
		params.newChainToAttach = newChainToAttach;
		params.targetAnchor = targetAnchor;
		params.startPosition = startPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDC7C0
	 * 		Name   -> Function TheK25.K25ChainAttachmentReplicationComponent.Multicast_DetachChains
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class UK25SurvivorChainAttachmentComponent*        chainAttachementComponent                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AK25Chain*>                           chainsToDetach                                             (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EK25ChainDetachmentReason                          detachmentReason                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AK25Chain*>                           chainsAttached                                             (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UK25ChainAttachmentReplicationComponent::Multicast_DetachChains(class UK25SurvivorChainAttachmentComponent* chainAttachementComponent, TArray<class AK25Chain*> chainsToDetach, EK25ChainDetachmentReason detachmentReason, TArray<class AK25Chain*> chainsAttached)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainAttachmentReplicationComponent.Multicast_DetachChains");
		
		UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Params params {};
		params.chainAttachementComponent = chainAttachementComponent;
		params.chainsToDetach = chainsToDetach;
		params.detachmentReason = detachmentReason;
		params.chainsAttached = chainsAttached;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDC6B0
	 * 		Name   -> Function TheK25.K25ChainAttachmentReplicationComponent.Multicast_AttachChainToAnchor
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class UK25SurvivorChainAttachmentComponent*        chainAttachementComponent                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AK25Chain*                                   chainToAttach                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AK25SurvivorChainAttachmentAnchor*           anchorPoint                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25ChainAttachmentReplicationComponent::Multicast_AttachChainToAnchor(class UK25SurvivorChainAttachmentComponent* chainAttachementComponent, class AK25Chain* chainToAttach, class AK25SurvivorChainAttachmentAnchor* anchorPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainAttachmentReplicationComponent.Multicast_AttachChainToAnchor");
		
		UK25ChainAttachmentReplicationComponent_Multicast_AttachChainToAnchor_Params params {};
		params.chainAttachementComponent = chainAttachementComponent;
		params.chainToAttach = chainToAttach;
		params.anchorPoint = anchorPoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25ChainAttachmentReplicationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25ChainAttachmentReplicationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25ChainAttachmentReplicationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDC4B0
	 * 		Name   -> Function TheK25.K25ChainHuntEffectsComponent.GetOwningPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADBDPlayer* UK25ChainHuntEffectsComponent::GetOwningPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainHuntEffectsComponent.GetOwningPlayer");
		
		UK25ChainHuntEffectsComponent_GetOwningPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25ChainHuntEffectsComponent.Cosmetic_TriggerChainHuntActivationSFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UK25ChainHuntEffectsComponent::Cosmetic_TriggerChainHuntActivationSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainHuntEffectsComponent.Cosmetic_TriggerChainHuntActivationSFX");
		
		UK25ChainHuntEffectsComponent_Cosmetic_TriggerChainHuntActivationSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25ChainHuntEffectsComponent.Cosmetic_DeactivateChainHuntEffects
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UK25ChainHuntEffectsComponent::Cosmetic_DeactivateChainHuntEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainHuntEffectsComponent.Cosmetic_DeactivateChainHuntEffects");
		
		UK25ChainHuntEffectsComponent_Cosmetic_DeactivateChainHuntEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25ChainHuntEffectsComponent.Cosmetic_ActivateChainHuntEffects
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               hasChainHuntStarted                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25ChainHuntEffectsComponent::Cosmetic_ActivateChainHuntEffects(bool hasChainHuntStarted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainHuntEffectsComponent.Cosmetic_ActivateChainHuntEffects");
		
		UK25ChainHuntEffectsComponent_Cosmetic_ActivateChainHuntEffects_Params params {};
		params.hasChainHuntStarted = hasChainHuntStarted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25ChainHuntEffectsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25ChainHuntEffectsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25ChainHuntEffectsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDCDF0
	 * 		Name   -> Function TheK25.K25ChainLocomotionSurvivorAnimInstance.OnRemoveChainChargePercentageChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UChargeableComponent*                        ChargeableComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              completionPercentage                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25ChainLocomotionSurvivorAnimInstance::OnRemoveChainChargePercentageChanged(class UChargeableComponent* ChargeableComponent, float completionPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainLocomotionSurvivorAnimInstance.OnRemoveChainChargePercentageChanged");
		
		UK25ChainLocomotionSurvivorAnimInstance_OnRemoveChainChargePercentageChanged_Params params {};
		params.ChargeableComponent = ChargeableComponent;
		params.completionPercentage = completionPercentage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDCCE0
	 * 		Name   -> Function TheK25.K25ChainLocomotionSurvivorAnimInstance.OnChainDetached
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class AK25Chain*                                   chain                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AK25SurvivorChainAttachmentAnchor*           chainAttachmentAnchor                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EK25ChainDetachmentReason                          detachmentReason                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25ChainLocomotionSurvivorAnimInstance::OnChainDetached(class AK25Chain* chain, class AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor, EK25ChainDetachmentReason detachmentReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainLocomotionSurvivorAnimInstance.OnChainDetached");
		
		UK25ChainLocomotionSurvivorAnimInstance_OnChainDetached_Params params {};
		params.chain = chain;
		params.chainAttachmentAnchor = chainAttachmentAnchor;
		params.detachmentReason = detachmentReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDCC10
	 * 		Name   -> Function TheK25.K25ChainLocomotionSurvivorAnimInstance.OnChainAttached
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class AK25Chain*                                   chain                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AK25SurvivorChainAttachmentAnchor*           chainAttachmentAnchor                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25ChainLocomotionSurvivorAnimInstance::OnChainAttached(class AK25Chain* chain, class AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainLocomotionSurvivorAnimInstance.OnChainAttached");
		
		UK25ChainLocomotionSurvivorAnimInstance_OnChainAttached_Params params {};
		params.chain = chain;
		params.chainAttachmentAnchor = chainAttachmentAnchor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDC5D0
	 * 		Name   -> Function TheK25.K25ChainLocomotionSurvivorAnimInstance.IsSolvingLamentConfiguration
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UK25ChainLocomotionSurvivorAnimInstance::IsSolvingLamentConfiguration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainLocomotionSurvivorAnimInstance.IsSolvingLamentConfiguration");
		
		UK25ChainLocomotionSurvivorAnimInstance_IsSolvingLamentConfiguration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDC570
	 * 		Name   -> Function TheK25.K25ChainLocomotionSurvivorAnimInstance.HasChainsAttached
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UK25ChainLocomotionSurvivorAnimInstance::HasChainsAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainLocomotionSurvivorAnimInstance.HasChainsAttached");
		
		UK25ChainLocomotionSurvivorAnimInstance_HasChainsAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDC540
	 * 		Name   -> Function TheK25.K25ChainLocomotionSurvivorAnimInstance.GetSurvivorChainAttachmentComponent
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class UK25SurvivorChainAttachmentComponent* UK25ChainLocomotionSurvivorAnimInstance::GetSurvivorChainAttachmentComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainLocomotionSurvivorAnimInstance.GetSurvivorChainAttachmentComponent");
		
		UK25ChainLocomotionSurvivorAnimInstance_GetSurvivorChainAttachmentComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDC400
	 * 		Name   -> Function TheK25.K25ChainLocomotionSurvivorAnimInstance.GetDetachingChainAnchorData
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FK25SurvivorChainAttachmentData UK25ChainLocomotionSurvivorAnimInstance::GetDetachingChainAnchorData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainLocomotionSurvivorAnimInstance.GetDetachingChainAnchorData");
		
		UK25ChainLocomotionSurvivorAnimInstance_GetDetachingChainAnchorData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDC2E0
	 * 		Name   -> Function TheK25.K25ChainLocomotionSurvivorAnimInstance.GetChainAttachmentAnchors
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class AK25SurvivorChainAttachmentAnchor*> UK25ChainLocomotionSurvivorAnimInstance::GetChainAttachmentAnchors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainLocomotionSurvivorAnimInstance.GetChainAttachmentAnchors");
		
		UK25ChainLocomotionSurvivorAnimInstance_GetChainAttachmentAnchors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25ChainLocomotionSurvivorAnimInstance.BP_OnChainDetached
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AK25Chain*                                   chain                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AK25SurvivorChainAttachmentAnchor*           chainAttachmentAnchor                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25ChainLocomotionSurvivorAnimInstance::BP_OnChainDetached(class AK25Chain* chain, class AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainLocomotionSurvivorAnimInstance.BP_OnChainDetached");
		
		UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainDetached_Params params {};
		params.chain = chain;
		params.chainAttachmentAnchor = chainAttachmentAnchor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25ChainLocomotionSurvivorAnimInstance.BP_OnChainAttached
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AK25Chain*                                   chain                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AK25SurvivorChainAttachmentAnchor*           chainAttachmentAnchor                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25ChainLocomotionSurvivorAnimInstance::BP_OnChainAttached(class AK25Chain* chain, class AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainLocomotionSurvivorAnimInstance.BP_OnChainAttached");
		
		UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainAttached_Params params {};
		params.chain = chain;
		params.chainAttachmentAnchor = chainAttachmentAnchor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25ChainLocomotionSurvivorAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25ChainLocomotionSurvivorAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25ChainLocomotionSurvivorAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25ChainPool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25ChainPool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25ChainPool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25ChainStrike_IsGatewayOrientationTimerExpired.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25ChainStrike_IsGatewayOrientationTimerExpired::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25ChainStrike_IsGatewayOrientationTimerExpired");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25ChainStrike_IsGatewayPlacementValidCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25ChainStrike_IsGatewayPlacementValidCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25ChainStrike_IsGatewayPlacementValidCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25ChainStrike_IsPlayerPressingInputCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25ChainStrike_IsPlayerPressingInputCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25ChainStrike_IsPlayerPressingInputCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDC4E0
	 * 		Name   -> Function TheK25.K25ChainStrikeBaseState.GetPlayerOwner
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADBDPlayer* UK25ChainStrikeBaseState::GetPlayerOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainStrikeBaseState.GetPlayerOwner");
		
		UK25ChainStrikeBaseState_GetPlayerOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDC480
	 * 		Name   -> Function TheK25.K25ChainStrikeBaseState.GetK25Power
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class AK25Power* UK25ChainStrikeBaseState::GetK25Power()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainStrikeBaseState.GetK25Power");
		
		UK25ChainStrikeBaseState_GetK25Power_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDC450
	 * 		Name   -> Function TheK25.K25ChainStrikeBaseState.GetK25Gateway
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class AK25Gateway* UK25ChainStrikeBaseState::GetK25Gateway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainStrikeBaseState.GetK25Gateway");
		
		UK25ChainStrikeBaseState_GetK25Gateway_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25ChainStrikeBaseState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25ChainStrikeBaseState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25ChainStrikeBaseState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25ChainStrikeImmunityEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25ChainStrikeImmunityEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25ChainStrikeImmunityEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDD230
	 * 		Name   -> Function TheK25.K25ChainStrikeInteraction.Server_SetShouldIncrementChargeableComponent
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
	 * Parameters:
	 * 		bool                                               shouldIncrement                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25ChainStrikeInteraction::Server_SetShouldIncrementChargeableComponent(bool shouldIncrement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainStrikeInteraction.Server_SetShouldIncrementChargeableComponent");
		
		UK25ChainStrikeInteraction_Server_SetShouldIncrementChargeableComponent_Params params {};
		params.shouldIncrement = shouldIncrement;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDD1B0
	 * 		Name   -> Function TheK25.K25ChainStrikeInteraction.Server_SetFallbackEndReason
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
	 * Parameters:
	 * 		EChainStrikeEndReason                              chainStrikeEndReason                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25ChainStrikeInteraction::Server_SetFallbackEndReason(EChainStrikeEndReason chainStrikeEndReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainStrikeInteraction.Server_SetFallbackEndReason");
		
		UK25ChainStrikeInteraction_Server_SetFallbackEndReason_Params params {};
		params.chainStrikeEndReason = chainStrikeEndReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDD130
	 * 		Name   -> Function TheK25.K25ChainStrikeInteraction.Server_SetCameraViewTarget
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		EChainStrikeCameraViewTarget                       NewViewTarget                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25ChainStrikeInteraction::Server_SetCameraViewTarget(EChainStrikeCameraViewTarget NewViewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainStrikeInteraction.Server_SetCameraViewTarget");
		
		UK25ChainStrikeInteraction_Server_SetCameraViewTarget_Params params {};
		params.NewViewTarget = NewViewTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDD080
	 * 		Name   -> Function TheK25.K25ChainStrikeInteraction.Server_RemoveStateTagFromPlayer
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25ChainStrikeInteraction::Server_RemoveStateTagFromPlayer(const struct FGameplayTag& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainStrikeInteraction.Server_RemoveStateTagFromPlayer");
		
		UK25ChainStrikeInteraction_Server_RemoveStateTagFromPlayer_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDCFD0
	 * 		Name   -> Function TheK25.K25ChainStrikeInteraction.Server_AddStateTagToPlayer
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25ChainStrikeInteraction::Server_AddStateTagToPlayer(const struct FGameplayTag& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainStrikeInteraction.Server_AddStateTagToPlayer");
		
		UK25ChainStrikeInteraction_Server_AddStateTagToPlayer_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDCEE0
	 * 		Name   -> Function TheK25.K25ChainStrikeInteraction.OnRep_ChainStrikeCameraViewTarget
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK25ChainStrikeInteraction::OnRep_ChainStrikeCameraViewTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainStrikeInteraction.OnRep_ChainStrikeCameraViewTarget");
		
		UK25ChainStrikeInteraction_OnRep_ChainStrikeCameraViewTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDCB10
	 * 		Name   -> Function TheK25.K25ChainStrikeInteraction.Multicast_SetFallbackEndReason
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		EChainStrikeEndReason                              chainStrikeEndReason                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25ChainStrikeInteraction::Multicast_SetFallbackEndReason(EChainStrikeEndReason chainStrikeEndReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainStrikeInteraction.Multicast_SetFallbackEndReason");
		
		UK25ChainStrikeInteraction_Multicast_SetFallbackEndReason_Params params {};
		params.chainStrikeEndReason = chainStrikeEndReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDCA60
	 * 		Name   -> Function TheK25.K25ChainStrikeInteraction.Multicast_RemoveStateTagFromPlayer
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25ChainStrikeInteraction::Multicast_RemoveStateTagFromPlayer(const struct FGameplayTag& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainStrikeInteraction.Multicast_RemoveStateTagFromPlayer");
		
		UK25ChainStrikeInteraction_Multicast_RemoveStateTagFromPlayer_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDC600
	 * 		Name   -> Function TheK25.K25ChainStrikeInteraction.Multicast_AddStateTagToPlayer
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25ChainStrikeInteraction::Multicast_AddStateTagToPlayer(const struct FGameplayTag& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainStrikeInteraction.Multicast_AddStateTagToPlayer");
		
		UK25ChainStrikeInteraction_Multicast_AddStateTagToPlayer_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25ChainStrikeInteraction.Cosmetic_TriggerKillerRepossessionFadeOutEffects
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               preventAudioTriggers                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25ChainStrikeInteraction::Cosmetic_TriggerKillerRepossessionFadeOutEffects(class ASlasherPlayer* killer, bool preventAudioTriggers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainStrikeInteraction.Cosmetic_TriggerKillerRepossessionFadeOutEffects");
		
		UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeOutEffects_Params params {};
		params.killer = killer;
		params.preventAudioTriggers = preventAudioTriggers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25ChainStrikeInteraction.Cosmetic_TriggerKillerRepossessionFadeInEffects
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               hasHitSurvivor                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               preventAudioTriggers                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25ChainStrikeInteraction::Cosmetic_TriggerKillerRepossessionFadeInEffects(class ASlasherPlayer* killer, bool hasHitSurvivor, bool preventAudioTriggers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainStrikeInteraction.Cosmetic_TriggerKillerRepossessionFadeInEffects");
		
		UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Params params {};
		params.killer = killer;
		params.hasHitSurvivor = hasHitSurvivor;
		params.preventAudioTriggers = preventAudioTriggers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25ChainStrikeInteraction.Cosmetic_TriggerInvalidGatewayPlacementSFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25ChainStrikeInteraction::Cosmetic_TriggerInvalidGatewayPlacementSFX(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainStrikeInteraction.Cosmetic_TriggerInvalidGatewayPlacementSFX");
		
		UK25ChainStrikeInteraction_Cosmetic_TriggerInvalidGatewayPlacementSFX_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25ChainStrikeInteraction.Cosmetic_TriggerGatewayPossessionEffects
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TransitionTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25ChainStrikeInteraction::Cosmetic_TriggerGatewayPossessionEffects(float TransitionTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainStrikeInteraction.Cosmetic_TriggerGatewayPossessionEffects");
		
		UK25ChainStrikeInteraction_Cosmetic_TriggerGatewayPossessionEffects_Params params {};
		params.TransitionTime = TransitionTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25ChainStrikeInteraction.Cosmetic_ResetAllVignetteValues
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25ChainStrikeInteraction::Cosmetic_ResetAllVignetteValues(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainStrikeInteraction.Cosmetic_ResetAllVignetteValues");
		
		UK25ChainStrikeInteraction_Cosmetic_ResetAllVignetteValues_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25ChainStrikeInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25ChainStrikeInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25ChainStrikeInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE1B60
	 * 		Name   -> Function TheK25.K25ChainStrikeReplicationComponent.Server_EndChainStrike
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		class UK25ChainStrikeInteraction*                  Interaction                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EChainStrikeEndReason                              endReason                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25ChainStrikeReplicationComponent::Server_EndChainStrike(class UK25ChainStrikeInteraction* Interaction, EChainStrikeEndReason endReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainStrikeReplicationComponent.Server_EndChainStrike");
		
		UK25ChainStrikeReplicationComponent_Server_EndChainStrike_Params params {};
		params.Interaction = Interaction;
		params.endReason = endReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE1400
	 * 		Name   -> Function TheK25.K25ChainStrikeReplicationComponent.Multicast_EndChainStrike
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class UK25ChainStrikeInteraction*                  Interaction                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EChainStrikeEndReason                              endReason                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25ChainStrikeReplicationComponent::Multicast_EndChainStrike(class UK25ChainStrikeInteraction* Interaction, EChainStrikeEndReason endReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ChainStrikeReplicationComponent.Multicast_EndChainStrike");
		
		UK25ChainStrikeReplicationComponent_Multicast_EndChainStrike_Params params {};
		params.Interaction = Interaction;
		params.endReason = endReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25ChainStrikeReplicationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25ChainStrikeReplicationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25ChainStrikeReplicationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25ChainStrikeState_EndChainStrike.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25ChainStrikeState_EndChainStrike::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25ChainStrikeState_EndChainStrike");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25ChainStrikeState_GatewayPlacement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25ChainStrikeState_GatewayPlacement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25ChainStrikeState_GatewayPlacement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25ChainStrikeState_OutOfBodyState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25ChainStrikeState_OutOfBodyState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25ChainStrikeState_OutOfBodyState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25ChainStrikeState_PossessGateway.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25ChainStrikeState_PossessGateway::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25ChainStrikeState_PossessGateway");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25ChainStrikeState_SelectGatewayOrientation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25ChainStrikeState_SelectGatewayOrientation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25ChainStrikeState_SelectGatewayOrientation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25ChainStrikeState_ShootControlledProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25ChainStrikeState_ShootControlledProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25ChainStrikeState_ShootControlledProjectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0413DC50
	 * 		Name   -> Function TheK25.K25CheatComponent.DBD_K25TriggerUncontrolledChainsOnLocalSurvivor
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            numbChains                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25CheatComponent::DBD_K25TriggerUncontrolledChainsOnLocalSurvivor(int32_t numbChains)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25CheatComponent.DBD_K25TriggerUncontrolledChainsOnLocalSurvivor");
		
		UK25CheatComponent_DBD_K25TriggerUncontrolledChainsOnLocalSurvivor_Params params {};
		params.numbChains = numbChains;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE1290
	 * 		Name   -> Function TheK25.K25CheatComponent.DBD_K25TriggerUncontrolledChainsOnClosestsSurvivorToPosition
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Z                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            numbChains                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25CheatComponent::DBD_K25TriggerUncontrolledChainsOnClosestsSurvivorToPosition(float X, float Y, float Z, int32_t numbChains)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25CheatComponent.DBD_K25TriggerUncontrolledChainsOnClosestsSurvivorToPosition");
		
		UK25CheatComponent_DBD_K25TriggerUncontrolledChainsOnClosestsSurvivorToPosition_Params params {};
		params.X = X;
		params.Y = Y;
		params.Z = Z;
		params.numbChains = numbChains;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0413DC50
	 * 		Name   -> Function TheK25.K25CheatComponent.DBD_K25TriggerUncontrolledChainsOnAllSurvivors
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            numbChains                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25CheatComponent::DBD_K25TriggerUncontrolledChainsOnAllSurvivors(int32_t numbChains)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25CheatComponent.DBD_K25TriggerUncontrolledChainsOnAllSurvivors");
		
		UK25CheatComponent_DBD_K25TriggerUncontrolledChainsOnAllSurvivors_Params params {};
		params.numbChains = numbChains;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0376CF00
	 * 		Name   -> Function TheK25.K25CheatComponent.DBD_K25ForceRespawnLamentConfiguration
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UK25CheatComponent::DBD_K25ForceRespawnLamentConfiguration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25CheatComponent.DBD_K25ForceRespawnLamentConfiguration");
		
		UK25CheatComponent_DBD_K25ForceRespawnLamentConfiguration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0376CF00
	 * 		Name   -> Function TheK25.K25CheatComponent.DBD_K25ForceRemoveAllChainsOnLocalSurvivor
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UK25CheatComponent::DBD_K25ForceRemoveAllChainsOnLocalSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25CheatComponent.DBD_K25ForceRemoveAllChainsOnLocalSurvivor");
		
		UK25CheatComponent_DBD_K25ForceRemoveAllChainsOnLocalSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04A273E0
	 * 		Name   -> Function TheK25.K25CheatComponent.DBD_K25ForceRemoveAllChainsOnClosestsSurvivorToPosition
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Z                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25CheatComponent::DBD_K25ForceRemoveAllChainsOnClosestsSurvivorToPosition(float X, float Y, float Z)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25CheatComponent.DBD_K25ForceRemoveAllChainsOnClosestsSurvivorToPosition");
		
		UK25CheatComponent_DBD_K25ForceRemoveAllChainsOnClosestsSurvivorToPosition_Params params {};
		params.X = X;
		params.Y = Y;
		params.Z = Z;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0376CF00
	 * 		Name   -> Function TheK25.K25CheatComponent.DBD_K25ForceRemoveAllChainsOnAllSurvivors
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UK25CheatComponent::DBD_K25ForceRemoveAllChainsOnAllSurvivors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25CheatComponent.DBD_K25ForceRemoveAllChainsOnAllSurvivors");
		
		UK25CheatComponent_DBD_K25ForceRemoveAllChainsOnAllSurvivors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04A273E0
	 * 		Name   -> Function TheK25.K25CheatComponent.DBD_K25ComeToPositionLamentConfiguration
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Z                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25CheatComponent::DBD_K25ComeToPositionLamentConfiguration(float X, float Y, float Z)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25CheatComponent.DBD_K25ComeToPositionLamentConfiguration");
		
		UK25CheatComponent_DBD_K25ComeToPositionLamentConfiguration_Params params {};
		params.X = X;
		params.Y = Y;
		params.Z = Z;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0376CF00
	 * 		Name   -> Function TheK25.K25CheatComponent.DBD_K25ComeToMeLamentConfiguration
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UK25CheatComponent::DBD_K25ComeToMeLamentConfiguration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25CheatComponent.DBD_K25ComeToMeLamentConfiguration");
		
		UK25CheatComponent_DBD_K25ComeToMeLamentConfiguration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25CheatComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25CheatComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25CheatComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25CollectLamentConfigurationInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25CollectLamentConfigurationInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25CollectLamentConfigurationInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE78B0
	 * 		Name   -> Function TheK25.K25Projectile.Server_RequestDisableProjectile
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
	 * Parameters:
	 * 		EK25ProjectileDeactivateReason                     deactivateReason                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK25Projectile::Server_RequestDisableProjectile(EK25ProjectileDeactivateReason deactivateReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Projectile.Server_RequestDisableProjectile");
		
		AK25Projectile_Server_RequestDisableProjectile_Params params {};
		params.deactivateReason = deactivateReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE76D0
	 * 		Name   -> Function TheK25.K25Projectile.OnProjectileStopped
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AK25Projectile::OnProjectileStopped(const struct FHitResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Projectile.OnProjectileStopped");
		
		AK25Projectile_OnProjectileStopped_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE6BC0
	 * 		Name   -> Function TheK25.K25Projectile.GetMovementComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UDBDProjectileMovementComponent* AK25Projectile::GetMovementComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Projectile.GetMovementComponent");
		
		AK25Projectile_GetMovementComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE6760
	 * 		Name   -> Function TheK25.K25Projectile.GetChainAttachmentLocation
	 * 		Flags  -> (Native, Event, Public, HasDefaults, BlueprintEvent, Const)
	 */
	struct FVector AK25Projectile::GetChainAttachmentLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Projectile.GetChainAttachmentLocation");
		
		AK25Projectile_GetChainAttachmentLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Projectile.Cosmetic_OnProjectileDeactivated
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FK25ProjectileDeactivationData              deactivationData                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AK25Projectile::Cosmetic_OnProjectileDeactivated(const struct FK25ProjectileDeactivationData& deactivationData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Projectile.Cosmetic_OnProjectileDeactivated");
		
		AK25Projectile_Cosmetic_OnProjectileDeactivated_Params params {};
		params.deactivationData = deactivationData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Projectile.Cosmetic_OnProjectileActivated
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK25Projectile::Cosmetic_OnProjectileActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Projectile.Cosmetic_OnProjectileActivated");
		
		AK25Projectile_Cosmetic_OnProjectileActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AK25Projectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK25Projectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25Projectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE1D20
	 * 		Name   -> Function TheK25.K25ControlledProjectile.Server_ProcessYawInput
	 * 		Flags  -> (Net, Native, Event, Public, NetServer)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              scaledInput                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK25ControlledProjectile::Server_ProcessYawInput(float DeltaTime, float scaledInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ControlledProjectile.Server_ProcessYawInput");
		
		AK25ControlledProjectile_Server_ProcessYawInput_Params params {};
		params.DeltaTime = DeltaTime;
		params.scaledInput = scaledInput;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE1C50
	 * 		Name   -> Function TheK25.K25ControlledProjectile.Server_ProcessPitchInput
	 * 		Flags  -> (Net, Native, Event, Public, NetServer)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              scaledInput                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK25ControlledProjectile::Server_ProcessPitchInput(float DeltaTime, float scaledInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ControlledProjectile.Server_ProcessPitchInput");
		
		AK25ControlledProjectile_Server_ProcessPitchInput_Params params {};
		params.DeltaTime = DeltaTime;
		params.scaledInput = scaledInput;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0376CF00
	 * 		Name   -> Function TheK25.K25ControlledProjectile.OnRep_AngularVelocity
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AK25ControlledProjectile::OnRep_AngularVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ControlledProjectile.OnRep_AngularVelocity");
		
		AK25ControlledProjectile_OnRep_AngularVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25ControlledProjectile.Cosmetic_OnKillerPossessProjectileEffects
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK25ControlledProjectile::Cosmetic_OnKillerPossessProjectileEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ControlledProjectile.Cosmetic_OnKillerPossessProjectileEffects");
		
		AK25ControlledProjectile_Cosmetic_OnKillerPossessProjectileEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AK25ControlledProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK25ControlledProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25ControlledProjectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25ControlledProjectileMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25ControlledProjectileMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25ControlledProjectileMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25EscapeLamentConfigurationGrasp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25EscapeLamentConfigurationGrasp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25EscapeLamentConfigurationGrasp");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE1F60
	 * 		Name   -> Function TheK25.K25Gateway.Server_StartGatewayPossession
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     possessionLocation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    gatewayRotation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AK25Gateway::Server_StartGatewayPossession(const struct FVector& possessionLocation, const struct FRotator& gatewayRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Gateway.Server_StartGatewayPossession");
		
		AK25Gateway_Server_StartGatewayPossession_Params params {};
		params.possessionLocation = possessionLocation;
		params.gatewayRotation = gatewayRotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0AEF0
	 * 		Name   -> Function TheK25.K25Gateway.Server_SetIsGatewayBeingPositionned
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		bool                                               isBeingPositionned                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK25Gateway::Server_SetIsGatewayBeingPositionned(bool isBeingPositionned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Gateway.Server_SetIsGatewayBeingPositionned");
		
		AK25Gateway_Server_SetIsGatewayBeingPositionned_Params params {};
		params.isBeingPositionned = isBeingPositionned;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE1E80
	 * 		Name   -> Function TheK25.K25Gateway.Server_SetGatewayTargetLocation
	 * 		Flags  -> (Final, Net, Native, Event, Private, NetServer, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     targetLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isValidLocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK25Gateway::Server_SetGatewayTargetLocation(const struct FVector& targetLocation, bool isValidLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Gateway.Server_SetGatewayTargetLocation");
		
		AK25Gateway_Server_SetGatewayTargetLocation_Params params {};
		params.targetLocation = targetLocation;
		params.isValidLocation = isValidLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE1DF0
	 * 		Name   -> Function TheK25.K25Gateway.Server_SetGatewayOrientation
	 * 		Flags  -> (Final, Net, Native, Event, Private, NetServer, HasDefaults)
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AK25Gateway::Server_SetGatewayOrientation(const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Gateway.Server_SetGatewayOrientation");
		
		AK25Gateway_Server_SetGatewayOrientation_Params params {};
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE1C30
	 * 		Name   -> Function TheK25.K25Gateway.Server_EndGatewayPossession
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
	 */
	void AK25Gateway::Server_EndGatewayPossession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Gateway.Server_EndGatewayPossession");
		
		AK25Gateway_Server_EndGatewayPossession_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE1980
	 * 		Name   -> Function TheK25.K25Gateway.OnRep_IsGatewayPossessed
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AK25Gateway::OnRep_IsGatewayPossessed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Gateway.OnRep_IsGatewayPossessed");
		
		AK25Gateway_OnRep_IsGatewayPossessed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE1960
	 * 		Name   -> Function TheK25.K25Gateway.OnRep_IsBeingPositionned
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AK25Gateway::OnRep_IsBeingPositionned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Gateway.OnRep_IsBeingPositionned");
		
		AK25Gateway_OnRep_IsBeingPositionned_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE15F0
	 * 		Name   -> Function TheK25.K25Gateway.Multicast_SetGatewayTargetLocation
	 * 		Flags  -> (Final, Net, Native, Event, NetMulticast, Private, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     targetLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isValidLocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK25Gateway::Multicast_SetGatewayTargetLocation(const struct FVector& targetLocation, bool isValidLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Gateway.Multicast_SetGatewayTargetLocation");
		
		AK25Gateway_Multicast_SetGatewayTargetLocation_Params params {};
		params.targetLocation = targetLocation;
		params.isValidLocation = isValidLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE1560
	 * 		Name   -> Function TheK25.K25Gateway.Multicast_SetGatewayOrientation
	 * 		Flags  -> (Final, Net, Native, Event, NetMulticast, Private, HasDefaults)
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AK25Gateway::Multicast_SetGatewayOrientation(const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Gateway.Multicast_SetGatewayOrientation");
		
		AK25Gateway_Multicast_SetGatewayOrientation_Params params {};
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE14D0
	 * 		Name   -> Function TheK25.K25Gateway.Multicast_SetGatewayLocation
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     possessionLocation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK25Gateway::Multicast_SetGatewayLocation(const struct FVector& possessionLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Gateway.Multicast_SetGatewayLocation");
		
		AK25Gateway_Multicast_SetGatewayLocation_Params params {};
		params.possessionLocation = possessionLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04AC6660
	 * 		Name   -> Function TheK25.K25Gateway.IsGatewayPossessed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AK25Gateway::IsGatewayPossessed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Gateway.IsGatewayPossessed");
		
		AK25Gateway_IsGatewayPossessed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Gateway.GetCameraComponent
	 * 		Flags  -> (Event, Protected, BlueprintEvent, Const)
	 */
	class UCameraComponent* AK25Gateway::GetCameraComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Gateway.GetCameraComponent");
		
		AK25Gateway_GetCameraComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Gateway.Cosmetic_TriggerInvalidGatewayPlacementSFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AK25Gateway::Cosmetic_TriggerInvalidGatewayPlacementSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Gateway.Cosmetic_TriggerInvalidGatewayPlacementSFX");
		
		AK25Gateway_Cosmetic_TriggerInvalidGatewayPlacementSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Gateway.Cosmetic_TriggerGatewayUnpossessedEffects
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK25Gateway::Cosmetic_TriggerGatewayUnpossessedEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Gateway.Cosmetic_TriggerGatewayUnpossessedEffects");
		
		AK25Gateway_Cosmetic_TriggerGatewayUnpossessedEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Gateway.Cosmetic_TriggerGatewayPossessionCancel
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AK25Gateway::Cosmetic_TriggerGatewayPossessionCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Gateway.Cosmetic_TriggerGatewayPossessionCancel");
		
		AK25Gateway_Cosmetic_TriggerGatewayPossessionCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Gateway.Cosmetic_TriggerGatewayPossessedEffects
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TransitionTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK25Gateway::Cosmetic_TriggerGatewayPossessedEffects(float TransitionTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Gateway.Cosmetic_TriggerGatewayPossessedEffects");
		
		AK25Gateway_Cosmetic_TriggerGatewayPossessedEffects_Params params {};
		params.TransitionTime = TransitionTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Gateway.Cosmetic_TriggerGatewayPlacementStop
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AK25Gateway::Cosmetic_TriggerGatewayPlacementStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Gateway.Cosmetic_TriggerGatewayPlacementStop");
		
		AK25Gateway_Cosmetic_TriggerGatewayPlacementStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Gateway.Cosmetic_TriggerGatewayPlacementStart
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AK25Gateway::Cosmetic_TriggerGatewayPlacementStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Gateway.Cosmetic_TriggerGatewayPlacementStart");
		
		AK25Gateway_Cosmetic_TriggerGatewayPlacementStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Gateway.Cosmetic_TriggerGatewayPlacementCancel
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AK25Gateway::Cosmetic_TriggerGatewayPlacementCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Gateway.Cosmetic_TriggerGatewayPlacementCancel");
		
		AK25Gateway_Cosmetic_TriggerGatewayPlacementCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Gateway.Cosmetic_SetKillerVisualVisibility
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK25Gateway::Cosmetic_SetKillerVisualVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Gateway.Cosmetic_SetKillerVisualVisibility");
		
		AK25Gateway_Cosmetic_SetKillerVisualVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Gateway.Cosmetic_SetIsGatewayPositionValid
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isGatewayPlacementValid                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK25Gateway::Cosmetic_SetIsGatewayPositionValid(bool isGatewayPlacementValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Gateway.Cosmetic_SetIsGatewayPositionValid");
		
		AK25Gateway_Cosmetic_SetIsGatewayPositionValid_Params params {};
		params.isGatewayPlacementValid = isGatewayPlacementValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AK25Gateway.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK25Gateway::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25Gateway");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Husk.Cosmetic_StartDisappearing
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AK25Husk::Cosmetic_StartDisappearing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Husk.Cosmetic_StartDisappearing");
		
		AK25Husk_Cosmetic_StartDisappearing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Husk.Cosmetic_StartAppearing
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AK25Husk::Cosmetic_StartAppearing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Husk.Cosmetic_StartAppearing");
		
		AK25Husk_Cosmetic_StartAppearing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Husk.Cosmetic_HideHusk
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AK25Husk::Cosmetic_HideHusk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Husk.Cosmetic_HideHusk");
		
		AK25Husk_Cosmetic_HideHusk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AK25Husk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK25Husk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25Husk");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25KillerChainHuntEffectsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25KillerChainHuntEffectsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25KillerChainHuntEffectsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25KillerTeleportationPositionFinderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25KillerTeleportationPositionFinderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25KillerTeleportationPositionFinderComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25LamentConfigurationPossessionChainAttacksEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25LamentConfigurationPossessionChainAttacksEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25LamentConfigurationPossessionChainAttacksEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25LamentConfigurationPossessionStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25LamentConfigurationPossessionStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25LamentConfigurationPossessionStatusEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25LamentConfigurationTeleportIndicator.Cosmetic_UpdateIndicatorVisibility
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK25LamentConfigurationTeleportIndicator::Cosmetic_UpdateIndicatorVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25LamentConfigurationTeleportIndicator.Cosmetic_UpdateIndicatorVisibility");
		
		AK25LamentConfigurationTeleportIndicator_Cosmetic_UpdateIndicatorVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AK25LamentConfigurationTeleportIndicator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK25LamentConfigurationTeleportIndicator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25LamentConfigurationTeleportIndicator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE1940
	 * 		Name   -> Function TheK25.K25P01.OnRep_GeneratorsBlocked
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK25P01::OnRep_GeneratorsBlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25P01.OnRep_GeneratorsBlocked");
		
		UK25P01_OnRep_GeneratorsBlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE1200
	 * 		Name   -> Function TheK25.K25P01.Authority_OnBlockTimerDone
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AGenerator*                                  Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25P01::Authority_OnBlockTimerDone(class AGenerator* Generator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25P01.Authority_OnBlockTimerDone");
		
		UK25P01_Authority_OnBlockTimerDone_Params params {};
		params.Generator = Generator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25P01.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25P01::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25P01");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE1920
	 * 		Name   -> Function TheK25.K25P02.OnRep_CursedSurvivors
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK25P02::OnRep_CursedSurvivors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25P02.OnRep_CursedSurvivors");
		
		UK25P02_OnRep_CursedSurvivors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25P02.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25P02::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25P02");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE1AD0
	 * 		Name   -> Function TheK25.K25P03.OnSurvivorRemoved
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25P03::OnSurvivorRemoved(class ACamperPlayer* survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25P03.OnSurvivorRemoved");
		
		UK25P03_OnSurvivorRemoved_Params params {};
		params.survivor = survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE1780
	 * 		Name   -> Function TheK25.K25P03.OnDamageStateChanged
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UK25P03::OnDamageStateChanged(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25P03.OnDamageStateChanged");
		
		UK25P03_OnDamageStateChanged_Params params {};
		params.GameplayTag = GameplayTag;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE16D0
	 * 		Name   -> Function TheK25.K25P03.OnCamperUnhookedFromScourgeHook
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UK25P03::OnCamperUnhookedFromScourgeHook(const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25P03.OnCamperUnhookedFromScourgeHook");
		
		UK25P03_OnCamperUnhookedFromScourgeHook_Params params {};
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25P03.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25P03::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25P03");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B10360
	 * 		Name   -> Function TheK25.K25PounceAttack.Multicast_DownedTargetHoldingLamentConfiguration
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void UK25PounceAttack::Multicast_DownedTargetHoldingLamentConfiguration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25PounceAttack.Multicast_DownedTargetHoldingLamentConfiguration");
		
		UK25PounceAttack_Multicast_DownedTargetHoldingLamentConfiguration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B10430
	 * 		Name   -> Function TheK25.K25PounceAttack.Client_InvalidateDownedTargetHoldingLamentConfiguration
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
	 */
	void UK25PounceAttack::Client_InvalidateDownedTargetHoldingLamentConfiguration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25PounceAttack.Client_InvalidateDownedTargetHoldingLamentConfiguration");
		
		UK25PounceAttack_Client_InvalidateDownedTargetHoldingLamentConfiguration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25PounceAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25PounceAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25PounceAttack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25PounceAttackHittingSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25PounceAttackHittingSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25PounceAttackHittingSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE1A00
	 * 		Name   -> Function TheK25.K25Power.OnSurvivorAdded
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK25Power::OnSurvivorAdded(class ACamperPlayer* survivor, class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Power.OnSurvivorAdded");
		
		AK25Power_OnSurvivorAdded_Params params {};
		params.survivor = survivor;
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE19E0
	 * 		Name   -> Function TheK25.K25Power.OnRep_LamentConfiguration
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AK25Power::OnRep_LamentConfiguration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Power.OnRep_LamentConfiguration");
		
		AK25Power_OnRep_LamentConfiguration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE19C0
	 * 		Name   -> Function TheK25.K25Power.OnRep_K25Gateway
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AK25Power::OnRep_K25Gateway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Power.OnRep_K25Gateway");
		
		AK25Power_OnRep_K25Gateway_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE19A0
	 * 		Name   -> Function TheK25.K25Power.OnRep_K25ControlledProjectile
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AK25Power::OnRep_K25ControlledProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Power.OnRep_K25ControlledProjectile");
		
		AK25Power_OnRep_K25ControlledProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE1890
	 * 		Name   -> Function TheK25.K25Power.OnKillerAdded
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK25Power::OnKillerAdded(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Power.OnKillerAdded");
		
		AK25Power_OnKillerAdded_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Power.Cosmetic_OnKillerInterruptSFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK25Power::Cosmetic_OnKillerInterruptSFX(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Power.Cosmetic_OnKillerInterruptSFX");
		
		AK25Power_Cosmetic_OnKillerInterruptSFX_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25Power.Cosmetic_OnKillerInterruptOpenHatchSFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK25Power::Cosmetic_OnKillerInterruptOpenHatchSFX(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Power.Cosmetic_OnKillerInterruptOpenHatchSFX");
		
		AK25Power_Cosmetic_OnKillerInterruptOpenHatchSFX_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AK25Power.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK25Power::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25Power");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25PowerChargePresentationItemProgressComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25PowerChargePresentationItemProgressComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25PowerChargePresentationItemProgressComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25ProjectileLauncher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25ProjectileLauncher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25ProjectileLauncher");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25ProjectilePool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25ProjectilePool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25ProjectilePool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE71E0
	 * 		Name   -> Function TheK25.K25ProjectileReplicationComponent.Multicast_SetAttachedChain
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class AK25Projectile*                              Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AK25Chain*                                   chainToAttach                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLaunchInfo                                 LaunchInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UK25ProjectileReplicationComponent::Multicast_SetAttachedChain(class AK25Projectile* Projectile, class AK25Chain* chainToAttach, const struct FLaunchInfo& LaunchInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ProjectileReplicationComponent.Multicast_SetAttachedChain");
		
		UK25ProjectileReplicationComponent_Multicast_SetAttachedChain_Params params {};
		params.Projectile = Projectile;
		params.chainToAttach = chainToAttach;
		params.LaunchInfo = LaunchInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE6CD0
	 * 		Name   -> Function TheK25.K25ProjectileReplicationComponent.Multicast_DeactivateProjectile
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class AK25Projectile*                              Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FK25ProjectileDeactivationData              deactivationData                                           (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UK25ProjectileReplicationComponent::Multicast_DeactivateProjectile(class AK25Projectile* Projectile, const struct FK25ProjectileDeactivationData& deactivationData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25ProjectileReplicationComponent.Multicast_DeactivateProjectile");
		
		UK25ProjectileReplicationComponent_Multicast_DeactivateProjectile_Params params {};
		params.Projectile = Projectile;
		params.deactivationData = deactivationData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25ProjectileReplicationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25ProjectileReplicationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25ProjectileReplicationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25RemoveChainInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25RemoveChainInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25RemoveChainInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0ACA0
	 * 		Name   -> Function TheK25.K25SolveLamentConfigurationInteraction.Multicast_TriggerKillerStoppedInteractionViaAttackSFX
	 * 		Flags  -> (Final, Net, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25SolveLamentConfigurationInteraction::Multicast_TriggerKillerStoppedInteractionViaAttackSFX(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25SolveLamentConfigurationInteraction.Multicast_TriggerKillerStoppedInteractionViaAttackSFX");
		
		UK25SolveLamentConfigurationInteraction_Multicast_TriggerKillerStoppedInteractionViaAttackSFX_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25SolveLamentConfigurationInteraction.Cosmetic_TriggerKillerStoppedInteractionViaAttackSFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25SolveLamentConfigurationInteraction::Cosmetic_TriggerKillerStoppedInteractionViaAttackSFX(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25SolveLamentConfigurationInteraction.Cosmetic_TriggerKillerStoppedInteractionViaAttackSFX");
		
		UK25SolveLamentConfigurationInteraction_Cosmetic_TriggerKillerStoppedInteractionViaAttackSFX_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE62E0
	 * 		Name   -> Function TheK25.K25SolveLamentConfigurationInteraction.Authority_OnSkillCheckResponseAuthority
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bonus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               TriggerLoudNoise                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESkillCheckCustomType                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25SolveLamentConfigurationInteraction::Authority_OnSkillCheckResponseAuthority(bool success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, ESkillCheckCustomType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25SolveLamentConfigurationInteraction.Authority_OnSkillCheckResponseAuthority");
		
		UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Params params {};
		params.success = success;
		params.Bonus = Bonus;
		params.Player = Player;
		params.TriggerLoudNoise = TriggerLoudNoise;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25SolveLamentConfigurationInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25SolveLamentConfigurationInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25SolveLamentConfigurationInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE77A0
	 * 		Name   -> Function TheK25.K25SurvivorChainAttachmentAnchor.OnRep_AttachmentData
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AK25SurvivorChainAttachmentAnchor::OnRep_AttachmentData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25SurvivorChainAttachmentAnchor.OnRep_AttachmentData");
		
		AK25SurvivorChainAttachmentAnchor_OnRep_AttachmentData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE6BF0
	 * 		Name   -> Function TheK25.K25SurvivorChainAttachmentAnchor.GetNumberOfChainsAttached
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t AK25SurvivorChainAttachmentAnchor::GetNumberOfChainsAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25SurvivorChainAttachmentAnchor.GetNumberOfChainsAttached");
		
		AK25SurvivorChainAttachmentAnchor_GetNumberOfChainsAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE6880
	 * 		Name   -> Function TheK25.K25SurvivorChainAttachmentAnchor.GetChainsPullLocation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector AK25SurvivorChainAttachmentAnchor::GetChainsPullLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25SurvivorChainAttachmentAnchor.GetChainsPullLocation");
		
		AK25SurvivorChainAttachmentAnchor_GetChainsPullLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE6840
	 * 		Name   -> Function TheK25.K25SurvivorChainAttachmentAnchor.GetChainsPullDirection
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector AK25SurvivorChainAttachmentAnchor::GetChainsPullDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25SurvivorChainAttachmentAnchor.GetChainsPullDirection");
		
		AK25SurvivorChainAttachmentAnchor_GetChainsPullDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE6810
	 * 		Name   -> Function TheK25.K25SurvivorChainAttachmentAnchor.GetChainPullDirectionAngle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float AK25SurvivorChainAttachmentAnchor::GetChainPullDirectionAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25SurvivorChainAttachmentAnchor.GetChainPullDirectionAngle");
		
		AK25SurvivorChainAttachmentAnchor_GetChainPullDirectionAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE67A0
	 * 		Name   -> Function TheK25.K25SurvivorChainAttachmentAnchor.GetChainAttachmentLocation
	 * 		Flags  -> (Native, Event, Public, HasDefaults, BlueprintEvent, Const)
	 */
	struct FVector AK25SurvivorChainAttachmentAnchor::GetChainAttachmentLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25SurvivorChainAttachmentAnchor.GetChainAttachmentLocation");
		
		AK25SurvivorChainAttachmentAnchor_GetChainAttachmentLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE6710
	 * 		Name   -> Function TheK25.K25SurvivorChainAttachmentAnchor.GetChainAttachmentData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FK25SurvivorChainAttachmentData AK25SurvivorChainAttachmentAnchor::GetChainAttachmentData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25SurvivorChainAttachmentAnchor.GetChainAttachmentData");
		
		AK25SurvivorChainAttachmentAnchor_GetChainAttachmentData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25SurvivorChainAttachmentAnchor.Cosmetic_OnChainDetached
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AK25Chain*                                   chainToDetach                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK25SurvivorChainAttachmentAnchor::Cosmetic_OnChainDetached(class AK25Chain* chainToDetach)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25SurvivorChainAttachmentAnchor.Cosmetic_OnChainDetached");
		
		AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainDetached_Params params {};
		params.chainToDetach = chainToDetach;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25SurvivorChainAttachmentAnchor.Cosmetic_OnChainAttached
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AK25Chain*                                   chainToAttach                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK25SurvivorChainAttachmentAnchor::Cosmetic_OnChainAttached(class AK25Chain* chainToAttach)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25SurvivorChainAttachmentAnchor.Cosmetic_OnChainAttached");
		
		AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainAttached_Params params {};
		params.chainToAttach = chainToAttach;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AK25SurvivorChainAttachmentAnchor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK25SurvivorChainAttachmentAnchor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25SurvivorChainAttachmentAnchor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE77E0
	 * 		Name   -> Function TheK25.K25SurvivorChainAttachmentComponent.OnRep_RemoveChainChargeableComponent
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK25SurvivorChainAttachmentComponent::OnRep_RemoveChainChargeableComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25SurvivorChainAttachmentComponent.OnRep_RemoveChainChargeableComponent");
		
		UK25SurvivorChainAttachmentComponent_OnRep_RemoveChainChargeableComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0B640
	 * 		Name   -> Function TheK25.K25SurvivorChainAttachmentComponent.Multicast_TriggerHitSurvivorInExitAreaSFX
	 * 		Flags  -> (Final, Net, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25SurvivorChainAttachmentComponent::Multicast_TriggerHitSurvivorInExitAreaSFX(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25SurvivorChainAttachmentComponent.Multicast_TriggerHitSurvivorInExitAreaSFX");
		
		UK25SurvivorChainAttachmentComponent_Multicast_TriggerHitSurvivorInExitAreaSFX_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE68C0
	 * 		Name   -> Function TheK25.K25SurvivorChainAttachmentComponent.GetFirstChainToRelease
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AK25Chain* UK25SurvivorChainAttachmentComponent::GetFirstChainToRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25SurvivorChainAttachmentComponent.GetFirstChainToRelease");
		
		UK25SurvivorChainAttachmentComponent_GetFirstChainToRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25SurvivorChainAttachmentComponent.Cosmetic_TriggerHitSurvivorInExitAreaSFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25SurvivorChainAttachmentComponent::Cosmetic_TriggerHitSurvivorInExitAreaSFX(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25SurvivorChainAttachmentComponent.Cosmetic_TriggerHitSurvivorInExitAreaSFX");
		
		UK25SurvivorChainAttachmentComponent_Cosmetic_TriggerHitSurvivorInExitAreaSFX_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25SurvivorChainAttachmentComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25SurvivorChainAttachmentComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25SurvivorChainAttachmentComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE6C20
	 * 		Name   -> Function TheK25.K25SurvivorChainHuntEffectsComponent.GetOwningSurvivor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ACamperPlayer* UK25SurvivorChainHuntEffectsComponent::GetOwningSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25SurvivorChainHuntEffectsComponent.GetOwningSurvivor");
		
		UK25SurvivorChainHuntEffectsComponent_GetOwningSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25SurvivorChainHuntEffectsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25SurvivorChainHuntEffectsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25SurvivorChainHuntEffectsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25SurvivorChainRotationStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25SurvivorChainRotationStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25SurvivorChainRotationStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE6DC0
	 * 		Name   -> Function TheK25.K25SurvivorChainTargetterComponent.Multicast_DebugPositionFind
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults, Const)
	 * Parameters:
	 * 		struct FVector                                     startSweepPosition                                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     endSweepPosition                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               hasFoundPosition                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     foundPosition                                              (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               hasFoundCollision                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     collisionPosition                                          (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25SurvivorChainTargetterComponent::Multicast_DebugPositionFind(const struct FVector& startSweepPosition, const struct FVector& endSweepPosition, bool hasFoundPosition, const struct FVector& foundPosition, bool hasFoundCollision, const struct FVector& collisionPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25SurvivorChainTargetterComponent.Multicast_DebugPositionFind");
		
		UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Params params {};
		params.startSweepPosition = startSweepPosition;
		params.endSweepPosition = endSweepPosition;
		params.hasFoundPosition = hasFoundPosition;
		params.foundPosition = foundPosition;
		params.hasFoundCollision = hasFoundCollision;
		params.collisionPosition = collisionPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE64A0
	 * 		Name   -> Function TheK25.K25SurvivorChainTargetterComponent.Authority_OnSurvivorHealthStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperDamageState                                 oldDamageState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperDamageState                                 CurrentDamageState                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25SurvivorChainTargetterComponent::Authority_OnSurvivorHealthStateChanged(ECamperDamageState oldDamageState, ECamperDamageState CurrentDamageState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25SurvivorChainTargetterComponent.Authority_OnSurvivorHealthStateChanged");
		
		UK25SurvivorChainTargetterComponent_Authority_OnSurvivorHealthStateChanged_Params params {};
		params.oldDamageState = oldDamageState;
		params.CurrentDamageState = CurrentDamageState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25SurvivorChainTargetterComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25SurvivorChainTargetterComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25SurvivorChainTargetterComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE7340
	 * 		Name   -> Function TheK25.K25TeleportInteraction.Multicast_TeleportKillerToTargetPosition
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UK25TeleportInteraction::Multicast_TeleportKillerToTargetPosition(class ASlasherPlayer* killer, const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25TeleportInteraction.Multicast_TeleportKillerToTargetPosition");
		
		UK25TeleportInteraction_Multicast_TeleportKillerToTargetPosition_Params params {};
		params.killer = killer;
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE6FD0
	 * 		Name   -> Function TheK25.K25TeleportInteraction.Multicast_InitializeHusk
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UK25TeleportInteraction::Multicast_InitializeHusk(const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25TeleportInteraction.Multicast_InitializeHusk");
		
		UK25TeleportInteraction_Multicast_InitializeHusk_Params params {};
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25TeleportInteraction.Cosmetic_TeleportStartEffects
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25TeleportInteraction::Cosmetic_TeleportStartEffects(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25TeleportInteraction.Cosmetic_TeleportStartEffects");
		
		UK25TeleportInteraction_Cosmetic_TeleportStartEffects_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25TeleportInteraction.Cosmetic_TeleportEndEffects
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25TeleportInteraction::Cosmetic_TeleportEndEffects(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25TeleportInteraction.Cosmetic_TeleportEndEffects");
		
		UK25TeleportInteraction_Cosmetic_TeleportEndEffects_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25TeleportInteraction.Cosmetic_TeleportAbortedEffects
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25TeleportInteraction::Cosmetic_TeleportAbortedEffects(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25TeleportInteraction.Cosmetic_TeleportAbortedEffects");
		
		UK25TeleportInteraction_Cosmetic_TeleportAbortedEffects_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25TeleportInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25TeleportInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25TeleportInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE7890
	 * 		Name   -> Function TheK25.K25UncontrolledProjectile.OnRep_TargetSurvivor
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AK25UncontrolledProjectile::OnRep_TargetSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25UncontrolledProjectile.OnRep_TargetSurvivor");
		
		AK25UncontrolledProjectile_OnRep_TargetSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.K25UncontrolledProjectile.Cosmetic_TriggerUncontrolledProjectileSpawnSFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK25UncontrolledProjectile::Cosmetic_TriggerUncontrolledProjectileSpawnSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25UncontrolledProjectile.Cosmetic_TriggerUncontrolledProjectileSpawnSFX");
		
		AK25UncontrolledProjectile_Cosmetic_TriggerUncontrolledProjectileSpawnSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AK25UncontrolledProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK25UncontrolledProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25UncontrolledProjectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE70C0
	 * 		Name   -> Function TheK25.K25UncontrolledProjectileReplicationComponent.Multicast_LaunchProjectile
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class AK25UncontrolledProjectile*                  Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLaunchInfo                                 LaunchInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UK25UncontrolledProjectileReplicationComponent::Multicast_LaunchProjectile(class AK25UncontrolledProjectile* Projectile, const struct FLaunchInfo& LaunchInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25UncontrolledProjectileReplicationComponent.Multicast_LaunchProjectile");
		
		UK25UncontrolledProjectileReplicationComponent_Multicast_LaunchProjectile_Params params {};
		params.Projectile = Projectile;
		params.LaunchInfo = LaunchInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25UncontrolledProjectileReplicationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25UncontrolledProjectileReplicationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25UncontrolledProjectileReplicationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE6B30
	 * 		Name   -> Function TheK25.K25Utilities.GetLamentConfiguration
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ALamentConfiguration* UK25Utilities::STATIC_GetLamentConfiguration(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Utilities.GetLamentConfiguration");
		
		UK25Utilities_GetLamentConfiguration_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE6AA0
	 * 		Name   -> Function TheK25.K25Utilities.GetK25Power
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AK25Power* UK25Utilities::STATIC_GetK25Power(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Utilities.GetK25Power");
		
		UK25Utilities_GetK25Power_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE6A10
	 * 		Name   -> Function TheK25.K25Utilities.GetK25Husk
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AK25Husk* UK25Utilities::STATIC_GetK25Husk(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Utilities.GetK25Husk");
		
		UK25Utilities_GetK25Husk_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE6980
	 * 		Name   -> Function TheK25.K25Utilities.GetK25Gateway
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AK25Gateway* UK25Utilities::STATIC_GetK25Gateway(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Utilities.GetK25Gateway");
		
		UK25Utilities_GetK25Gateway_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE68F0
	 * 		Name   -> Function TheK25.K25Utilities.GetK25ControlledProjectile
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AK25ControlledProjectile* UK25Utilities::STATIC_GetK25ControlledProjectile(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25Utilities.GetK25ControlledProjectile");
		
		UK25Utilities_GetK25ControlledProjectile_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25Utilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25Utilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25Utilities");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE7540
	 * 		Name   -> Function TheK25.K25WeaponAnimInstance.OnAttackStart
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		EAttackType                                        attackType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK25WeaponAnimInstance::OnAttackStart(EAttackType attackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.K25WeaponAnimInstance.OnAttackStart");
		
		UK25WeaponAnimInstance_OnAttackStart_Params params {};
		params.attackType = attackType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK25WeaponAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25WeaponAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.K25WeaponAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.LamentConfiguration.TriggerKillerPickUpSFX
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class ACamperPlayer*>                       affectedSurvivors                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ALamentConfiguration::TriggerKillerPickUpSFX(TArray<class ACamperPlayer*> affectedSurvivors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.TriggerKillerPickUpSFX");
		
		ALamentConfiguration_TriggerKillerPickUpSFX_Params params {};
		params.affectedSurvivors = affectedSurvivors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE7800
	 * 		Name   -> Function TheK25.LamentConfiguration.OnRep_SurvivorHeldHostage
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               oldSurvivorHeldHostage                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALamentConfiguration::OnRep_SurvivorHeldHostage(class ACamperPlayer* oldSurvivorHeldHostage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.OnRep_SurvivorHeldHostage");
		
		ALamentConfiguration_OnRep_SurvivorHeldHostage_Params params {};
		params.oldSurvivorHeldHostage = oldSurvivorHeldHostage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE77C0
	 * 		Name   -> Function TheK25.LamentConfiguration.OnRep_LamentConfigurationState
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ALamentConfiguration::OnRep_LamentConfigurationState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.OnRep_LamentConfigurationState");
		
		ALamentConfiguration_OnRep_LamentConfigurationState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE75C0
	 * 		Name   -> Function TheK25.LamentConfiguration.OnCamperEscaped
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ALamentConfiguration::OnCamperEscaped(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.OnCamperEscaped");
		
		ALamentConfiguration_OnCamperEscaped_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE7520
	 * 		Name   -> Function TheK25.LamentConfiguration.Multicast_TriggerSolvedSFX
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void ALamentConfiguration::Multicast_TriggerSolvedSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.Multicast_TriggerSolvedSFX");
		
		ALamentConfiguration_Multicast_TriggerSolvedSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE7480
	 * 		Name   -> Function TheK25.LamentConfiguration.Multicast_TriggerKillerPickUpSFX
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		TArray<class ACamperPlayer*>                       affectedSurvivors                                          (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ALamentConfiguration::Multicast_TriggerKillerPickUpSFX(TArray<class ACamperPlayer*> affectedSurvivors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.Multicast_TriggerKillerPickUpSFX");
		
		ALamentConfiguration_Multicast_TriggerKillerPickUpSFX_Params params {};
		params.affectedSurvivors = affectedSurvivors;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C98A30
	 * 		Name   -> Function TheK25.LamentConfiguration.Multicast_DownedSurvivorHoldingLamentConfiguration
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALamentConfiguration::Multicast_DownedSurvivorHoldingLamentConfiguration(class ACamperPlayer* survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.Multicast_DownedSurvivorHoldingLamentConfiguration");
		
		ALamentConfiguration_Multicast_DownedSurvivorHoldingLamentConfiguration_Params params {};
		params.survivor = survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE6C50
	 * 		Name   -> Function TheK25.LamentConfiguration.Multicast_CorrectLamentConfigurationPosition
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     NewPosition                                                (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALamentConfiguration::Multicast_CorrectLamentConfigurationPosition(const struct FVector& NewPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.Multicast_CorrectLamentConfigurationPosition");
		
		ALamentConfiguration_Multicast_CorrectLamentConfigurationPosition_Params params {};
		params.NewPosition = NewPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE67E0
	 * 		Name   -> Function TheK25.LamentConfiguration.GetChainHuntProgressPercentage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float ALamentConfiguration::GetChainHuntProgressPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.GetChainHuntProgressPercentage");
		
		ALamentConfiguration_GetChainHuntProgressPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.LamentConfiguration.Cosmetic_TriggerSurvivorPickUpSFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ALamentConfiguration::Cosmetic_TriggerSurvivorPickUpSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.Cosmetic_TriggerSurvivorPickUpSFX");
		
		ALamentConfiguration_Cosmetic_TriggerSurvivorPickUpSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.LamentConfiguration.Cosmetic_TriggerSpawnedSFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ALamentConfiguration::Cosmetic_TriggerSpawnedSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.Cosmetic_TriggerSpawnedSFX");
		
		ALamentConfiguration_Cosmetic_TriggerSpawnedSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.LamentConfiguration.Cosmetic_TriggerSolvedSFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ALamentConfiguration::Cosmetic_TriggerSolvedSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.Cosmetic_TriggerSolvedSFX");
		
		ALamentConfiguration_Cosmetic_TriggerSolvedSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.LamentConfiguration.Cosmetic_TriggerRespawnDuringChainHuntSFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ALamentConfiguration::Cosmetic_TriggerRespawnDuringChainHuntSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.Cosmetic_TriggerRespawnDuringChainHuntSFX");
		
		ALamentConfiguration_Cosmetic_TriggerRespawnDuringChainHuntSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.LamentConfiguration.Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ALamentConfiguration::Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX");
		
		ALamentConfiguration_Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.LamentConfiguration.Cosmetic_TriggerDisappearsSFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ALamentConfiguration::Cosmetic_TriggerDisappearsSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.Cosmetic_TriggerDisappearsSFX");
		
		ALamentConfiguration_Cosmetic_TriggerDisappearsSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.LamentConfiguration.Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACamperPlayer*                               survivorDowned                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALamentConfiguration::Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration(class ASlasherPlayer* killer, class ACamperPlayer* survivorDowned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration");
		
		ALamentConfiguration_Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration_Params params {};
		params.killer = killer;
		params.survivorDowned = survivorDowned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.LamentConfiguration.Cosmetic_OnHoldingSurvivorHostageStart
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              hostageDuration                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALamentConfiguration::Cosmetic_OnHoldingSurvivorHostageStart(float hostageDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.Cosmetic_OnHoldingSurvivorHostageStart");
		
		ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageStart_Params params {};
		params.hostageDuration = hostageDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.LamentConfiguration.Cosmetic_OnHoldingSurvivorHostageEnd
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               hasEndedThroughKillerAttack                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALamentConfiguration::Cosmetic_OnHoldingSurvivorHostageEnd(bool hasEndedThroughKillerAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.Cosmetic_OnHoldingSurvivorHostageEnd");
		
		ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageEnd_Params params {};
		params.hasEndedThroughKillerAttack = hasEndedThroughKillerAttack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.LamentConfiguration.Cosmetic_OnChainHuntStartedEffects
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ALamentConfiguration::Cosmetic_OnChainHuntStartedEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.Cosmetic_OnChainHuntStartedEffects");
		
		ALamentConfiguration_Cosmetic_OnChainHuntStartedEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.LamentConfiguration.Cosmetic_OnChainHuntEndedEffects
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ALamentConfiguration::Cosmetic_OnChainHuntEndedEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.Cosmetic_OnChainHuntEndedEffects");
		
		ALamentConfiguration_Cosmetic_OnChainHuntEndedEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.LamentConfiguration.Cosmetic_OnChainHuntChargeStart
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              chargeTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALamentConfiguration::Cosmetic_OnChainHuntChargeStart(float chargeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.Cosmetic_OnChainHuntChargeStart");
		
		ALamentConfiguration_Cosmetic_OnChainHuntChargeStart_Params params {};
		params.chargeTime = chargeTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.LamentConfiguration.Cosmetic_OnChainHuntChargeEnd
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ALamentConfiguration::Cosmetic_OnChainHuntChargeEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.Cosmetic_OnChainHuntChargeEnd");
		
		ALamentConfiguration_Cosmetic_OnChainHuntChargeEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.LamentConfiguration.Cosmetic_EndSolvingCubeSFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               hasBeenSolved                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALamentConfiguration::Cosmetic_EndSolvingCubeSFX(bool hasBeenSolved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.Cosmetic_EndSolvingCubeSFX");
		
		ALamentConfiguration_Cosmetic_EndSolvingCubeSFX_Params params {};
		params.hasBeenSolved = hasBeenSolved;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK25.LamentConfiguration.Cosmetic_BeginSolvingCubeSFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ALamentConfiguration::Cosmetic_BeginSolvingCubeSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.Cosmetic_BeginSolvingCubeSFX");
		
		ALamentConfiguration_Cosmetic_BeginSolvingCubeSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE6680
	 * 		Name   -> Function TheK25.LamentConfiguration.Authority_RespawnLamentConfiguration
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               triggerChainHuntUponSpawning                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALamentConfiguration::Authority_RespawnLamentConfiguration(bool triggerChainHuntUponSpawning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.Authority_RespawnLamentConfiguration");
		
		ALamentConfiguration_Authority_RespawnLamentConfiguration_Params params {};
		params.triggerChainHuntUponSpawning = triggerChainHuntUponSpawning;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE6570
	 * 		Name   -> Function TheK25.LamentConfiguration.Authority_OnSurvivorHitByControlledProjectile
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ALamentConfiguration::Authority_OnSurvivorHitByControlledProjectile(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.Authority_OnSurvivorHitByControlledProjectile");
		
		ALamentConfiguration_Authority_OnSurvivorHitByControlledProjectile_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE62C0
	 * 		Name   -> Function TheK25.LamentConfiguration.Authority_OnIntroCompletedOrLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ALamentConfiguration::Authority_OnIntroCompletedOrLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.Authority_OnIntroCompletedOrLevelReadyToPlay");
		
		ALamentConfiguration_Authority_OnIntroCompletedOrLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE61B0
	 * 		Name   -> Function TheK25.LamentConfiguration.Authority_OnGameEnded
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ALamentConfiguration::Authority_OnGameEnded(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.Authority_OnGameEnded");
		
		ALamentConfiguration_Authority_OnGameEnded_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE60A0
	 * 		Name   -> Function TheK25.LamentConfiguration.Authority_OnEndGameOver
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ALamentConfiguration::Authority_OnEndGameOver(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfiguration.Authority_OnEndGameOver");
		
		ALamentConfiguration_Authority_OnEndGameOver_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ALamentConfiguration.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALamentConfiguration::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.LamentConfiguration");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULamentConfigurationAnalyticsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULamentConfigurationAnalyticsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.LamentConfigurationAnalyticsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE9420
	 * 		Name   -> Function TheK25.LamentConfigurationChainHuntComponent.OnRep_ChainHuntStateData
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ULamentConfigurationChainHuntComponent::OnRep_ChainHuntStateData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfigurationChainHuntComponent.OnRep_ChainHuntStateData");
		
		ULamentConfigurationChainHuntComponent_OnRep_ChainHuntStateData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE93D0
	 * 		Name   -> Function TheK25.LamentConfigurationChainHuntComponent.GetChainHuntProgressPercentage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float ULamentConfigurationChainHuntComponent::GetChainHuntProgressPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfigurationChainHuntComponent.GetChainHuntProgressPercentage");
		
		ULamentConfigurationChainHuntComponent_GetChainHuntProgressPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULamentConfigurationChainHuntComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULamentConfigurationChainHuntComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.LamentConfigurationChainHuntComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULamentConfigurationOutlineStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULamentConfigurationOutlineStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.LamentConfigurationOutlineStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE9400
	 * 		Name   -> Function TheK25.LamentConfigurationPlayerAnalyticsComponent.OnRep_AnalyticsCount
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ULamentConfigurationPlayerAnalyticsComponent::OnRep_AnalyticsCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.LamentConfigurationPlayerAnalyticsComponent.OnRep_AnalyticsCount");
		
		ULamentConfigurationPlayerAnalyticsComponent_OnRep_AnalyticsCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULamentConfigurationPlayerAnalyticsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULamentConfigurationPlayerAnalyticsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.LamentConfigurationPlayerAnalyticsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULamentConfigurationSpawnStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULamentConfigurationSpawnStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.LamentConfigurationSpawnStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOwningPlayerInLamentConfigurationRange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOwningPlayerInLamentConfigurationRange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.OwningPlayerInLamentConfigurationRange");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE9480
	 * 		Name   -> Function TheK25.S28P01.OnRep_S28P01ChargeableComponent
	 * 		Flags  -> (Final, Native, Private)
	 */
	void US28P01::OnRep_S28P01ChargeableComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.S28P01.OnRep_S28P01ChargeableComponent");
		
		US28P01_OnRep_S28P01ChargeableComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE9460
	 * 		Name   -> Function TheK25.S28P01.OnRep_IsPerkActive
	 * 		Flags  -> (Final, Native, Private)
	 */
	void US28P01::OnRep_IsPerkActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.S28P01.OnRep_IsPerkActive");
		
		US28P01_OnRep_IsPerkActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE9440
	 * 		Name   -> Function TheK25.S28P01.OnRep_IsInteractionOngoing
	 * 		Flags  -> (Final, Native, Private)
	 */
	void US28P01::OnRep_IsInteractionOngoing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK25.S28P01.OnRep_IsInteractionOngoing");
		
		US28P01_OnRep_IsInteractionOngoing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction US28P01.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US28P01::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.S28P01");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction US28P01AuraReveal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US28P01AuraReveal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.S28P01AuraReveal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction US28P02.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US28P02::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.S28P02");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction US28P03.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US28P03::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK25.S28P03");
		return ptr;
	}

}



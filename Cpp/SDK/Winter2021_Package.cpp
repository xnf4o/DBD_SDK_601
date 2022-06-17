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
	 * 		RVA    -> 0x04D12F70
	 * 		Name   -> Function Winter2021.HideInSnowmanInteraction.Multicast_StopControllingSnowman
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHideInSnowmanInteraction::Multicast_StopControllingSnowman(class ACamperPlayer* survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.HideInSnowmanInteraction.Multicast_StopControllingSnowman");
		
		UHideInSnowmanInteraction_Multicast_StopControllingSnowman_Params params {};
		params.survivor = survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D133E0
	 * 		Name   -> Function Winter2021.HideInSnowmanInteraction.Multicast_StartControllingSnowman
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHideInSnowmanInteraction::Multicast_StartControllingSnowman(class ACamperPlayer* survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.HideInSnowmanInteraction.Multicast_StartControllingSnowman");
		
		UHideInSnowmanInteraction_Multicast_StartControllingSnowman_Params params {};
		params.survivor = survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C4A4A0
	 * 		Name   -> Function Winter2021.HideInSnowmanInteraction.Multicast_OnAbleToRunAndExitSnowmanStart
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void UHideInSnowmanInteraction::Multicast_OnAbleToRunAndExitSnowmanStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.HideInSnowmanInteraction.Multicast_OnAbleToRunAndExitSnowmanStart");
		
		UHideInSnowmanInteraction_Multicast_OnAbleToRunAndExitSnowmanStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHideInSnowmanInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHideInSnowmanInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Winter2021.HideInSnowmanInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E17BD0
	 * 		Name   -> Function Winter2021.Snowman.OnRep_SurvivorUsingSnowman
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ASnowman::OnRep_SurvivorUsingSnowman()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.OnRep_SurvivorUsingSnowman");
		
		ASnowman_OnRep_SurvivorUsingSnowman_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E17BB0
	 * 		Name   -> Function Winter2021.Snowman.OnRep_SnowmanState
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ASnowman::OnRep_SnowmanState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.OnRep_SnowmanState");
		
		ASnowman_OnRep_SnowmanState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E17B90
	 * 		Name   -> Function Winter2021.Snowman.OnRep_SnowmanDestructionType
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ASnowman::OnRep_SnowmanDestructionType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.OnRep_SnowmanDestructionType");
		
		ASnowman_OnRep_SnowmanDestructionType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E17B70
	 * 		Name   -> Function Winter2021.Snowman.OnRep_IsMoving
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ASnowman::OnRep_IsMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.OnRep_IsMoving");
		
		ASnowman_OnRep_IsMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E17A50
	 * 		Name   -> Function Winter2021.Snowman.Multicast_StartSnowmanDestruction
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		ESnowmanDestructionType                            snowmanDestructionType                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               unlockRequirementsSatisfiedForSurvivor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               unlockRequirementsSatisfiedForKiller                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Multicast_StartSnowmanDestruction(ESnowmanDestructionType snowmanDestructionType, bool unlockRequirementsSatisfiedForSurvivor, bool unlockRequirementsSatisfiedForKiller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Multicast_StartSnowmanDestruction");
		
		ASnowman_Multicast_StartSnowmanDestruction_Params params {};
		params.snowmanDestructionType = snowmanDestructionType;
		params.unlockRequirementsSatisfiedForSurvivor = unlockRequirementsSatisfiedForSurvivor;
		params.unlockRequirementsSatisfiedForKiller = unlockRequirementsSatisfiedForKiller;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E179B0
	 * 		Name   -> Function Winter2021.Snowman.Multicast_SpawnSnowman
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		struct FSnowmanSpawnData                           spawnData                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Multicast_SpawnSnowman(const struct FSnowmanSpawnData& spawnData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Multicast_SpawnSnowman");
		
		ASnowman_Multicast_SpawnSnowman_Params params {};
		params.spawnData = spawnData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E17920
	 * 		Name   -> Function Winter2021.Snowman.Multicast_SetSnowmanMaterialVariant
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		int32_t                                            materialVariantIndex                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Multicast_SetSnowmanMaterialVariant(int32_t materialVariantIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Multicast_SetSnowmanMaterialVariant");
		
		ASnowman_Multicast_SetSnowmanMaterialVariant_Params params {};
		params.materialVariantIndex = materialVariantIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E17890
	 * 		Name   -> Function Winter2021.Snowman.Multicast_SetSnowmanHiddenInGame
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		bool                                               IsHidden                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Multicast_SetSnowmanHiddenInGame(bool IsHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Multicast_SetSnowmanHiddenInGame");
		
		ASnowman_Multicast_SetSnowmanHiddenInGame_Params params {};
		params.IsHidden = IsHidden;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x049D9620
	 * 		Name   -> Function Winter2021.Snowman.Multicast_OnSnowmanStartBeingUsedBySurvivor
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivorUsingSnowman                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Multicast_OnSnowmanStartBeingUsedBySurvivor(class ACamperPlayer* survivorUsingSnowman)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Multicast_OnSnowmanStartBeingUsedBySurvivor");
		
		ASnowman_Multicast_OnSnowmanStartBeingUsedBySurvivor_Params params {};
		params.survivorUsingSnowman = survivorUsingSnowman;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04A024C0
	 * 		Name   -> Function Winter2021.Snowman.Multicast_OnSnowmanStartBeingControlledBySurvivor
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivorUsingSnowman                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Multicast_OnSnowmanStartBeingControlledBySurvivor(class ACamperPlayer* survivorUsingSnowman)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Multicast_OnSnowmanStartBeingControlledBySurvivor");
		
		ASnowman_Multicast_OnSnowmanStartBeingControlledBySurvivor_Params params {};
		params.survivorUsingSnowman = survivorUsingSnowman;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E177B0
	 * 		Name   -> Function Winter2021.Snowman.Multicast_DrawDebugCollisionCheck
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults, Const)
	 * Parameters:
	 * 		struct FVector                                     BoxExtent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              debugLifetime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Multicast_DrawDebugCollisionCheck(const struct FVector& BoxExtent, float debugLifetime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Multicast_DrawDebugCollisionCheck");
		
		ASnowman_Multicast_DrawDebugCollisionCheck_Params params {};
		params.BoxExtent = BoxExtent;
		params.debugLifetime = debugLifetime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function Winter2021.Snowman.Cosmetic_SetSnowmanMaterialVariant
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            materialVariantIndex                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Cosmetic_SetSnowmanMaterialVariant(int32_t materialVariantIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Cosmetic_SetSnowmanMaterialVariant");
		
		ASnowman_Cosmetic_SetSnowmanMaterialVariant_Params params {};
		params.materialVariantIndex = materialVariantIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function Winter2021.Snowman.Cosmetic_OnSnowmanStartBeingUsedBySurvivor
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivorUsingSnowman                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Cosmetic_OnSnowmanStartBeingUsedBySurvivor(class ACamperPlayer* survivorUsingSnowman)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Cosmetic_OnSnowmanStartBeingUsedBySurvivor");
		
		ASnowman_Cosmetic_OnSnowmanStartBeingUsedBySurvivor_Params params {};
		params.survivorUsingSnowman = survivorUsingSnowman;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function Winter2021.Snowman.Cosmetic_OnSnowmanStartBeingControlledBySurvivor
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivorUsingSnowman                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Cosmetic_OnSnowmanStartBeingControlledBySurvivor(class ACamperPlayer* survivorUsingSnowman)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Cosmetic_OnSnowmanStartBeingControlledBySurvivor");
		
		ASnowman_Cosmetic_OnSnowmanStartBeingControlledBySurvivor_Params params {};
		params.survivorUsingSnowman = survivorUsingSnowman;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function Winter2021.Snowman.Cosmetic_OnSnowmanSpawned
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ASnowman::Cosmetic_OnSnowmanSpawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Cosmetic_OnSnowmanSpawned");
		
		ASnowman_Cosmetic_OnSnowmanSpawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function Winter2021.Snowman.Cosmetic_OnSnowmanDestroyedBySurvivorRunExit
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivorUsingSnowman                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Cosmetic_OnSnowmanDestroyedBySurvivorRunExit(class ACamperPlayer* survivorUsingSnowman)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Cosmetic_OnSnowmanDestroyedBySurvivorRunExit");
		
		ASnowman_Cosmetic_OnSnowmanDestroyedBySurvivorRunExit_Params params {};
		params.survivorUsingSnowman = survivorUsingSnowman;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function Winter2021.Snowman.Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killerAttackingSnowman                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty(class ASlasherPlayer* killerAttackingSnowman)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty");
		
		ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty_Params params {};
		params.killerAttackingSnowman = killerAttackingSnowman;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function Winter2021.Snowman.Cosmetic_OnSnowmanDestroyedByAttackWhileControlled
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivorUsingSnowman                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ASlasherPlayer*                              killerAttackingSnowman                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Cosmetic_OnSnowmanDestroyedByAttackWhileControlled(class ACamperPlayer* survivorUsingSnowman, class ASlasherPlayer* killerAttackingSnowman)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Cosmetic_OnSnowmanDestroyedByAttackWhileControlled");
		
		ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileControlled_Params params {};
		params.survivorUsingSnowman = survivorUsingSnowman;
		params.killerAttackingSnowman = killerAttackingSnowman;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function Winter2021.Snowman.Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivorUsingSnowman                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor(class ACamperPlayer* survivorUsingSnowman)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor");
		
		ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor_Params params {};
		params.survivorUsingSnowman = survivorUsingSnowman;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function Winter2021.Snowman.Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killerAttackingSnowman                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller(class ASlasherPlayer* killerAttackingSnowman)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller");
		
		ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller_Params params {};
		params.killerAttackingSnowman = killerAttackingSnowman;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ASnowman.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASnowman::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Winter2021.Snowman");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function Winter2021.SnowmanAnimInstance.Cosmetic_OnSnowmanDestroyedEvent
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESnowmanDestructionType                            snowmanDestructionType                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USnowmanAnimInstance::Cosmetic_OnSnowmanDestroyedEvent(ESnowmanDestructionType snowmanDestructionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.SnowmanAnimInstance.Cosmetic_OnSnowmanDestroyedEvent");
		
		USnowmanAnimInstance_Cosmetic_OnSnowmanDestroyedEvent_Params params {};
		params.snowmanDestructionType = snowmanDestructionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USnowmanAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USnowmanAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Winter2021.SnowmanAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E18120
	 * 		Name   -> Function Winter2021.SnowmanSpawnPlacementStrategy.Authority_OnIntroCompletedOrLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USnowmanSpawnPlacementStrategy::Authority_OnIntroCompletedOrLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.SnowmanSpawnPlacementStrategy.Authority_OnIntroCompletedOrLevelReadyToPlay");
		
		USnowmanSpawnPlacementStrategy_Authority_OnIntroCompletedOrLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USnowmanSpawnPlacementStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USnowmanSpawnPlacementStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Winter2021.SnowmanSpawnPlacementStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E18430
	 * 		Name   -> Function Winter2021.Winter2021EventComponent.DBD_Winter2021VisualizeCalculatedSpawnData
	 * 		Flags  -> (Final, Exec, Native, Private)
	 * Parameters:
	 * 		float                                              numberOfSeconds                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWinter2021EventComponent::DBD_Winter2021VisualizeCalculatedSpawnData(float numberOfSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.Winter2021EventComponent.DBD_Winter2021VisualizeCalculatedSpawnData");
		
		UWinter2021EventComponent_DBD_Winter2021VisualizeCalculatedSpawnData_Params params {};
		params.numberOfSeconds = numberOfSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E183B0
	 * 		Name   -> Function Winter2021.Winter2021EventComponent.DBD_Winter2021ShowSnowmenSpawnCollisionChecks
	 * 		Flags  -> (Final, Exec, Native, Private)
	 * Parameters:
	 * 		float                                              numberOfSeconds                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWinter2021EventComponent::DBD_Winter2021ShowSnowmenSpawnCollisionChecks(float numberOfSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.Winter2021EventComponent.DBD_Winter2021ShowSnowmenSpawnCollisionChecks");
		
		UWinter2021EventComponent_DBD_Winter2021ShowSnowmenSpawnCollisionChecks_Params params {};
		params.numberOfSeconds = numberOfSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E18390
	 * 		Name   -> Function Winter2021.Winter2021EventComponent.DBD_Winter2021RecalculateSpawnPoints
	 * 		Flags  -> (Final, Exec, Native, Private)
	 */
	void UWinter2021EventComponent::DBD_Winter2021RecalculateSpawnPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.Winter2021EventComponent.DBD_Winter2021RecalculateSpawnPoints");
		
		UWinter2021EventComponent_DBD_Winter2021RecalculateSpawnPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E18370
	 * 		Name   -> Function Winter2021.Winter2021EventComponent.DBD_Winter2021ForceRespawnAllSnowmen
	 * 		Flags  -> (Final, Exec, Native, Private)
	 */
	void UWinter2021EventComponent::DBD_Winter2021ForceRespawnAllSnowmen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.Winter2021EventComponent.DBD_Winter2021ForceRespawnAllSnowmen");
		
		UWinter2021EventComponent_DBD_Winter2021ForceRespawnAllSnowmen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWinter2021EventComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWinter2021EventComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Winter2021.Winter2021EventComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x049F8270
	 * 		Name   -> Function Winter2021.Winter2021PlayerComponent.Client_UnlockCosmetic
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
	 */
	void UWinter2021PlayerComponent::Client_UnlockCosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winter2021.Winter2021PlayerComponent.Client_UnlockCosmetic");
		
		UWinter2021PlayerComponent_Client_UnlockCosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWinter2021PlayerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWinter2021PlayerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Winter2021.Winter2021PlayerComponent");
		return ptr;
	}

}



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
	 * 		Name   -> PredefindFunction UActivateSuperMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivateSuperMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.ActivateSuperMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK23.FastTrack.Cosmetic_OnTokenCountDecreased
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UFastTrack::Cosmetic_OnTokenCountDecreased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.FastTrack.Cosmetic_OnTokenCountDecreased");
		
		UFastTrack_Cosmetic_OnTokenCountDecreased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFastTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFastTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.FastTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C60BD0
	 * 		Name   -> Function TheK23.FlurryComboScoreComponent.OnRep_ComboScore
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	void UFlurryComboScoreComponent::OnRep_ComboScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.FlurryComboScoreComponent.OnRep_ComboScore");
		
		UFlurryComboScoreComponent_OnRep_ComboScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFlurryComboScoreComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlurryComboScoreComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.FlurryComboScoreComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C610D0
	 * 		Name   -> Function TheK23.FlurryOfKnives.Server_StartThrowing
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 */
	void UFlurryOfKnives::Server_StartThrowing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.FlurryOfKnives.Server_StartThrowing");
		
		UFlurryOfKnives_Server_StartThrowing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C61080
	 * 		Name   -> Function TheK23.FlurryOfKnives.Server_DecreaseConsecutiveKnivesStacks
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 */
	void UFlurryOfKnives::Server_DecreaseConsecutiveKnivesStacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.FlurryOfKnives.Server_DecreaseConsecutiveKnivesStacks");
		
		UFlurryOfKnives_Server_DecreaseConsecutiveKnivesStacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C61060
	 * 		Name   -> Function TheK23.FlurryOfKnives.OnRep_NumOfStacksReduction
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UFlurryOfKnives::OnRep_NumOfStacksReduction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.FlurryOfKnives.OnRep_NumOfStacksReduction");
		
		UFlurryOfKnives_OnRep_NumOfStacksReduction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BD88D0
	 * 		Name   -> Function TheK23.FlurryOfKnives.Multicast_StartThrowing
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void UFlurryOfKnives::Multicast_StartThrowing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.FlurryOfKnives.Multicast_StartThrowing");
		
		UFlurryOfKnives_Multicast_StartThrowing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFlurryOfKnives.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlurryOfKnives::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.FlurryOfKnives");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHexCrowdControl.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHexCrowdControl::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.HexCrowdControl");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK23PowerProgressPresentationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK23PowerProgressPresentationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.K23PowerProgressPresentationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C61C10
	 * 		Name   -> Function TheK23.KnifeProjectile.WasLaunchedDuringSuperMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AKnifeProjectile::WasLaunchedDuringSuperMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.WasLaunchedDuringSuperMode");
		
		AKnifeProjectile_WasLaunchedDuringSuperMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C61BE0
	 * 		Name   -> Function TheK23.KnifeProjectile.ShouldPlayRicochetSound
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AKnifeProjectile::ShouldPlayRicochetSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.ShouldPlayRicochetSound");
		
		AKnifeProjectile_ShouldPlayRicochetSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C61B50
	 * 		Name   -> Function TheK23.KnifeProjectile.SetKnifeAcquired
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               acquired                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AKnifeProjectile::SetKnifeAcquired(bool acquired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.SetKnifeAcquired");
		
		AKnifeProjectile_SetKnifeAcquired_Params params {};
		params.acquired = acquired;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C61970
	 * 		Name   -> Function TheK23.KnifeProjectile.OnWorldColliderHit
	 * 		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AKnifeProjectile::OnWorldColliderHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.OnWorldColliderHit");
		
		AKnifeProjectile_OnWorldColliderHit_Params params {};
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
	 * 		RVA    -> 0x04C61850
	 * 		Name   -> Function TheK23.KnifeProjectile.OnProjectileBounce
	 * 		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ImpactVelocity                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AKnifeProjectile::OnProjectileBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.OnProjectileBounce");
		
		AKnifeProjectile_OnProjectileBounce_Params params {};
		params.ImpactResult = ImpactResult;
		params.ImpactVelocity = ImpactVelocity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C61820
	 * 		Name   -> Function TheK23.KnifeProjectile.KnifeCanPierceCampers
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AKnifeProjectile::KnifeCanPierceCampers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.KnifeCanPierceCampers");
		
		AKnifeProjectile_KnifeCanPierceCampers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C617F0
	 * 		Name   -> Function TheK23.KnifeProjectile.GetAddonExplosionRadius
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float AKnifeProjectile::GetAddonExplosionRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.GetAddonExplosionRadius");
		
		AKnifeProjectile_GetAddonExplosionRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK23.KnifeProjectile.BP_SetKnifeActive
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AKnifeProjectile::BP_SetKnifeActive(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.BP_SetKnifeActive");
		
		AKnifeProjectile_BP_SetKnifeActive_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK23.KnifeProjectile.BP_OnLaunchCosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		struct FLaunchInfo                                 LaunchInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               hasImpactOnLaunch                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AKnifeProjectile::BP_OnLaunchCosmetic(const struct FLaunchInfo& LaunchInfo, bool hasImpactOnLaunch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.BP_OnLaunchCosmetic");
		
		AKnifeProjectile_BP_OnLaunchCosmetic_Params params {};
		params.LaunchInfo = LaunchInfo;
		params.hasImpactOnLaunch = hasImpactOnLaunch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK23.KnifeProjectile.BP_CosmeticOnAddonExplosion
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Normal                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AKnifeProjectile::BP_CosmeticOnAddonExplosion(const struct FVector& Location, const struct FVector& Normal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.BP_CosmeticOnAddonExplosion");
		
		AKnifeProjectile_BP_CosmeticOnAddonExplosion_Params params {};
		params.Location = Location;
		params.Normal = Normal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AKnifeProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AKnifeProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.KnifeProjectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK23.KnifeRack.OnReloadMontageStarted
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              actionSpeedMultiplier                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AKnifeRack::OnReloadMontageStarted(float actionSpeedMultiplier, class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.KnifeRack.OnReloadMontageStarted");
		
		AKnifeRack_OnReloadMontageStarted_Params params {};
		params.actionSpeedMultiplier = actionSpeedMultiplier;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK23.KnifeRack.OnReloadEnded
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AKnifeRack::OnReloadEnded(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.KnifeRack.OnReloadEnded");
		
		AKnifeRack_OnReloadEnded_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AKnifeRack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AKnifeRack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.KnifeRack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C62290
	 * 		Name   -> Function TheK23.KnivesLauncher.GetPower
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AThrowingKnives* UKnivesLauncher::GetPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.KnivesLauncher.GetPower");
		
		UKnivesLauncher_GetPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C62260
	 * 		Name   -> Function TheK23.KnivesLauncher.GetLocallyPredictedAmmo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UKnivesLauncher::GetLocallyPredictedAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.KnivesLauncher.GetLocallyPredictedAmmo");
		
		UKnivesLauncher_GetLocallyPredictedAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UKnivesLauncher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnivesLauncher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.KnivesLauncher");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UKnivesProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnivesProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.KnivesProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C62B70
	 * 		Name   -> Function TheK23.LacerationComponent.OnRepLaceration
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		float                                              oldLaceration                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULacerationComponent::OnRepLaceration(float oldLaceration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.LacerationComponent.OnRepLaceration");
		
		ULacerationComponent_OnRepLaceration_Params params {};
		params.oldLaceration = oldLaceration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C629A0
	 * 		Name   -> Function TheK23.LacerationComponent.Multicast_KnifeHit
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
	 * Parameters:
	 * 		float                                              newLaceration                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               causedDamage                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               CausedKO                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     impactLocation                                             (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ImpactNormal                                               (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULacerationComponent::Multicast_KnifeHit(float newLaceration, bool causedDamage, bool CausedKO, const struct FVector& impactLocation, const struct FVector& ImpactNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.LacerationComponent.Multicast_KnifeHit");
		
		ULacerationComponent_Multicast_KnifeHit_Params params {};
		params.newLaceration = newLaceration;
		params.causedDamage = causedDamage;
		params.CausedKO = CausedKO;
		params.impactLocation = impactLocation;
		params.ImpactNormal = ImpactNormal;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK23.LacerationComponent.Cosmetic_OnLocallyObservedChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsLocallyObserved                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              lacerationPercent                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isDangerous                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULacerationComponent::Cosmetic_OnLocallyObservedChanged(bool IsLocallyObserved, float lacerationPercent, bool isDangerous)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.LacerationComponent.Cosmetic_OnLocallyObservedChanged");
		
		ULacerationComponent_Cosmetic_OnLocallyObservedChanged_Params params {};
		params.IsLocallyObserved = IsLocallyObserved;
		params.lacerationPercent = lacerationPercent;
		params.isDangerous = isDangerous;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK23.LacerationComponent.Cosmetic_OnLacerationChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              lacerationPercent                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isDangerous                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULacerationComponent::Cosmetic_OnLacerationChanged(float lacerationPercent, bool isDangerous)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.LacerationComponent.Cosmetic_OnLacerationChanged");
		
		ULacerationComponent_Cosmetic_OnLacerationChanged_Params params {};
		params.lacerationPercent = lacerationPercent;
		params.isDangerous = isDangerous;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK23.LacerationComponent.Cosmetic_OnKnifeHit
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		float                                              lacerationPercent                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isDangerous                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               causedDamage                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               CausedKO                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ImpactNormal                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULacerationComponent::Cosmetic_OnKnifeHit(float lacerationPercent, bool isDangerous, bool causedDamage, bool CausedKO, const struct FVector& ImpactNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.LacerationComponent.Cosmetic_OnKnifeHit");
		
		ULacerationComponent_Cosmetic_OnKnifeHit_Params params {};
		params.lacerationPercent = lacerationPercent;
		params.isDangerous = isDangerous;
		params.causedDamage = causedDamage;
		params.CausedKO = CausedKO;
		params.ImpactNormal = ImpactNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULacerationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULacerationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.LacerationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseLacerationLevelCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseLacerationLevelCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.BaseLacerationLevelCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULacerationLevelCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULacerationLevelCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.LacerationLevelCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULacerationAlmostFullCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULacerationAlmostFullCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.LacerationAlmostFullCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A3B50
	 * 		Name   -> Function TheK23.NoWayOut.Multicast_TriggerLoudNoise
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AEscapeDoor*                                 EscapeDoor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNoWayOut::Multicast_TriggerLoudNoise(class ADBDPlayer* Instigator, class AEscapeDoor* EscapeDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.NoWayOut.Multicast_TriggerLoudNoise");
		
		UNoWayOut_Multicast_TriggerLoudNoise_Params params {};
		params.Instigator = Instigator;
		params.EscapeDoor = EscapeDoor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNoWayOut.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNoWayOut::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.NoWayOut");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UReloadKnives.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReloadKnives::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.ReloadKnives");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USelfPreservation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelfPreservation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.SelfPreservation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USmashHit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmashHit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.SmashHit");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UStarstruck.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStarstruck::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.Starstruck");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USuperModeDeactivation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USuperModeDeactivation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.SuperModeDeactivation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C63E30
	 * 		Name   -> Function TheK23.ThrowingKnives.OnItemUsedStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               Pressed                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AThrowingKnives::OnItemUsedStateChanged(bool Pressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.OnItemUsedStateChanged");
		
		AThrowingKnives_OnItemUsedStateChanged_Params params {};
		params.Pressed = Pressed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C63E10
	 * 		Name   -> Function TheK23.ThrowingKnives.Multicast_OnUsePowerWhenOutOfAmmo
	 * 		Flags  -> (Net, Native, Event, NetMulticast, Public)
	 */
	void AThrowingKnives::Multicast_OnUsePowerWhenOutOfAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.Multicast_OnUsePowerWhenOutOfAmmo");
		
		AThrowingKnives_Multicast_OnUsePowerWhenOutOfAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C4A4A0
	 * 		Name   -> Function TheK23.ThrowingKnives.Multicast_OnUsePowerWhenInCooldown
	 * 		Flags  -> (Net, Native, Event, NetMulticast, Public)
	 */
	void AThrowingKnives::Multicast_OnUsePowerWhenInCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.Multicast_OnUsePowerWhenInCooldown");
		
		AThrowingKnives_Multicast_OnUsePowerWhenInCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C63DE0
	 * 		Name   -> Function TheK23.ThrowingKnives.GetSlasher
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ASlasherPlayer* AThrowingKnives::GetSlasher()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.GetSlasher");
		
		AThrowingKnives_GetSlasher_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C63DB0
	 * 		Name   -> Function TheK23.ThrowingKnives.GetLauncher
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UKnivesLauncher* AThrowingKnives::GetLauncher()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.GetLauncher");
		
		AThrowingKnives_GetLauncher_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK23.ThrowingKnives.Cosmetic_OnUsePowerWhenOutOfAmmo
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AThrowingKnives::Cosmetic_OnUsePowerWhenOutOfAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.Cosmetic_OnUsePowerWhenOutOfAmmo");
		
		AThrowingKnives_Cosmetic_OnUsePowerWhenOutOfAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK23.ThrowingKnives.Cosmetic_OnUsePowerWhenInCooldown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AThrowingKnives::Cosmetic_OnUsePowerWhenInCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.Cosmetic_OnUsePowerWhenInCooldown");
		
		AThrowingKnives_Cosmetic_OnUsePowerWhenInCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK23.ThrowingKnives.Cosmetic_OnLaunch
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AThrowingKnives::Cosmetic_OnLaunch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.Cosmetic_OnLaunch");
		
		AThrowingKnives_Cosmetic_OnLaunch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK23.ThrowingKnives.Cosmetic_OnComboScoreChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              scoreNormalizedForAudio                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AThrowingKnives::Cosmetic_OnComboScoreChanged(float scoreNormalizedForAudio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.Cosmetic_OnComboScoreChanged");
		
		AThrowingKnives_Cosmetic_OnComboScoreChanged_Params params {};
		params.scoreNormalizedForAudio = scoreNormalizedForAudio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK23.ThrowingKnives.Cosmetic_OnComboFinished
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isSRankCombo                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AThrowingKnives::Cosmetic_OnComboFinished(bool isSRankCombo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.Cosmetic_OnComboFinished");
		
		AThrowingKnives_Cosmetic_OnComboFinished_Params params {};
		params.isSRankCombo = isSRankCombo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C63D90
	 * 		Name   -> Function TheK23.ThrowingKnives.Authority_SpawnReloadInteractionOnLockers
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AThrowingKnives::Authority_SpawnReloadInteractionOnLockers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.Authority_SpawnReloadInteractionOnLockers");
		
		AThrowingKnives_Authority_SpawnReloadInteractionOnLockers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AThrowingKnives.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AThrowingKnives::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.ThrowingKnives");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UThrowingKnivesHitSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThrowingKnivesHitSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.ThrowingKnivesHitSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTricksterAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTricksterAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.TricksterAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTricksterChainedThrowsAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTricksterChainedThrowsAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.TricksterChainedThrowsAddon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK23.TricksterCharacterVFXInterface.ShowWeapon
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTricksterCharacterVFXInterface::ShowWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.TricksterCharacterVFXInterface.ShowWeapon");
		
		UTricksterCharacterVFXInterface_ShowWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK23.TricksterCharacterVFXInterface.SetSuperModeActive
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTricksterCharacterVFXInterface::SetSuperModeActive(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.TricksterCharacterVFXInterface.SetSuperModeActive");
		
		UTricksterCharacterVFXInterface_SetSuperModeActive_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK23.TricksterCharacterVFXInterface.SetKnivesVisibility
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               leftKnife                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               rightKnife                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTricksterCharacterVFXInterface::SetKnivesVisibility(bool leftKnife, bool rightKnife)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.TricksterCharacterVFXInterface.SetKnivesVisibility");
		
		UTricksterCharacterVFXInterface_SetKnivesVisibility_Params params {};
		params.leftKnife = leftKnife;
		params.rightKnife = rightKnife;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK23.TricksterCharacterVFXInterface.SetIsSuperModeReady
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isSuperModeReady                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTricksterCharacterVFXInterface::SetIsSuperModeReady(bool isSuperModeReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.TricksterCharacterVFXInterface.SetIsSuperModeReady");
		
		UTricksterCharacterVFXInterface_SetIsSuperModeReady_Params params {};
		params.isSuperModeReady = isSuperModeReady;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK23.TricksterCharacterVFXInterface.SetIsInCooldown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isInCooldown                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTricksterCharacterVFXInterface::SetIsInCooldown(bool isInCooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.TricksterCharacterVFXInterface.SetIsInCooldown");
		
		UTricksterCharacterVFXInterface_SetIsInCooldown_Params params {};
		params.isInCooldown = isInCooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK23.TricksterCharacterVFXInterface.HideWeapon
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTricksterCharacterVFXInterface::HideWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.TricksterCharacterVFXInterface.HideWeapon");
		
		UTricksterCharacterVFXInterface_HideWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTricksterCharacterVFXInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTricksterCharacterVFXInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.TricksterCharacterVFXInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C64BA0
	 * 		Name   -> Function TheK23.TricksterSuperModeComponent.OnRepIsSuperModeReady
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UTricksterSuperModeComponent::OnRepIsSuperModeReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.TricksterSuperModeComponent.OnRepIsSuperModeReady");
		
		UTricksterSuperModeComponent_OnRepIsSuperModeReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C64B80
	 * 		Name   -> Function TheK23.TricksterSuperModeComponent.OnRepIsInSuperMode
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UTricksterSuperModeComponent::OnRepIsInSuperMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.TricksterSuperModeComponent.OnRepIsInSuperMode");
		
		UTricksterSuperModeComponent_OnRepIsInSuperMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C64B60
	 * 		Name   -> Function TheK23.TricksterSuperModeComponent.OnRepIsInCooldown
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UTricksterSuperModeComponent::OnRepIsInCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK23.TricksterSuperModeComponent.OnRepIsInCooldown");
		
		UTricksterSuperModeComponent_OnRepIsInCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTricksterSuperModeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTricksterSuperModeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.TricksterSuperModeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTriggerTimerOnLacerationAlmostFullEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTriggerTimerOnLacerationAlmostFullEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK23.TriggerTimerOnLacerationAlmostFullEffect");
		return ptr;
	}

}



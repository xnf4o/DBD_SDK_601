#pragma once

/**
 * Name: DBD
 * Version: 601
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class Projectile.BaseProjectile
	 * Size -> 0x0080 (FullSize[0x02B0] - InheritedSize[0x0230])
	 */
	class ABaseProjectile : public AActor
	{
	public:
		float                                                      OnImpactAINoiseEventRange;                               // 0x0230(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2M1Q[0x44];                                  // 0x0234(0x0044) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _multicastLaunch;                                        // 0x0278(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _allowMultipleHits;                                      // 0x0279(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XPKR[0x6];                                   // 0x027A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               _semanticGameplayTags;                                   // 0x0280(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		bool                                                       _notifyClientOfServerHitValidationResult;                // 0x02A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6GXF[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseProjectileReplicationComponent*                 _replicationComponent;                                   // 0x02A8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool SphereTraceSingle(const struct FVector& Start, const struct FVector& End, class USphereComponent* Sphere, struct FHitResult* outHitResult);
		void OnSetActive(bool Active);
		void OnLaunch(const struct FLaunchInfo& LaunchInfo, bool hasImpactOnLaunch);
		void OnDetectPlayer(const struct FImpactInfo& ImpactInfo);
		void OnDetectCollision(const struct FImpactInfo& ImpactInfo);
		bool Local_TryDetectCollision(const struct FImpactInfo& ImpactInfo, bool force);
		bool Local_SweepImpactCollision(const struct FVector& Start, const struct FVector& End, const struct FRotator& colliderRotation, struct FHitResult* OutHit);
		bool Local_OnPlayerDetected(const struct FImpactInfo& ImpactInfo, const struct FVector& projectileLocation);
		bool IsValidPlayerDetection(const struct FImpactInfo& ImpactInfo);
		bool IsValidImpactDetection(const struct FImpactInfo& ImpactInfo);
		bool IsOwningPawnLocallyControlled();
		class UBaseProjectileLauncher* GetLauncher();
		class UPrimitiveComponent* GetImpactPrimitiveComponent();
		float GetAddLauncherVeloctyFactor();
		bool Authority_TryDetectCollision(const struct FImpactInfo& ImpactInfo, bool force);
		static UClass* StaticClass();
	};

	/**
	 * Class Projectile.PhysicsBasedProjectile
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class APhysicsBasedProjectile : public ABaseProjectile
	{
	public:
		class UPhysicsBasedProjectileMovementComponent*            Movement;                                                // 0x02B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Projectile.BaseProjectileLauncher
	 * Size -> 0x00C8 (FullSize[0x0180] - InheritedSize[0x00B8])
	 */
	class UBaseProjectileLauncher : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_A6Q7[0x30];                                  // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _requireLaunchImpactDetection;                           // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasInfiniteAmmunition;                                  // 0x00E9(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2QRO[0x6];                                   // 0x00EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ProjectileClass;                                         // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _ammo;                                                   // 0x00F8(0x0004) Edit, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _maxAmmo;                                                // 0x00FC(0x0004) Edit, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _canLaunchWhileOutOfAmmo;                                // 0x0100(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LBM0[0x2F];                                  // 0x0101(0x002F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABaseProjectile*                                     _debugProjectile;                                        // 0x0130(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YKDZ[0x40];                                  // 0x0138(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseProjectileReplicationComponent*                 _projectileReplicationComponent;                         // 0x0178(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetProjectileVar(const class FName& VarName, float value);
		void SetProjectileProvider();
		void Server_LaunchWithImpact(const struct FLaunchInfo& LaunchInfo, const struct FImpactInfo& ImpactInfo, class ABaseProjectile* Projectile);
		void Server_Launch(const struct FLaunchInfo& LaunchInfo, class ABaseProjectile* Projectile);
		void OnRep_MaxAmmo(int32_t oldMaxAmmo);
		void OnRep_Ammo(int32_t oldAmmo);
		void OnLaunch(const struct FLaunchInfo& LaunchInfo, class ABaseProjectile* Projectile);
		void Local_Launch();
		bool IsLocallyControlled();
		bool IsAmmoFull();
		bool HasProjectile();
		bool HasAuthority();
		class ABaseProjectile* GetProjectileToLaunch();
		class APawn* GetOwningPawn();
		float GetLaunchSpeedAtThrowPowerRatio(float throwPowerRatio);
		float GetLaunchSpeed();
		struct FVector GetLaunchPosition();
		struct FVector GetLaunchDirectionAtViewAndThrowPowerRatio(const struct FRotator& ViewRotation, float throwPowerRatio);
		struct FVector GetLaunchDirection();
		int32_t GetAmmo();
		void Cosmetic_OnOutOfAmmo();
		void Authority_SetMaxAmmo(int32_t newMaxAmmo, bool isMaxAmmoImmutable);
		void Authority_ReturnAmmoUnits(int32_t amountOfAmmoUnitsReturned);
		void Authority_Reload();
		void Authority_Launch();
		void Authority_AddMaxAmmo(int32_t ammoToAdd);
		static UClass* StaticClass();
	};

	/**
	 * Class Projectile.DBDProjectileMovementComponent
	 * Size -> 0x0080 (FullSize[0x0260] - InheritedSize[0x01E0])
	 */
	class UDBDProjectileMovementComponent : public UProjectileMovementComponent
	{
	public:
		unsigned char                                              UnknownData_KCY3[0x18];                                  // 0x01E0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnComponentToSweepCollisionBP;                           // 0x01F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JDH7[0x18];                                  // 0x0208(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FComponentSweepInfo>                         _componentsToSweep;                                      // 0x0220(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		struct FVector                                             _previousPosition;                                       // 0x0230(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6GDM[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     _cachedUpdatedComponent;                                 // 0x0240(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             _initialLocation;                                        // 0x0248(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _distanceTravelled;                                      // 0x0254(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _hasMaximumDistance;                                     // 0x0258(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_10CW[0x3];                                   // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _maximumTravelDistance;                                  // 0x025C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnComponentToSweepCollisionBP__DelegateSignature(class UPrimitiveComponent* PrimitiveComponent, const struct FHitResult& HitResult);
		struct FVector GetPreviousLocation();
		void AddComponentToSweep(class UPrimitiveComponent* Component);
		static UClass* StaticClass();
	};

	/**
	 * Class Projectile.PhysicsBasedProjectileMovementComponent
	 * Size -> 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
	 */
	class UPhysicsBasedProjectileMovementComponent : public UDBDProjectileMovementComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Projectile.SingleProjectileProviderComponent
	 * Size -> 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
	 */
	class USingleProjectileProviderComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_510T[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _projectileClass;                                        // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ABaseProjectile*                                     _projectile;                                             // 0x00C8(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E67T[0x18];                                  // 0x00D0(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnRep_Projectile();
		static UClass* StaticClass();
	};

	/**
	 * Class Projectile.BaseProjectileReplicationComponent
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UBaseProjectileReplicationComponent : public UActorComponent
	{
	public:
		void Server_TryDetectPlayer(class ABaseProjectile* Projectile, const struct FImpactInfo& ImpactInfo, const struct FVector_NetQuantize100& projectileLocation, const struct FVector_NetQuantize10& projectileRotation, float TargetLocationTimestamp);
		void Multicast_SendAuthorityDetectPlayer(class ABaseProjectile* Projectile, const struct FImpactInfo& ImpactInfo);
		void Multicast_OnLaunchWithImpact(class ABaseProjectile* Projectile, const struct FLaunchInfo& LaunchInfo, const struct FImpactInfo& ImpactInfo);
		void Multicast_OnLaunch(class ABaseProjectile* Projectile, const struct FLaunchInfo& LaunchInfo);
		void Multicast_DetectPlayer(class ABaseProjectile* Projectile, const struct FImpactInfo& ImpactInfo);
		void Multicast_DetectImpact(class ABaseProjectile* Projectile, const struct FImpactInfo& ImpactInfo);
		void Client_ReceiveDetectPlayerValidation(class ABaseProjectile* Projectile, bool success);
		void Client_LaunchRefusedByServer(class ABaseProjectile* Projectile);
		static UClass* StaticClass();
	};

	/**
	 * Class Projectile.AuthoritativePoolProjectileProviderAdapter
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAuthoritativePoolProjectileProviderAdapter : public UObject
	{
	public:
		unsigned char                                              UnknownData_K69O[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAuthoritativeActorPoolComponent*                    _pool;                                                   // 0x0038(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Init(class UAuthoritativeActorPoolComponent* pool);
		static UClass* StaticClass();
	};

	/**
	 * Class Projectile.ProjectileProvider
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UProjectileProvider : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

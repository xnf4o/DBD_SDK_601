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
	 * Class GameplayUtilities.CharacterPusherComponent
	 * Size -> 0x00B8 (FullSize[0x0170] - InheritedSize[0x00B8])
	 */
	class UCharacterPusherComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_80PW[0x30];                                  // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ACharacter*>                                  _charactersToPush;                                       // 0x00E8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              _ignoredCharacters[0x50];                                // 0x00F8(0x0050) UNKNOWN PROPERTY: SetProperty
		class UCapsuleComponent*                                   _characterDetector;                                      // 0x0148(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCapsuleComponent*                                   _characterCollision;                                     // 0x0150(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBasePushStrategyComponent*                          _pushStrategy;                                           // 0x0158(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class ACharacter*>                                  _ignoredByPushedCharacters;                              // 0x0160(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		void SetIgnoredCharacter(class ACharacter* Character, bool ignore);
		void OnCharacterDetectorOverlapExit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void Construct(class UCapsuleComponent* characterDetector, class UCapsuleComponent* characterCollision, class UBasePushStrategyComponent* pushStrategy);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.BasePoolableActorComponent
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UBasePoolableActorComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_R5TK[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAcquiredChanged;                                       // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void SetAcquired(bool Active);
		bool IsAcquired();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.AuthoritativePoolableActorComponent
	 * Size -> 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
	 */
	class UAuthoritativePoolableActorComponent : public UBasePoolableActorComponent
	{
	public:
		bool                                                       _acquired;                                               // 0x00D0(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GDP2[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnRep_Acquired();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.BaseInputAccelerationConstraintStrategy
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UBaseInputAccelerationConstraintStrategy : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.BaseCharacterVelocityAdditiveStrategy
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UBaseCharacterVelocityAdditiveStrategy : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.AuthoritativeActorPoolComponent
	 * Size -> 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
	 */
	class UAuthoritativeActorPoolComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_TETG[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _actorClass;                                             // 0x00D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _size;                                                   // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_37YG[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      _pool;                                                   // 0x00E0(0x0010) Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate

	public:
		void OnRep_Pool(TArray<class AActor*> previousPool);
		void Authority_OnActorDestroyed(class AActor* DestroyedActor);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.BaseCharacterRotationStrategy
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UBaseCharacterRotationStrategy : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.BasePushStrategyComponent
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UBasePushStrategyComponent : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.BoxOcclusionQueryComponent
	 * Size -> 0x0010 (FullSize[0x04C0] - InheritedSize[0x04B0])
	 */
	class UBoxOcclusionQueryComponent : public UBoxComponent
	{
	public:
		unsigned char                                              UnknownData_DJNK[0x10];                                  // 0x04B0(0x0010) MISSED OFFSET (PADDING)

	public:
		float GetVisiblePercentOfScreen();
		float GetNumberOfVisiblePixels();
		float GetEstimatedRenderedPixelCount();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.CameraUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCameraUtilities : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsLookingTowards(class AController* Controller, const struct FVector& position, float precisionAngle);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.CharacterPositionRecorderComponent
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class UCharacterPositionRecorderComponent : public UActorComponent
	{
	public:
		float                                                      _cacheTimespan;                                          // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YKGE[0x1C];                                  // 0x00BC(0x001C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.CharacterSightableComponent
	 * Size -> 0x00E8 (FullSize[0x01A0] - InheritedSize[0x00B8])
	 */
	class UCharacterSightableComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_E4EJ[0x30];                                  // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHighestSightStatusChangedBP;                           // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TMap<TWeakObjectPtr<class ACharacter>, struct FDelegateHandleWrapper> _sightDelegateHandles;                                   // 0x00F8(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<TWeakObjectPtr<class ACharacter>, ESightStatus>       _sightersStatus;                                         // 0x0148(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0PSW[0x8];                                   // 0x0198(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnHighestSightStatusChangedBP__DelegateSignature(ESightStatus Status);
		ESightStatus GetHighestSightStatus();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.CharacterSightComponent
	 * Size -> 0x00D8 (FullSize[0x0190] - InheritedSize[0x00B8])
	 */
	class UCharacterSightComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_U5YA[0x38];                                  // 0x00B8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _minimumCharacterScreenPercentInZoneTrigger;             // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _minimumCharacterScreenPercentInZoneUntrigger;           // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _minimumCharacterScreenPercentNotInZoneTrigger;          // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _minimumCharacterScreenPercentNotInZoneUntrigger;        // 0x00FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _minimumCharacterVisiblePixelsPercentTrigger;            // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _minimumCharacterVisiblePixelsPercentUntrigger;          // 0x0104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _maximumSightDistance;                                   // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _screenVisibilityZoneRadiusPercentX;                     // 0x010C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _screenVisibilityZoneRadiusPercentY;                     // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _sightingDelay;                                          // 0x0114(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _discerningDelay;                                        // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _undiscerningDelay;                                      // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _sightableCharacterClass;                                // 0x0120(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FAuthorityDiscernedCharacter>                _discernedCharacters;                                    // 0x0128(0x0010) Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate
		TArray<struct FDiscernibleCharacter>                       _localDiscernibleCharacters;                             // 0x0138(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XVC0[0x10];                                  // 0x0148(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _debugMode;                                              // 0x0158(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _canSee;                                                 // 0x0159(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LCC9[0x6];                                   // 0x015A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FActivationDefinition                               _activationDefinition;                                   // 0x0160(0x0028) Edit, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RZE8[0x8];                                   // 0x0188(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetScreenVisibilityZoneRadiusPercent(float ValueX, float ValueY);
		void SetMinimumCharacterVisiblePixelsPercent(float Trigger, float untrigger);
		void SetMinimumCharacterScreenPercentNotInZone(float Trigger, float untrigger);
		void SetMinimumCharacterScreenPercentInZone(float Trigger, float untrigger);
		void SetMaximumSightDistance(float value);
		void Server_UpdateDiscernedCharacters(TArray<class ACharacter*> Characters);
		void OnRep_DiscernibleCharacters();
		void OnRep_CanSee();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.ChargeableUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UChargeableUtilities : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_ConvertSecondsToAddToRateMultiplier(float secondsToAdd, float baseMaxSeconds, float baseRate);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.ContainerUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UContainerUtilities : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.PoolableActor
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPoolableActor : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.PotentialAttack
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPotentialAttack : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.MockAuthoritativeActorPoolComponent
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UMockAuthoritativeActorPoolComponent : public UAuthoritativeActorPoolComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.MockPoolableActor
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class AMockPoolableActor : public AActor
	{
	public:
		class UPoolableActorComponent*                             _poolable;                                               // 0x0230(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.MovableCamera
	 * Size -> 0x0028 (FullSize[0x02B8] - InheritedSize[0x0290])
	 */
	class AMovableCamera : public APawn
	{
	public:
		float                                                      MovementSpeed;                                           // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequiresShiftModifierForInput;                           // 0x0294(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GTDL[0x1B];                                  // 0x0295(0x001B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   _playerController;                                       // 0x02B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.MoveActorToComponent
	 * Size -> 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
	 */
	class UMoveActorToComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_CDXP[0x38];                                  // 0x00B8(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.MovementUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMovementUtilities : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_Local_MoveActorTo(class AActor* Actor, const struct FVector& Location, const struct FRotator& Rotation, float Duration);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.PawnUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPawnUtilities : public UBlueprintFunctionLibrary
	{
	public:
		class APawn* STATIC_GetOwningPawn(class AActor* Origin);
		class APawn* STATIC_GetLocallyObservedPawn(class UObject* WorldContext);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.PlayerStateExt
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPlayerStateExt : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.PoolableActorComponent
	 * Size -> 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
	 */
	class UPoolableActorComponent : public UBasePoolableActorComponent
	{
	public:
		unsigned char                                              UnknownData_WS42[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.SceneComponentExt
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USceneComponentExt : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.SidePushStrategyComponent
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class USidePushStrategyComponent : public UBasePushStrategyComponent
	{
	public:
		float                                                      _maxImpulseStrength;                                     // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      _minImpulseStrength;                                     // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      _detectorCapsuleInflation;                               // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JWV8[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayUtilities.VisualLoggerExt
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UVisualLoggerExt : public UObject
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

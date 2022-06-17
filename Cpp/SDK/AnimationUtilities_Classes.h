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
	 * Class AnimationUtilities.SleepingAnimInstance
	 * Size -> 0x0010 (FullSize[0x02D0] - InheritedSize[0x02C0])
	 */
	class USleepingAnimInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_Z6N0[0x10];                                  // 0x02C0(0x0010) MISSED OFFSET (PADDING)

	public:
		void Wakeup();
		void SetNeverIdle(bool neverIdle);
		void OnMontageStart(class UAnimMontage* Montage);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationUtilities.SkeletalMeshActorBudgeted
	 * Size -> 0x0000 (FullSize[0x02B8] - InheritedSize[0x02B8])
	 */
	class ASkeletalMeshActorBudgeted : public ASkeletalMeshActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationUtilities.AnimCollection
	 * Size -> 0x0108 (FullSize[0x0140] - InheritedSize[0x0038])
	 */
	class UAnimCollection : public UDataAsset
	{
	public:
		TMap<struct FGameplayTag, class UAnimSequence*>            _taggedAnimSequences;                                    // 0x0038(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TMap<struct FGameplayTag, class UBlendSpaceBase*>          _taggedAnimBlendspaces;                                  // 0x0088(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TMap<struct FGameplayTag, struct FAnimSequenceSelector>    _taggedAnimSelectors;                                    // 0x00D8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class UAnimCollection*                                     _parent;                                                 // 0x0128(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UAnimCollection*>                             _children;                                               // 0x0130(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationUtilities.AnimEffectBlackBoard
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UAnimEffectBlackBoard : public UObject
	{
	public:
		unsigned char                                              UnknownData_B086[0x50];                                  // 0x0030(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationUtilities.AnimEffectHandler
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAnimEffectHandler : public UObject
	{
	public:
		bool HandleAnimNotify(class ACharacter* Player, const class FName& NotifyName);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationUtilities.AnimInstanceExt
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAnimInstanceExt : public UBlueprintFunctionLibrary
	{
	public:
		class UAnimInstance* STATIC_GetSubAnimInstance(class UAnimInstance* Root, class UClass* Type);
		class USkeletalMeshComponent* STATIC_GetRootSkeletalMeshComponent(class UAnimInstance* AnimInstance);
		class USkeletalMeshComponent* STATIC_GetOwningCharacterSkeletalMeshComponent(class UAnimInstance* AnimInstance);
		class ACharacter* STATIC_GetOwningCharacter(class UAnimInstance* AnimInstance);
		class AActor* STATIC_GetOwningActor(class UAnimInstance* AnimInstance);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationUtilities.DetectionFanComponent
	 * Size -> 0x0060 (FullSize[0x0280] - InheritedSize[0x0220])
	 */
	class UDetectionFanComponent : public USceneComponent
	{
	public:
		struct FFloatRange                                         _angleRange;                                             // 0x0218(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             _originWorldOffset;                                      // 0x0228(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _numberOfSpots;                                          // 0x0234(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _defaultRingRadius;                                      // 0x0238(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ECollisionChannel                                          _collisionChannel;                                       // 0x023C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ERDS[0x3];                                   // 0x023D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              _meshComponent;                                          // 0x0240(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ASJY[0x38];                                  // 0x0248(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationUtilities.ArmDetectionFanComponent
	 * Size -> 0x0090 (FullSize[0x0310] - InheritedSize[0x0280])
	 */
	class UArmDetectionFanComponent : public UDetectionFanComponent
	{
	public:
		class FName                                                _shoulderBone;                                           // 0x0278(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                _elbowBone;                                              // 0x0284(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                _handBone;                                               // 0x0290(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                _indexBone;                                              // 0x029C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                _hipBone;                                                // 0x02A8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EIZV[0x5C];                                  // 0x02B4(0x005C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationUtilities.BaseGroundDetectorComponent
	 * Size -> 0x0118 (FullSize[0x01D0] - InheritedSize[0x00B8])
	 */
	class UBaseGroundDetectorComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_V2UA[0xB0];                                  // 0x00B8(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                _startTransformName;                                     // 0x0168(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ECollisionChannel                                          _walkableCollisionChannel;                               // 0x0174(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _traceComplex;                                           // 0x0175(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DCEK[0x2];                                   // 0x0176(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _extraTraceDistance;                                     // 0x0178(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SVXQ[0x4];                                   // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkinnedMeshComponent*                               _skinnedMeshComponent;                                   // 0x0180(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YI6M[0x8];                                   // 0x0188(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                _startSlopeTransformName;                                // 0x0190(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y2FJ[0x34];                                  // 0x019C(0x0034) MISSED OFFSET (PADDING)

	public:
		void InitSkinnedMeshComponent(class USkinnedMeshComponent* Mesh);
		struct FVector GetGroundPosition(const struct FVector& targetPos, const struct FVector& extraOffset);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationUtilities.BoneSocketLocalVelocityEvaluator
	 * Size -> 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
	 */
	class UBoneSocketLocalVelocityEvaluator : public UActorComponent
	{
	public:
		class USkeletalMeshComponent*                              _meshComponent;                                          // 0x00B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class FName>                                        _trackedBoneSocketNames;                                 // 0x00C0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZAV1[0x10];                                  // 0x00D0(0x0010) MISSED OFFSET (PADDING)

	public:
		struct FVector GetLocalVelocity(const class FName& BoneSocketName);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationUtilities.FootGroundDetectorComponent
	 * Size -> 0x0030 (FullSize[0x0200] - InheritedSize[0x01D0])
	 */
	class UFootGroundDetectorComponent : public UBaseGroundDetectorComponent
	{
	public:
		class FName                                                _hipTransformName;                                       // 0x01D0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             _slopeStartOffset;                                       // 0x01DC(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _footLength;                                             // 0x01E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _traceRadius;                                            // 0x01EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _maxWalkableSlopeAngle;                                  // 0x01F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XUYU[0x4];                                   // 0x01F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterMovementComponent*                         _movementComp;                                           // 0x01F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationUtilities.FromBoneGroundDetectorComponent
	 * Size -> 0x0010 (FullSize[0x01E0] - InheritedSize[0x01D0])
	 */
	class UFromBoneGroundDetectorComponent : public UBaseGroundDetectorComponent
	{
	public:
		struct FVector                                             _startOffset;                                            // 0x01D0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EAC7[0x4];                                   // 0x01DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationUtilities.AnimInstanceLeader
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAnimInstanceLeader : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationUtilities.MoveComponentToComponent
	 * Size -> 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
	 */
	class UMoveComponentToComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_BB9D[0x48];                                  // 0x00B8(0x0048) MISSED OFFSET (PADDING)

	public:
		void Stop();
		void Start(class USceneComponent* componentToMove, class USceneComponent* Target, float Duration);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationUtilities.ResetControlPitchAnimNotify
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UResetControlPitchAnimNotify : public UAnimNotify
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationUtilities.SlaveAnimInstance
	 * Size -> 0x0010 (FullSize[0x02D0] - InheritedSize[0x02C0])
	 */
	class USlaveAnimInstance : public UAnimInstance
	{
	public:
		TWeakObjectPtr<class USkeletalMeshComponent>               _masterMesh;                                             // 0x02C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YK45[0x8];                                   // 0x02C8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetMasterMesh(class USkeletalMeshComponent* masterMesh);
		class USkeletalMeshComponent* GetMasterMesh();
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationUtilities.SleepingSkinnedMeshRegisterer
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class USleepingSkinnedMeshRegisterer : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

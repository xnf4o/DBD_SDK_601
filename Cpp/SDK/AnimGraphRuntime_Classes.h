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
	 * Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UAnimNotify_PlayMontageNotify : public UAnimNotify
	{
	public:
		class FName                                                NotifyName;                                              // 0x0040(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6JIG[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
	{
	public:
		class FName                                                NotifyName;                                              // 0x0038(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F8UD[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimGraphRuntime.AnimSequencerInstance
	 * Size -> 0x0010 (FullSize[0x02D0] - InheritedSize[0x02C0])
	 */
	class UAnimSequencerInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_1Q6J[0x10];                                  // 0x02C0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimGraphRuntime.KismetAnimationLibrary
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& effector, struct FVector* OutJointPos, struct FVector* OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);
		void STATIC_K2_StartProfilingTimer();
		struct FVector STATIC_K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ);
		float STATIC_K2_MakePerlinNoiseAndRemap(float value, float RangeOutMin, float RangeOutMax);
		struct FTransform STATIC_K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& targetPosition, const struct FVector& LookAtVector, bool bUseUpVector, const struct FVector& UpVector, float ClampConeInDegree);
		float STATIC_K2_EndProfilingTimer(bool bLog, const class FString& LogPrefix);
		float STATIC_K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, const class FName& SocketOrBoneNameA, ERelativeTransformSpace SocketSpaceA, const class FName& SocketOrBoneNameB, ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax);
		struct FVector STATIC_K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, const class FName& SocketOrBoneNameFrom, const class FName& SocketOrBoneNameTo);
		float STATIC_K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, const class FName& SocketOrBoneName, const class FName& ReferenceSocketOrBone, ERelativeTransformSpace SocketSpace, const struct FVector& OffsetInBoneSpace, struct FPositionHistory* History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, const struct FRuntimeFloatCurve& CustomCurve);
		float STATIC_K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, const struct FVector& position, struct FPositionHistory* History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimGraphRuntime.PlayMontageCallbackProxy
	 * Size -> 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
	 */
	class UPlayMontageCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBlendOut;                                              // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInterrupted;                                           // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNotifyBegin;                                           // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNotifyEnd;                                             // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K63G[0x30];                                  // 0x0080(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnNotifyEndReceived(const class FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
		void OnNotifyBeginReceived(const class FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
		void OnMontageEnded(const struct FGuid& MontageInstanceId, class UAnimMontage* Montage, bool bInterrupted);
		void OnMontageBlendingOut(const struct FGuid& MontageInstanceId, class UAnimMontage* Montage, bool bInterrupted);
		class UPlayMontageCallbackProxy* STATIC_CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const class FName& StartingSection);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimGraphRuntime.SequencerAnimationSupport
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USequencerAnimationSupport : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

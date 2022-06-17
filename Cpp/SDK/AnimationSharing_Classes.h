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
	 * Class AnimationSharing.AnimSharingStateInstance
	 * Size -> 0x0020 (FullSize[0x02E0] - InheritedSize[0x02C0])
	 */
	class UAnimSharingStateInstance : public UAnimInstance
	{
	public:
		class UAnimSequence*                                       AnimationToPlay;                                         // 0x02C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PermutationTimeOffset;                                   // 0x02C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PlayRate;                                                // 0x02CC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bStateBool;                                              // 0x02D0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M8A1[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSharingInstance*                                Instance;                                                // 0x02D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void GetInstancedActors(TArray<class AActor*>* Actors);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationSharing.AnimSharingTransitionInstance
	 * Size -> 0x0020 (FullSize[0x02E0] - InheritedSize[0x02C0])
	 */
	class UAnimSharingTransitionInstance : public UAnimInstance
	{
	public:
		TWeakObjectPtr<class USkeletalMeshComponent>               FromComponent;                                           // 0x02C0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class USkeletalMeshComponent>               ToComponent;                                             // 0x02C8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BlendTime;                                               // 0x02D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bBlendBool;                                              // 0x02D4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZGXO[0xB];                                   // 0x02D5(0x000B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationSharing.AnimSharingAdditiveInstance
	 * Size -> 0x0020 (FullSize[0x02E0] - InheritedSize[0x02C0])
	 */
	class UAnimSharingAdditiveInstance : public UAnimInstance
	{
	public:
		TWeakObjectPtr<class USkeletalMeshComponent>               BaseComponent;                                           // 0x02C0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class UAnimSequence>                        AdditiveAnimation;                                       // 0x02C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      alpha;                                                   // 0x02D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bStateBool;                                              // 0x02D4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SYRR[0xB];                                   // 0x02D5(0x000B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationSharing.AnimSharingInstance
	 * Size -> 0x00F0 (FullSize[0x0120] - InheritedSize[0x0030])
	 */
	class UAnimSharingInstance : public UObject
	{
	public:
		TArray<class AActor*>                                      RegisteredActors;                                        // 0x0030(0x0010) Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_65BK[0x50];                                  // 0x0040(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimationSharingStateProcessor*                     StateProcessor;                                          // 0x0090(0x0008) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QKLO[0x38];                                  // 0x0098(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAnimSequence*>                               UsedAnimationSequences;                                  // 0x00D0(0x0010) Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IHNK[0x10];                                  // 0x00E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnum*                                               StateEnum;                                               // 0x00F0(0x0008) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              SharingActor;                                            // 0x00F8(0x0008) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y4ZA[0x20];                                  // 0x0100(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationSharing.AnimationSharingManager
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UAnimationSharingManager : public UObject
	{
	public:
		TArray<class USkeleton*>                                   Skeletons;                                               // 0x0030(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class UAnimSharingInstance*>                        PerSkeletonData;                                         // 0x0040(0x0010) Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XN6C[0x40];                                  // 0x0050(0x0040) MISSED OFFSET (PADDING)

	public:
		void RegisterActorWithSkeletonBP(class AActor* InActor, class USkeleton* SharingSkeleton);
		class UAnimationSharingManager* STATIC_GetAnimationSharingManager(class UObject* WorldContextObject);
		bool STATIC_CreateAnimationSharingManager(class UObject* WorldContextObject, class UAnimationSharingSetup* Setup);
		bool STATIC_AnimationSharingEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationSharing.AnimationSharingSetup
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UAnimationSharingSetup : public UObject
	{
	public:
		TArray<struct FPerSkeletonAnimationSharingSetup>           SkeletonSetups;                                          // 0x0030(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		struct FAnimationSharingScalability                        ScalabilitySettings;                                     // 0x0040(0x0010) Edit, Config, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationSharing.AnimationSharingStateProcessor
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UAnimationSharingStateProcessor : public UObject
	{
	public:
		unsigned char                                              AnimationStateEnum[0x30];                                // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void ProcessActorState(int32_t* OutState, class AActor* InActor, unsigned char CurrentState, unsigned char OnDemandState, bool* bShouldProcess);
		class UEnum* GetAnimationStateEnum();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

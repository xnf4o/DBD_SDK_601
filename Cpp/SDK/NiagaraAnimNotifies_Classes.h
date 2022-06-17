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
	 * Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
	 * Size -> 0x0060 (FullSize[0x00A0] - InheritedSize[0x0040])
	 */
	class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
	{
	public:
		class UNiagaraSystem*                                      Template;                                                // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LocationOffset;                                          // 0x0048(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotationOffset;                                          // 0x0054(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x0060(0x000C) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAbsoluteScale;                                          // 0x006C(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LKKU[0x23];                                  // 0x006D(0x0023) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Attached : 1;                                            // 0x0090(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NBNQ[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SocketName;                                              // 0x0094(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class UFXSystemComponent* GetSpawnedEffect();
		static UClass* StaticClass();
	};

	/**
	 * Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
	{
	public:
		class UNiagaraSystem*                                      Template;                                                // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SocketName;                                              // 0x0040(0x000C) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LocationOffset;                                          // 0x004C(0x000C) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotationOffset;                                          // 0x0058(0x000C) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDestroyAtEnd;                                           // 0x0064(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M21Y[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)

	public:
		class UFXSystemComponent* GetSpawnedEffect(class UMeshComponent* MeshComp);
		static UClass* StaticClass();
	};

	/**
	 * Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
	 * Size -> 0x0050 (FullSize[0x00B8] - InheritedSize[0x0068])
	 */
	class UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect
	{
	public:
		unsigned char                                              UnknownData_TPIQ[0x50];                                  // 0x0068(0x0050) MISSED OFFSET (PADDING)

	public:
		float GetNotifyProgress(class UMeshComponent* MeshComp);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

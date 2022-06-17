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
	 * Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetAnimationBudgetParameters(class UObject* WorldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters);
		void STATIC_EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
	 * Size -> 0x0020 (FullSize[0x0FA0] - InheritedSize[0x0F80])
	 */
	class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
	{
	public:
		unsigned char                                              UnknownData_G8HF[0x18];                                  // 0x0F80(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bAutoRegisterWithBudgetAllocator : 1;                    // 0x0F98(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bAutoCalculateSignificance : 1;                          // 0x0F98(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bShouldUseActorRenderedFlag : 1;                         // 0x0F98(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DYV8[0x7];                                   // 0x0F99(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

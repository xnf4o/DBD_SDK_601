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
	 * Class UITween.UITween
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UUITween : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_3F2C[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUITweenInstance*>                            ActiveInstances;                                         // 0x0040(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic

	public:
		class UUITweenInstance* STATIC_Create(class UWidget* targetWidget, float Duration, float Delay, EEasingType Easing);
		void STATIC_Clear(class UWidget* targetWidget);
		static UClass* StaticClass();
	};

	/**
	 * Class UITween.UITweenMaterialScalarProperties
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UUITweenMaterialScalarProperties : public UObject
	{
	public:
		class UMaterialInstanceDynamic*                            MaterialInstance;                                        // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y4YU[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UITween.UITweenMaterialVectorProperties
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UUITweenMaterialVectorProperties : public UObject
	{
	public:
		class UMaterialInstanceDynamic*                            MaterialInstance;                                        // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IFRL[0x40];                                  // 0x0038(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UITween.UITweenInstance
	 * Size -> 0x00D8 (FullSize[0x0108] - InheritedSize[0x0030])
	 */
	class UUITweenInstance : public UObject
	{
	public:
		class FScriptMulticastDelegate                             TweenCompletedDelegate;                                  // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             TweenUpdatedDelegate;                                    // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AJNE[0x98];                                  // 0x0050(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUITweenMaterialScalarProperties*>            _materialScalarProperties;                               // 0x00E8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class UUITweenMaterialVectorProperties*>            _materialVectorProperties;                               // 0x00F8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected

	public:
		class UUITweenInstance* ToTranslation(const struct FVector2D& targetValue);
		class UUITweenInstance* ToScale(const struct FVector2D& targetValue);
		class UUITweenInstance* ToReset();
		class UUITweenInstance* ToOpacity(float targetValue);
		class UUITweenInstance* ToMaterialVectorParameter(class UMaterialInstanceDynamic* targetMaterialInstance, const class FName& targetParameterName, const struct FLinearColor& targetValue);
		class UUITweenInstance* ToMaterialScalarParameter(class UMaterialInstanceDynamic* targetMaterialInstance, const class FName& targetParameterName, float targetValue);
		class UUITweenInstance* ToColor(const struct FLinearColor& targetValue);
		class UWidget* GetTargetWidget();
		float GetProgress();
		EEasingType GetEasing();
		float GetDuration();
		float GetDelay();
		class UUITweenInstance* FromTranslation(const struct FVector2D& startValue);
		class UUITweenInstance* FromScale(const struct FVector2D& startValue);
		class UUITweenInstance* FromOpacity(float startValue);
		class UUITweenInstance* FromMaterialVectorParameter(class UMaterialInstanceDynamic* targetMaterialInstance, const class FName& targetParameterName, const struct FLinearColor& targetValue);
		class UUITweenInstance* FromMaterialScalarParameter(class UMaterialInstanceDynamic* targetMaterialInstance, const class FName& targetParameterName, float targetValue);
		class UUITweenInstance* FromColor(const struct FLinearColor& startValue);
		class UUITweenInstance* Easing(EEasingType InType);
		void Begin();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

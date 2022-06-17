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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum AnimationUtilities.EEditorCollectionType
	 */
	enum class EEditorCollectionType : uint8_t
	{
		Animation  = 0,
		BlendSpace = 1,
		Selector   = 2,
		MAX        = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AnimationUtilities.TaggedAnimSequence
	 * Size -> 0x0028
	 */
	struct FTaggedAnimSequence
	{
	public:
		class UAnimSequence*                                       Sequence;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               Tags;                                                    // 0x0008(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimationUtilities.AnimSequenceSelector
	 * Size -> 0x0018
	 */
	struct FAnimSequenceSelector
	{
	public:
		class UAnimSequence*                                       _selected;                                               // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FTaggedAnimSequence>                         _taggedSequences;                                        // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct AnimationUtilities.AnimationMontageDescriptor
	 * Size -> 0x0020
	 */
	struct FAnimationMontageDescriptor
	{
	public:
		class FName                                                MontageID;                                               // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DV2H[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        Tags;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimationUtilities.MontagePlaybackDefinition
	 * Size -> 0x0028
	 */
	struct FMontagePlaybackDefinition
	{
	public:
		struct FAnimationMontageDescriptor                         Descriptor;                                              // 0x0000(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Follower;                                                // 0x0024(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J1C6[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimationUtilities.SocketOrBoneCache
	 * Size -> 0x0060
	 */
	struct FSocketOrBoneCache
	{
	public:
		unsigned char                                              _sourceAnimation[0x30];                                  // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                _socketName;                                             // 0x0030(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _notifyName;                                             // 0x003C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             _location;                                               // 0x0048(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FRotator                                            _rotation;                                               // 0x0054(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct AnimationUtilities.EditorCollectionMetadata
	 * Size -> 0x0001
	 */
	struct FEditorCollectionMetadata
	{
	public:
		unsigned char                                              UnknownData_NVW1[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimationUtilities.EditorAnimCollectionDisplay
	 * Size -> 0x00F0
	 */
	struct FEditorAnimCollectionDisplay
	{
	public:
		TMap<struct FGameplayTag, struct FEditorCollectionMetadata> _taggedAnimSequencesMetadata;                            // 0x0000(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, struct FEditorCollectionMetadata> _taggedAnimBlendspacesMetadata;                          // 0x0050(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, struct FEditorCollectionMetadata> _taggedAnimSelectorsMetadata;                            // 0x00A0(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimationUtilities.MontageStopDefinition
	 * Size -> 0x0028
	 */
	struct FMontageStopDefinition
	{
	public:
		struct FAnimationMontageDescriptor                         Descriptor;                                              // 0x0000(0x0020) Transient, NativeAccessSpecifierPublic
		float                                                      BlendOutTime;                                            // 0x0020(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OSB7[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimationUtilities.TaggedAnimCollection
	 * Size -> 0x0040
	 */
	struct FTaggedAnimCollection
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_58B7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AnimCollection[0x30];                                    // 0x000C(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

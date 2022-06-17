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
	 * Enum GameplayUtilities.ESightStatus
	 */
	enum class ESightStatus : uint8_t
	{
		OutOfSight = 0,
		Discerned  = 1,
		Sighted    = 2,
		MAX        = 3
	};

	/**
	 * Enum GameplayUtilities.EComparisonOperation
	 */
	enum class EComparisonOperation : uint8_t
	{
		EqualTo              = 0,
		NotEqualTo           = 1,
		GreaterThan          = 2,
		GreaterThanOrEqualTo = 3,
		LesserThan           = 4,
		LesserThanOrEqualTo  = 5,
		MAX                  = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GameplayUtilities.AuthorityDiscernedCharacter
	 * Size -> 0x0010
	 */
	struct FAuthorityDiscernedCharacter
	{
	public:
		class ACharacter*                                          _character;                                              // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isSighted;                                              // 0x0008(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A5GU[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayUtilities.DiscernibleCharacter
	 * Size -> 0x0018
	 */
	struct FDiscernibleCharacter
	{
	public:
		class ACharacter*                                          _character;                                              // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6GF5[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayUtilities.HitValidatorInstigatorParams
	 * Size -> 0x0060
	 */
	struct FHitValidatorInstigatorParams
	{
	public:
		class AActor*                                              Instigator;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ROU[0x48];                                  // 0x0008(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 HitPrimitive;                                            // 0x0050(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P8FN[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayUtilities.HitValidatorTargetParams
	 * Size -> 0x0018
	 */
	struct FHitValidatorTargetParams
	{
	public:
		class ACharacter*                                          Target;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCapsuleComponent*                                   HittableCapsule;                                         // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetLocationTimestamp;                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G2PI[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayUtilities.HitValidationReport
	 * Size -> 0x0160
	 */
	struct FHitValidationReport
	{
	public:
		struct FHitValidatorInstigatorParams                       InstigatorParams;                                        // 0x0000(0x0060) ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FHitValidatorTargetParams                           TargetParams;                                            // 0x0060(0x0018) NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      ValidationTimestamp;                                     // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         TargetRecorderTimeRange;                                 // 0x007C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_89RZ[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACharacter*                                          InstigatorOwningCharacter;                               // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumDistance;                                         // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CapsuleInflation;                                        // 0x009C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsValidHit;                                              // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsValidDistance;                                         // 0x00A1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsValidNotStunned;                                       // 0x00A2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M3UU[0xD];                                   // 0x00A3(0x000D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InstigatorTransform;                                     // 0x00B0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             RewindedTargetLocation;                                  // 0x00E0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             targetLocation;                                          // 0x00EC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SquareDistance;                                          // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasPerformCollisionCheck;                                // 0x00FC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsValidCollision;                                        // 0x00FD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RYDX[0x2];                                   // 0x00FE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          HitPrimitiveTransform;                                   // 0x0100(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          HittablePrimitiveTransform;                              // 0x0130(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

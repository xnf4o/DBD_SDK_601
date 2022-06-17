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
	 * Class ApexDestruction.DestructibleActor
	 * Size -> 0x0018 (FullSize[0x0248] - InheritedSize[0x0230])
	 */
	class ADestructibleActor : public AActor
	{
	public:
		class UDestructibleComponent*                              DestructibleComponent;                                   // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnActorFracture;                                         // 0x0238(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ApexDestruction.DestructibleComponent
	 * Size -> 0x00E0 (FullSize[0x0820] - InheritedSize[0x0740])
	 */
	class UDestructibleComponent : public USkinnedMeshComponent
	{
	public:
		unsigned char                                              bFractureEffectOverride : 1;                             // 0x0740(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CVCM[0x7];                                   // 0x0741(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFractureEffect>                             FractureEffects;                                         // 0x0748(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bEnableHardSleeping;                                     // 0x0758(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XBEO[0x3];                                   // 0x0759(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LargeChunkThreshold;                                     // 0x075C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OHHE[0x10];                                  // 0x0760(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnComponentFracture;                                     // 0x0770(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0SQ5[0xA0];                                  // 0x0780(0x00A0) MISSED OFFSET (PADDING)

	public:
		void SetDestructibleMesh(class UDestructibleMesh* NewMesh);
		class UDestructibleMesh* GetDestructibleMesh();
		void ApplyRadiusDamage(float BaseDamage, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
		void ApplyDamage(float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength);
		static UClass* StaticClass();
	};

	/**
	 * Class ApexDestruction.DestructibleFractureSettings
	 * Size -> 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
	 */
	class UDestructibleFractureSettings : public UObject
	{
	public:
		int32_t                                                    CellSiteCount;                                           // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFractureMaterial                                   FractureMaterialDesc;                                    // 0x0034(0x0024) Edit, Transient, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    RandomSeed;                                              // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6TFI[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     VoronoiSites;                                            // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    OriginalSubmeshCount;                                    // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QG4K[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDestructibleChunkParameters>                ChunkParameters;                                         // 0x0088(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8II7[0x28];                                  // 0x0098(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ApexDestruction.DestructibleMesh
	 * Size -> 0x00A0 (FullSize[0x0448] - InheritedSize[0x03A8])
	 */
	class UDestructibleMesh : public USkeletalMesh
	{
	public:
		struct FDestructibleParameters                             DefaultDestructibleParameters;                           // 0x03A8(0x0088) Edit, NativeAccessSpecifierPublic
		TArray<struct FFractureEffect>                             FractureEffects;                                         // 0x0430(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5HRV[0x8];                                   // 0x0440(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

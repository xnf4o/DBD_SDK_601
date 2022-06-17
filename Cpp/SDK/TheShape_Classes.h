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
	 * Class TheShape.KillStandingInteractionDefinition
	 * Size -> 0x0000 (FullSize[0x05C0] - InheritedSize[0x05C0])
	 */
	class UKillStandingInteractionDefinition : public UInteractionDefinition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheShape.ShapeAnimInstance
	 * Size -> 0x0010 (FullSize[0x0610] - InheritedSize[0x0600])
	 */
	class UShapeAnimInstance : public UKillerAnimInstance
	{
	public:
		class UEvilWithinComponent*                                _evilWithinComponent;                                    // 0x0600(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GYW2[0x8];                                   // 0x0608(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheShape.ShapePounceAttackOpenSubstate
	 * Size -> 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
	 */
	class UShapePounceAttackOpenSubstate : public UPounceAttackOpenSubstate
	{
	public:
		TArray<struct FDBDTunableRowHandle>                        _tierDurations;                                          // 0x0130(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

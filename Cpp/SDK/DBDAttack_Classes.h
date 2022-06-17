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
	 * Class DBDAttack.PounceAttack
	 * Size -> 0x0000 (FullSize[0x0380] - InheritedSize[0x0380])
	 */
	class UPounceAttack : public UDBDAttack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAttack.PounceAttackOpenSubstate
	 * Size -> 0x0018 (FullSize[0x0130] - InheritedSize[0x0118])
	 */
	class UPounceAttackOpenSubstate : public UDBDAttackOpenSubstate
	{
	public:
		class UClass*                                              _pounceOpenStateCosmeticBlueprintClass;                  // 0x0118(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPounceAttackOpenSubstateCosmetic*                   _pounceOpenStateCosmeticBlueprintObject;                 // 0x0120(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UMHZ[0x8];                                   // 0x0128(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAttack.PounceAttackHittingSubstate
	 * Size -> 0x0000 (FullSize[0x01A0] - InheritedSize[0x01A0])
	 */
	class UPounceAttackHittingSubstate : public UDBDAttackHittingSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAttack.PounceAttackSuccessSubstate
	 * Size -> 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
	 */
	class UPounceAttackSuccessSubstate : public UDBDAttackSuccessSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAttack.PounceAttackMissSubstate
	 * Size -> 0x0008 (FullSize[0x0120] - InheritedSize[0x0118])
	 */
	class UPounceAttackMissSubstate : public UDBDAttackMissSubstate
	{
	public:
		unsigned char                                              UnknownData_TUKX[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAttack.PounceAttackObstructSubstate
	 * Size -> 0x0010 (FullSize[0x0128] - InheritedSize[0x0118])
	 */
	class UPounceAttackObstructSubstate : public UDBDAttackObstructSubstate
	{
	public:
		class FName                                                _fullObstructMontage;                                    // 0x0118(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QE4B[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAttack.PounceAttackOpenSubstateCosmetic
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPounceAttackOpenSubstateCosmetic : public UObject
	{
	public:
		void OnLungeAttackStartCosmetic(class ADBDPlayer* SlasherPlayer);
		void OnLungeAttackEndCosmetic(class ADBDPlayer* SlasherPlayer);
		void OnLocallyObservedChangedCosmetic(class ADBDPlayer* SlasherPlayer);
		void OnLocallyObservedChanged(class ADBDPlayer* SlasherPlayer);
		bool IsLungeAttackAugmented(class ADBDPlayer* SlasherPlayer);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAttack.SlashAttack
	 * Size -> 0x0000 (FullSize[0x0380] - InheritedSize[0x0380])
	 */
	class USlashAttack : public UPounceAttack
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

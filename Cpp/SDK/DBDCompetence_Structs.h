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
	 * Enum DBDCompetence.EImposeEffectTo
	 */
	enum class EImposeEffectTo : uint8_t
	{
		EventInstigator = 0,
		EventTarget     = 1,
		AddonOwner      = 2,
		AllSurvivors    = 3,
		MAX             = 4
	};

	/**
	 * Enum DBDCompetence.EStatusEffectSpawnerReceiverStrategy
	 */
	enum class EStatusEffectSpawnerReceiverStrategy : uint8_t
	{
		AllCharacter      = 0,
		PawnType          = 1,
		OriginatingPlayer = 2,
		MAX               = 3
	};

	/**
	 * Enum DBDCompetence.ESecondWindState
	 */
	enum class ESecondWindState : uint8_t
	{
		Loading   = 0,
		Locked    = 1,
		Available = 2,
		InUse     = 3,
		MAX       = 4
	};

	/**
	 * Enum DBDCompetence.ETheMettleOfManPhase
	 */
	enum class ETheMettleOfManPhase : uint8_t
	{
		Uninitialized     = 0,
		GainingTokens     = 1,
		CancelNextAttack  = 2,
		RevealWhenHealthy = 3,
		RevealedToKiller  = 4,
		MAX               = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DBDCompetence.WindowBlockableList
	 * Size -> 0x0010
	 */
	struct FWindowBlockableList
	{
	public:
		TArray<class UBlockableComponent*>                         Blockables;                                              // 0x0000(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDCompetence.SimpleSpawnEffectsOnAllSurvivorsAddonParams
	 * Size -> 0x0020
	 */
	struct FSimpleSpawnEffectsOnAllSurvivorsAddonParams
	{
	public:
		class FName                                                _statusEffectIdDeprecated;                               // 0x0000(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3X39[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _effectClass;                                            // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      _customParam;                                            // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_61K2[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDCompetence.StatusEffectSpawnData
	 * Size -> 0x0028
	 */
	struct FStatusEffectSpawnData
	{
	public:
		class FString                                              DEPRECATED_EffectId;                                     // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              EffectClass;                                             // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      customParam;                                             // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStatusEffectSpawnerReceiverStrategy                       ReceiverStrategy;                                        // 0x001C(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_APZJ[0x3];                                   // 0x001C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EPawnType                                                  PawnType;                                                // 0x0020(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SkipOriginatingPlayer;                                   // 0x0021(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3AVR[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDCompetence.PerkLevelEffectArray
	 * Size -> 0x0010
	 */
	struct FPerkLevelEffectArray
	{
	public:
		TArray<struct FStatusEffectSpawnData>                      EffectsToSpawn;                                          // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDCompetence.PlayerStatusEffectSpawnerHelperInitParams
	 * Size -> 0x0028
	 */
	struct FPlayerStatusEffectSpawnerHelperInitParams
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ADBDPlayer*                                          OrininatingPlayer;                                       // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameplayModifierContainer*                          originatingEffect;                                       // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FStatusEffectSpawnData>                      EffectsToSpawn;                                          // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDCompetence.PlayerStatusEffectSpawnerHelper
	 * Size -> 0x0088
	 */
	struct FPlayerStatusEffectSpawnerHelper
	{
	public:
		struct FPlayerStatusEffectSpawnerHelperInitParams          _initParams;                                             // 0x0000(0x0028) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              _spawnedEffects[0x50];                                   // 0x0028(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_DL5R[0x10];                                  // 0x0078(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

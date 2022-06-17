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
	 * Class SpecialEventUtilities.RespawnableInteractable
	 * Size -> 0x0028 (FullSize[0x0350] - InheritedSize[0x0328])
	 */
	class ARespawnableInteractable : public AInteractable
	{
	public:
		class FScriptMulticastDelegate                             OnInteractionEnded;                                      // 0x0328(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnIsInteractingChanged;                                  // 0x0338(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       _isHidden;                                               // 0x0348(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_12PM[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnUnhidden();
		void OnRep_IsHidden();
		void OnHidden();
		bool IsHidden();
		static UClass* StaticClass();
	};

	/**
	 * Class SpecialEventUtilities.RespawningEventComponent
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class URespawningEventComponent : public UActorComponent
	{
	public:
		class URespawnableStrategy*                                _respawnableStrategy;                                    // 0x00B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class URespawnablePositioner*                              _respawnablePositioner;                                  // 0x00C0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void DBD_ForceRespawnSpecialEventObject();
		void Authority_OnIsInteractingWithAnyRespawnableInteractableChanged(class ARespawnableInteractable* RespawnableInteractable, bool IsInteracting);
		static UClass* StaticClass();
	};

	/**
	 * Class SpecialEventUtilities.RespawnableTrigger
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class URespawnableTrigger : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SpecialEventUtilities.InteractionRespawnableTrigger
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UInteractionRespawnableTrigger : public URespawnableTrigger
	{
	public:
		class URespawningEventComponent*                           _respawningEventComponent;                               // 0x00B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Authority_OnNewRespawnableSubscribed(class ARespawnableInteractable* newRespawnableInteractable);
		void Authority_OnInteractionEnded(class ARespawnableInteractable* RespawnableInteractable);
		static UClass* StaticClass();
	};

	/**
	 * Class SpecialEventUtilities.RespawnablePositioner
	 * Size -> 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
	 */
	class URespawnablePositioner : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnIsInteractingWithAnyRespawnableInteractableChangedEvent; // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<class ARespawnableInteractable*>                    _respawnableInteractables;                               // 0x00C8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_336B[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (PADDING)

	public:
		void Authority_OnIsInteractingChangedEvent(class ARespawnableInteractable* RespawnableInteractable, bool IsInteracting);
		TArray<class ARespawnableInteractable*> Authority_GetRespawnables();
		static UClass* StaticClass();
	};

	/**
	 * Class SpecialEventUtilities.RespawnableStrategy
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class URespawnableStrategy : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SpecialEventUtilities.RespawnFurthestFromPlayersStrategy
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class URespawnFurthestFromPlayersStrategy : public URespawnableStrategy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SpecialEventUtilities.RespawningEventUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class URespawningEventUtilities : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SpecialEventUtilities.TimedRespawnableTrigger
	 * Size -> 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
	 */
	class UTimedRespawnableTrigger : public URespawnableTrigger
	{
	public:
		class URespawningEventComponent*                           _respawningEventComponent;                               // 0x00B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RC2J[0x40];                                  // 0x00C0(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

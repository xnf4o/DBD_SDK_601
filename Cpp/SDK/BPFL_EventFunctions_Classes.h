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
	 * BlueprintGeneratedClass BPFL_EventFunctions.BPFL_EventFunctions_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBPFL_EventFunctions_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UnregisterEventListener(const struct FGameEventDispatcherHandleBP& Game_Event_Delegate_Handle, class UObject* __WorldContext);
		void STATIC_LocallyDispatchEvent(const struct FGameplayTag& gameEventType, class ADBDPlayer* Instigator, class AActor* Target, float Custom_Value, class UObject* __WorldContext);
		void STATIC_RemotelyDispatchEvent(const struct FGameplayTag& gameEventType, class ADBDPlayer* Instigator, class AActor* Target, float Custom_Value, class UObject* __WorldContext);
		void STATIC_RegisterEventListener(const class FScriptDelegate& Game_Event_Delegate, const struct FGameplayTag& Filter, class UObject* __WorldContext, struct FGameEventDispatcherHandleBP* GameEventDispatcherHandle);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

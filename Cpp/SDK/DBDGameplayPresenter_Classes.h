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
	 * Class DBDGameplayPresenter.SurvivorStatusComponent
	 * Size -> 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
	 */
	class USurvivorStatusComponent : public UActorComponent
	{
	public:
		class ACamperPlayer*                                       _survivor;                                               // 0x00B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W4XG[0x30];                                  // 0x00C0(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnValidatedInteractionStarted();
		void OnValidatedInteractionEnded();
		void OnSuvivorDamaged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);
		void OnSurivorStatusChange();
		void OnRunningAndMovementChanged(bool IsRunningAndMoving);
		void OnPlayerImmobilizeStateChanged(ECamperImmobilizeState oldImmobilizeState, ECamperImmobilizeState newImmobilizeState);
		void OnHookedStateChanged();
		void OnGuidedStateChanged();
		void OnCrouchChanged(bool isCrouched);
		bool IsSleeping();
		bool IsRunning();
		bool IsInjured();
		bool IsHooked();
		bool IsHiding();
		bool IsHealing();
		bool IsHarpooned();
		bool IsGettingStrangled();
		bool IsGettingSacrificed();
		bool IsDying();
		bool IsDead();
		bool IsCrouching();
		bool IsCaptured();
		void GetMovementSpeed(float* currentMovementSpeed, float* percentMovementSpeed, float* maximumMovementSpeed);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

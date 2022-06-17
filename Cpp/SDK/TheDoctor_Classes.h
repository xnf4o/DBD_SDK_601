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
	 * Class TheDoctor.DoctorAnimInstance
	 * Size -> 0x0000 (FullSize[0x0600] - InheritedSize[0x0600])
	 */
	class UDoctorAnimInstance : public UKillerAnimInstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.MadnessSurvivorSubAnimInstance
	 * Size -> 0x0010 (FullSize[0x0550] - InheritedSize[0x0540])
	 */
	class UMadnessSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		bool                                                       _isTotallyInsane;                                        // 0x0540(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QHLW[0xF];                                   // 0x0541(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.Overcharge
	 * Size -> 0x0028 (FullSize[0x03F8] - InheritedSize[0x03D0])
	 */
	class UOvercharge : public UPerk
	{
	public:
		float                                                      _skillCheckFailurePenalty[0x3];                          // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VZ2A[0x1C];                                  // 0x03DC(0x001C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.SurvivorMadnessEffect
	 * Size -> 0x00E0 (FullSize[0x0430] - InheritedSize[0x0350])
	 */
	class USurvivorMadnessEffect : public UStatusEffect
	{
	public:
		unsigned char                                              UnknownData_9DOR[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _madness;                                                // 0x0358(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5JIA[0xD4];                                  // 0x035C(0x00D4) MISSED OFFSET (PADDING)

	public:
		void Server_AddMadness(float madnessToAdd);
		void OnStaticBlastReceived_BP();
		void OnStaticBlastReceived();
		void OnSnapOutOfIt_BP();
		void OnSnapOutOfIt();
		void OnShockTherapyReceived_BP();
		void OnShockTherapyReceived();
		void OnMadnessTierUp_BP();
		void OnMadnessTierDown_BP();
		void Multicast_UpdateMadnessPlayerTags(int32_t newMadness);
		void Multicast_OnMadnessTierUp();
		void Multicast_OnMadnessTierDown();
		float GetMadnessValue();
		int32_t GetMadnessTier();
		void ChangeMadnessAudio_Cosmetic(int32_t madnessTier);
		void Authority_OnMadnessScreamTimerEnd_BP();
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.TheDoctorUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTheDoctorUtilities : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsTotallyInsane(class ADBDPlayer* Player);
		class USurvivorMadnessEffect* STATIC_GetSurvivorMadnessEffect(class ADBDPlayer* Player);
		int32_t STATIC_GetMadnessTier(class ADBDPlayer* Player);
		bool STATIC_CanGainInsanity(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

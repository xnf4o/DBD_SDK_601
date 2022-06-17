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
	 * BlueprintGeneratedClass BP_Menu_Slasher13.BP_Menu_Slasher13_C
	 * Size -> 0x0089 (FullSize[0x0741] - InheritedSize[0x06B8])
	 */
	class ABP_Menu_Slasher13_C : public ABP_Menu_BaseSlasher_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_Audio_KLR_13_C*                                  BP_Audio_KLR_14;                                         // 0x06C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_RedStainComponent_C*                             RedStainComponent;                                       // 0x06C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Show_Sword_WPO_964716F24F8255A0C9F98FA0967E8ECF;         // 0x06D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Show_Sword_Shard_Disappear_964716F24F8255A0C9F98FA0967E8ECF; // 0x06D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Show_Sword_Sword_Appear_964716F24F8255A0C9F98FA0967E8ECF; // 0x06D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Show_Sword__Direction_964716F24F8255A0C9F98FA0967E8ECF;  // 0x06DC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IBP5[0x3];                                   // 0x06DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Show_Sword;                                              // 0x06E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Timeline_2_Size_548F5340441650D05914669F2F45DC7E;        // 0x06E8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Timeline_2_Particle_Location_548F5340441650D05914669F2F45DC7E; // 0x06F4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_2__Direction_548F5340441650D05914669F2F45DC7E;  // 0x0700(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OG56[0x7];                                   // 0x0701(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_3;                                              // 0x0708(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Make_Sword_Disappear_Shard_Size_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x0710(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Make_Sword_Disappear_Particle_Position_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x071C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Make_Sword_Disappear_WPO_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x0728(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Make_Sword_Disappear_Shard_Appear_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x072C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Make_Sword_Disappear_Weapon_Disappear_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x0730(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Make_Sword_Disappear__Direction_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x0734(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XH9M[0x3];                                   // 0x0735(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Make_Sword_Disappear;                                    // 0x0738(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SwordShouldBeVisible;                                    // 0x0740(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetShard(class USkeletalMeshComponent** Shard);
		void GetSword(class USkeletalMeshComponent** Sword);
		void Make_Sword_Disappear__FinishedFunc();
		void Make_Sword_Disappear__UpdateFunc();
		void Show_Sword__FinishedFunc();
		void Show_Sword__UpdateFunc();
		void Timeline_2__FinishedFunc();
		void Timeline_2__UpdateFunc();
		void Make_Weapon_Appear();
		void Make_Weapon_Disappear();
		void MakeSwordVisible();
		void MakeSwordInvisible();
		void OnCustomizationUpdated();
		void ReceiveBeginPlay();
		void OnAttack_StopTimeline();
		void ExecuteUbergraph_BP_Menu_Slasher13(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

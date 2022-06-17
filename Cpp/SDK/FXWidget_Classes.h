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
	 * Class FXWidget.FXUserWidgetBase
	 * Size -> 0x0060 (FullSize[0x02F8] - InheritedSize[0x0298])
	 */
	class UFXUserWidgetBase : public UUserWidget
	{
	public:
		class UNiagaraSystem*                                      NiagaraSystem;                                           // 0x0298(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isFillingWidget;                                         // 0x02A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FFZJ[0x17];                                  // 0x02A1(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFXWidgetPlayer                                     _particlePlayer;                                         // 0x02B8(0x0010) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QKXO[0x30];                                  // 0x02C8(0x0030) MISSED OFFSET (PADDING)

	public:
		void StopParticle();
		void PlayParticle(float StartAtTime, int32_t NumLoopsToPlay);
		class UNiagaraComponent* GetNiagaraFX();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

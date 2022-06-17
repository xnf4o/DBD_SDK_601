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
	 * BlueprintGeneratedClass LevelGenerator.LevelGenerator_C
	 * Size -> 0x0014 (FullSize[0x0FC4] - InheritedSize[0x0FB0])
	 */
	class ALevelGenerator_C : public AProceduralLevelBuilder
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0FB0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0FB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      initialMistDensity;                                      // 0x0FC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RemoveMist();
		void ApplyMist(float Modifier);
		void ExecuteUbergraph_LevelGenerator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

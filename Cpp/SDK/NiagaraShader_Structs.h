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
	 * Enum NiagaraShader.FNiagaraCompileEventSeverity
	 */
	enum class EFNiagaraCompileEventSeverity : uint8_t
	{
		FNiagaraCompileEventSeverity__Log                              = 0,
		FNiagaraCompileEventSeverity__Warning                          = 1,
		FNiagaraCompileEventSeverity__Error                            = 2,
		FNiagaraCompileEventSeverity__FNiagaraCompileEventSeverity_MAX = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct NiagaraShader.SimulationStageMetaData
	 * Size -> 0x0038
	 */
	struct FSimulationStageMetaData
	{
	public:
		class FName                                                SimulationStageName;                                     // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                IterationSource;                                         // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSpawnOnly : 1;                                          // 0x0018(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bWritesParticles : 1;                                    // 0x0018(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPartialParticleUpdate : 1;                              // 0x0018(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FAKH[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        OutputDestinations;                                      // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    MinStage;                                                // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxStage;                                                // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
	 * Size -> 0x0030
	 */
	struct FNiagaraDataInterfaceGeneratedFunction
	{
	public:
		unsigned char                                              UnknownData_764Y[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
	 * Size -> 0x0030
	 */
	struct FNiagaraDataInterfaceGPUParamInfo
	{
	public:
		class FString                                              DataInterfaceHLSLSymbol;                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DIClassName;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraDataInterfaceGeneratedFunction>      GeneratedFunctions;                                      // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NiagaraShader.NiagaraCompileEvent
	 * Size -> 0x0060
	 */
	struct FNiagaraCompileEvent
	{
	public:
		EFNiagaraCompileEventSeverity                              Severity;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z2QE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Message;                                                 // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ShortDescription;                                        // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDismissable;                                            // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PLG4[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               NodeGuid;                                                // 0x002C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               PinGuid;                                                 // 0x003C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3M0P[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGuid>                                       StackGuids;                                              // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

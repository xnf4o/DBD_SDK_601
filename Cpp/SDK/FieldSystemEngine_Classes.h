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
	 * Class FieldSystemEngine.FieldSystemActor
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class AFieldSystemActor : public AActor
	{
	public:
		class UFieldSystemComponent*                               FieldSystemComponent;                                    // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.FieldSystem
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UFieldSystem : public UObject
	{
	public:
		unsigned char                                              UnknownData_J9RS[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.FieldSystemComponent
	 * Size -> 0x00D0 (FullSize[0x0550] - InheritedSize[0x0480])
	 */
	class UFieldSystemComponent : public UPrimitiveComponent
	{
	public:
		class UFieldSystem*                                        FieldSystem;                                             // 0x0480(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsWorldField;                                           // 0x0488(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsChaosField;                                           // 0x0489(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F9BC[0x6];                                   // 0x048A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SupportedSolvers[0x10];                                  // 0x048A(0x0010) UNKNOWN PROPERTY: ArrayProperty
		struct FFieldObjectCommands                                ConstructionCommands;                                    // 0x04A0(0x0030) ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FFieldObjectCommands                                BufferCommands;                                          // 0x04D0(0x0030) ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OT1D[0x50];                                  // 0x0500(0x0050) MISSED OFFSET (PADDING)

	public:
		void ResetFieldSystem();
		void RemovePersistentFields();
		void ApplyUniformVectorFalloffForce(bool Enabled, const struct FVector& position, const struct FVector& Direction, float Radius, float Magnitude);
		void ApplyStrainField(bool Enabled, const struct FVector& position, float Radius, float Magnitude, int32_t Iterations);
		void ApplyStayDynamicField(bool Enabled, const struct FVector& position, float Radius);
		void ApplyRadialVectorFalloffForce(bool Enabled, const struct FVector& position, float Radius, float Magnitude);
		void ApplyRadialForce(bool Enabled, const struct FVector& position, float Magnitude);
		void ApplyPhysicsField(bool Enabled, EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
		void ApplyLinearForce(bool Enabled, const struct FVector& Direction, float Magnitude);
		void AddPersistentField(bool Enabled, EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
		void AddFieldCommand(bool Enabled, EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.FieldSystemMetaData
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UFieldSystemMetaData : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.FieldSystemMetaDataIteration
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
	{
	public:
		int32_t                                                    Iterations;                                              // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_38X8[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	public:
		class UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
	{
	public:
		EFieldResolutionType                                       ResolutionType;                                          // 0x00B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GCYY[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (PADDING)

	public:
		class UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(EFieldResolutionType ResolutionType);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.FieldSystemMetaDataFilter
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UFieldSystemMetaDataFilter : public UFieldSystemMetaData
	{
	public:
		EFieldFilterType                                           FilterType;                                              // 0x00B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GELM[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (PADDING)

	public:
		class UFieldSystemMetaDataFilter* SetMetaDataFilterType(EFieldFilterType FilterType);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.FieldNodeBase
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UFieldNodeBase : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.FieldNodeInt
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UFieldNodeInt : public UFieldNodeBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.FieldNodeFloat
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UFieldNodeFloat : public UFieldNodeBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.FieldNodeVector
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UFieldNodeVector : public UFieldNodeBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.UniformInteger
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UUniformInteger : public UFieldNodeInt
	{
	public:
		int32_t                                                    Magnitude;                                               // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W901[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	public:
		class UUniformInteger* SetUniformInteger(int32_t Magnitude);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.RadialIntMask
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class URadialIntMask : public UFieldNodeInt
	{
	public:
		float                                                      Radius;                                                  // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             position;                                                // 0x00BC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InteriorValue;                                           // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExteriorValue;                                           // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESetMaskConditionType                                      SetMaskCondition;                                        // 0x00D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1NXT[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)

	public:
		class URadialIntMask* SetRadialIntMask(float Radius, const struct FVector& position, int32_t InteriorValue, int32_t ExteriorValue, ESetMaskConditionType SetMaskConditionIn);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.UniformScalar
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UUniformScalar : public UFieldNodeFloat
	{
	public:
		float                                                      Magnitude;                                               // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FH3X[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	public:
		class UUniformScalar* SetUniformScalar(float Magnitude);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.WaveScalar
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class UWaveScalar : public UFieldNodeFloat
	{
	public:
		float                                                      Magnitude;                                               // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             position;                                                // 0x00BC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Wavelength;                                              // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Period;                                                  // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWaveFunctionType                                          Function;                                                // 0x00D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFieldFalloffType                                          Falloff;                                                 // 0x00D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CEJN[0x6];                                   // 0x00D2(0x0006) MISSED OFFSET (PADDING)

	public:
		class UWaveScalar* SetWaveScalar(float Magnitude, const struct FVector& position, float Wavelength, float Period, float Time, EWaveFunctionType Function, EFieldFalloffType Falloff);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.RadialFalloff
	 * Size -> 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
	 */
	class URadialFalloff : public UFieldNodeFloat
	{
	public:
		float                                                      Magnitude;                                               // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRange;                                                // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRange;                                                // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Default;                                                 // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             position;                                                // 0x00CC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFieldFalloffType                                          Falloff;                                                 // 0x00D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4YQV[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (PADDING)

	public:
		class URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, const struct FVector& position, EFieldFalloffType Falloff);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.PlaneFalloff
	 * Size -> 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
	 */
	class UPlaneFalloff : public UFieldNodeFloat
	{
	public:
		float                                                      Magnitude;                                               // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRange;                                                // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRange;                                                // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Default;                                                 // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             position;                                                // 0x00CC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x00D8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFieldFalloffType                                          Falloff;                                                 // 0x00E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_745W[0x3];                                   // 0x00E5(0x0003) MISSED OFFSET (PADDING)

	public:
		class UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, const struct FVector& position, const struct FVector& Normal, EFieldFalloffType Falloff);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.BoxFalloff
	 * Size -> 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
	 */
	class UBoxFalloff : public UFieldNodeFloat
	{
	public:
		float                                                      Magnitude;                                               // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRange;                                                // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRange;                                                // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Default;                                                 // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M9NM[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x00D0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EFieldFalloffType                                          Falloff;                                                 // 0x0100(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JANL[0xF];                                   // 0x0101(0x000F) MISSED OFFSET (PADDING)

	public:
		class UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, const struct FTransform& Transform, EFieldFalloffType Falloff);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.NoiseField
	 * Size -> 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
	 */
	class UNoiseField : public UFieldNodeFloat
	{
	public:
		float                                                      MinRange;                                                // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRange;                                                // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x00C0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		class UNoiseField* SetNoiseField(float MinRange, float MaxRange, const struct FTransform& Transform);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.UniformVector
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UUniformVector : public UFieldNodeVector
	{
	public:
		float                                                      Magnitude;                                               // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x00BC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class UUniformVector* SetUniformVector(float Magnitude, const struct FVector& Direction);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.RadialVector
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class URadialVector : public UFieldNodeVector
	{
	public:
		float                                                      Magnitude;                                               // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             position;                                                // 0x00BC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class URadialVector* SetRadialVector(float Magnitude, const struct FVector& position);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.RandomVector
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class URandomVector : public UFieldNodeVector
	{
	public:
		float                                                      Magnitude;                                               // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OGC0[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	public:
		class URandomVector* SetRandomVector(float Magnitude);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.OperatorField
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class UOperatorField : public UFieldNodeBase
	{
	public:
		float                                                      Magnitude;                                               // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QBP4[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFieldNodeBase*                                      RightField;                                              // 0x00C0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFieldNodeBase*                                      LeftField;                                               // 0x00C8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFieldOperationType                                        Operation;                                               // 0x00D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ZTR[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)

	public:
		class UOperatorField* SetOperatorField(float Magnitude, class UFieldNodeBase* LeftField, class UFieldNodeBase* RightField, EFieldOperationType Operation);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.ToIntegerField
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UToIntegerField : public UFieldNodeInt
	{
	public:
		class UFieldNodeFloat*                                     FloatField;                                              // 0x00B8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class UToIntegerField* SetToIntegerField(class UFieldNodeFloat* FloatField);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.ToFloatField
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UToFloatField : public UFieldNodeFloat
	{
	public:
		class UFieldNodeInt*                                       IntField;                                                // 0x00B8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class UToFloatField* SetToFloatField(class UFieldNodeInt* IntegerField);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.CullingField
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UCullingField : public UFieldNodeBase
	{
	public:
		class UFieldNodeBase*                                      Culling;                                                 // 0x00B8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFieldNodeBase*                                      Field;                                                   // 0x00C0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFieldCullingOperationType                                 Operation;                                               // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_571H[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (PADDING)

	public:
		class UCullingField* SetCullingField(class UFieldNodeBase* Culling, class UFieldNodeBase* Field, EFieldCullingOperationType Operation);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.ReturnResultsTerminal
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UReturnResultsTerminal : public UFieldNodeBase
	{
	public:
		class UReturnResultsTerminal* SetReturnResultsTerminal();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

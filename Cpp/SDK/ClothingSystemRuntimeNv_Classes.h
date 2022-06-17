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
	 * Class ClothingSystemRuntimeNv.ClothConfigNv
	 * Size -> 0x0118 (FullSize[0x0148] - InheritedSize[0x0030])
	 */
	class UClothConfigNv : public UClothConfigCommon
	{
	public:
		EClothingWindMethodNv                                      ClothingWindMethod;                                      // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FPH0[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FClothConstraintSetupNv                             VerticalConstraint;                                      // 0x0034(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FClothConstraintSetupNv                             HorizontalConstraint;                                    // 0x0044(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FClothConstraintSetupNv                             BendConstraint;                                          // 0x0054(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FClothConstraintSetupNv                             ShearConstraint;                                         // 0x0064(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      SelfCollisionRadius;                                     // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SelfCollisionStiffness;                                  // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SelfCollisionCullScale;                                  // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Damping;                                                 // 0x0080(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Friction;                                                // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindDragCoefficient;                                     // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindLiftCoefficient;                                     // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LinearDrag;                                              // 0x0098(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularDrag;                                             // 0x00A4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LinearInertiaScale;                                      // 0x00B0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularInertiaScale;                                     // 0x00BC(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CentrifugalInertiaScale;                                 // 0x00C8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SolverFrequency;                                         // 0x00D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StiffnessFrequency;                                      // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GravityScale;                                            // 0x00DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             GravityOverride;                                         // 0x00E0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseGravityOverride;                                     // 0x00EC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6B9V[0x3];                                   // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TetherStiffness;                                         // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TetherLimit;                                             // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionThickness;                                      // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimDriveSpringStiffness;                                // 0x00FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimDriveDamperStiffness;                                // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EClothingWindMethod_Legacy                                 WindMethod;                                              // 0x0104(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R7QH[0x3];                                   // 0x0105(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FClothConstraintSetup_Legacy                        VerticalConstraintConfig;                                // 0x0108(0x0010) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		struct FClothConstraintSetup_Legacy                        HorizontalConstraintConfig;                              // 0x0118(0x0010) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		struct FClothConstraintSetup_Legacy                        BendConstraintConfig;                                    // 0x0128(0x0010) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		struct FClothConstraintSetup_Legacy                        ShearConstraintConfig;                                   // 0x0138(0x0010) Deprecated, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UClothingSimulationFactoryNv : public UClothingSimulationFactory
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
	{
	public:
		unsigned char                                              UnknownData_7H5J[0x10];                                  // 0x0098(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetAnimDriveDamperStiffness(float InStiffness);
		static UClass* StaticClass();
	};

	/**
	 * Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
	 * Size -> 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
	 */
	class UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy
	{
	public:
		TArray<float>                                              MaxDistances;                                            // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              BackstopDistances;                                       // 0x00F8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              BackstopRadiuses;                                        // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              AnimDriveMultipliers;                                    // 0x0118(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

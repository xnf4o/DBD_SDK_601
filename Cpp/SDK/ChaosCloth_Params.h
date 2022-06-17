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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale
	 */
	struct UChaosClothingInteractor_SetVelocityScale_Params
	{
	public:
		struct FVector                                             LinearVelocityScale;                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AngularVelocityScale;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FictitiousAngularScale;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear
	 */
	struct UChaosClothingInteractor_SetMaterialLinear_Params
	{
	public:
		float                                                      EdgeStiffness;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BendingStiffness;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AreaStiffness;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear
	 */
	struct UChaosClothingInteractor_SetLongRangeAttachmentLinear_Params
	{
	public:
		float                                                      TetherStiffness;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment
	 */
	struct UChaosClothingInteractor_SetLongRangeAttachment_Params
	{
	public:
		struct FVector2D                                           TetherStiffness;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosCloth.ChaosClothingInteractor.SetGravity
	 */
	struct UChaosClothingInteractor_SetGravity_Params
	{
	public:
		float                                                      GravityScale;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsGravityOverridden;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             GravityOverride;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosCloth.ChaosClothingInteractor.SetDamping
	 */
	struct UChaosClothingInteractor_SetDamping_Params
	{
	public:
		float                                                      DampingCoefficient;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosCloth.ChaosClothingInteractor.SetCollision
	 */
	struct UChaosClothingInteractor_SetCollision_Params
	{
	public:
		float                                                      CollisionThickness;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FrictionCoefficient;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseCCD;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SelfCollisionThickness;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear
	 */
	struct UChaosClothingInteractor_SetAnimDriveLinear_Params
	{
	public:
		float                                                      AnimDriveStiffness;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive
	 */
	struct UChaosClothingInteractor_SetAnimDrive_Params
	{
	public:
		struct FVector2D                                           AnimDriveStiffness;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           AnimDriveDamping;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics
	 */
	struct UChaosClothingInteractor_SetAerodynamics_Params
	{
	public:
		float                                                      DragCoefficient;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LiftCoefficient;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WindVelocity;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport
	 */
	struct UChaosClothingInteractor_ResetAndTeleport_Params
	{
	public:
		bool                                                       bReset;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTeleport;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

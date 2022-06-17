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
	 * Function PhysicsUtilities.DynamicCapsuleResizerComponent.SetShrinkingEnabled
	 */
	struct UDynamicCapsuleResizerComponent_SetShrinkingEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysicsUtilities.DynamicCapsuleResizerComponent.OnRep_IsShrinkingAlwaysEnabled
	 */
	struct UDynamicCapsuleResizerComponent_OnRep_IsShrinkingAlwaysEnabled_Params
	{	};

	/**
	 * Function PhysicsUtilities.DynamicCapsuleResizerComponent.OnHit
	 */
	struct UDynamicCapsuleResizerComponent_OnHit_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysicsUtilities.PrimitiveCollection.Remove
	 */
	struct UPrimitiveCollection_Remove_Params
	{
	public:
		class UPrimitiveComponent*                                 Primitive;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysicsUtilities.PrimitiveCollection.Add
	 */
	struct UPrimitiveCollection_Add_Params
	{
	public:
		class UPrimitiveComponent*                                 Primitive;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysicsUtilities.PrimitivesRegistererComponent.SetPrimitives
	 */
	struct UPrimitivesRegistererComponent_SetPrimitives_Params
	{
	public:
		TArray<class UPrimitiveComponent*>                         primitives;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

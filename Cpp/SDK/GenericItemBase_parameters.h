#pragma once

// Name: Torchlight3, Version: 1.0.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function GenericItemBase.GenericItemBase_C.SetTickPoseOptimization
struct AGenericItemBase_C_SetTickPoseOptimization_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GenericItemBase.GenericItemBase_C.DoFlippy
struct AGenericItemBase_C_DoFlippy_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh2;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                           FlippyAnimation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GenericItemBase.GenericItemBase_C.ReceiveActorBeginCursorOver
struct AGenericItemBase_C_ReceiveActorBeginCursorOver_Params
{
};

// Function GenericItemBase.GenericItemBase_C.ReceiveActorEndCursorOver
struct AGenericItemBase_C_ReceiveActorEndCursorOver_Params
{
};

// Function GenericItemBase.GenericItemBase_C.ExecuteUbergraph_GenericItemBase
struct AGenericItemBase_C_ExecuteUbergraph_GenericItemBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

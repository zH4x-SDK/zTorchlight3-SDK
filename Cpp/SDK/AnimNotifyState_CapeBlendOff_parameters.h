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

// Function AnimNotifyState_CapeBlendOff.AnimNotifyState_CapeBlendOff_C.Received_NotifyTick
struct UAnimNotifyState_CapeBlendOff_C_Received_NotifyTick_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                           Animation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FrameDeltaTime;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AnimNotifyState_CapeBlendOff.AnimNotifyState_CapeBlendOff_C.OnRep_AnimBP
struct UAnimNotifyState_CapeBlendOff_C_OnRep_AnimBP_Params
{
};

// Function AnimNotifyState_CapeBlendOff.AnimNotifyState_CapeBlendOff_C.Received_NotifyEnd
struct UAnimNotifyState_CapeBlendOff_C_Received_NotifyEnd_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                           Animation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AnimNotifyState_CapeBlendOff.AnimNotifyState_CapeBlendOff_C.Received_NotifyBegin
struct UAnimNotifyState_CapeBlendOff_C_Received_NotifyBegin_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                           Animation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TotalDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AnimNotifyState_CapeBlendOff.AnimNotifyState_CapeBlendOff_C.Set Cape Blend
struct UAnimNotifyState_CapeBlendOff_C_Set_Cape_Blend_Params
{
	float                                              AutoCapeBlend;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTLAnimInstance*                             TLAnimInst;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

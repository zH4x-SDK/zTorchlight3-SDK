// Name: Torchlight3, Version: 4.26.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function AnimNotifyState_CapeBlendOff.AnimNotifyState_CapeBlendOff_C.Received_NotifyTick
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*       Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          FrameDeltaTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAnimNotifyState_CapeBlendOff_C::Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyState_CapeBlendOff.AnimNotifyState_CapeBlendOff_C.Received_NotifyTick");

	UAnimNotifyState_CapeBlendOff_C_Received_NotifyTick_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.FrameDeltaTime = FrameDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimNotifyState_CapeBlendOff.AnimNotifyState_CapeBlendOff_C.OnRep_AnimBP
// (BlueprintCallable, BlueprintEvent)
void UAnimNotifyState_CapeBlendOff_C::OnRep_AnimBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyState_CapeBlendOff.AnimNotifyState_CapeBlendOff_C.OnRep_AnimBP");

	UAnimNotifyState_CapeBlendOff_C_OnRep_AnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimNotifyState_CapeBlendOff.AnimNotifyState_CapeBlendOff_C.Received_NotifyEnd
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*       Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAnimNotifyState_CapeBlendOff_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyState_CapeBlendOff.AnimNotifyState_CapeBlendOff_C.Received_NotifyEnd");

	UAnimNotifyState_CapeBlendOff_C_Received_NotifyEnd_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimNotifyState_CapeBlendOff.AnimNotifyState_CapeBlendOff_C.Received_NotifyBegin
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*       Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TotalDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAnimNotifyState_CapeBlendOff_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyState_CapeBlendOff.AnimNotifyState_CapeBlendOff_C.Received_NotifyBegin");

	UAnimNotifyState_CapeBlendOff_C_Received_NotifyBegin_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.TotalDuration = TotalDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimNotifyState_CapeBlendOff.AnimNotifyState_CapeBlendOff_C.Set Cape Blend
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          AutoCapeBlend                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTLAnimInstance*         TLAnimInst                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAnimNotifyState_CapeBlendOff_C::Set_Cape_Blend(float AutoCapeBlend, class UTLAnimInstance** TLAnimInst, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyState_CapeBlendOff.AnimNotifyState_CapeBlendOff_C.Set Cape Blend");

	UAnimNotifyState_CapeBlendOff_C_Set_Cape_Blend_Params params;
	params.AutoCapeBlend = AutoCapeBlend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TLAnimInst != nullptr)
		*TLAnimInst = params.TLAnimInst;
	if (Success != nullptr)
		*Success = params.Success;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

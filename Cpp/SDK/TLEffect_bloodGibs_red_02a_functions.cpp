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

// Function TLEffect_bloodGibs_red_02a.TLEffect_bloodGibs_red_02a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATLEffect_bloodGibs_red_02a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TLEffect_bloodGibs_red_02a.TLEffect_bloodGibs_red_02a_C.UserConstructionScript");

	ATLEffect_bloodGibs_red_02a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TLEffect_bloodGibs_red_02a.TLEffect_bloodGibs_red_02a_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ATLEffect_bloodGibs_red_02a_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TLEffect_bloodGibs_red_02a.TLEffect_bloodGibs_red_02a_C.Timeline_0__FinishedFunc");

	ATLEffect_bloodGibs_red_02a_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TLEffect_bloodGibs_red_02a.TLEffect_bloodGibs_red_02a_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ATLEffect_bloodGibs_red_02a_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TLEffect_bloodGibs_red_02a.TLEffect_bloodGibs_red_02a_C.Timeline_0__UpdateFunc");

	ATLEffect_bloodGibs_red_02a_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TLEffect_bloodGibs_red_02a.TLEffect_bloodGibs_red_02a_C.BndEvt__vfx_bloodGibs_decalDriver_primary_01_K2Node_ComponentBoundEvent_2_ParticleDeathSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ParticleTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATLEffect_bloodGibs_red_02a_C::BndEvt__vfx_bloodGibs_decalDriver_primary_01_K2Node_ComponentBoundEvent_2_ParticleDeathSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function TLEffect_bloodGibs_red_02a.TLEffect_bloodGibs_red_02a_C.BndEvt__vfx_bloodGibs_decalDriver_primary_01_K2Node_ComponentBoundEvent_2_ParticleDeathSignature__DelegateSignature");

	ATLEffect_bloodGibs_red_02a_C_BndEvt__vfx_bloodGibs_decalDriver_primary_01_K2Node_ComponentBoundEvent_2_ParticleDeathSignature__DelegateSignature_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TLEffect_bloodGibs_red_02a.TLEffect_bloodGibs_red_02a_C.ExecuteUbergraph_TLEffect_bloodGibs_red_02a
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATLEffect_bloodGibs_red_02a_C::ExecuteUbergraph_TLEffect_bloodGibs_red_02a(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TLEffect_bloodGibs_red_02a.TLEffect_bloodGibs_red_02a_C.ExecuteUbergraph_TLEffect_bloodGibs_red_02a");

	ATLEffect_bloodGibs_red_02a_C_ExecuteUbergraph_TLEffect_bloodGibs_red_02a_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

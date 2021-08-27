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

// Function SkillSlotAssignment.SkillSlotAssignment_C.GetSkillSlotListWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkillListWidget*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkillListWidget* USkillSlotAssignment_C::GetSkillSlotListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSlotAssignment.SkillSlotAssignment_C.GetSkillSlotListWidget");

	USkillSlotAssignment_C_GetSkillSlotListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillSlotAssignment.SkillSlotAssignment_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USkillSlotAssignment_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSlotAssignment.SkillSlotAssignment_C.Construct");

	USkillSlotAssignment_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SkillSlotAssignment.SkillSlotAssignment_C.ExecuteUbergraph_SkillSlotAssignment
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkillSlotAssignment_C::ExecuteUbergraph_SkillSlotAssignment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSlotAssignment.SkillSlotAssignment_C.ExecuteUbergraph_SkillSlotAssignment");

	USkillSlotAssignment_C_ExecuteUbergraph_SkillSlotAssignment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

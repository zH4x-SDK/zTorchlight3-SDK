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

// Function SkillSlotPicker.SkillSlotPicker_C.GetIconImage
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAsyncImage*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAsyncImage* USkillSlotPicker_C::GetIconImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSlotPicker.SkillSlotPicker_C.GetIconImage");

	USkillSlotPicker_C_GetIconImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillSlotPicker.SkillSlotPicker_C.Get_LockNumber_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText USkillSlotPicker_C::Get_LockNumber_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSlotPicker.SkillSlotPicker_C.Get_LockNumber_Text_1");

	USkillSlotPicker_C_Get_LockNumber_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillSlotPicker.SkillSlotPicker_C.Get_Lock_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility USkillSlotPicker_C::Get_Lock_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSlotPicker.SkillSlotPicker_C.Get_Lock_Visibility_1");

	USkillSlotPicker_C_Get_Lock_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillSlotPicker.SkillSlotPicker_C.GetDescriptionAnchor
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenuAnchor*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMenuAnchor* USkillSlotPicker_C::GetDescriptionAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSlotPicker.SkillSlotPicker_C.GetDescriptionAnchor");

	USkillSlotPicker_C_GetDescriptionAnchor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillSlotPicker.SkillSlotPicker_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply USkillSlotPicker_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSlotPicker.SkillSlotPicker_C.OnMouseButtonDown");

	USkillSlotPicker_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillSlotPicker.SkillSlotPicker_C.GetSkillHotkey
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkillHotkey*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkillHotkey* USkillSlotPicker_C::GetSkillHotkey()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSlotPicker.SkillSlotPicker_C.GetSkillHotkey");

	USkillSlotPicker_C_GetSkillHotkey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

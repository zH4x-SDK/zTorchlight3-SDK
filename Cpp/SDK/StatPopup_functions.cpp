// Name: Torchlight3, Version: 1.0.0

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

// Function StatPopup.StatPopup_C.GetPetAttackTraitsList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStatRowListWidget*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UStatRowListWidget* UStatPopup_C::GetPetAttackTraitsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatPopup.StatPopup_C.GetPetAttackTraitsList");

	UStatPopup_C_GetPetAttackTraitsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StatPopup.StatPopup_C.GetPetAttackTypeTraitsList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStatDamageRowListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UStatDamageRowListWidget* UStatPopup_C::GetPetAttackTypeTraitsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatPopup.StatPopup_C.GetPetAttackTypeTraitsList");

	UStatPopup_C_GetPetAttackTypeTraitsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StatPopup.StatPopup_C.GetPetDefenseTraitsList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStatRowListWidget*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UStatRowListWidget* UStatPopup_C::GetPetDefenseTraitsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatPopup.StatPopup_C.GetPetDefenseTraitsList");

	UStatPopup_C_GetPetDefenseTraitsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StatPopup.StatPopup_C.GetPetDefenseTypeTraitsList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStatRowListWidget*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UStatRowListWidget* UStatPopup_C::GetPetDefenseTypeTraitsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatPopup.StatPopup_C.GetPetDefenseTypeTraitsList");

	UStatPopup_C_GetPetDefenseTypeTraitsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StatPopup.StatPopup_C.GetPetMiscTraitsList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStatRowListWidget*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UStatRowListWidget* UStatPopup_C::GetPetMiscTraitsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatPopup.StatPopup_C.GetPetMiscTraitsList");

	UStatPopup_C_GetPetMiscTraitsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StatPopup.StatPopup_C.GetPetSkillTraitsList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStatCategoryListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UStatCategoryListWidget* UStatPopup_C::GetPetSkillTraitsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatPopup.StatPopup_C.GetPetSkillTraitsList");

	UStatPopup_C_GetPetSkillTraitsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StatPopup.StatPopup_C.GetMiscTraitsList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStatRowListWidget*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UStatRowListWidget* UStatPopup_C::GetMiscTraitsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatPopup.StatPopup_C.GetMiscTraitsList");

	UStatPopup_C_GetMiscTraitsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StatPopup.StatPopup_C.GetSkillTraitsList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStatCategoryListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UStatCategoryListWidget* UStatPopup_C::GetSkillTraitsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatPopup.StatPopup_C.GetSkillTraitsList");

	UStatPopup_C_GetSkillTraitsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StatPopup.StatPopup_C.GetDefenseDividerVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UStatPopup_C::GetDefenseDividerVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatPopup.StatPopup_C.GetDefenseDividerVisibility");

	UStatPopup_C_GetDefenseDividerVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StatPopup.StatPopup_C.GetAttackDividerVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UStatPopup_C::GetAttackDividerVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatPopup.StatPopup_C.GetAttackDividerVisibility");

	UStatPopup_C_GetAttackDividerVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StatPopup.StatPopup_C.GetCannonMiscTraitsList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStatRowListWidget*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UStatRowListWidget* UStatPopup_C::GetCannonMiscTraitsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatPopup.StatPopup_C.GetCannonMiscTraitsList");

	UStatPopup_C_GetCannonMiscTraitsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StatPopup.StatPopup_C.GetDefenseMiscTraitsList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStatRowListWidget*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UStatRowListWidget* UStatPopup_C::GetDefenseMiscTraitsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatPopup.StatPopup_C.GetDefenseMiscTraitsList");

	UStatPopup_C_GetDefenseMiscTraitsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StatPopup.StatPopup_C.GetAttackMiscTraitsList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStatRowListWidget*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UStatRowListWidget* UStatPopup_C::GetAttackMiscTraitsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatPopup.StatPopup_C.GetAttackMiscTraitsList");

	UStatPopup_C_GetAttackMiscTraitsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StatPopup.StatPopup_C.GetCannonAttackTypeList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStatDamageRowListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UStatDamageRowListWidget* UStatPopup_C::GetCannonAttackTypeList()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatPopup.StatPopup_C.GetCannonAttackTypeList");

	UStatPopup_C_GetCannonAttackTypeList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StatPopup.StatPopup_C.IsCannonSheetVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UStatPopup_C::IsCannonSheetVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatPopup.StatPopup_C.IsCannonSheetVisible");

	UStatPopup_C_IsCannonSheetVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StatPopup.StatPopup_C.GetMainHandAttackTypeList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStatDamageRowListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UStatDamageRowListWidget* UStatPopup_C::GetMainHandAttackTypeList()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatPopup.StatPopup_C.GetMainHandAttackTypeList");

	UStatPopup_C_GetMainHandAttackTypeList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StatPopup.StatPopup_C.GetDefenseTypeList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStatRowListWidget*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UStatRowListWidget* UStatPopup_C::GetDefenseTypeList()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatPopup.StatPopup_C.GetDefenseTypeList");

	UStatPopup_C_GetDefenseTypeList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function StatPopup.StatPopup_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UStatPopup_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatPopup.StatPopup_C.GetShowAnimation");

	UStatPopup_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

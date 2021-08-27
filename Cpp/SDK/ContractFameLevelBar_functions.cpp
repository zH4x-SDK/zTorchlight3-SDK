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

// Function ContractFameLevelBar.ContractFameLevelBar_C.GetLevelProgressTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTextBlock*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextBlock* UContractFameLevelBar_C::GetLevelProgressTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractFameLevelBar.ContractFameLevelBar_C.GetLevelProgressTextBlock");

	UContractFameLevelBar_C_GetLevelProgressTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ContractFameLevelBar.ContractFameLevelBar_C.GetHideAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UContractFameLevelBar_C::GetHideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractFameLevelBar.ContractFameLevelBar_C.GetHideAnimation");

	UContractFameLevelBar_C_GetHideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ContractFameLevelBar.ContractFameLevelBar_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UContractFameLevelBar_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractFameLevelBar.ContractFameLevelBar_C.GetShowAnimation");

	UContractFameLevelBar_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ContractFameLevelBar.ContractFameLevelBar_C.GetLevelUpAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UContractFameLevelBar_C::GetLevelUpAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractFameLevelBar.ContractFameLevelBar_C.GetLevelUpAnimation");

	UContractFameLevelBar_C_GetLevelUpAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ContractFameLevelBar.ContractFameLevelBar_C.GetLevelText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTextBlock*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextBlock* UContractFameLevelBar_C::GetLevelText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractFameLevelBar.ContractFameLevelBar_C.GetLevelText");

	UContractFameLevelBar_C_GetLevelText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ContractFameLevelBar.ContractFameLevelBar_C.GetXPBar
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UProgressBar*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UProgressBar* UContractFameLevelBar_C::GetXPBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractFameLevelBar.ContractFameLevelBar_C.GetXPBar");

	UContractFameLevelBar_C_GetXPBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ContractFameLevelBar.ContractFameLevelBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UContractFameLevelBar_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractFameLevelBar.ContractFameLevelBar_C.PreConstruct");

	UContractFameLevelBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ContractFameLevelBar.ContractFameLevelBar_C.ExecuteUbergraph_ContractFameLevelBar
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UContractFameLevelBar_C::ExecuteUbergraph_ContractFameLevelBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractFameLevelBar.ContractFameLevelBar_C.ExecuteUbergraph_ContractFameLevelBar");

	UContractFameLevelBar_C_ExecuteUbergraph_ContractFameLevelBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

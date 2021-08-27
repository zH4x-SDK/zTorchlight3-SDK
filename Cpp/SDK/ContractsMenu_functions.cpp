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

// Function ContractsMenu.ContractsMenu_C.GetContractListWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UContractListWidget*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UContractListWidget* UContractsMenu_C::GetContractListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractsMenu.ContractsMenu_C.GetContractListWidget");

	UContractsMenu_C_GetContractListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ContractsMenu.ContractsMenu_C.BndEvt__Style_CloseButtonSmall_C_0_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
// (BlueprintEvent)
void UContractsMenu_C::BndEvt__Style_CloseButtonSmall_C_0_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractsMenu.ContractsMenu_C.BndEvt__Style_CloseButtonSmall_C_0_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");

	UContractsMenu_C_BndEvt__Style_CloseButtonSmall_C_0_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ContractsMenu.ContractsMenu_C.ExecuteUbergraph_ContractsMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UContractsMenu_C::ExecuteUbergraph_ContractsMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContractsMenu.ContractsMenu_C.ExecuteUbergraph_ContractsMenu");

	UContractsMenu_C_ExecuteUbergraph_ContractsMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

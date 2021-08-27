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

// Function DungeonMenu.DungeonMenu_C.GetClusterWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UDungeonClusterWidget*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UDungeonClusterWidget* UDungeonMenu_C::GetClusterWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonMenu.DungeonMenu_C.GetClusterWidget");

	UDungeonMenu_C_GetClusterWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DungeonMenu.DungeonMenu_C.GetClusterRevealPanel
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UDungeonClusterRevealPanel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UDungeonClusterRevealPanel* UDungeonMenu_C::GetClusterRevealPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonMenu.DungeonMenu_C.GetClusterRevealPanel");

	UDungeonMenu_C_GetClusterRevealPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DungeonMenu.DungeonMenu_C.GetMCWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UDungeonMCWidget*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UDungeonMCWidget* UDungeonMenu_C::GetMCWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonMenu.DungeonMenu_C.GetMCWidget");

	UDungeonMenu_C_GetMCWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DungeonMenu.DungeonMenu_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UDungeonMenu_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonMenu.DungeonMenu_C.GetShowAnimation");

	UDungeonMenu_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DungeonMenu.DungeonMenu_C.GetChallengeConfirmPanel
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UDungeonChallengeConfirmPanel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UDungeonChallengeConfirmPanel* UDungeonMenu_C::GetChallengeConfirmPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonMenu.DungeonMenu_C.GetChallengeConfirmPanel");

	UDungeonMenu_C_GetChallengeConfirmPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DungeonMenu.DungeonMenu_C.GetResultsPanel
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UDungeonResultsPanel*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UDungeonResultsPanel* UDungeonMenu_C::GetResultsPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonMenu.DungeonMenu_C.GetResultsPanel");

	UDungeonMenu_C_GetResultsPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DungeonMenu.DungeonMenu_C.GetChallengeSelectPanel
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UDungeonChallengeSelectPanel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UDungeonChallengeSelectPanel* UDungeonMenu_C::GetChallengeSelectPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonMenu.DungeonMenu_C.GetChallengeSelectPanel");

	UDungeonMenu_C_GetChallengeSelectPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DungeonMenu.DungeonMenu_C.ExecuteUbergraph_DungeonMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDungeonMenu_C::ExecuteUbergraph_DungeonMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonMenu.DungeonMenu_C.ExecuteUbergraph_DungeonMenu");

	UDungeonMenu_C_ExecuteUbergraph_DungeonMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

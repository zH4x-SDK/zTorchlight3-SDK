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

// Function DungeonRulesCardSet.DungeonRulesCardSet_C.GetCardHideAnimation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UDungeonRulesCardSet_C::GetCardHideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonRulesCardSet.DungeonRulesCardSet_C.GetCardHideAnimation");

	UDungeonRulesCardSet_C_GetCardHideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DungeonRulesCardSet.DungeonRulesCardSet_C.GetCardShowAnimation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UDungeonRulesCardSet_C::GetCardShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonRulesCardSet.DungeonRulesCardSet_C.GetCardShowAnimation");

	UDungeonRulesCardSet_C_GetCardShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DungeonRulesCardSet.DungeonRulesCardSet_C.GetCardListWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UDungeonChallengeRulesCardListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UDungeonChallengeRulesCardListWidget* UDungeonRulesCardSet_C::GetCardListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonRulesCardSet.DungeonRulesCardSet_C.GetCardListWidget");

	UDungeonRulesCardSet_C_GetCardListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

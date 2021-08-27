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

// Function DungeonLevelCard.DungeonLevelCard_C.GetStateSwitchers
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UTLWidgetSwitcher*> ReturnValue                    (Parm, OutParm, ReturnParm, ContainsInstancedReference)
TArray<class UTLWidgetSwitcher*> UDungeonLevelCard_C::GetStateSwitchers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonLevelCard.DungeonLevelCard_C.GetStateSwitchers");

	UDungeonLevelCard_C_GetStateSwitchers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DungeonLevelCard.DungeonLevelCard_C.GetLevelTextBlocks
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UTLRichTextBlock*> ReturnValue                    (Parm, OutParm, ReturnParm, ContainsInstancedReference)
TArray<class UTLRichTextBlock*> UDungeonLevelCard_C::GetLevelTextBlocks()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonLevelCard.DungeonLevelCard_C.GetLevelTextBlocks");

	UDungeonLevelCard_C_GetLevelTextBlocks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DungeonLevelCard.DungeonLevelCard_C.GetSelectAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UDungeonLevelCard_C::GetSelectAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonLevelCard.DungeonLevelCard_C.GetSelectAnimation");

	UDungeonLevelCard_C_GetSelectAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DungeonLevelCard.DungeonLevelCard_C.GetStartFocusAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UDungeonLevelCard_C::GetStartFocusAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonLevelCard.DungeonLevelCard_C.GetStartFocusAnimation");

	UDungeonLevelCard_C_GetStartFocusAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DungeonLevelCard.DungeonLevelCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UDungeonLevelCard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonLevelCard.DungeonLevelCard_C.Construct");

	UDungeonLevelCard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DungeonLevelCard.DungeonLevelCard_C.BndEvt__TLButton_235_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UDungeonLevelCard_C::BndEvt__TLButton_235_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonLevelCard.DungeonLevelCard_C.BndEvt__TLButton_235_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UDungeonLevelCard_C_BndEvt__TLButton_235_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DungeonLevelCard.DungeonLevelCard_C.ExecuteUbergraph_DungeonLevelCard
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDungeonLevelCard_C::ExecuteUbergraph_DungeonLevelCard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonLevelCard.DungeonLevelCard_C.ExecuteUbergraph_DungeonLevelCard");

	UDungeonLevelCard_C_ExecuteUbergraph_DungeonLevelCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

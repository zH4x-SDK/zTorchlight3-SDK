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

// Function PartyMemberWidget.PartyMemberWidget_C.GetAccountNameTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UPartyMemberWidget_C::GetAccountNameTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyMemberWidget.PartyMemberWidget_C.GetAccountNameTextBlock");

	UPartyMemberWidget_C_GetAccountNameTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PartyMemberWidget.PartyMemberWidget_C.GetCharacterNameTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UPartyMemberWidget_C::GetCharacterNameTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyMemberWidget.PartyMemberWidget_C.GetCharacterNameTextBlock");

	UPartyMemberWidget_C_GetCharacterNameTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PartyMemberWidget.PartyMemberWidget_C.GetAreaNameTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UPartyMemberWidget_C::GetAreaNameTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyMemberWidget.PartyMemberWidget_C.GetAreaNameTextBlock");

	UPartyMemberWidget_C_GetAreaNameTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PartyMemberWidget.PartyMemberWidget_C.GetSpeakerIcon
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UPartyMemberWidget_C::GetSpeakerIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyMemberWidget.PartyMemberWidget_C.GetSpeakerIcon");

	UPartyMemberWidget_C_GetSpeakerIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PartyMemberWidget.PartyMemberWidget_C.GetContextMenuAnchor
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenuAnchor*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMenuAnchor* UPartyMemberWidget_C::GetContextMenuAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyMemberWidget.PartyMemberWidget_C.GetContextMenuAnchor");

	UPartyMemberWidget_C_GetContextMenuAnchor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PartyMemberWidget.PartyMemberWidget_C.GetAllyInfoWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAllyInfoWidget*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAllyInfoWidget* UPartyMemberWidget_C::GetAllyInfoWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyMemberWidget.PartyMemberWidget_C.GetAllyInfoWidget");

	UPartyMemberWidget_C_GetAllyInfoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PartyMemberWidget.PartyMemberWidget_C.OnDataSet
// (Event, Protected, BlueprintEvent)
void UPartyMemberWidget_C::OnDataSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyMemberWidget.PartyMemberWidget_C.OnDataSet");

	UPartyMemberWidget_C_OnDataSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PartyMemberWidget.PartyMemberWidget_C.ExecuteUbergraph_PartyMemberWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPartyMemberWidget_C::ExecuteUbergraph_PartyMemberWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyMemberWidget.PartyMemberWidget_C.ExecuteUbergraph_PartyMemberWidget");

	UPartyMemberWidget_C_ExecuteUbergraph_PartyMemberWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

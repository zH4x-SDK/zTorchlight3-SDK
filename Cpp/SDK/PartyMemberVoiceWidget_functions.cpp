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

// Function PartyMemberVoiceWidget.PartyMemberVoiceWidget_C.GetAccountNameText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UPartyMemberVoiceWidget_C::GetAccountNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyMemberVoiceWidget.PartyMemberVoiceWidget_C.GetAccountNameText");

	UPartyMemberVoiceWidget_C_GetAccountNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PartyMemberVoiceWidget.PartyMemberVoiceWidget_C.BlueprintToggle
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bSpeaking                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPartyMemberVoiceWidget_C::BlueprintToggle(bool bSpeaking)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyMemberVoiceWidget.PartyMemberVoiceWidget_C.BlueprintToggle");

	UPartyMemberVoiceWidget_C_BlueprintToggle_Params params;
	params.bSpeaking = bSpeaking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PartyMemberVoiceWidget.PartyMemberVoiceWidget_C.ExecuteUbergraph_PartyMemberVoiceWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPartyMemberVoiceWidget_C::ExecuteUbergraph_PartyMemberVoiceWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyMemberVoiceWidget.PartyMemberVoiceWidget_C.ExecuteUbergraph_PartyMemberVoiceWidget");

	UPartyMemberVoiceWidget_C_ExecuteUbergraph_PartyMemberVoiceWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

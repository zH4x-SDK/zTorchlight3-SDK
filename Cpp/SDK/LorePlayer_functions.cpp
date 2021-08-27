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

// Function LorePlayer.LorePlayer_C.GetPortraitContainer
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* ULorePlayer_C::GetPortraitContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function LorePlayer.LorePlayer_C.GetPortraitContainer");

	ULorePlayer_C_GetPortraitContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LorePlayer.LorePlayer_C.GetPortraitImage
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* ULorePlayer_C::GetPortraitImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function LorePlayer.LorePlayer_C.GetPortraitImage");

	ULorePlayer_C_GetPortraitImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LorePlayer.LorePlayer_C.GetTitleTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* ULorePlayer_C::GetTitleTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function LorePlayer.LorePlayer_C.GetTitleTextBlock");

	ULorePlayer_C_GetTitleTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LorePlayer.LorePlayer_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* ULorePlayer_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LorePlayer.LorePlayer_C.GetShowAnimation");

	ULorePlayer_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LorePlayer.LorePlayer_C.BndEvt__Style_CloseButtonSmall_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
// (BlueprintEvent)
void ULorePlayer_C::BndEvt__Style_CloseButtonSmall_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LorePlayer.LorePlayer_C.BndEvt__Style_CloseButtonSmall_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");

	ULorePlayer_C_BndEvt__Style_CloseButtonSmall_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LorePlayer.LorePlayer_C.ExecuteUbergraph_LorePlayer
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULorePlayer_C::ExecuteUbergraph_LorePlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LorePlayer.LorePlayer_C.ExecuteUbergraph_LorePlayer");

	ULorePlayer_C_ExecuteUbergraph_LorePlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

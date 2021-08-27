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

// Function FriendsMenu.FriendsMenu_C.GetbIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UFriendsMenu_C::GetbIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendsMenu.FriendsMenu_C.GetbIsEnabled_1");

	UFriendsMenu_C_GetbIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FriendsMenu.FriendsMenu_C.GetFriendsList
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UFriendEntryListWidget*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UFriendEntryListWidget* UFriendsMenu_C::GetFriendsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendsMenu.FriendsMenu_C.GetFriendsList");

	UFriendsMenu_C_GetFriendsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FriendsMenu.FriendsMenu_C.BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UFriendsMenu_C::BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendsMenu.FriendsMenu_C.BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UFriendsMenu_C_BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FriendsMenu.FriendsMenu_C.ExecuteUbergraph_FriendsMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFriendsMenu_C::ExecuteUbergraph_FriendsMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendsMenu.FriendsMenu_C.ExecuteUbergraph_FriendsMenu");

	UFriendsMenu_C_ExecuteUbergraph_FriendsMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

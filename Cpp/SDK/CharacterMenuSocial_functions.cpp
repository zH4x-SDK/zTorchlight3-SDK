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

// Function CharacterMenuSocial.CharacterMenuSocial_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UCharacterMenuSocial_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMenuSocial.CharacterMenuSocial_C.GetShowAnimation");

	UCharacterMenuSocial_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CharacterMenuSocial.CharacterMenuSocial_C.GetSocialTabs
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTabbedMenuWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTabbedMenuWidget* UCharacterMenuSocial_C::GetSocialTabs()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMenuSocial.CharacterMenuSocial_C.GetSocialTabs");

	UCharacterMenuSocial_C_GetSocialTabs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CharacterMenuSocial.CharacterMenuSocial_C.GetFriendsWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UFriendsWidget*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UFriendsWidget* UCharacterMenuSocial_C::GetFriendsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMenuSocial.CharacterMenuSocial_C.GetFriendsWidget");

	UCharacterMenuSocial_C_GetFriendsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CharacterMenuSocial.CharacterMenuSocial_C.GetNextListWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget*             CurrentListWidget              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SlateCore_EUINavigation        Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UListWidget* UCharacterMenuSocial_C::GetNextListWidget(class UListWidget* CurrentListWidget, SlateCore_EUINavigation Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMenuSocial.CharacterMenuSocial_C.GetNextListWidget");

	UCharacterMenuSocial_C_GetNextListWidget_Params params;
	params.CurrentListWidget = CurrentListWidget;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CharacterMenuSocial.CharacterMenuSocial_C.GetSocialPanelSwitcher
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetSwitcher*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetSwitcher* UCharacterMenuSocial_C::GetSocialPanelSwitcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMenuSocial.CharacterMenuSocial_C.GetSocialPanelSwitcher");

	UCharacterMenuSocial_C_GetSocialPanelSwitcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CharacterMenuSocial.CharacterMenuSocial_C.GetOtherPlayersWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UOtherPlayerMenuWidget*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UOtherPlayerMenuWidget* UCharacterMenuSocial_C::GetOtherPlayersWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMenuSocial.CharacterMenuSocial_C.GetOtherPlayersWidget");

	UCharacterMenuSocial_C_GetOtherPlayersWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CharacterMenuSocial.CharacterMenuSocial_C.GetPartyWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPartyWidget*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPartyWidget* UCharacterMenuSocial_C::GetPartyWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMenuSocial.CharacterMenuSocial_C.GetPartyWidget");

	UCharacterMenuSocial_C_GetPartyWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

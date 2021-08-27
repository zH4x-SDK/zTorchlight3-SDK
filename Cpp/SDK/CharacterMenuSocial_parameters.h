#pragma once

// Name: Torchlight3, Version: 4.26.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function CharacterMenuSocial.CharacterMenuSocial_C.GetShowAnimation
struct UCharacterMenuSocial_C_GetShowAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CharacterMenuSocial.CharacterMenuSocial_C.GetSocialTabs
struct UCharacterMenuSocial_C_GetSocialTabs_Params
{
	class UTabbedMenuWidget*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CharacterMenuSocial.CharacterMenuSocial_C.GetFriendsWidget
struct UCharacterMenuSocial_C_GetFriendsWidget_Params
{
	class UFriendsWidget*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CharacterMenuSocial.CharacterMenuSocial_C.GetNextListWidget
struct UCharacterMenuSocial_C_GetNextListWidget_Params
{
	class UListWidget*                                 CurrentListWidget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SlateCore_EUINavigation                            Direction;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UListWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CharacterMenuSocial.CharacterMenuSocial_C.GetSocialPanelSwitcher
struct UCharacterMenuSocial_C_GetSocialPanelSwitcher_Params
{
	class UWidgetSwitcher*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CharacterMenuSocial.CharacterMenuSocial_C.GetOtherPlayersWidget
struct UCharacterMenuSocial_C_GetOtherPlayersWidget_Params
{
	class UOtherPlayerMenuWidget*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CharacterMenuSocial.CharacterMenuSocial_C.GetPartyWidget
struct UCharacterMenuSocial_C_GetPartyWidget_Params
{
	class UPartyWidget*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

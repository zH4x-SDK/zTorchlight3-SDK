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

// Function EmberWeaponMessage.EmberWeaponMessage_C.GetHideAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UEmberWeaponMessage_C::GetHideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmberWeaponMessage.EmberWeaponMessage_C.GetHideAnimation");

	UEmberWeaponMessage_C_GetHideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EmberWeaponMessage.EmberWeaponMessage_C.GetElementIconImage
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UEmberWeaponMessage_C::GetElementIconImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmberWeaponMessage.EmberWeaponMessage_C.GetElementIconImage");

	UEmberWeaponMessage_C_GetElementIconImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EmberWeaponMessage.EmberWeaponMessage_C.GetItemIconWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryItemBaseWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInventoryItemBaseWidget* UEmberWeaponMessage_C::GetItemIconWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmberWeaponMessage.EmberWeaponMessage_C.GetItemIconWidget");

	UEmberWeaponMessage_C_GetItemIconWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EmberWeaponMessage.EmberWeaponMessage_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UEmberWeaponMessage_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmberWeaponMessage.EmberWeaponMessage_C.GetShowAnimation");

	UEmberWeaponMessage_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

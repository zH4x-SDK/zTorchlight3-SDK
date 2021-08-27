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

// Function OtherPlayerMenu.OtherPlayerMenu_C.GetFortOwnerWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UOtherPlayerWidget*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UOtherPlayerWidget* UOtherPlayerMenu_C::GetFortOwnerWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OtherPlayerMenu.OtherPlayerMenu_C.GetFortOwnerWidget");

	UOtherPlayerMenu_C_GetFortOwnerWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OtherPlayerMenu.OtherPlayerMenu_C.GetNearbyPlayersListWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UOtherPlayerListWidget*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UOtherPlayerListWidget* UOtherPlayerMenu_C::GetNearbyPlayersListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OtherPlayerMenu.OtherPlayerMenu_C.GetNearbyPlayersListWidget");

	UOtherPlayerMenu_C_GetNearbyPlayersListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function StatusEffect_TravelMenu.StatusEffect_TravelMenu_C.OnPreApply
// (Event, Public, BlueprintEvent)
void UStatusEffect_TravelMenu_C::OnPreApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_TravelMenu.StatusEffect_TravelMenu_C.OnPreApply");

	UStatusEffect_TravelMenu_C_OnPreApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffect_TravelMenu.StatusEffect_TravelMenu_C.ExecuteUbergraph_StatusEffect_TravelMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffect_TravelMenu_C::ExecuteUbergraph_StatusEffect_TravelMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect_TravelMenu.StatusEffect_TravelMenu_C.ExecuteUbergraph_StatusEffect_TravelMenu");

	UStatusEffect_TravelMenu_C_ExecuteUbergraph_StatusEffect_TravelMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

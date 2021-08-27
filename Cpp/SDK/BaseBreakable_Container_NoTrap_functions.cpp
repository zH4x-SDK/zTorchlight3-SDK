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

// Function BaseBreakable_Container_NoTrap.BaseBreakable_Container_NoTrap_C.OnBreak
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseBreakable_Container_NoTrap_C::OnBreak(class AActor* Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseBreakable_Container_NoTrap.BaseBreakable_Container_NoTrap_C.OnBreak");

	ABaseBreakable_Container_NoTrap_C_OnBreak_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseBreakable_Container_NoTrap.BaseBreakable_Container_NoTrap_C.ExecuteUbergraph_BaseBreakable_Container_NoTrap
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseBreakable_Container_NoTrap_C::ExecuteUbergraph_BaseBreakable_Container_NoTrap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseBreakable_Container_NoTrap.BaseBreakable_Container_NoTrap_C.ExecuteUbergraph_BaseBreakable_Container_NoTrap");

	ABaseBreakable_Container_NoTrap_C_ExecuteUbergraph_BaseBreakable_Container_NoTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

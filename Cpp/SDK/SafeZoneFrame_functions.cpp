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

// Function SafeZoneFrame.SafeZoneFrame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USafeZoneFrame_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneFrame.SafeZoneFrame_C.Construct");

	USafeZoneFrame_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SafeZoneFrame.SafeZoneFrame_C.ExecuteUbergraph_SafeZoneFrame
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USafeZoneFrame_C::ExecuteUbergraph_SafeZoneFrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneFrame.SafeZoneFrame_C.ExecuteUbergraph_SafeZoneFrame");

	USafeZoneFrame_C_ExecuteUbergraph_SafeZoneFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

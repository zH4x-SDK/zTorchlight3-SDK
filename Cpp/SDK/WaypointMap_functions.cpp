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

// Function WaypointMap.WaypointMap_C.GetMenuHeader
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UWaypointMap_C::GetMenuHeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaypointMap.WaypointMap_C.GetMenuHeader");

	UWaypointMap_C_GetMenuHeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WaypointMap.WaypointMap_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWaypointMap_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaypointMap.WaypointMap_C.Construct");

	UWaypointMap_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WaypointMap.WaypointMap_C.Closed
// (BlueprintCallable, BlueprintEvent)
void UWaypointMap_C::Closed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaypointMap.WaypointMap_C.Closed");

	UWaypointMap_C_Closed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WaypointMap.WaypointMap_C.ExecuteUbergraph_WaypointMap
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWaypointMap_C::ExecuteUbergraph_WaypointMap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaypointMap.WaypointMap_C.ExecuteUbergraph_WaypointMap");

	UWaypointMap_C_ExecuteUbergraph_WaypointMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

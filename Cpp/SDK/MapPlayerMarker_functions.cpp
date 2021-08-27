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

// Function MapPlayerMarker.MapPlayerMarker_C.GetElementToTransform
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UMapPlayerMarker_C::GetElementToTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapPlayerMarker.MapPlayerMarker_C.GetElementToTransform");

	UMapPlayerMarker_C_GetElementToTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MapPlayerMarker.MapPlayerMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UMapPlayerMarker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapPlayerMarker.MapPlayerMarker_C.Construct");

	UMapPlayerMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapPlayerMarker.MapPlayerMarker_C.ExecuteUbergraph_MapPlayerMarker
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMapPlayerMarker_C::ExecuteUbergraph_MapPlayerMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapPlayerMarker.MapPlayerMarker_C.ExecuteUbergraph_MapPlayerMarker");

	UMapPlayerMarker_C_ExecuteUbergraph_MapPlayerMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

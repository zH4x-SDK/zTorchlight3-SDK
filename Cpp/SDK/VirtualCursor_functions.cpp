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

// Function VirtualCursor.VirtualCursor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UVirtualCursor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VirtualCursor.VirtualCursor_C.Construct");

	UVirtualCursor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VirtualCursor.VirtualCursor_C.ExecuteUbergraph_VirtualCursor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVirtualCursor_C::ExecuteUbergraph_VirtualCursor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VirtualCursor.VirtualCursor_C.ExecuteUbergraph_VirtualCursor");

	UVirtualCursor_C_ExecuteUbergraph_VirtualCursor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

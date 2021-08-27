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

// Function BaseStaticObject.BaseStaticObject_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABaseStaticObject_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseStaticObject.BaseStaticObject_C.ReceiveBeginPlay");

	ABaseStaticObject_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseStaticObject.BaseStaticObject_C.ExecuteUbergraph_BaseStaticObject
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseStaticObject_C::ExecuteUbergraph_BaseStaticObject(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseStaticObject.BaseStaticObject_C.ExecuteUbergraph_BaseStaticObject");

	ABaseStaticObject_C_ExecuteUbergraph_BaseStaticObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

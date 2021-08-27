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

// Function BaseTrapComponent.BaseTrapComponent_C.TrapTriggeredOnClient
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  TriggeredBy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBaseTrapComponent_C::TrapTriggeredOnClient(class AActor* TriggeredBy, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseTrapComponent.BaseTrapComponent_C.TrapTriggeredOnClient");

	UBaseTrapComponent_C_TrapTriggeredOnClient_Params params;
	params.TriggeredBy = TriggeredBy;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseTrapComponent.BaseTrapComponent_C.ExecuteUbergraph_BaseTrapComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBaseTrapComponent_C::ExecuteUbergraph_BaseTrapComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseTrapComponent.BaseTrapComponent_C.ExecuteUbergraph_BaseTrapComponent");

	UBaseTrapComponent_C_ExecuteUbergraph_BaseTrapComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

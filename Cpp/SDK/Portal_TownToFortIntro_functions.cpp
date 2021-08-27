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

// Function Portal_TownToFortIntro.Portal_TownToFortIntro_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void APortal_TownToFortIntro_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Portal_TownToFortIntro.Portal_TownToFortIntro_C.Timeline_0__FinishedFunc");

	APortal_TownToFortIntro_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Portal_TownToFortIntro.Portal_TownToFortIntro_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void APortal_TownToFortIntro_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Portal_TownToFortIntro.Portal_TownToFortIntro_C.Timeline_0__UpdateFunc");

	APortal_TownToFortIntro_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Portal_TownToFortIntro.Portal_TownToFortIntro_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APortal_TownToFortIntro_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Portal_TownToFortIntro.Portal_TownToFortIntro_C.ReceiveTick");

	APortal_TownToFortIntro_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Portal_TownToFortIntro.Portal_TownToFortIntro_C.OnOperated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Operator                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APortal_TownToFortIntro_C::OnOperated(class AActor* Operator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Portal_TownToFortIntro.Portal_TownToFortIntro_C.OnOperated");

	APortal_TownToFortIntro_C_OnOperated_Params params;
	params.Operator = Operator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Portal_TownToFortIntro.Portal_TownToFortIntro_C.ExecuteUbergraph_Portal_TownToFortIntro
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APortal_TownToFortIntro_C::ExecuteUbergraph_Portal_TownToFortIntro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Portal_TownToFortIntro.Portal_TownToFortIntro_C.ExecuteUbergraph_Portal_TownToFortIntro");

	APortal_TownToFortIntro_C_ExecuteUbergraph_Portal_TownToFortIntro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

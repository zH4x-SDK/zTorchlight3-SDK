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

// Function CharacterCreatePet_Base.CharacterCreatePet_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ACharacterCreatePet_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreatePet_Base.CharacterCreatePet_Base_C.ReceiveBeginPlay");

	ACharacterCreatePet_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CharacterCreatePet_Base.CharacterCreatePet_Base_C.SetNameplateVisible
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNameplateVisible              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACharacterCreatePet_Base_C::SetNameplateVisible(bool bNameplateVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreatePet_Base.CharacterCreatePet_Base_C.SetNameplateVisible");

	ACharacterCreatePet_Base_C_SetNameplateVisible_Params params;
	params.bNameplateVisible = bNameplateVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CharacterCreatePet_Base.CharacterCreatePet_Base_C.ExecuteUbergraph_CharacterCreatePet_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACharacterCreatePet_Base_C::ExecuteUbergraph_CharacterCreatePet_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreatePet_Base.CharacterCreatePet_Base_C.ExecuteUbergraph_CharacterCreatePet_Base");

	ACharacterCreatePet_Base_C_ExecuteUbergraph_CharacterCreatePet_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

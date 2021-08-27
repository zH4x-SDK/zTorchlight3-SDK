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

// Function CharacterCreate_Base.CharacterCreate_Base_C.GetBaseMesh
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkeletalMeshComponent* ACharacterCreate_Base_C::GetBaseMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreate_Base.CharacterCreate_Base_C.GetBaseMesh");

	ACharacterCreate_Base_C_GetBaseMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CharacterCreate_Base.CharacterCreate_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ACharacterCreate_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreate_Base.CharacterCreate_Base_C.ReceiveBeginPlay");

	ACharacterCreate_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CharacterCreate_Base.CharacterCreate_Base_C.SetNameplateVisible
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNameplateVisible              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACharacterCreate_Base_C::SetNameplateVisible(bool bNameplateVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreate_Base.CharacterCreate_Base_C.SetNameplateVisible");

	ACharacterCreate_Base_C_SetNameplateVisible_Params params;
	params.bNameplateVisible = bNameplateVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CharacterCreate_Base.CharacterCreate_Base_C.ExecuteUbergraph_CharacterCreate_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACharacterCreate_Base_C::ExecuteUbergraph_CharacterCreate_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreate_Base.CharacterCreate_Base_C.ExecuteUbergraph_CharacterCreate_Base");

	ACharacterCreate_Base_C_ExecuteUbergraph_CharacterCreate_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

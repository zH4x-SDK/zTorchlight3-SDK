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

// Function DungeonCloudSwirl.DungeonCloudSwirl_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UDungeonCloudSwirl_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonCloudSwirl.DungeonCloudSwirl_C.Construct");

	UDungeonCloudSwirl_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DungeonCloudSwirl.DungeonCloudSwirl_C.CloudSwirlLevelSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDungeonUIActionMetadata MetaData                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UDungeonCloudSwirl_C::CloudSwirlLevelSelected(const struct FDungeonUIActionMetadata& MetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonCloudSwirl.DungeonCloudSwirl_C.CloudSwirlLevelSelected");

	UDungeonCloudSwirl_C_CloudSwirlLevelSelected_Params params;
	params.MetaData = MetaData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DungeonCloudSwirl.DungeonCloudSwirl_C.ExecuteUbergraph_DungeonCloudSwirl
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDungeonCloudSwirl_C::ExecuteUbergraph_DungeonCloudSwirl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonCloudSwirl.DungeonCloudSwirl_C.ExecuteUbergraph_DungeonCloudSwirl");

	UDungeonCloudSwirl_C_ExecuteUbergraph_DungeonCloudSwirl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

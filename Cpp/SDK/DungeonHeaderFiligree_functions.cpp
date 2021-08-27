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

// Function DungeonHeaderFiligree.DungeonHeaderFiligree_C.FiligreeLevelSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDungeonUIActionMetadata MetaData                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UDungeonHeaderFiligree_C::FiligreeLevelSelected(const struct FDungeonUIActionMetadata& MetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonHeaderFiligree.DungeonHeaderFiligree_C.FiligreeLevelSelected");

	UDungeonHeaderFiligree_C_FiligreeLevelSelected_Params params;
	params.MetaData = MetaData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DungeonHeaderFiligree.DungeonHeaderFiligree_C.ExecuteUbergraph_DungeonHeaderFiligree
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDungeonHeaderFiligree_C::ExecuteUbergraph_DungeonHeaderFiligree(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonHeaderFiligree.DungeonHeaderFiligree_C.ExecuteUbergraph_DungeonHeaderFiligree");

	UDungeonHeaderFiligree_C_ExecuteUbergraph_DungeonHeaderFiligree_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function DungeonMenuFrame.DungeonMenuFrame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UDungeonMenuFrame_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonMenuFrame.DungeonMenuFrame_C.Construct");

	UDungeonMenuFrame_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DungeonMenuFrame.DungeonMenuFrame_C.FrameLevelSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDungeonUIActionMetadata MetaData                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UDungeonMenuFrame_C::FrameLevelSelected(const struct FDungeonUIActionMetadata& MetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonMenuFrame.DungeonMenuFrame_C.FrameLevelSelected");

	UDungeonMenuFrame_C_FrameLevelSelected_Params params;
	params.MetaData = MetaData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DungeonMenuFrame.DungeonMenuFrame_C.ExecuteUbergraph_DungeonMenuFrame
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDungeonMenuFrame_C::ExecuteUbergraph_DungeonMenuFrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonMenuFrame.DungeonMenuFrame_C.ExecuteUbergraph_DungeonMenuFrame");

	UDungeonMenuFrame_C_ExecuteUbergraph_DungeonMenuFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function DungeonSpeechBubble.DungeonSpeechBubble_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UDungeonSpeechBubble_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonSpeechBubble.DungeonSpeechBubble_C.Construct");

	UDungeonSpeechBubble_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DungeonSpeechBubble.DungeonSpeechBubble_C.ExecuteUbergraph_DungeonSpeechBubble
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDungeonSpeechBubble_C::ExecuteUbergraph_DungeonSpeechBubble(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonSpeechBubble.DungeonSpeechBubble_C.ExecuteUbergraph_DungeonSpeechBubble");

	UDungeonSpeechBubble_C_ExecuteUbergraph_DungeonSpeechBubble_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

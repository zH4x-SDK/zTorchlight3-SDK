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

// Function VoiceChatOverlay.VoiceChatOverlay_C.GetVoiceChatListWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVoiceChatListWidget*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UVoiceChatListWidget* UVoiceChatOverlay_C::GetVoiceChatListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function VoiceChatOverlay.VoiceChatOverlay_C.GetVoiceChatListWidget");

	UVoiceChatOverlay_C_GetVoiceChatListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

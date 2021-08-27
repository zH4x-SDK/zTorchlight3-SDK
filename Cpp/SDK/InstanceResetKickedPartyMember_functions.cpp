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

// Function InstanceResetKickedPartyMember.InstanceResetKickedPartyMember_C.SetName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UInstanceResetKickedPartyMember_C::SetName(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function InstanceResetKickedPartyMember.InstanceResetKickedPartyMember_C.SetName");

	UInstanceResetKickedPartyMember_C_SetName_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

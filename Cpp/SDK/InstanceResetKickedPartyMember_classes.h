#pragma once

// Name: Torchlight3, Version: 4.26.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass InstanceResetKickedPartyMember.InstanceResetKickedPartyMember_C
// 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
class UInstanceResetKickedPartyMember_C : public UUserWidget
{
public:
	class UTLRichTextBlock*                            KickedText;                                                // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InstanceResetKickedPartyMember.InstanceResetKickedPartyMember_C");
		return ptr;
	}



	void SetName(const struct FText& Text);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass PartyHUDPanel.PartyHUDPanel_C
// 0x0008 (FullSize[0x0680] - InheritedSize[0x0678])
class UPartyHUDPanel_C : public UPartyWidget
{
public:
	class UPartyListWidget*                            PartyList;                                                 // 0x0678(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PartyHUDPanel.PartyHUDPanel_C");
		return ptr;
	}



	class UPartyListWidget* GetPartyMemberListWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

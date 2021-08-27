#pragma once

// Name: Torchlight3, Version: 1.0.0


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

// WidgetBlueprintGeneratedClass LegendaryAffixCollectionEquippedWidget.LegendaryAffixCollectionEquippedWidget_C
// 0x0018 (FullSize[0x0660] - InheritedSize[0x0648])
class ULegendaryAffixCollectionEquippedWidget_C : public ULegendaryAffixCollectionEquippedWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0648(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ULegendaryAffixSlotListWidget*               SlotList;                                                  // 0x0650(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                NumAffixesUnlockedText;                                    // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LegendaryAffixCollectionEquippedWidget.LegendaryAffixCollectionEquippedWidget_C");
		return ptr;
	}



	void SetAffixesUnlockedText(class UTLTextBlock* InText);
	class ULegendaryAffixSlotListWidget* GetSlotListWidget();
	void BlueprintRefresh();
	void ExecuteUbergraph_LegendaryAffixCollectionEquippedWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

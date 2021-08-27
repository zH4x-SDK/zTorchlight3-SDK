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

// WidgetBlueprintGeneratedClass LegendaryAffixCollectionItemCategoryWidget.LegendaryAffixCollectionItemCategoryWidget_C
// 0x0030 (FullSize[0x06A8] - InheritedSize[0x0678])
class ULegendaryAffixCollectionItemCategoryWidget_C : public ULegendaryAffixCollectionItemCategoryWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0678(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTLTextBlock*                                AffixCountText;                                            // 0x0680(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              CategoryHeader;                                            // 0x0688(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                CategoryNameText;                                          // 0x0690(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULegendaryAffixCollectionItemListWidget*     ItemList;                                                  // 0x0698(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_64;                                                // 0x06A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LegendaryAffixCollectionItemCategoryWidget.LegendaryAffixCollectionItemCategoryWidget_C");
		return ptr;
	}



	class ULegendaryAffixCollectionItemListWidget* GetItemListWidget();
	void BlueprintRefresh();
	void ExecuteUbergraph_LegendaryAffixCollectionItemCategoryWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

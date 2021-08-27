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

// WidgetBlueprintGeneratedClass LegendaryAffixCollection.LegendaryAffixCollection_C
// 0x0058 (FullSize[0x07A8] - InheritedSize[0x0750])
class ULegendaryAffixCollection_C : public ULegendaryAffixCollectionWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0750(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTLTextBlock*                                AffixCount;                                                // 0x0758(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListWidget*                                 AllItemList;                                               // 0x0760(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULegendaryAffixCollectionItemCategoryListWidget* CategoryList;                                              // 0x0768(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHotkeyWidget_C*                             HotkeyWidget;                                              // 0x0770(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHotkeyWidget_C*                             HotkeyWidget_1;                                            // 0x0778(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULoadingSpinner_C*                           LoadingSpinner;                                            // 0x0780(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTabbedMenuButtonList*                       MenuButtonList;                                            // 0x0788(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                TabNameText;                                               // 0x0790(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_2;                                                 // 0x0798(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_14;                                                // 0x07A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LegendaryAffixCollection.LegendaryAffixCollection_C");
		return ptr;
	}



	class ULegendaryAffixCollectionItemCategoryListWidget* GetAffixSubCategoryListWidget();
	class UListWidget* GetAllAffixListWidget();
	class UTabbedMenuButtonList* GetMenuButtonList();
	void Construct();
	void BlueprintRefresh();
	void ExecuteUbergraph_LegendaryAffixCollection(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

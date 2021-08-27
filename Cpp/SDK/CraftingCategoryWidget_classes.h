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

// WidgetBlueprintGeneratedClass CraftingCategoryWidget.CraftingCategoryWidget_C
// 0x0010 (FullSize[0x0650] - InheritedSize[0x0640])
class UCraftingCategoryWidget_C : public UCraftingCategoryWidget
{
public:
	class UTLTextBlock*                                CategoryTextBlock;                                         // 0x0640(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCraftingEntryContainerListWidget*           EntryListWidget;                                           // 0x0648(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CraftingCategoryWidget.CraftingCategoryWidget_C");
		return ptr;
	}



	class UTLTextBlock* GetCategoryText();
	class UCraftingEntryContainerListWidget* GetCraftingEntriesList();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

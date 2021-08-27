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

// WidgetBlueprintGeneratedClass CraftingEntryContainer.CraftingEntryContainer_C
// 0x0020 (FullSize[0x0680] - InheritedSize[0x0660])
class UCraftingEntryContainer_C : public UCraftingEntryContainerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0660(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCraftingQueueEntryWidget_C*                 CraftingQueueEntryWidget;                                  // 0x0668(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCraftingRecipeWidget_C*                     CraftingRecipeWidget;                                      // 0x0670(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             CraftingWidgetSwitcher;                                    // 0x0678(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CraftingEntryContainer.CraftingEntryContainer_C");
		return ptr;
	}



	class UCraftingQueueEntryWidget* GetCraftingQueueEntryWidget_Blueprint();
	class UCraftingRecipeWidget* GetCraftingRecipeWidget_Blueprint();
	class UWidgetSwitcher* GetWidgetSwitcher();
	void BlueprintSetRecipeEnabled(bool bEnabled);
	void ExecuteUbergraph_CraftingEntryContainer(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

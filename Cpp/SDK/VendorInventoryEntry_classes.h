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

// WidgetBlueprintGeneratedClass VendorInventoryEntry.VendorInventoryEntry_C
// 0x0030 (FullSize[0x0938] - InheritedSize[0x0908])
class UVendorInventoryEntry_C : public UVendorInventoryEntryWidget
{
public:
	class UWidgetAnimation*                            TryToEquip;                                                // 0x0908(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Equip;                                                     // 0x0910(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVendorCatalogEntry_C*                       VendorCatalogEntry;                                        // 0x0918(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFMODEventReference                         EquipEvent;                                                // 0x0920(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VendorInventoryEntry.VendorInventoryEntry_C");
		return ptr;
	}



	class UCatalogEntryWidget* GetCatalogEntryWidget();
	class UMenuAnchor* GetComparisonMenuAnchor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

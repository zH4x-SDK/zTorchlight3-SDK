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

// WidgetBlueprintGeneratedClass VendorCatalogEntry.VendorCatalogEntry_C
// 0x0050 (FullSize[0x06C0] - InheritedSize[0x0670])
class UVendorCatalogEntry_C : public UCatalogEntryWidget
{
public:
	class UWidgetAnimation*                            TryToEquip;                                                // 0x0670(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Equip;                                                     // 0x0678(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMenuAnchor*                                 ComparisonMenuAnchor;                                      // 0x0680(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGenericResourceWidgetSmall_C*               Cost;                                                      // 0x0688(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGenericResourceWidget_C*                    GenericResourceWidget;                                     // 0x0690(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    InnerInfo;                                                 // 0x0698(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_172;                                               // 0x06A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFMODEventReference                         EquipEvent;                                                // 0x06A8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VendorCatalogEntry.VendorCatalogEntry_C");
		return ptr;
	}



	class UGenericResourceWidget* GetCostWidget();
	class UGenericResourceWidget* GetIconWidget();
	class UCatalogEntryWidget* GetCatalogEntryWidget();
	class UMenuAnchor* GetComparisonMenuAnchor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

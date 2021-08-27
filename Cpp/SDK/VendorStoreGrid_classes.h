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

// WidgetBlueprintGeneratedClass VendorStoreGrid.VendorStoreGrid_C
// 0x0018 (FullSize[0x0670] - InheritedSize[0x0658])
class UVendorStoreGrid_C : public UStoreGridWidget
{
public:
	class UGridPanel*                                  Grid;                                                      // 0x0658(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                NoItemsText;                                               // 0x0660(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOnlineStoreEntryListWidget*                 OnlineStoreEntryList;                                      // 0x0668(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VendorStoreGrid.VendorStoreGrid_C");
		return ptr;
	}



	class UWidget* GetNoItemsWidget();
	class UOnlineStoreEntryListWidget* GetEntryListWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

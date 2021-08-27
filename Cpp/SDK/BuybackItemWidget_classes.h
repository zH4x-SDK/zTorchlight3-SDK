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

// WidgetBlueprintGeneratedClass BuybackItemWidget.BuybackItemWidget_C
// 0x0008 (FullSize[0x0918] - InheritedSize[0x0910])
class UBuybackItemWidget_C : public UBuybackItemWidget
{
public:
	class UInventoryItemButton_C*                      InventoryItemButton;                                       // 0x0910(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BuybackItemWidget.BuybackItemWidget_C");
		return ptr;
	}



	class UInventoryItemWidget* GetItemWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

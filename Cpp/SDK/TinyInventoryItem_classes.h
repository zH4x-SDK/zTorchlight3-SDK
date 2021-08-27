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

// WidgetBlueprintGeneratedClass TinyInventoryItem.TinyInventoryItem_C
// 0x0010 (FullSize[0x08B0] - InheritedSize[0x08A0])
class UTinyInventoryItem_C : public UInventoryItemBaseWidget
{
public:
	class UTLImage*                                    ItemImage;                                                 // 0x08A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                NumberText;                                                // 0x08A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TinyInventoryItem.TinyInventoryItem_C");
		return ptr;
	}



	class UTLImage* GetItemIconImage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

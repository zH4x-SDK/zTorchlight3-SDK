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

// WidgetBlueprintGeneratedClass FortPropIconWidget.FortPropIconWidget_C
// 0x0028 (FullSize[0x08E8] - InheritedSize[0x08C0])
class UFortPropIconWidget_C : public UFortPropIconWidget
{
public:
	class UTLImage*                                    ItemBGImage;                                               // 0x08C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLBorderHighlightable*                      ItemFrameHighlightable;                                    // 0x08C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    ItemImage;                                                 // 0x08D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                                 MenuAnchor;                                                // 0x08D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                Quantity;                                                  // 0x08E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FortPropIconWidget.FortPropIconWidget_C");
		return ptr;
	}



	class UMenuAnchor* GetTooltipAnchor();
	class UTLTextBlock* GetQuantityTextBlock();
	class UTLImage* GetItemIconBackground();
	class UTLBorder* GetItemIconBorder();
	class UTLImage* GetPropIconImage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

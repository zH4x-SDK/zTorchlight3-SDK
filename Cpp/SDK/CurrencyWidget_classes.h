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

// WidgetBlueprintGeneratedClass CurrencyWidget.CurrencyWidget_C
// 0x0072 (FullSize[0x076A] - InheritedSize[0x06F8])
class UCurrencyWidget_C : public UCurrencyWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            UpdateValue;                                               // 0x0700(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLBorderHighlightable*                      EmptyFrameHighlightable;                                   // 0x0708(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    ItemBGImage;                                               // 0x0710(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLBorderHighlightable*                      ItemFrameHighlightable;                                    // 0x0718(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    ItemImage;                                                 // 0x0720(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                NameText;                                                  // 0x0728(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTraitTextBlock*                             QuanityTraitBlock;                                         // 0x0730(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Quantities;                                                // 0x0738(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                QuantityTextBlock;                                         // 0x0740(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                                 TooltipMenuAnchor;                                         // 0x0748(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFMODEventReference                         EquipEvent;                                                // 0x0750(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                               ShowName;                                                  // 0x0768(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowAmount;                                                // 0x0769(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CurrencyWidget.CurrencyWidget_C");
		return ptr;
	}



	class UMenuAnchor* GetTooltipAnchor();
	class UTLImage* GetItemIconBackground();
	class UTLBorder* GetItemIconBorder();
	void RefreshVisibility();
	class UWidgetAnimation* GetValueUpdatedAnimation();
	class UWidget* GetResourceFrame();
	class UTLImage* GetIconImage();
	class UTLTextBlock* GetTextBlock();
	class UTraitTextBlock* GetTraitTextBlock();
	void Construct();
	void ExecuteUbergraph_CurrencyWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

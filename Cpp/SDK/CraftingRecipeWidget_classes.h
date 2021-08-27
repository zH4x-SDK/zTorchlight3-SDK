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

// WidgetBlueprintGeneratedClass CraftingRecipeWidget.CraftingRecipeWidget_C
// 0x0040 (FullSize[0x07E8] - InheritedSize[0x07A8])
class UCraftingRecipeWidget_C : public UCraftingRecipeWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            CraftAnim;                                                 // 0x07B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLButton*                                   DecorationButton;                                          // 0x07B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                Description;                                               // 0x07C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                Duration;                                                  // 0x07C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGenericResourceWidget_C*                    GenericResourceWidget;                                     // 0x07D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNewFlag_C*                                  NewFlag;                                                   // 0x07D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                TLTextBlock_555;                                           // 0x07E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CraftingRecipeWidget.CraftingRecipeWidget_C");
		return ptr;
	}



	class UWidget* GetNewFlagWidget();
	class UWidgetAnimation* GetCraftingAnimation();
	class UGenericResourceWidget* GetProductWidget();
	struct FSlateColor GetCostsLabelColor();
	void BndEvt__DecorationButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_CraftingRecipeWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

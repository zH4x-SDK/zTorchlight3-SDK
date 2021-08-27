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

// WidgetBlueprintGeneratedClass CurrencyPickUpWidget.CurrencyPickUpWidget_C
// 0x0028 (FullSize[0x0728] - InheritedSize[0x0700])
class UCurrencyPickUpWidget_C : public UCurrencyPickUpWidget
{
public:
	class UWidgetAnimation*                            HidePickUpAnimation;                                       // 0x0700(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            NormalPickUpAnimation;                                     // 0x0708(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLImage*                                    BGFrame;                                                   // 0x0710(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCurrencyWidget_C*                           CurrencyWidget;                                            // 0x0718(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                ItemNameTextBlock;                                         // 0x0720(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CurrencyPickUpWidget.CurrencyPickUpWidget_C");
		return ptr;
	}



	class UCurrencyWidget* GetCurrencyIcon();
	class UWidgetAnimation* GetShowAnimation();
	class UWidgetAnimation* GetHideAnimation();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

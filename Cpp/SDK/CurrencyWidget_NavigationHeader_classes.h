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

// WidgetBlueprintGeneratedClass CurrencyWidget_NavigationHeader.CurrencyWidget_NavigationHeader_C
// 0x0018 (FullSize[0x0710] - InheritedSize[0x06F8])
class UCurrencyWidget_NavigationHeader_C : public UCurrencyWidget
{
public:
	class UTraitTextBlock*                             Amount;                                                    // 0x06F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    CurrencyIcon;                                              // 0x0700(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                FixedValue;                                                // 0x0708(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CurrencyWidget_NavigationHeader.CurrencyWidget_NavigationHeader_C");
		return ptr;
	}



	class UTLTextBlock* GetTextBlock();
	class UTLImage* GetIconImage();
	class UTraitTextBlock* GetTraitTextBlock();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

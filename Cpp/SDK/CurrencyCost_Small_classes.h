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

// WidgetBlueprintGeneratedClass CurrencyCost_Small.CurrencyCost_Small_C
// 0x0018 (FullSize[0x08A0] - InheritedSize[0x0888])
class UCurrencyCost_Small_C : public UCurrencyCostWidget
{
public:
	class UAsyncImage*                                 Icon;                                                      // 0x0888(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                                 MenuAnchor_204;                                            // 0x0890(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                ResourceRequired;                                          // 0x0898(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CurrencyCost_Small.CurrencyCost_Small_C");
		return ptr;
	}



	class UMenuAnchor* GetTooltipAnchor();
	class UTLTextBlock* GetResourceRequiredTextBlock();
	class UAsyncImage* GetResourceIcon();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

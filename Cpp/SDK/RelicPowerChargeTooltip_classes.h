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

// WidgetBlueprintGeneratedClass RelicPowerChargeTooltip.RelicPowerChargeTooltip_C
// 0x0020 (FullSize[0x06A0] - InheritedSize[0x0680])
class URelicPowerChargeTooltip_C : public UActiveTraitTooltipWidget
{
public:
	class UActiveTraitTextBlock*                       CurrentCharge;                                             // 0x0680(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTraitTextBlock*                             MaxCharge;                                                 // 0x0688(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                TLTextBlock_4;                                             // 0x0690(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                TLTextBlock_5;                                             // 0x0698(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RelicPowerChargeTooltip.RelicPowerChargeTooltip_C");
		return ptr;
	}



	class UTLTextBlock* GetTraitNameBlock();
	class UActiveTraitTextBlock* GetCurrentTraitText();
	class UTraitTextBlock* GetMaxTraitText();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

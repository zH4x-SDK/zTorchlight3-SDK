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

// WidgetBlueprintGeneratedClass PhysicalDefenseRow.PhysicalDefenseRow_C
// 0x0020 (FullSize[0x0690] - InheritedSize[0x0670])
class UPhysicalDefenseRow_C : public UStatRowWidget
{
public:
	class UAffixRange_C*                               AffixRange_127;                                            // 0x0670(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDefensePercentTextBlock*                    DefensePercentTextBlock_1;                                 // 0x0678(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDefenseTextBlock*                           DefenseTextBlock_122;                                      // 0x0680(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_1;                                                 // 0x0688(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PhysicalDefenseRow.PhysicalDefenseRow_C");
		return ptr;
	}



	class UTraitTextBlock* GetSecondTraitTextBlock();
	class UTraitTextBlock* GetTraitTextBlock();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

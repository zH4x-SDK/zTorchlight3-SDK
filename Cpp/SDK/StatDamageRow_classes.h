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

// WidgetBlueprintGeneratedClass StatDamageRow.StatDamageRow_C
// 0x0020 (FullSize[0x06A8] - InheritedSize[0x0688])
class UStatDamageRow_C : public UStatDamageRowWidget
{
public:
	class UAffixRange_C*                               AffixRange;                                                // 0x0688(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDamageTraitTextBlock*                       DamageValue;                                               // 0x0690(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    Icon;                                                      // 0x0698(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLRichTextBlock*                            RichTextBlock;                                             // 0x06A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StatDamageRow.StatDamageRow_C");
		return ptr;
	}



	class UDamageTraitTextBlock* GetDamageTextBlock();
	class UImage* GetIconImage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

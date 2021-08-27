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

// WidgetBlueprintGeneratedClass DungeonRulesCardSet.DungeonRulesCardSet_C
// 0x0010 (FullSize[0x0668] - InheritedSize[0x0658])
class UDungeonRulesCardSet_C : public UDungeonChallengeRulesCardSet
{
public:
	class UDungeonChallengeRulesCardListWidget*        DungeonChallengeRulesCardListWidget_50;                    // 0x0658(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDungeonRulesCard_C*                         DungeonRulesCard;                                          // 0x0660(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DungeonRulesCardSet.DungeonRulesCardSet_C");
		return ptr;
	}



	class UWidgetAnimation* GetCardHideAnimation();
	class UWidgetAnimation* GetCardShowAnimation();
	class UDungeonChallengeRulesCardListWidget* GetCardListWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

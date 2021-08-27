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

// WidgetBlueprintGeneratedClass DungeonPanelChallengeSelect.DungeonPanelChallengeSelect_C
// 0x0070 (FullSize[0x0790] - InheritedSize[0x0720])
class UDungeonPanelChallengeSelect_C : public UDungeonChallengeSelectPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0720(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            CardDealingAnimationFromBorder;                            // 0x0728(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UDungeonRulesCard_C*                         CardForHidingAnimation;                                    // 0x0730(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                                 ClusterAnchor;                                             // 0x0738(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDungeonCardBackShared_C*                    DungeonCardBackShared_C_543;                               // 0x0740(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDungeonCardBackShared_C*                    DungeonCardBackShared_C_544;                               // 0x0748(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDungeonCardBackShared_C*                    DungeonCardBackShared_C_545;                               // 0x0750(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDungeonChallengeRulesCardListWidget*        DungeonChallengeRulesCardListWidget_247;                   // 0x0758(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDungeonLevelSelector_C*                     DungeonLevelSelector;                                      // 0x0760(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDungeonRulesCardSet_C*                      DungeonRulesCardSet;                                       // 0x0768(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                                 FazeerAnchor;                                              // 0x0770(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    glow;                                                      // 0x0778(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_1;                                                 // 0x0780(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_2;                                                 // 0x0788(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DungeonPanelChallengeSelect.DungeonPanelChallengeSelect_C");
		return ptr;
	}



	class UWidgetAnimation* GetCardHidingAnimation();
	class UMenuAnchor* GetClusterWidgetAnchor();
	class UMenuAnchor* GetMCWidgetAnchor();
	class UDungeonChallengeLevelSelectorWidget* GetChallengeLevelSelector();
	class UDungeonChallengeRulesCardSet* GetChallengeRulesCardSet();
	void OnStateChanged(const struct FDungeonUIActionMetadata& MetaData);
	void ExecuteUbergraph_DungeonPanelChallengeSelect(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

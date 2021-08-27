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

// WidgetBlueprintGeneratedClass DungeonPanelConfirmChallenge.DungeonPanelConfirmChallenge_C
// 0x0080 (FullSize[0x07B8] - InheritedSize[0x0738])
class UDungeonPanelConfirmChallenge_C : public UDungeonChallengeConfirmPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0738(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Outro;                                                     // 0x0740(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLTextBlock*                                CancelButton;                                              // 0x0748(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                                 ClusterAffixAnchor;                                        // 0x0750(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLButton*                                   ConfirmButton;                                             // 0x0758(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDungeonRulesCardConfirm_C*                  DungeonRulesCardConfirm;                                   // 0x0760(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                                 FazeerAnchor;                                              // 0x0768(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    PartyPlayerDungeonTitle;                                   // 0x0770(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                PartyPlayerDungeonTitleText;                               // 0x0778(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    PartyUnaffectedContainer;                                  // 0x0780(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                PartyUnaffectedText;                                       // 0x0788(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    PartyWarningContainer;                                     // 0x0790(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                PartyWarningText;                                          // 0x0798(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_1;                                                 // 0x07A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLButton*                                   TLButton_1;                                                // 0x07A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                TLTextBlock_61;                                            // 0x07B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DungeonPanelConfirmChallenge.DungeonPanelConfirmChallenge_C");
		return ptr;
	}



	class UWidgetAnimation* GetOutroExitToPlayingAnimation();
	class UMenuAnchor* GetClusterWidgetAnchor();
	class UMenuAnchor* GetMCWidgetAnchor();
	class UWidget* GetPlayerDungeonTitleContainer();
	class UTLTextBlock* GetPlayerDungeonTitleText();
	class UWidget* GetProgressUnaffectedContainer();
	class UTLTextBlock* GetProgressUnaffectedText();
	class UWidget* GetProgressWarningContainer();
	class UTLTextBlock* GetProgressWarningText();
	class UDungeonChallengeRulesCard* GetRulesToConfirmWidget();
	void BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_DungeonPanelConfirmChallenge(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

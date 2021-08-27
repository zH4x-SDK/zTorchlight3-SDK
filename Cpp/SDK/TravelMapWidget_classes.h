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

// WidgetBlueprintGeneratedClass TravelMapWidget.TravelMapWidget_C
// 0x00A8 (FullSize[0x0790] - InheritedSize[0x06E8])
class UTravelMapWidget_C : public UTravelMapWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Hide;                                                      // 0x06F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            show;                                                      // 0x06F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLImage*                                    FiligreeLeft;                                              // 0x0700(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGamepadButtonLegend_C*                      GamepadButtonLegend;                                       // 0x0708(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x0710(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    OneOption;                                                 // 0x0718(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLWidgetSwitcher*                           OptionBackgroundSwitcher;                                  // 0x0720(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    PartyGroup;                                                // 0x0728(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListWidget*                                 PartyMembersList;                                          // 0x0730(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                SkillCategoryHeader;                                       // 0x0738(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStyle_CloseButtonSmall_C*                   Style_CloseButton;                                         // 0x0740(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListWidget*                                 ThisPlayerList;                                            // 0x0748(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_3;                                                 // 0x0750(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_172;                                               // 0x0758(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTravelToKnownDestinationWidget_C*           TravelToFort;                                              // 0x0760(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTravelToPartyMemberWidget_bp_C*             TravelToPartyMember1;                                      // 0x0768(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTravelToPartyMemberWidget_bp_C*             TravelToPartyMember2;                                      // 0x0770(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTravelToPartyMemberWidget_bp_C*             TravelToPartyMember3;                                      // 0x0778(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTravelToKnownDestinationWidget_C*           TravelToTown;                                              // 0x0780(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TwoOptions;                                                // 0x0788(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TravelMapWidget.TravelMapWidget_C");
		return ptr;
	}



	class UListWidget* GetDefaultDestinationsListWidget();
	class UTLWidgetSwitcher* GetOptionsBackgroundWidgetSwitcher();
	class UListWidget* GetPartyMemberListWidget();
	class UListWidget* GetDefaultGamepadListWidget();
	class UListWidget* On_PartyMembersList_GetNextListBinding(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection);
	class UListWidget* On_ThisPlayerList_GetNextListBinding(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection);
	class UWidget* GetPartyWidgetContainer();
	TArray<class UTravelToPartyMemberWidget*> GetPartyTravelWidgets();
	class UTravelToKnownDestinationWidget* GetTravelToFortWidget();
	class UTravelToKnownDestinationWidget* GetTravelToTownWidget();
	class UWidgetAnimation* GetHideAnimation();
	class UWidgetAnimation* GetShowAnimation();
	void BndEvt__Style_CloseButton_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void ExecuteUbergraph_TravelMapWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

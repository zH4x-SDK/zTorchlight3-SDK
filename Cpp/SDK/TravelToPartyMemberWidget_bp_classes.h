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

// WidgetBlueprintGeneratedClass TravelToPartyMemberWidget_bp.TravelToPartyMemberWidget_bp_C
// 0x0040 (FullSize[0x0938] - InheritedSize[0x08F8])
class UTravelToPartyMemberWidget_bp_C : public UTravelToPartyMemberWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x08F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTLTextBlock*                                CurrentArea;                                               // 0x0900(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyMemberHUDInfoWidget_C*                 PartyMemberHUDInfoWidget;                                  // 0x0908(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                PartyMemberName;                                           // 0x0910(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLButton*                                   PortalToFortButton;                                        // 0x0918(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLButton*                                   PortalToPartyMemberButton;                                 // 0x0920(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_120;                                               // 0x0928(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_122;                                               // 0x0930(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TravelToPartyMemberWidget_bp.TravelToPartyMemberWidget_bp_C");
		return ptr;
	}



	class UTLTextBlock* GetCurrentAreaTextBlock();
	class UAllyInfoWidget* GetPortraitIcon();
	class UWidget* Get_PortalToFortButton_ToolTipWidget();
	class UWidget* Get_PortalToPartyMemberButton_ToolTipWidget();
	class UTLTextBlock* GetPartyMemberNameTextBlock();
	class UTLButton* GetPortalToPartyMemberButton();
	class UTLButton* GetPortalToPartyMemberFortButton();
	void BndEvt__PortalToFortButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PortalToPartyMemberButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_TravelToPartyMemberWidget_bp(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

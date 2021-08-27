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

// WidgetBlueprintGeneratedClass PartyInstanceResetToast.PartyInstanceResetToast_C
// 0x0030 (FullSize[0x0760] - InheritedSize[0x0730])
class UPartyInstanceResetToast_C : public UPartyInstanceResetToastWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0730(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            show;                                                      // 0x0738(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLButton*                                   AcceptButton;                                              // 0x0740(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLButton*                                   DeclineButton;                                             // 0x0748(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLRichTextBlock*                            InviteText;                                                // 0x0750(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              MKBButtons;                                                // 0x0758(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PartyInstanceResetToast.PartyInstanceResetToast_C");
		return ptr;
	}



	class UWidgetAnimation* GetShowAnimation();
	class UTextLayoutWidget* GetBodyTextBlock();
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__DeclineButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_PartyInstanceResetToast(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

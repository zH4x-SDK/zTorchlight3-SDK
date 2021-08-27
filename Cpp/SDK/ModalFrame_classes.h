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

// WidgetBlueprintGeneratedClass ModalFrame.ModalFrame_C
// 0x0058 (FullSize[0x0698] - InheritedSize[0x0640])
class UModalFrame_C : public UTLUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0640(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBasicHeader_C*                              BasicHeader;                                               // 0x0648(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  ContentSlot;                                               // 0x0650(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLBorder*                                   OuterFrame;                                                // 0x0658(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStyle_CloseButtonSmall_C*                   Style_CloseButton;                                         // 0x0660(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClosed;                                                  // 0x0668(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FText                                       DefaultTitleText;                                          // 0x0678(0x0018) (Edit, BlueprintVisible)
	class UClass*                                      FrameStyle;                                                // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ModalFrame.ModalFrame_C");
		return ptr;
	}



	void SetTitleText(const struct FText& Text);
	void GetTitleTextBlock(class UTLTextBlock** TextBlock);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Style_CloseButton_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void ExecuteUbergraph_ModalFrame(int EntryPoint);
	void OnClosed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass Style_CloseButtonSmall.Style_CloseButtonSmall_C
// 0x0028 (FullSize[0x0670] - InheritedSize[0x0648])
class UStyle_CloseButtonSmall_C : public UCloseButtonWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0648(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTLButton*                                   CloseButton;                                               // 0x0650(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_1;                                             // 0x0658(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClosed;                                                  // 0x0660(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Style_CloseButtonSmall.Style_CloseButtonSmall_C");
		return ptr;
	}



	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Style_CloseButtonSmall(int EntryPoint);
	void OnClosed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

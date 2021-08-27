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

// WidgetBlueprintGeneratedClass GenericModalWidgetToast.GenericModalWidgetToast_C
// 0x0050 (FullSize[0x07E8] - InheritedSize[0x0798])
class UGenericModalWidgetToast_C : public UGenericModalWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0798(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            show;                                                      // 0x07A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                                    ContentPanel;                                              // 0x07A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLBorder*                                   OuterFrame;                                                // 0x07B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       DefaultBodyText;                                           // 0x07B8(0x0018) (Edit, BlueprintVisible)
	struct FText                                       DefaultTitleText;                                          // 0x07D0(0x0018) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GenericModalWidgetToast.GenericModalWidgetToast_C");
		return ptr;
	}



	class UWidgetAnimation* GetShowAnimation();
	class UPanelWidget* GetContentPanel();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_GenericModalWidgetToast(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass LogTaskWidget.LogTaskWidget_C
// 0x0018 (FullSize[0x06B8] - InheritedSize[0x06A0])
class ULogTaskWidget_C : public UQuestTaskWidget
{
public:
	class UWidgetAnimation*                            ShowProgress;                                              // 0x06A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Checkmark;                                                 // 0x06A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLRichTextBlock*                            TaskName;                                                  // 0x06B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LogTaskWidget.LogTaskWidget_C");
		return ptr;
	}



	class UWidgetAnimation* GetShowProgressAnimation();
	class UTLRichTextBlock* GetTaskTextBlock();
	struct FLinearColor GetCheckmarkColorAndOpacity();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

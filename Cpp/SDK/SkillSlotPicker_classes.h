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

// WidgetBlueprintGeneratedClass SkillSlotPicker.SkillSlotPicker_C
// 0x0040 (FullSize[0x0788] - InheritedSize[0x0748])
class USkillSlotPicker_C : public USkillSlotPickerWidget
{
public:
	class UWidgetAnimation*                            AssignedSkill;                                             // 0x0748(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UScaleBox*                                   Lock;                                                      // 0x0750(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                LockNumber;                                                // 0x0758(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                                 MenuAnchor_1;                                              // 0x0760(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillHotkeyWidget_C*                        SkillHotkeyWidget;                                         // 0x0768(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAsyncImage*                                 SkillIcon;                                                 // 0x0770(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLButton*                                   TLButton_1;                                                // 0x0778(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_71;                                                // 0x0780(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillSlotPicker.SkillSlotPicker_C");
		return ptr;
	}



	class UAsyncImage* GetIconImage();
	struct FText Get_LockNumber_Text_1();
	UMG_ESlateVisibility Get_Lock_Visibility_1();
	class UMenuAnchor* GetDescriptionAnchor();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	class USkillHotkey* GetSkillHotkey();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

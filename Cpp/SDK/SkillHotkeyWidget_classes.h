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

// WidgetBlueprintGeneratedClass SkillHotkeyWidget.SkillHotkeyWidget_C
// 0x0028 (FullSize[0x06C8] - InheritedSize[0x06A0])
class USkillHotkeyWidget_C : public USkillHotkey
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            PulseCooldownAnimation;                                    // 0x06A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                     ButtonBGWidget;                                            // 0x06B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    CooldownPulse;                                             // 0x06B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                TextWidget;                                                // 0x06C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillHotkeyWidget.SkillHotkeyWidget_C");
		return ptr;
	}



	class UButton* GetBGButton();
	class UTextBlock* GetTextBlock();
	void PlayCooldownPulseAnimation();
	void HideCooldownPulseIndicator();
	void ExecuteUbergraph_SkillHotkeyWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

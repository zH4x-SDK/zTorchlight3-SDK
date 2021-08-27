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

// WidgetBlueprintGeneratedClass SkillActiveWidgetBlueprint.SkillActiveWidgetBlueprint_C
// 0x0041 (FullSize[0x06B9] - InheritedSize[0x0678])
class USkillActiveWidgetBlueprint_C : public USkillActiveWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0678(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     CannotUseSkillOverlayWidget;                               // 0x0680(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              ChargePips;                                                // 0x0688(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                                CooldownOverlay;                                           // 0x0690(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                CooldownText;                                              // 0x0698(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    EDLock;                                                    // 0x06A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillHotkeyWidget_C*                        HotkeyWidget;                                              // 0x06A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillDisplayBlueprintWidget_C*              SkillDisplayWidget;                                        // 0x06B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               ShowHotkey;                                                // 0x06B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillActiveWidgetBlueprint.SkillActiveWidgetBlueprint_C");
		return ptr;
	}



	class UProgressBar* GetCooldownProgress();
	class UTextBlock* GetCooldownTextBlock();
	class UPanelWidget* GetChargesWidget();
	class USkillDisplayWidget* GetSkillDisplay();
	class UWidget* GetTooltipWidget_1();
	class USkillHotkey* GetSkillHotkey();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_SkillActiveWidgetBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass SkillGroupToggleHotkey.SkillGroupToggleHotkey_C
// 0x0010 (FullSize[0x06A8] - InheritedSize[0x0698])
class USkillGroupToggleHotkey_C : public UGamepadSkillGroupToggle
{
public:
	class UButton*                                     ButtonBGWidget;                                            // 0x0698(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                TextWidget;                                                // 0x06A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillGroupToggleHotkey.SkillGroupToggleHotkey_C");
		return ptr;
	}



	class UButton* GetBGButton();
	class UTextBlock* GetTextBlock();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

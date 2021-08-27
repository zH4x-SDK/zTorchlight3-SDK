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

// WidgetBlueprintGeneratedClass GamepadButtonAction.GamepadButtonAction_C
// 0x0018 (FullSize[0x0680] - InheritedSize[0x0668])
class UGamepadButtonAction_C : public UGamepadButtonActionWidget
{
public:
	class UTLTextBlock*                                ButtonDescription;                                         // 0x0668(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLProgressBar*                              HoldProgress;                                              // 0x0670(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHotkeyWidget_C*                             HotkeyWidget;                                              // 0x0678(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GamepadButtonAction.GamepadButtonAction_C");
		return ptr;
	}



	class UProgressBar* GetHoldProgressBar();
	class UTLTextBlock* GetTextBlock();
	class UHotkeyWidget* GetButtonImage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

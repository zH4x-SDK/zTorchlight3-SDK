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

// WidgetBlueprintGeneratedClass GamepadAButton.GamepadAButton_C
// 0x0018 (FullSize[0x0658] - InheritedSize[0x0640])
class UGamepadAButton_C : public UGamepadInteractButtonUIWidget
{
public:
	class UWidgetAnimation*                            Hide;                                                      // 0x0640(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            PlumpReveal;                                               // 0x0648(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHotkeyWidget_C*                             HotkeyWidget;                                              // 0x0650(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GamepadAButton.GamepadAButton_C");
		return ptr;
	}



	class UWidgetAnimation* GetHideAnimation();
	class UWidgetAnimation* GetShowAnimation();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

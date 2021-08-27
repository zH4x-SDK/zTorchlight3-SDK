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

// WidgetBlueprintGeneratedClass FloatingGamepadButtonAction.FloatingGamepadButtonAction_C
// 0x0010 (FullSize[0x06B8] - InheritedSize[0x06A8])
class UFloatingGamepadButtonAction_C : public UFloatingGamepadButtonActionWidget
{
public:
	class UTLTextBlock*                                ButtonDescription;                                         // 0x06A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHotkeyWidget_C*                             HotkeyWidget;                                              // 0x06B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FloatingGamepadButtonAction.FloatingGamepadButtonAction_C");
		return ptr;
	}



	class UTLTextBlock* GetTextBlock();
	class UHotkeyWidget* GetButtonImage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

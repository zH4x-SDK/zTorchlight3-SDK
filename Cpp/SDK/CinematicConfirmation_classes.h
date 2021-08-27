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

// WidgetBlueprintGeneratedClass CinematicConfirmation.CinematicConfirmation_C
// 0x0010 (FullSize[0x0650] - InheritedSize[0x0640])
class UCinematicConfirmation_C : public UTLUserWidget
{
public:
	class UWidgetAnimation*                            show;                                                      // 0x0640(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UGamepadButtonLegend_C*                      GamepadButtonLegend;                                       // 0x0648(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CinematicConfirmation.CinematicConfirmation_C");
		return ptr;
	}



	class UWidgetAnimation* GetShowAnimation();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass GamepadButtonLegend.GamepadButtonLegend_C
// 0x0008 (FullSize[0x0650] - InheritedSize[0x0648])
class UGamepadButtonLegend_C : public UGamepadButtonLegend
{
public:
	class UGamepadButtonActionList*                    ActionsList;                                               // 0x0648(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GamepadButtonLegend.GamepadButtonLegend_C");
		return ptr;
	}



	class UGamepadButtonActionList* GetActionList();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass ForgedResourceBarSteam.ForgedResourceBarSteam_C
// 0x0008 (FullSize[0x06B0] - InheritedSize[0x06A8])
class UForgedResourceBarSteam_C : public UForgedResourceBar
{
public:
	class UMenuAnchor*                                 TooltipMenuAnchor;                                         // 0x06A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ForgedResourceBarSteam.ForgedResourceBarSteam_C");
		return ptr;
	}



	class UMenuAnchor* GetTooltipAnchor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

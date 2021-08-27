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

// WidgetBlueprintGeneratedClass OverlayMapWrapper.OverlayMapWrapper_C
// 0x0008 (FullSize[0x0650] - InheritedSize[0x0648])
class UOverlayMapWrapper_C : public UOverlayMapWrapper
{
public:
	class UOverlayMapWidget_C*                         OverlayMapWidget;                                          // 0x0648(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OverlayMapWrapper.OverlayMapWrapper_C");
		return ptr;
	}



	class UWidget* GetMapWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

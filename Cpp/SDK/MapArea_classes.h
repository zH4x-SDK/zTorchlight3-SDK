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

// WidgetBlueprintGeneratedClass MapArea.MapArea_C
// 0x0018 (FullSize[0x0798] - InheritedSize[0x0780])
class UMapArea_C : public UMapWidget
{
public:
	class UImage*                                      MapImage;                                                  // 0x0780(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapMarkerListWidget*                        MapMarkerList;                                             // 0x0788(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVirtualCursorPanel*                         MarkerVirtualCursorPanel;                                  // 0x0790(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapArea.MapArea_C");
		return ptr;
	}



	class UVirtualCursorPanel* GetVirtualCursorPanel();
	class UImage* GetMapImageWidget();
	class UMapMarkerListWidget* GetMarkerListWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

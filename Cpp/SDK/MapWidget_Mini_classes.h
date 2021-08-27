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

// WidgetBlueprintGeneratedClass MapWidget_Mini.MapWidget_Mini_C
// 0x0020 (FullSize[0x07A0] - InheritedSize[0x0780])
class UMapWidget_Mini_C : public UMapWidget
{
public:
	class UWidgetAnimation*                            show;                                                      // 0x0780(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      MapImage;                                                  // 0x0788(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      MapLensOverlay;                                            // 0x0790(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapMarkerListWidget*                        MapMarkerList;                                             // 0x0798(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapWidget_Mini.MapWidget_Mini_C");
		return ptr;
	}



	class UWidgetAnimation* GetShowAnimation();
	class UImage* GetMapImageWidget();
	class UMapMarkerListWidget* GetMarkerListWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

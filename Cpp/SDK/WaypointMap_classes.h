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

// WidgetBlueprintGeneratedClass WaypointMap.WaypointMap_C
// 0x0018 (FullSize[0x0740] - InheritedSize[0x0728])
class UWaypointMap_C : public UTabbedMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0728(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMapPanelWidget_C*                           MapPanelWidget;                                            // 0x0730(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNavigationHeader_C*                         NavigationHeader;                                          // 0x0738(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WaypointMap.WaypointMap_C");
		return ptr;
	}



	class UTLTextBlock* GetMenuHeader();
	void Construct();
	void Closed();
	void ExecuteUbergraph_WaypointMap(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

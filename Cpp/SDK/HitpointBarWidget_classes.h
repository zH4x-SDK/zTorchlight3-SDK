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

// WidgetBlueprintGeneratedClass HitpointBarWidget.HitpointBarWidget_C
// 0x0018 (FullSize[0x0720] - InheritedSize[0x0708])
class UHitpointBarWidget_C : public UFloatingHitpointBarWidget
{
public:
	class UWidgetAnimation*                            HideAnim;                                                  // 0x0708(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            ShowAnim;                                                  // 0x0710(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                                HitPointProgressBar;                                       // 0x0718(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HitpointBarWidget.HitpointBarWidget_C");
		return ptr;
	}



	class UProgressBar* GetProgressBar();
	class UWidgetAnimation* GetHideAnimation();
	class UWidgetAnimation* GetShowAnimation();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

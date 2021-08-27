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

// WidgetBlueprintGeneratedClass TargetInfoWidget.TargetInfoWidget_C
// 0x0030 (FullSize[0x0748] - InheritedSize[0x0718])
class UTargetInfoWidget_C : public UTargetInfoWidgetContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInvalidationBox*                            InvalidationBox_1;                                         // 0x0720(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                OverallContainer;                                          // 0x0728(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStatusEffectBar_Buffs_Monster_C*            StatusEffectBar_Buffs_Monster;                             // 0x0730(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStatusEffectBar_Debuffs_Monster_C*          StatusEffectBar_Debuffs_Monster;                           // 0x0738(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    WidgetPanel;                                               // 0x0740(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TargetInfoWidget.TargetInfoWidget_C");
		return ptr;
	}



	class UWidget* GetOverallVisibilityContainer();
	class UPanelWidget* GetPanel();
	void OnSelectedActorChanged();
	void ExecuteUbergraph_TargetInfoWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

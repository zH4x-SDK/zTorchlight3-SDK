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

// WidgetBlueprintGeneratedClass StatusEffectBar_Debuffs.StatusEffectBar_Debuffs_C
// 0x0008 (FullSize[0x0680] - InheritedSize[0x0678])
class UStatusEffectBar_Debuffs_C : public UStatusEffectBar
{
public:
	class UStatusEffectListWidget*                     StatusEffectList;                                          // 0x0678(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StatusEffectBar_Debuffs.StatusEffectBar_Debuffs_C");
		return ptr;
	}



	class UStatusEffectListWidget* GetStatusEffectListWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

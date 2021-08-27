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

// WidgetBlueprintGeneratedClass SkillDisplayScalableWidget.SkillDisplayScalableWidget_C
// 0x0008 (FullSize[0x0660] - InheritedSize[0x0658])
class USkillDisplayScalableWidget_C : public USkillDisplayWidget
{
public:
	class USkillDisplayBlueprintWidget_C*              SkillDisplayBlueprintWidget;                               // 0x0658(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillDisplayScalableWidget.SkillDisplayScalableWidget_C");
		return ptr;
	}



	class UTLImage* GetIconImage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

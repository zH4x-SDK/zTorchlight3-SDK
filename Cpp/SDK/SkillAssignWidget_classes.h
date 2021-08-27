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

// WidgetBlueprintGeneratedClass SkillAssignWidget.SkillAssignWidget_C
// 0x0010 (FullSize[0x06A0] - InheritedSize[0x0690])
class USkillAssignWidget_C : public USkillAssignWidget
{
public:
	class UMenuAnchor*                                 MenuAnchor_1;                                              // 0x0690(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAsyncImage*                                 SkillIcon;                                                 // 0x0698(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillAssignWidget.SkillAssignWidget_C");
		return ptr;
	}



	class UAsyncImage* GetIconImage();
	class UMenuAnchor* GetDescriptionAnchor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

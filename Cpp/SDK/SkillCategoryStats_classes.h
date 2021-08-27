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

// WidgetBlueprintGeneratedClass SkillCategoryStats.SkillCategoryStats_C
// 0x0010 (FullSize[0x0668] - InheritedSize[0x0658])
class USkillCategoryStats_C : public UStatCategoryWidget
{
public:
	class UTLRichTextBlock*                            CategoryHeader;                                            // 0x0658(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStatRowListWidget*                          StatsRowList;                                              // 0x0660(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillCategoryStats.SkillCategoryStats_C");
		return ptr;
	}



	UMG_ESlateVisibility Get_CategoryHeader_Visibility_1();
	class UStatRowListWidget* GetStatRowList();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

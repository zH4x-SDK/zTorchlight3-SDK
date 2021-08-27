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

// WidgetBlueprintGeneratedClass PetIconWidget.PetIconWidget_C
// 0x0018 (FullSize[0x0760] - InheritedSize[0x0748])
class UPetIconWidget_C : public UPetIconWidget
{
public:
	class UTLBorder*                                   IconBorder;                                                // 0x0748(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                                 MenuAnchor_1;                                              // 0x0750(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    PetIcon;                                                   // 0x0758(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PetIconWidget.PetIconWidget_C");
		return ptr;
	}



	class UMenuAnchor* GetComparisonMenuAnchor();
	class UTLImage* GetPetIconImage();
	class UTLImage* GetItemIconBackground();
	class UTLBorder* GetItemIconBorder();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

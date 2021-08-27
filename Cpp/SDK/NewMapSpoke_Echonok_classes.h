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

// WidgetBlueprintGeneratedClass NewMapSpoke_Echonok.NewMapSpoke_Echonok_C
// 0x0068 (FullSize[0x06A8] - InheritedSize[0x0640])
class UNewMapSpoke_Echonok_C : public UMapSpokeWidget
{
public:
	class UAreaInSpokeBase_C*                          AreaInSpokeBase_C_1;                                       // 0x0640(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAreaInSpokeBase_C*                          AreaInSpokeBase_C_2;                                       // 0x0648(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListWidget*                                 AreaList;                                                  // 0x0650(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                ButtonCanvas;                                              // 0x0658(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAreaInSpokeBase_C*                          EchonokMountains1;                                         // 0x0660(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAreaInSpokeBase_C*                          EchonokMountains2;                                         // 0x0668(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAreaInSpokeBase_C*                          EchonokMountains3;                                         // 0x0670(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAreaInSpokeBase_C*                          EchonokMountains4;                                         // 0x0678(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAreaInSpokeBase_C*                          EM1_2_pass;                                                // 0x0680(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAreaInSpokeBase_C*                          IF2_3_pass;                                                // 0x0688(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAreaInSpokeBase_C*                          IF3_4_Pass;                                                // 0x0690(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_1;                                                 // 0x0698(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTownBase_C*                                 TownBase;                                                  // 0x06A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NewMapSpoke_Echonok.NewMapSpoke_Echonok_C");
		return ptr;
	}



	class UListWidget* On_AreaList_GetNextListBinding_1(class UListWidget* CurrentList, SlateCore_EUINavigation NavDirection);
	class UListWidget* GetAreaWidgetList();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

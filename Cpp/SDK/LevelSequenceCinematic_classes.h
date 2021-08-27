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

// WidgetBlueprintGeneratedClass LevelSequenceCinematic.LevelSequenceCinematic_C
// 0x0008 (FullSize[0x0670] - InheritedSize[0x0668])
class ULevelSequenceCinematic_C : public ULevelSequenceCinematicWidget
{
public:
	class UCinematicConfirmation_C*                    CinematicConfirmation;                                     // 0x0668(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LevelSequenceCinematic.LevelSequenceCinematic_C");
		return ptr;
	}



	class UTLUserWidget* GetConfirmationWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass ResolutionConfirmationContent.ResolutionConfirmationContent_C
// 0x0008 (FullSize[0x0298] - InheritedSize[0x0290])
class UResolutionConfirmationContent_C : public UResolutionConfirmationWidget
{
public:
	class UProgressBar*                                ProgressBar_1;                                             // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ResolutionConfirmationContent.ResolutionConfirmationContent_C");
		return ptr;
	}



	class UProgressBar* GetProgressBarWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

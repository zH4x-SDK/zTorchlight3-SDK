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

// BlueprintGeneratedClass NarratorTraitMonitorComponent.NarratorTraitMonitorComponent_C
// 0x0009 (FullSize[0x00D9] - InheritedSize[0x00D0])
class UNarratorTraitMonitorComponent_C : public UActiveTraitMonitorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	Frontiers_ENarratorQuip                            QuipReference;                                             // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NarratorTraitMonitorComponent.NarratorTraitMonitorComponent_C");
		return ptr;
	}



	void OnRuleTriggered(const struct FName& Data);
	void ExecuteUbergraph_NarratorTraitMonitorComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

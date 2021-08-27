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

// BlueprintGeneratedClass StatusEffect_Champion.StatusEffect_Champion_C
// 0x0020 (FullSize[0x02A0] - InheritedSize[0x0280])
class UStatusEffect_Champion_C : public UStatusEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FFMODEventReference                         SpawnAudioEvent;                                           // 0x0288(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StatusEffect_Champion.StatusEffect_Champion_C");
		return ptr;
	}



	void ShouldPlayDeathEffects(bool* ShouldPlay);
	void ShouldPlaySpawnEffects(bool* ShouldPlay);
	void OnPreApply();
	void ExecuteUbergraph_StatusEffect_Champion(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

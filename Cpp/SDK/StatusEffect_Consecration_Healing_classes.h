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

// BlueprintGeneratedClass StatusEffect_Consecration_Healing.StatusEffect_Consecration_Healing_C
// 0x0008 (FullSize[0x0290] - InheritedSize[0x0288])
class UStatusEffect_Consecration_Healing_C : public UStatusEffect_Consecration_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StatusEffect_Consecration_Healing.StatusEffect_Consecration_Healing_C");
		return ptr;
	}



	void OnEventTimerTick();
	void OnPreApply();
	void ExecuteUbergraph_StatusEffect_Consecration_Healing(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

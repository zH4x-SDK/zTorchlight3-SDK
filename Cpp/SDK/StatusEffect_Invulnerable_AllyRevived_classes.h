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

// BlueprintGeneratedClass StatusEffect_Invulnerable_AllyRevived.StatusEffect_Invulnerable_AllyRevived_C
// 0x00F0 (FullSize[0x0370] - InheritedSize[0x0280])
class UStatusEffect_Invulnerable_AllyRevived_C : public UStatusEffect_Invulnerable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData_O6CG[0x8];                                     // 0x0288(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEffectDefinition                           ParticlesEnd_01;                                           // 0x0290(0x00D0) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FEffectDefinition>                   ParticleStart_01;                                          // 0x0360(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StatusEffect_Invulnerable_AllyRevived.StatusEffect_Invulnerable_AllyRevived_C");
		return ptr;
	}



	void OnCleared();
	void OnPreApply();
	void ExecuteUbergraph_StatusEffect_Invulnerable_AllyRevived(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

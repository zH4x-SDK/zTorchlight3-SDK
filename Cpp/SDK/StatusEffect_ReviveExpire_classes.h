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

// BlueprintGeneratedClass StatusEffect_ReviveExpire.StatusEffect_ReviveExpire_C
// 0x00E0 (FullSize[0x0360] - InheritedSize[0x0280])
class UStatusEffect_ReviveExpire_C : public UStatusEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData_GL6I[0x8];                                     // 0x0288(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEffectDefinition                           CanBeRevivedEffect;                                        // 0x0290(0x00D0) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StatusEffect_ReviveExpire.StatusEffect_ReviveExpire_C");
		return ptr;
	}



	void OnExpired();
	void ExecuteUbergraph_StatusEffect_ReviveExpire(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

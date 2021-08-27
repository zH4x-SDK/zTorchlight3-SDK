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

// BlueprintGeneratedClass StatusEffect_Shocked.StatusEffect_Shocked_C
// 0x0018 (FullSize[0x0298] - InheritedSize[0x0280])
class UStatusEffect_Shocked_C : public UStatusEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    FireMissilesEvent;                                         // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StatusEffect_Shocked.StatusEffect_Shocked_C");
		return ptr;
	}



	TArray<struct FTraitKey> GetBlueprintRelevantInstigatorTraitKeys();
	void FireMissiles();
	void OnPreApply();
	void FireMissilesEvent_Event();
	void OnPostDeath();
	void ExecuteUbergraph_StatusEffect_Shocked(int EntryPoint);
	void FireMissilesEvent__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

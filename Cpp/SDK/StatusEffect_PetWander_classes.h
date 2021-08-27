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

// BlueprintGeneratedClass StatusEffect_PetWander.StatusEffect_PetWander_C
// 0x000C (FullSize[0x028C] - InheritedSize[0x0280])
class UStatusEffect_PetWander_C : public UStatusEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CachedSpeed;                                               // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StatusEffect_PetWander.StatusEffect_PetWander_C");
		return ptr;
	}



	void OnPreApply();
	void OnCleared();
	void ExecuteUbergraph_StatusEffect_PetWander(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass StatusEffect_PetFollow.StatusEffect_PetFollow_C
// 0x0014 (FullSize[0x0294] - InheritedSize[0x0280])
class UStatusEffect_PetFollow_C : public UStatusEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              FollowSpeedIncrease;                                       // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FasterBaseMoveSpeed;                                       // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CachedBaseMoveSpeed;                                       // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StatusEffect_PetFollow.StatusEffect_PetFollow_C");
		return ptr;
	}



	void SetNewBaseSpeed(float NewBaseSpeed);
	void MatchesBaseSpeed(float Speed, bool* NewParam);
	void IsBehindActor(class AActor* Actor, bool* Return);
	void OnEventTimerTick();
	void OnPreApply();
	void OnCleared();
	void ExecuteUbergraph_StatusEffect_PetFollow(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

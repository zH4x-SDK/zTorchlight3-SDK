﻿#pragma once

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

// BlueprintGeneratedClass StatusEffect_BossRoom_Monster.StatusEffect_BossRoom_Monster_C
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
class UStatusEffect_BossRoom_Monster_C : public UStatusEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StatusEffect_BossRoom_Monster.StatusEffect_BossRoom_Monster_C");
		return ptr;
	}



	void OnPreApply();
	void ExecuteUbergraph_StatusEffect_BossRoom_Monster(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

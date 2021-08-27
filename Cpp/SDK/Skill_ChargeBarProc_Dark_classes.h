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

// BlueprintGeneratedClass Skill_ChargeBarProc_Dark.Skill_ChargeBarProc_Dark_C
// 0x0000 (FullSize[0x0580] - InheritedSize[0x0580])
class USkill_ChargeBarProc_Dark_C : public USkill_ChargeBarProc_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Skill_ChargeBarProc_Dark.Skill_ChargeBarProc_Dark_C");
		return ptr;
	}



	void GetChargeBonusPercent(class AActor* Actor, float* BonusPercent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

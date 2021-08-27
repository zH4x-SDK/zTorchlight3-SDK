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

// BlueprintGeneratedClass StatusEffect_ChargeBarLock.StatusEffect_ChargeBarLock_C
// 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
class UStatusEffect_ChargeBarLock_C : public UStatusEffect
{
public:
	struct FActiveTraitsTableRowHandle                 ChargeBarName;                                             // 0x0280(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StatusEffect_ChargeBarLock.StatusEffect_ChargeBarLock_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

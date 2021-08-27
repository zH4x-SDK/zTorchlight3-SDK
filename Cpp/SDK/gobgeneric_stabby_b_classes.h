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

// BlueprintGeneratedClass gobgeneric_stabby_b.gobgeneric_stabby_b_C
// 0x000C (FullSize[0x0800] - InheritedSize[0x07F4])
class Agobgeneric_stabby_b_C : public ABaseMonster_C
{
public:
	unsigned char                                      UnknownData_3SR9[0x4];                                     // 0x07F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTLParticleSystemComponent*                  TLParticleSystem;                                          // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass gobgeneric_stabby_b.gobgeneric_stabby_b_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

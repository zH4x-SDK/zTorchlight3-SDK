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

// BlueprintGeneratedClass Missile_DoubleCross.Missile_DoubleCross_C
// 0x0010 (FullSize[0x0690] - InheritedSize[0x0680])
class AMissile_DoubleCross_C : public AMissileBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0680(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                                // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Missile_DoubleCross.Missile_DoubleCross_C");
		return ptr;
	}



	void OnMissileLaunched();
	void ExecuteUbergraph_Missile_DoubleCross(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

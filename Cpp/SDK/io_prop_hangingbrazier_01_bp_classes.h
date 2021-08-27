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

// BlueprintGeneratedClass io_prop_hangingbrazier_01_bp.io_prop_hangingbrazier_01_bp_C
// 0x0010 (FullSize[0x0278] - InheritedSize[0x0268])
class Aio_prop_hangingbrazier_01_bp_C : public ABaseStaticObject_C
{
public:
	class UFMODAudioComponent*                         FMODAudio;                                                 // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*                    vfx_env_torch_fire_02_p;                                   // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass io_prop_hangingbrazier_01_bp.io_prop_hangingbrazier_01_bp_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

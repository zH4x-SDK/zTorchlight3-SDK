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

// BlueprintGeneratedClass io_statue_01b_bp.io_statue_01b_bp_C
// 0x0008 (FullSize[0x0270] - InheritedSize[0x0268])
class Aio_statue_01b_bp_C : public ABaseStaticObject_C
{
public:
	class UPointLightComponent*                        PointLight;                                                // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass io_statue_01b_bp.io_statue_01b_bp_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

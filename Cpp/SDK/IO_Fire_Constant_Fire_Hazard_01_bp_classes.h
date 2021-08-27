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

// BlueprintGeneratedClass IO_Fire_Constant_Fire_Hazard_01_bp.IO_Fire_Constant_Fire_Hazard_01_bp_C
// 0x0010 (FullSize[0x0488] - InheritedSize[0x0478])
class AIO_Fire_Constant_Fire_Hazard_01_bp_C : public ABasePulsingTrap_C
{
public:
	class UBoxComponent*                               Box;                                                       // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_Fire_Constant_Fire_Hazard_01_bp.IO_Fire_Constant_Fire_Hazard_01_bp_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

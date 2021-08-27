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

// BlueprintGeneratedClass BaseStaticFortProp_wBox.BaseStaticFortProp_wBox_C
// 0x0008 (FullSize[0x03C0] - InheritedSize[0x03B8])
class ABaseStaticFortProp_wBox_C : public ABaseStaticFortProp_C
{
public:
	class UBoxComponent*                               Box_Click_Collision;                                       // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseStaticFortProp_wBox.BaseStaticFortProp_wBox_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

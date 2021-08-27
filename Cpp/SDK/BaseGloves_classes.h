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

// BlueprintGeneratedClass BaseGloves.BaseGloves_C
// 0x0010 (FullSize[0x0438] - InheritedSize[0x0428])
class ABaseGloves_C : public ABaseArmor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh_left;                                         // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseGloves.BaseGloves_C");
		return ptr;
	}



	void BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_1_DoFlippyDelegate__DelegateSignature();
	void ExecuteUbergraph_BaseGloves(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

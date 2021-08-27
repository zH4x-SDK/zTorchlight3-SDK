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

// BlueprintGeneratedClass BaseClickableWithAnims.BaseClickableWithAnims_C
// 0x0018 (FullSize[0x04C0] - InheritedSize[0x04A8])
class ABaseClickableWithAnims_C : public ABaseGadget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                       // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseClickableWithAnims.BaseClickableWithAnims_C");
		return ptr;
	}



	void OnOperated(class AActor* Operator);
	void OnAnimationHitEvent(int HitIndex);
	void ExecuteUbergraph_BaseClickableWithAnims(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

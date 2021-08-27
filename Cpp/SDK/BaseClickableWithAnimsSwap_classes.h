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

// BlueprintGeneratedClass BaseClickableWithAnimsSwap.BaseClickableWithAnimsSwap_C
// 0x0018 (FullSize[0x04D8] - InheritedSize[0x04C0])
class ABaseClickableWithAnimsSwap_C : public ABaseClickableWithAnims_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHighlightMaterialComponent*                 HighlightMaterial;                                         // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SwapStaticMesh;                                            // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseClickableWithAnimsSwap.BaseClickableWithAnimsSwap_C");
		return ptr;
	}



	void Swap(bool bIsSwapped);
	void ReceiveBeginPlay();
	void OnAnimationHitEvent(int HitIndex);
	void OnOperated(class AActor* Operator);
	void OnStatusChanged();
	void ExecuteUbergraph_BaseClickableWithAnimsSwap(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

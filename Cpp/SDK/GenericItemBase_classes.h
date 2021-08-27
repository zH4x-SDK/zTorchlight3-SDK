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

// BlueprintGeneratedClass GenericItemBase.GenericItemBase_C
// 0x0048 (FullSize[0x03D8] - InheritedSize[0x0390])
class AGenericItemBase_C : public AItemActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FFMODEventReference                         DropOnGroundEventReference;                                // 0x03A0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FFMODEventReference                         EquipEventReference;                                       // 0x03B8(0x0018) (Edit, BlueprintVisible, NoDestructor)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GenericItemBase.GenericItemBase_C");
		return ptr;
	}



	void SetTickPoseOptimization(class USkeletalMeshComponent* SkeletalMesh);
	void DoFlippy(class USkeletalMeshComponent* SkeletalMesh, class USkeletalMeshComponent* SkeletalMesh2, class UAnimSequenceBase* FlippyAnimation);
	void ReceiveActorBeginCursorOver();
	void ReceiveActorEndCursorOver();
	void ExecuteUbergraph_GenericItemBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

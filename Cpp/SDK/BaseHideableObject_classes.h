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

// BlueprintGeneratedClass BaseHideableObject.BaseHideableObject_C
// 0x0028 (FullSize[0x03D8] - InheritedSize[0x03B0])
class ABaseHideableObject_C : public AHideableActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBlobShadowComponent*                        BlobShadow;                                                // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBoxComponent*                               nav_mesh_blocker;                                          // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UHideableStaticMeshComponent*                HideableStaticMesh;                                        // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseHideableObject.BaseHideableObject_C");
		return ptr;
	}



	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BaseHideableObject(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

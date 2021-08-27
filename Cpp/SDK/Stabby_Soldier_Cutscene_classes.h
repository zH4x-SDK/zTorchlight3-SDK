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

// BlueprintGeneratedClass Stabby_Soldier_Cutscene.Stabby_Soldier_Cutscene_C
// 0x0028 (FullSize[0x0248] - InheritedSize[0x0220])
class AStabby_Soldier_Cutscene_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      gobgeneric_body_04_geo;                                    // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      npcimperialguard_body_04_geo;                              // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Min;                                                       // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max;                                                       // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Stabby_Soldier_Cutscene.Stabby_Soldier_Cutscene_C");
		return ptr;
	}



	void OnNotifyEnd_B74AAAC0407D4C8DA4E10AB63F03A726(const struct FName& NotifyName);
	void OnNotifyBegin_B74AAAC0407D4C8DA4E10AB63F03A726(const struct FName& NotifyName);
	void OnInterrupted_B74AAAC0407D4C8DA4E10AB63F03A726(const struct FName& NotifyName);
	void OnBlendOut_B74AAAC0407D4C8DA4E10AB63F03A726(const struct FName& NotifyName);
	void OnCompleted_B74AAAC0407D4C8DA4E10AB63F03A726(const struct FName& NotifyName);
	void OnNotifyEnd_2F4B23914095DBD56874769C8B541C2E(const struct FName& NotifyName);
	void OnNotifyBegin_2F4B23914095DBD56874769C8B541C2E(const struct FName& NotifyName);
	void OnInterrupted_2F4B23914095DBD56874769C8B541C2E(const struct FName& NotifyName);
	void OnBlendOut_2F4B23914095DBD56874769C8B541C2E(const struct FName& NotifyName);
	void OnCompleted_2F4B23914095DBD56874769C8B541C2E(const struct FName& NotifyName);
	void OnNotifyEnd_AED5862846E9210FF61EB686FD2EE474(const struct FName& NotifyName);
	void OnNotifyBegin_AED5862846E9210FF61EB686FD2EE474(const struct FName& NotifyName);
	void OnInterrupted_AED5862846E9210FF61EB686FD2EE474(const struct FName& NotifyName);
	void OnBlendOut_AED5862846E9210FF61EB686FD2EE474(const struct FName& NotifyName);
	void OnCompleted_AED5862846E9210FF61EB686FD2EE474(const struct FName& NotifyName);
	void OnNotifyEnd_8D6C7AD64FEBEAD28BAB9F8080BA54DD(const struct FName& NotifyName);
	void OnNotifyBegin_8D6C7AD64FEBEAD28BAB9F8080BA54DD(const struct FName& NotifyName);
	void OnInterrupted_8D6C7AD64FEBEAD28BAB9F8080BA54DD(const struct FName& NotifyName);
	void OnBlendOut_8D6C7AD64FEBEAD28BAB9F8080BA54DD(const struct FName& NotifyName);
	void OnCompleted_8D6C7AD64FEBEAD28BAB9F8080BA54DD(const struct FName& NotifyName);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Stabby_Soldier_Cutscene(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

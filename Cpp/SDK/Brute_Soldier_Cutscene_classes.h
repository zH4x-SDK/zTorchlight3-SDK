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

// BlueprintGeneratedClass Brute_Soldier_Cutscene.Brute_Soldier_Cutscene_C
// 0x0040 (FullSize[0x0260] - InheritedSize[0x0220])
class ABrute_Soldier_Cutscene_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        w_shield_1h_gobbrute_t0a_geo;                              // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      npcimperialguard_body_04_geo1;                             // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      npcimperialguard_body_04_geo;                              // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                        w_club_1h_gobbrute_t0b_geo;                                // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      gobbrute_body_01_geo;                                      // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Min;                                                       // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max;                                                       // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Brute_Soldier_Cutscene.Brute_Soldier_Cutscene_C");
		return ptr;
	}



	void OnNotifyEnd_77EBB7784F18E2EE32366586A4F2D6DE(const struct FName& NotifyName);
	void OnNotifyBegin_77EBB7784F18E2EE32366586A4F2D6DE(const struct FName& NotifyName);
	void OnInterrupted_77EBB7784F18E2EE32366586A4F2D6DE(const struct FName& NotifyName);
	void OnBlendOut_77EBB7784F18E2EE32366586A4F2D6DE(const struct FName& NotifyName);
	void OnCompleted_77EBB7784F18E2EE32366586A4F2D6DE(const struct FName& NotifyName);
	void OnNotifyEnd_F642AF074E0774E5B7B36EA84FBE0454(const struct FName& NotifyName);
	void OnNotifyBegin_F642AF074E0774E5B7B36EA84FBE0454(const struct FName& NotifyName);
	void OnInterrupted_F642AF074E0774E5B7B36EA84FBE0454(const struct FName& NotifyName);
	void OnBlendOut_F642AF074E0774E5B7B36EA84FBE0454(const struct FName& NotifyName);
	void OnCompleted_F642AF074E0774E5B7B36EA84FBE0454(const struct FName& NotifyName);
	void OnNotifyEnd_10C15D744B7D7CEFCBBC16AF7553FE2F(const struct FName& NotifyName);
	void OnNotifyBegin_10C15D744B7D7CEFCBBC16AF7553FE2F(const struct FName& NotifyName);
	void OnInterrupted_10C15D744B7D7CEFCBBC16AF7553FE2F(const struct FName& NotifyName);
	void OnBlendOut_10C15D744B7D7CEFCBBC16AF7553FE2F(const struct FName& NotifyName);
	void OnCompleted_10C15D744B7D7CEFCBBC16AF7553FE2F(const struct FName& NotifyName);
	void OnNotifyEnd_9DDB13D24C4374458B24F9A699FF4653(const struct FName& NotifyName);
	void OnNotifyBegin_9DDB13D24C4374458B24F9A699FF4653(const struct FName& NotifyName);
	void OnInterrupted_9DDB13D24C4374458B24F9A699FF4653(const struct FName& NotifyName);
	void OnBlendOut_9DDB13D24C4374458B24F9A699FF4653(const struct FName& NotifyName);
	void OnCompleted_9DDB13D24C4374458B24F9A699FF4653(const struct FName& NotifyName);
	void OnNotifyEnd_ECCF753D4BFB2DF3060B13B48C75B896(const struct FName& NotifyName);
	void OnNotifyBegin_ECCF753D4BFB2DF3060B13B48C75B896(const struct FName& NotifyName);
	void OnInterrupted_ECCF753D4BFB2DF3060B13B48C75B896(const struct FName& NotifyName);
	void OnBlendOut_ECCF753D4BFB2DF3060B13B48C75B896(const struct FName& NotifyName);
	void OnCompleted_ECCF753D4BFB2DF3060B13B48C75B896(const struct FName& NotifyName);
	void OnNotifyEnd_F9BD9B7547BA3D8B57F50592DD0D1D28(const struct FName& NotifyName);
	void OnNotifyBegin_F9BD9B7547BA3D8B57F50592DD0D1D28(const struct FName& NotifyName);
	void OnInterrupted_F9BD9B7547BA3D8B57F50592DD0D1D28(const struct FName& NotifyName);
	void OnBlendOut_F9BD9B7547BA3D8B57F50592DD0D1D28(const struct FName& NotifyName);
	void OnCompleted_F9BD9B7547BA3D8B57F50592DD0D1D28(const struct FName& NotifyName);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Brute_Soldier_Cutscene(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

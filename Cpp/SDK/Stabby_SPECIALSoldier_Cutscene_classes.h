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

// BlueprintGeneratedClass Stabby_SPECIALSoldier_Cutscene.Stabby_SPECIALSoldier_Cutscene_C
// 0x0038 (FullSize[0x0258] - InheritedSize[0x0220])
class AStabby_SPECIALSoldier_Cutscene_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      gobgeneric_body_04_geo2;                                   // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      gobgeneric_body_04_geo1;                                   // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      gobgeneric_body_04_geo;                                    // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      npcimperialguard_body_04_geo;                              // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Min;                                                       // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max;                                                       // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Stabby_SPECIALSoldier_Cutscene.Stabby_SPECIALSoldier_Cutscene_C");
		return ptr;
	}



	void OnNotifyEnd_9C6D013A4AB2705A0B0DA58FC39EF96D(const struct FName& NotifyName);
	void OnNotifyBegin_9C6D013A4AB2705A0B0DA58FC39EF96D(const struct FName& NotifyName);
	void OnInterrupted_9C6D013A4AB2705A0B0DA58FC39EF96D(const struct FName& NotifyName);
	void OnBlendOut_9C6D013A4AB2705A0B0DA58FC39EF96D(const struct FName& NotifyName);
	void OnCompleted_9C6D013A4AB2705A0B0DA58FC39EF96D(const struct FName& NotifyName);
	void OnNotifyEnd_0D2805CD4A419D5071D0599EBD8A2D41(const struct FName& NotifyName);
	void OnNotifyBegin_0D2805CD4A419D5071D0599EBD8A2D41(const struct FName& NotifyName);
	void OnInterrupted_0D2805CD4A419D5071D0599EBD8A2D41(const struct FName& NotifyName);
	void OnBlendOut_0D2805CD4A419D5071D0599EBD8A2D41(const struct FName& NotifyName);
	void OnCompleted_0D2805CD4A419D5071D0599EBD8A2D41(const struct FName& NotifyName);
	void OnNotifyEnd_E2C8FDF84A82312F4ACC4F9FF9E14D32(const struct FName& NotifyName);
	void OnNotifyBegin_E2C8FDF84A82312F4ACC4F9FF9E14D32(const struct FName& NotifyName);
	void OnInterrupted_E2C8FDF84A82312F4ACC4F9FF9E14D32(const struct FName& NotifyName);
	void OnBlendOut_E2C8FDF84A82312F4ACC4F9FF9E14D32(const struct FName& NotifyName);
	void OnCompleted_E2C8FDF84A82312F4ACC4F9FF9E14D32(const struct FName& NotifyName);
	void OnNotifyEnd_8498647C4B160116B19FBFBB3C610457(const struct FName& NotifyName);
	void OnNotifyBegin_8498647C4B160116B19FBFBB3C610457(const struct FName& NotifyName);
	void OnInterrupted_8498647C4B160116B19FBFBB3C610457(const struct FName& NotifyName);
	void OnBlendOut_8498647C4B160116B19FBFBB3C610457(const struct FName& NotifyName);
	void OnCompleted_8498647C4B160116B19FBFBB3C610457(const struct FName& NotifyName);
	void OnNotifyEnd_9F47EE5B49B757361F0A6EBB8D5A7655(const struct FName& NotifyName);
	void OnNotifyBegin_9F47EE5B49B757361F0A6EBB8D5A7655(const struct FName& NotifyName);
	void OnInterrupted_9F47EE5B49B757361F0A6EBB8D5A7655(const struct FName& NotifyName);
	void OnBlendOut_9F47EE5B49B757361F0A6EBB8D5A7655(const struct FName& NotifyName);
	void OnCompleted_9F47EE5B49B757361F0A6EBB8D5A7655(const struct FName& NotifyName);
	void OnNotifyEnd_2A6B0C4F4E98D66198FFCD9CCB02D48D(const struct FName& NotifyName);
	void OnNotifyBegin_2A6B0C4F4E98D66198FFCD9CCB02D48D(const struct FName& NotifyName);
	void OnInterrupted_2A6B0C4F4E98D66198FFCD9CCB02D48D(const struct FName& NotifyName);
	void OnBlendOut_2A6B0C4F4E98D66198FFCD9CCB02D48D(const struct FName& NotifyName);
	void OnCompleted_2A6B0C4F4E98D66198FFCD9CCB02D48D(const struct FName& NotifyName);
	void OnNotifyEnd_B56548B346DBDD9E0CD69C9BE1A5EF6A(const struct FName& NotifyName);
	void OnNotifyBegin_B56548B346DBDD9E0CD69C9BE1A5EF6A(const struct FName& NotifyName);
	void OnInterrupted_B56548B346DBDD9E0CD69C9BE1A5EF6A(const struct FName& NotifyName);
	void OnBlendOut_B56548B346DBDD9E0CD69C9BE1A5EF6A(const struct FName& NotifyName);
	void OnCompleted_B56548B346DBDD9E0CD69C9BE1A5EF6A(const struct FName& NotifyName);
	void OnNotifyEnd_031E58A04E578F50D99B5FA678A24838(const struct FName& NotifyName);
	void OnNotifyBegin_031E58A04E578F50D99B5FA678A24838(const struct FName& NotifyName);
	void OnInterrupted_031E58A04E578F50D99B5FA678A24838(const struct FName& NotifyName);
	void OnBlendOut_031E58A04E578F50D99B5FA678A24838(const struct FName& NotifyName);
	void OnCompleted_031E58A04E578F50D99B5FA678A24838(const struct FName& NotifyName);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Stabby_SPECIALSoldier_Cutscene(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

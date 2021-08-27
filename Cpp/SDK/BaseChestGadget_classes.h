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

// BlueprintGeneratedClass BaseChestGadget.BaseChestGadget_C
// 0x0020 (FullSize[0x04E0] - InheritedSize[0x04C0])
class ABaseChestGadget_C : public ABaseClickableWithAnims_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<Engine_ETimelineDirection>             DoubloonSpawner__Direction_824FBD3F4658B4C2E0E5CA87B6A28E1B; // 0x04C8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CKGB[0x7];                                     // 0x04C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          DoubloonSpawner;                                           // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int                                                DoubloonsToSpawn;                                          // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DoubloonsSpawned;                                          // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseChestGadget.BaseChestGadget_C");
		return ptr;
	}



	void DoubloonSpawner__FinishedFunc();
	void DoubloonSpawner__UpdateFunc();
	void OnOperated(class AActor* Operator);
	void ExecuteUbergraph_BaseChestGadget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

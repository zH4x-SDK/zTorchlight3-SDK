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

// BlueprintGeneratedClass Hazard_Shasta.Hazard_Shasta_C
// 0x0080 (FullSize[0x04C0] - InheritedSize[0x0440])
class AHazard_Shasta_C : public AHazard
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ULifetimeEventsComponent*                    LifetimeEvents;                                            // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UDecalComponent*                             Decal;                                                     // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCapsuleComponent*                           Capsule;                                                   // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_End_Master_Alpha_7347D5D244A2E9902A62A3BA6ECC85F1; // 0x0470(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_End__Direction_7347D5D244A2E9902A62A3BA6ECC85F1;  // 0x0474(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_V088[0x3];                                     // 0x0475(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_End;                                              // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_loop_Master_Alpha_7FBD1319410E65F7C70FDA83B4930916; // 0x0480(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_loop_4___UVRepeat_7FBD1319410E65F7C70FDA83B4930916; // 0x0484(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_loop_3___UVRepeat_7FBD1319410E65F7C70FDA83B4930916; // 0x0488(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_loop_2___UVRepeat_7FBD1319410E65F7C70FDA83B4930916; // 0x048C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_loop_4___Alpha_7FBD1319410E65F7C70FDA83B4930916;  // 0x0490(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_loop_3___Alpha_7FBD1319410E65F7C70FDA83B4930916;  // 0x0494(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_loop_2___Alpha_7FBD1319410E65F7C70FDA83B4930916;  // 0x0498(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_loop__Direction_7FBD1319410E65F7C70FDA83B4930916; // 0x049C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W4Q9[0x3];                                     // 0x049D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_loop;                                             // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    DMAT;                                                      // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FadeIn;                                                    // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CCZM[0x3];                                     // 0x04B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Color;                                                     // 0x04B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Hazard_Shasta.Hazard_Shasta_C");
		return ptr;
	}



	void RingAnimation(float _2___Alpha, float _3___Alpha, float _4___Alpha, float _2___UVRepeat, float _3___UVRepeat, float _4___UVRepeat);
	void UserConstructionScript();
	void Timeline_End__FinishedFunc();
	void Timeline_End__UpdateFunc();
	void Timeline_loop__FinishedFunc();
	void Timeline_loop__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__LifetimeEvents_K2Node_ComponentBoundEvent_0_NearLifetimeEndSignature__DelegateSignature();
	void ExecuteUbergraph_Hazard_Shasta(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

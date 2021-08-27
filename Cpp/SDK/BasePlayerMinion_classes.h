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

// BlueprintGeneratedClass BasePlayerMinion.BasePlayerMinion_C
// 0x01BC (FullSize[0x09B0] - InheritedSize[0x07F4])
class ABasePlayerMinion_C : public ABaseMonster_C
{
public:
	unsigned char                                      UnknownData_3ED3[0x4];                                     // 0x07F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ULifetimeEventsComponent*                    LifetimeEvents;                                            // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5Y87[0x8];                                     // 0x0808(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEffectDefinition                           Despawn_Effect;                                            // 0x0810(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FEffectDefinition                           Spawn_Effect;                                              // 0x08E0(0x00D0) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BasePlayerMinion.BasePlayerMinion_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void BndEvt__LifetimeEvents_K2Node_ComponentBoundEvent_0_NearLifetimeEndSignature__DelegateSignature();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BasePlayerMinion(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

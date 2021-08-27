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

// BlueprintGeneratedClass Sharpshooter_Shasta_Pet.Sharpshooter_Shasta_Pet_C
// 0x0020 (FullSize[0x09D0] - InheritedSize[0x09B0])
class ASharpshooter_Shasta_Pet_C : public ABasePlayerMinion_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x09B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    glow_03;                                                   // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*                    glow_02;                                                   // 0x09C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*                    glow_01;                                                   // 0x09C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sharpshooter_Shasta_Pet.Sharpshooter_Shasta_Pet_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_Sharpshooter_Shasta_Pet(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

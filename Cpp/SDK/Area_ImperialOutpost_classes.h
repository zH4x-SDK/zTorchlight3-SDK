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

// BlueprintGeneratedClass Area_ImperialOutpost.Area_ImperialOutpost_C
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UArea_ImperialOutpost_C : public UBaseArea_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Area_ImperialOutpost.Area_ImperialOutpost_C");
		return ptr;
	}



	void CompileRules();
	void ExecuteUbergraph_Area_ImperialOutpost(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

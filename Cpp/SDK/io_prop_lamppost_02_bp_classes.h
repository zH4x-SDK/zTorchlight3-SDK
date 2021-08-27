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

// BlueprintGeneratedClass io_prop_lamppost_02_bp.io_prop_lamppost_02_bp_C
// 0x0004 (FullSize[0x026C] - InheritedSize[0x0268])
class Aio_prop_lamppost_02_bp_C : public ABaseStaticObject_C
{
public:
	float                                              SwayAmount;                                                // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass io_prop_lamppost_02_bp.io_prop_lamppost_02_bp_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

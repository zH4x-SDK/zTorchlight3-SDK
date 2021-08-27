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

// WidgetBlueprintGeneratedClass Cursor_MoveCamera.Cursor_MoveCamera_C
// 0x0008 (FullSize[0x0270] - InheritedSize[0x0268])
class UCursor_MoveCamera_C : public UTLCustomCursor
{
public:
	class UImage*                                      CursorImage;                                               // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Cursor_MoveCamera.Cursor_MoveCamera_C");
		return ptr;
	}



	class UImage* GetImage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

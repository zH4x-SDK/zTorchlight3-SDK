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
// Parameters
//---------------------------------------------------------------------------

// Function FMODStudio.FMODAudioComponent.Stop
struct UFMODAudioComponent_Stop_Params
{
};

// Function FMODStudio.FMODAudioComponent.SetVolume
struct UFMODAudioComponent_SetVolume_Params
{
	float                                              Volume;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODAudioComponent.SetTimelinePosition
struct UFMODAudioComponent_SetTimelinePosition_Params
{
	float                                              TimeMs;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODAudioComponent.SetPitch
struct UFMODAudioComponent_SetPitch_Params
{
	float                                              Pitch;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODAudioComponent.SetPaused
struct UFMODAudioComponent_SetPaused_Params
{
	bool                                               paused;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODAudioComponent.Play
struct UFMODAudioComponent_Play_Params
{
};

// Function FMODStudio.FMODAudioComponent.IsPlaying
struct UFMODAudioComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.VCASetVolume
struct UFMODBlueprintStatics_VCASetVolume_Params
{
	class UFMODVCA*                                    Vca;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.VCAReferenceSetVolume
struct UFMODBlueprintStatics_VCAReferenceSetVolume_Params
{
	struct FFMODVCAReference                           Vca;                                                       // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByName
struct UFMODBlueprintStatics_SetOutputDriverByName_Params
{
	struct FString                                     NewDriverName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByIndex
struct UFMODBlueprintStatics_SetOutputDriverByIndex_Params
{
	int                                                NewDriverIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.K2_PlayEventReferenceAttached
struct UFMODBlueprintStatics_K2_PlayEventReferenceAttached_Params
{
	struct FFMODEventReference                         Event;                                                     // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class USceneComponent*                             AttachToComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachPointName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAttachLocation>                LocationType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopWhenAttachedToDestroyed;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Instigator;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFMODLocalizedEventAudioTableEntry          AudioTableEntry;                                           // (Parm, NativeAccessSpecifierPublic)
	class UFMODAudioComponent*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.K2_PlayEventReferenceAtLocation
struct UFMODBlueprintStatics_K2_PlayEventReferenceAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         Event;                                                     // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Location;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                      Instigator;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFMODLocalizedEventAudioTableEntry          AudioTableEntry;                                           // (Parm, NativeAccessSpecifierPublic)
	struct FFMODEventInstance                          ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.K2_PlayEventReference2D
struct UFMODBlueprintStatics_K2_PlayEventReference2D_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFMODEventReference                         Event;                                                     // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                      Instigator;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFMODLocalizedEventAudioTableEntry          AudioTableEntry;                                           // (Parm, NativeAccessSpecifierPublic)
	struct FFMODEventInstance                          ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.GetOutputDrivers
struct UFMODBlueprintStatics_GetOutputDrivers_Params
{
	TArray<struct FString>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.FindEventByName
struct UFMODBlueprintStatics_FindEventByName_Params
{
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.FindAssetByName
struct UFMODBlueprintStatics_FindAssetByName_Params
{
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODAsset*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceStop
struct UFMODBlueprintStatics_EventInstanceStop_Params
{
	struct FFMODEventInstance                          EventInstance;                                             // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetVolume
struct UFMODBlueprintStatics_EventInstanceSetVolume_Params
{
	struct FFMODEventInstance                          EventInstance;                                             // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetTransform
struct UFMODBlueprintStatics_EventInstanceSetTransform_Params
{
	struct FFMODEventInstance                          EventInstance;                                             // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Location;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPitch
struct UFMODBlueprintStatics_EventInstanceSetPitch_Params
{
	struct FFMODEventInstance                          EventInstance;                                             // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Pitch;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPaused
struct UFMODBlueprintStatics_EventInstanceSetPaused_Params
{
	struct FFMODEventInstance                          EventInstance;                                             // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               paused;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetParameter
struct UFMODBlueprintStatics_EventInstanceSetParameter_Params
{
	struct FFMODEventInstance                          EventInstance;                                             // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstancePlay
struct UFMODBlueprintStatics_EventInstancePlay_Params
{
	struct FFMODEventInstance                          EventInstance;                                             // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceIsValid
struct UFMODBlueprintStatics_EventInstanceIsValid_Params
{
	struct FFMODEventInstance                          EventInstance;                                             // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.BusStopAllEvents
struct UFMODBlueprintStatics_BusStopAllEvents_Params
{
	class UFMODBus*                                    Bus;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FMODStudio_EFMOD_STUDIO_STOP_MODE>     stopMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.BusSetVolume
struct UFMODBlueprintStatics_BusSetVolume_Params
{
	class UFMODBus*                                    Bus;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.BusSetPaused
struct UFMODBlueprintStatics_BusSetPaused_Params
{
	class UFMODBus*                                    Bus;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPaused;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.BusSetMute
struct UFMODBlueprintStatics_BusSetMute_Params
{
	class UFMODBus*                                    Bus;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMute;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.BusReferenceStopAllEvents
struct UFMODBlueprintStatics_BusReferenceStopAllEvents_Params
{
	struct FFMODBusReference                           Bus;                                                       // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<FMODStudio_EFMOD_STUDIO_STOP_MODE>     stopMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.BusReferenceSetVolume
struct UFMODBlueprintStatics_BusReferenceSetVolume_Params
{
	struct FFMODBusReference                           Bus;                                                       // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.BusReferenceSetPaused
struct UFMODBlueprintStatics_BusReferenceSetPaused_Params
{
	struct FFMODBusReference                           Bus;                                                       // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bPaused;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.BusReferenceSetMute
struct UFMODBlueprintStatics_BusReferenceSetMute_Params
{
	struct FFMODBusReference                           Bus;                                                       // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bMute;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODEventHelpers.Conv_EventReferenceToEvent
struct UFMODEventHelpers_Conv_EventReferenceToEvent_Params
{
	struct FFMODEventReference                         EventReference;                                            // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UFMODEvent*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

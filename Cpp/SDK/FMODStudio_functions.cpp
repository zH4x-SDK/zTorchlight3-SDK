// Name: Torchlight3, Version: 1.0.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function FMODStudio.FMODAudioComponent.Stop
// (Final, Native, Public, BlueprintCallable)
void UFMODAudioComponent::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.Stop");

	UFMODAudioComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FMODStudio.FMODAudioComponent.SetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODAudioComponent::SetVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetVolume");

	UFMODAudioComponent_SetVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FMODStudio.FMODAudioComponent.SetTimelinePosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          TimeMs                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODAudioComponent::SetTimelinePosition(float TimeMs)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetTimelinePosition");

	UFMODAudioComponent_SetTimelinePosition_Params params;
	params.TimeMs = TimeMs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FMODStudio.FMODAudioComponent.SetPitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODAudioComponent::SetPitch(float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetPitch");

	UFMODAudioComponent_SetPitch_Params params;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FMODStudio.FMODAudioComponent.SetPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           paused                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODAudioComponent::SetPaused(bool paused)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetPaused");

	UFMODAudioComponent_SetPaused_Params params;
	params.paused = paused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FMODStudio.FMODAudioComponent.Play
// (Final, Native, Public, BlueprintCallable)
void UFMODAudioComponent::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.Play");

	UFMODAudioComponent_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FMODStudio.FMODAudioComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFMODAudioComponent::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.IsPlaying");

	UFMODAudioComponent_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.VCASetVolume
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFMODVCA*                Vca                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_VCASetVolume(class UFMODVCA* Vca, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.VCASetVolume");

	UFMODBlueprintStatics_VCASetVolume_Params params;
	params.Vca = Vca;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FMODStudio.FMODBlueprintStatics.VCAReferenceSetVolume
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODVCAReference       Vca                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_VCAReferenceSetVolume(const struct FFMODVCAReference& Vca, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.VCAReferenceSetVolume");

	UFMODBlueprintStatics_VCAReferenceSetVolume_Params params;
	params.Vca = Vca;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByName
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 NewDriverName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_SetOutputDriverByName(const struct FString& NewDriverName)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByName");

	UFMODBlueprintStatics_SetOutputDriverByName_Params params;
	params.NewDriverName = NewDriverName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByIndex
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            NewDriverIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_SetOutputDriverByIndex(int NewDriverIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByIndex");

	UFMODBlueprintStatics_SetOutputDriverByIndex_Params params;
	params.NewDriverIndex = NewDriverIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FMODStudio.FMODBlueprintStatics.K2_PlayEventReferenceAttached
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFMODEventReference     Event                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EAttachLocation> LocationType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Instigator                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFMODLocalizedEventAudioTableEntry AudioTableEntry                (Parm, NativeAccessSpecifierPublic)
// class UFMODAudioComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFMODAudioComponent* UFMODBlueprintStatics::STATIC_K2_PlayEventReferenceAttached(const struct FFMODEventReference& Event, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<Engine_EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, class AActor* Instigator, const struct FFMODLocalizedEventAudioTableEntry& AudioTableEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.K2_PlayEventReferenceAttached");

	UFMODBlueprintStatics_K2_PlayEventReferenceAttached_Params params;
	params.Event = Event;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.LocationType = LocationType;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.Instigator = Instigator;
	params.AudioTableEntry = AudioTableEntry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.K2_PlayEventReferenceAtLocation
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFMODEventReference     Event                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class AActor*                  Instigator                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFMODLocalizedEventAudioTableEntry AudioTableEntry                (Parm, NativeAccessSpecifierPublic)
// struct FFMODEventInstance      ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FFMODEventInstance UFMODBlueprintStatics::STATIC_K2_PlayEventReferenceAtLocation(class UObject* WorldContextObject, const struct FFMODEventReference& Event, const struct FTransform& Location, class AActor* Instigator, const struct FFMODLocalizedEventAudioTableEntry& AudioTableEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.K2_PlayEventReferenceAtLocation");

	UFMODBlueprintStatics_K2_PlayEventReferenceAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Event = Event;
	params.Location = Location;
	params.Instigator = Instigator;
	params.AudioTableEntry = AudioTableEntry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.K2_PlayEventReference2D
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFMODEventReference     Event                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class AActor*                  Instigator                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFMODLocalizedEventAudioTableEntry AudioTableEntry                (Parm, NativeAccessSpecifierPublic)
// struct FFMODEventInstance      ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FFMODEventInstance UFMODBlueprintStatics::STATIC_K2_PlayEventReference2D(class UObject* WorldContextObject, const struct FFMODEventReference& Event, class AActor* Instigator, const struct FFMODLocalizedEventAudioTableEntry& AudioTableEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.K2_PlayEventReference2D");

	UFMODBlueprintStatics_K2_PlayEventReference2D_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Event = Event;
	params.Instigator = Instigator;
	params.AudioTableEntry = AudioTableEntry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.GetOutputDrivers
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UFMODBlueprintStatics::STATIC_GetOutputDrivers()
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.GetOutputDrivers");

	UFMODBlueprintStatics_GetOutputDrivers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.FindEventByName
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFMODEvent*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFMODEvent* UFMODBlueprintStatics::STATIC_FindEventByName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.FindEventByName");

	UFMODBlueprintStatics_FindEventByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.FindAssetByName
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFMODAsset*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFMODAsset* UFMODBlueprintStatics::STATIC_FindAssetByName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.FindAssetByName");

	UFMODBlueprintStatics_FindAssetByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceStop
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_EventInstanceStop(const struct FFMODEventInstance& EventInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceStop");

	UFMODBlueprintStatics_EventInstanceStop_Params params;
	params.EventInstance = EventInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetVolume
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_EventInstanceSetVolume(const struct FFMODEventInstance& EventInstance, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetVolume");

	UFMODBlueprintStatics_EventInstanceSetVolume_Params params;
	params.EventInstance = EventInstance;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetTransform
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_EventInstanceSetTransform(const struct FFMODEventInstance& EventInstance, const struct FTransform& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetTransform");

	UFMODBlueprintStatics_EventInstanceSetTransform_Params params;
	params.EventInstance = EventInstance;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPitch
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_EventInstanceSetPitch(const struct FFMODEventInstance& EventInstance, float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPitch");

	UFMODBlueprintStatics_EventInstanceSetPitch_Params params;
	params.EventInstance = EventInstance;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPaused
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           paused                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_EventInstanceSetPaused(const struct FFMODEventInstance& EventInstance, bool paused)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPaused");

	UFMODBlueprintStatics_EventInstanceSetPaused_Params params;
	params.EventInstance = EventInstance;
	params.paused = paused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetParameter
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_EventInstanceSetParameter(const struct FFMODEventInstance& EventInstance, const struct FName& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetParameter");

	UFMODBlueprintStatics_EventInstanceSetParameter_Params params;
	params.EventInstance = EventInstance;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FMODStudio.FMODBlueprintStatics.EventInstancePlay
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_EventInstancePlay(const struct FFMODEventInstance& EventInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstancePlay");

	UFMODBlueprintStatics_EventInstancePlay_Params params;
	params.EventInstance = EventInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceIsValid
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFMODBlueprintStatics::STATIC_EventInstanceIsValid(const struct FFMODEventInstance& EventInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceIsValid");

	UFMODBlueprintStatics_EventInstanceIsValid_Params params;
	params.EventInstance = EventInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.BusStopAllEvents
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFMODBus*                Bus                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FMODStudio_EFMOD_STUDIO_STOP_MODE> stopMode                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_BusStopAllEvents(class UFMODBus* Bus, TEnumAsByte<FMODStudio_EFMOD_STUDIO_STOP_MODE> stopMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.BusStopAllEvents");

	UFMODBlueprintStatics_BusStopAllEvents_Params params;
	params.Bus = Bus;
	params.stopMode = stopMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FMODStudio.FMODBlueprintStatics.BusSetVolume
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFMODBus*                Bus                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_BusSetVolume(class UFMODBus* Bus, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.BusSetVolume");

	UFMODBlueprintStatics_BusSetVolume_Params params;
	params.Bus = Bus;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FMODStudio.FMODBlueprintStatics.BusSetPaused
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFMODBus*                Bus                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bPaused                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_BusSetPaused(class UFMODBus* Bus, bool bPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.BusSetPaused");

	UFMODBlueprintStatics_BusSetPaused_Params params;
	params.Bus = Bus;
	params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FMODStudio.FMODBlueprintStatics.BusSetMute
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFMODBus*                Bus                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bMute                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_BusSetMute(class UFMODBus* Bus, bool bMute)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.BusSetMute");

	UFMODBlueprintStatics_BusSetMute_Params params;
	params.Bus = Bus;
	params.bMute = bMute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FMODStudio.FMODBlueprintStatics.BusReferenceStopAllEvents
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODBusReference       Bus                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TEnumAsByte<FMODStudio_EFMOD_STUDIO_STOP_MODE> stopMode                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_BusReferenceStopAllEvents(const struct FFMODBusReference& Bus, TEnumAsByte<FMODStudio_EFMOD_STUDIO_STOP_MODE> stopMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.BusReferenceStopAllEvents");

	UFMODBlueprintStatics_BusReferenceStopAllEvents_Params params;
	params.Bus = Bus;
	params.stopMode = stopMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FMODStudio.FMODBlueprintStatics.BusReferenceSetVolume
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODBusReference       Bus                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_BusReferenceSetVolume(const struct FFMODBusReference& Bus, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.BusReferenceSetVolume");

	UFMODBlueprintStatics_BusReferenceSetVolume_Params params;
	params.Bus = Bus;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FMODStudio.FMODBlueprintStatics.BusReferenceSetPaused
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODBusReference       Bus                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bPaused                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_BusReferenceSetPaused(const struct FFMODBusReference& Bus, bool bPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.BusReferenceSetPaused");

	UFMODBlueprintStatics_BusReferenceSetPaused_Params params;
	params.Bus = Bus;
	params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FMODStudio.FMODBlueprintStatics.BusReferenceSetMute
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODBusReference       Bus                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bMute                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_BusReferenceSetMute(const struct FFMODBusReference& Bus, bool bMute)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.BusReferenceSetMute");

	UFMODBlueprintStatics_BusReferenceSetMute_Params params;
	params.Bus = Bus;
	params.bMute = bMute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FMODStudio.FMODEventHelpers.Conv_EventReferenceToEvent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFMODEventReference     EventReference                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UFMODEvent*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFMODEvent* UFMODEventHelpers::STATIC_Conv_EventReferenceToEvent(const struct FFMODEventReference& EventReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODEventHelpers.Conv_EventReferenceToEvent");

	UFMODEventHelpers_Conv_EventReferenceToEvent_Params params;
	params.EventReference = EventReference;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3DetectionMeterContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3DetectionMeterContainer() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3DetectionMeterContainer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3DetectionMeterContainer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStatePawnWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3DetectionMeter_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPD3DetectionMeterContainer::execHandleHeistGoneLoud)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleHeistGoneLoud();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3DetectionMeterContainer::execOnObserved)
	{
		P_GET_UBOOL(Z_Param_bIsObserved);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnObserved(Z_Param_bIsObserved);
		P_NATIVE_END;
	}
	static FName NAME_UPD3DetectionMeterContainer_OnObservedChanged = FName(TEXT("OnObservedChanged"));
	void UPD3DetectionMeterContainer::OnObservedChanged(bool bObserved)
	{
		PD3DetectionMeterContainer_eventOnObservedChanged_Parms Parms;
		Parms.bObserved=bObserved ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UPD3DetectionMeterContainer_OnObservedChanged),&Parms);
	}
	void UPD3DetectionMeterContainer::StaticRegisterNativesUPD3DetectionMeterContainer()
	{
		UClass* Class = UPD3DetectionMeterContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleHeistGoneLoud", &UPD3DetectionMeterContainer::execHandleHeistGoneLoud },
			{ "OnObserved", &UPD3DetectionMeterContainer::execOnObserved },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPD3DetectionMeterContainer_HandleHeistGoneLoud_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3DetectionMeterContainer_HandleHeistGoneLoud_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3DetectionMeterContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3DetectionMeterContainer_HandleHeistGoneLoud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3DetectionMeterContainer, nullptr, "HandleHeistGoneLoud", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3DetectionMeterContainer_HandleHeistGoneLoud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3DetectionMeterContainer_HandleHeistGoneLoud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3DetectionMeterContainer_HandleHeistGoneLoud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3DetectionMeterContainer_HandleHeistGoneLoud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObserved_Statics
	{
		struct PD3DetectionMeterContainer_eventOnObserved_Parms
		{
			bool bIsObserved;
		};
		static void NewProp_bIsObserved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsObserved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObserved_Statics::NewProp_bIsObserved_SetBit(void* Obj)
	{
		((PD3DetectionMeterContainer_eventOnObserved_Parms*)Obj)->bIsObserved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObserved_Statics::NewProp_bIsObserved = { "bIsObserved", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PD3DetectionMeterContainer_eventOnObserved_Parms), &Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObserved_Statics::NewProp_bIsObserved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObserved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObserved_Statics::NewProp_bIsObserved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObserved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3DetectionMeterContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObserved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3DetectionMeterContainer, nullptr, "OnObserved", nullptr, nullptr, sizeof(PD3DetectionMeterContainer_eventOnObserved_Parms), Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObserved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObserved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObserved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObserved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObserved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObserved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObservedChanged_Statics
	{
		static void NewProp_bObserved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bObserved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObservedChanged_Statics::NewProp_bObserved_SetBit(void* Obj)
	{
		((PD3DetectionMeterContainer_eventOnObservedChanged_Parms*)Obj)->bObserved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObservedChanged_Statics::NewProp_bObserved = { "bObserved", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PD3DetectionMeterContainer_eventOnObservedChanged_Parms), &Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObservedChanged_Statics::NewProp_bObserved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObservedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObservedChanged_Statics::NewProp_bObserved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObservedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3DetectionMeterContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObservedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3DetectionMeterContainer, nullptr, "OnObservedChanged", nullptr, nullptr, sizeof(PD3DetectionMeterContainer_eventOnObservedChanged_Parms), Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObservedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObservedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObservedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObservedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObservedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObservedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3DetectionMeterContainer_NoRegister()
	{
		return UPD3DetectionMeterContainer::StaticClass();
	}
	struct Z_Construct_UClass_UPD3DetectionMeterContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionMeterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DetectionMeterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Overlay_DetectionMeters_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Overlay_DetectionMeters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectedAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetectedAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectedAudioEventCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetectedAudioEventCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionMeters_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetectionMeters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionMeters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DetectionMeters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLastPlayedDetectedAudio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeLastPlayedDetectedAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBeingDetected_MetaData[];
#endif
		static void NewProp_bIsBeingDetected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBeingDetected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerStatePawnWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3DetectionMeterContainer_HandleHeistGoneLoud, "HandleHeistGoneLoud" }, // 4155603403
		{ &Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObserved, "OnObserved" }, // 3913435657
		{ &Z_Construct_UFunction_UPD3DetectionMeterContainer_OnObservedChanged, "OnObservedChanged" }, // 2052211519
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3DetectionMeterContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3DetectionMeterContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_DetectionMeterClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3DetectionMeterContainer" },
		{ "ModuleRelativePath", "Public/PD3DetectionMeterContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_DetectionMeterClass = { "DetectionMeterClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3DetectionMeterContainer, DetectionMeterClass), Z_Construct_UClass_UPD3DetectionMeter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_DetectionMeterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_DetectionMeterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_Overlay_DetectionMeters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3DetectionMeterContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3DetectionMeterContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_Overlay_DetectionMeters = { "Overlay_DetectionMeters", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3DetectionMeterContainer, Overlay_DetectionMeters), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_Overlay_DetectionMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_Overlay_DetectionMeters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_DetectedAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3DetectionMeterContainer" },
		{ "ModuleRelativePath", "Public/PD3DetectionMeterContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_DetectedAudioEvent = { "DetectedAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3DetectionMeterContainer, DetectedAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_DetectedAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_DetectedAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_DetectedAudioEventCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3DetectionMeterContainer" },
		{ "ModuleRelativePath", "Public/PD3DetectionMeterContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_DetectedAudioEventCooldown = { "DetectedAudioEventCooldown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3DetectionMeterContainer, DetectedAudioEventCooldown), METADATA_PARAMS(Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_DetectedAudioEventCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_DetectedAudioEventCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_DetectionMeters_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3DetectionMeterContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3DetectionMeterContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_DetectionMeters_Inner = { "DetectionMeters", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPD3DetectionMeter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_DetectionMeters_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_DetectionMeters_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_DetectionMeters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3DetectionMeterContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3DetectionMeterContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_DetectionMeters = { "DetectionMeters", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3DetectionMeterContainer, DetectionMeters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_DetectionMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_DetectionMeters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_TimeLastPlayedDetectedAudio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3DetectionMeterContainer" },
		{ "ModuleRelativePath", "Public/PD3DetectionMeterContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_TimeLastPlayedDetectedAudio = { "TimeLastPlayedDetectedAudio", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3DetectionMeterContainer, TimeLastPlayedDetectedAudio), METADATA_PARAMS(Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_TimeLastPlayedDetectedAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_TimeLastPlayedDetectedAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_bIsBeingDetected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3DetectionMeterContainer" },
		{ "ModuleRelativePath", "Public/PD3DetectionMeterContainer.h" },
	};
#endif
	void Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_bIsBeingDetected_SetBit(void* Obj)
	{
		((UPD3DetectionMeterContainer*)Obj)->bIsBeingDetected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_bIsBeingDetected = { "bIsBeingDetected", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPD3DetectionMeterContainer), &Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_bIsBeingDetected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_bIsBeingDetected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_bIsBeingDetected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_DetectionMeterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_Overlay_DetectionMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_DetectedAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_DetectedAudioEventCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_DetectionMeters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_DetectionMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_TimeLastPlayedDetectedAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::NewProp_bIsBeingDetected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3DetectionMeterContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::ClassParams = {
		&UPD3DetectionMeterContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3DetectionMeterContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3DetectionMeterContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3DetectionMeterContainer, 1097198150);
	template<> STARBREEZE_API UClass* StaticClass<UPD3DetectionMeterContainer>()
	{
		return UPD3DetectionMeterContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3DetectionMeterContainer(Z_Construct_UClass_UPD3DetectionMeterContainer, &UPD3DetectionMeterContainer::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3DetectionMeterContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3DetectionMeterContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

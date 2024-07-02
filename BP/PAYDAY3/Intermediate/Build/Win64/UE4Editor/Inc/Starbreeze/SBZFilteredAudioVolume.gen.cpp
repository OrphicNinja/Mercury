// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFilteredAudioVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFilteredAudioVolume() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZFilteredAudioVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZFilteredAudioVolume();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActorFilterComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZFilteredAudioVolume::execMulticast_SetIntensity)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewIntensity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetIntensity_Implementation(Z_Param_NewIntensity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZFilteredAudioVolume::execOnHeistStateChanged)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_OldState);
		P_GET_ENUM(EPD3HeistState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeistStateChanged(EPD3HeistState(Z_Param_OldState),EPD3HeistState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZFilteredAudioVolume::execOnOverlapActorsChanged)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Identifier);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentTotalActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapActorsChanged(Z_Param_Identifier,Z_Param_Actor,Z_Param_CurrentTotalActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZFilteredAudioVolume::execOnRep_Intensity)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_OldIntensity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Intensity(Z_Param_OldIntensity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZFilteredAudioVolume::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	static FName NAME_ASBZFilteredAudioVolume_Multicast_SetIntensity = FName(TEXT("Multicast_SetIntensity"));
	void ASBZFilteredAudioVolume::Multicast_SetIntensity(uint8 NewIntensity)
	{
		SBZFilteredAudioVolume_eventMulticast_SetIntensity_Parms Parms;
		Parms.NewIntensity=NewIntensity;
		ProcessEvent(FindFunctionChecked(NAME_ASBZFilteredAudioVolume_Multicast_SetIntensity),&Parms);
	}
	void ASBZFilteredAudioVolume::StaticRegisterNativesASBZFilteredAudioVolume()
	{
		UClass* Class = ASBZFilteredAudioVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetIntensity", &ASBZFilteredAudioVolume::execMulticast_SetIntensity },
			{ "OnHeistStateChanged", &ASBZFilteredAudioVolume::execOnHeistStateChanged },
			{ "OnOverlapActorsChanged", &ASBZFilteredAudioVolume::execOnOverlapActorsChanged },
			{ "OnRep_Intensity", &ASBZFilteredAudioVolume::execOnRep_Intensity },
			{ "SetEnabled", &ASBZFilteredAudioVolume::execSetEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZFilteredAudioVolume_Multicast_SetIntensity_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewIntensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZFilteredAudioVolume_Multicast_SetIntensity_Statics::NewProp_NewIntensity = { "NewIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFilteredAudioVolume_eventMulticast_SetIntensity_Parms, NewIntensity), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZFilteredAudioVolume_Multicast_SetIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZFilteredAudioVolume_Multicast_SetIntensity_Statics::NewProp_NewIntensity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZFilteredAudioVolume_Multicast_SetIntensity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFilteredAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZFilteredAudioVolume_Multicast_SetIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZFilteredAudioVolume, nullptr, "Multicast_SetIntensity", nullptr, nullptr, sizeof(SBZFilteredAudioVolume_eventMulticast_SetIntensity_Parms), Z_Construct_UFunction_ASBZFilteredAudioVolume_Multicast_SetIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZFilteredAudioVolume_Multicast_SetIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZFilteredAudioVolume_Multicast_SetIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZFilteredAudioVolume_Multicast_SetIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZFilteredAudioVolume_Multicast_SetIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZFilteredAudioVolume_Multicast_SetIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZFilteredAudioVolume_OnHeistStateChanged_Statics
	{
		struct SBZFilteredAudioVolume_eventOnHeistStateChanged_Parms
		{
			EPD3HeistState OldState;
			EPD3HeistState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZFilteredAudioVolume_OnHeistStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZFilteredAudioVolume_OnHeistStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFilteredAudioVolume_eventOnHeistStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZFilteredAudioVolume_OnHeistStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZFilteredAudioVolume_OnHeistStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFilteredAudioVolume_eventOnHeistStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZFilteredAudioVolume_OnHeistStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZFilteredAudioVolume_OnHeistStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZFilteredAudioVolume_OnHeistStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZFilteredAudioVolume_OnHeistStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZFilteredAudioVolume_OnHeistStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZFilteredAudioVolume_OnHeistStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFilteredAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZFilteredAudioVolume_OnHeistStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZFilteredAudioVolume, nullptr, "OnHeistStateChanged", nullptr, nullptr, sizeof(SBZFilteredAudioVolume_eventOnHeistStateChanged_Parms), Z_Construct_UFunction_ASBZFilteredAudioVolume_OnHeistStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZFilteredAudioVolume_OnHeistStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZFilteredAudioVolume_OnHeistStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZFilteredAudioVolume_OnHeistStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZFilteredAudioVolume_OnHeistStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZFilteredAudioVolume_OnHeistStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZFilteredAudioVolume_OnOverlapActorsChanged_Statics
	{
		struct SBZFilteredAudioVolume_eventOnOverlapActorsChanged_Parms
		{
			FName Identifier;
			AActor* Actor;
			int32 CurrentTotalActors;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentTotalActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ASBZFilteredAudioVolume_OnOverlapActorsChanged_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFilteredAudioVolume_eventOnOverlapActorsChanged_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZFilteredAudioVolume_OnOverlapActorsChanged_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFilteredAudioVolume_eventOnOverlapActorsChanged_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZFilteredAudioVolume_OnOverlapActorsChanged_Statics::NewProp_CurrentTotalActors = { "CurrentTotalActors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFilteredAudioVolume_eventOnOverlapActorsChanged_Parms, CurrentTotalActors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZFilteredAudioVolume_OnOverlapActorsChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZFilteredAudioVolume_OnOverlapActorsChanged_Statics::NewProp_Identifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZFilteredAudioVolume_OnOverlapActorsChanged_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZFilteredAudioVolume_OnOverlapActorsChanged_Statics::NewProp_CurrentTotalActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZFilteredAudioVolume_OnOverlapActorsChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFilteredAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZFilteredAudioVolume_OnOverlapActorsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZFilteredAudioVolume, nullptr, "OnOverlapActorsChanged", nullptr, nullptr, sizeof(SBZFilteredAudioVolume_eventOnOverlapActorsChanged_Parms), Z_Construct_UFunction_ASBZFilteredAudioVolume_OnOverlapActorsChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZFilteredAudioVolume_OnOverlapActorsChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZFilteredAudioVolume_OnOverlapActorsChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZFilteredAudioVolume_OnOverlapActorsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZFilteredAudioVolume_OnOverlapActorsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZFilteredAudioVolume_OnOverlapActorsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZFilteredAudioVolume_OnRep_Intensity_Statics
	{
		struct SBZFilteredAudioVolume_eventOnRep_Intensity_Parms
		{
			uint8 OldIntensity;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldIntensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZFilteredAudioVolume_OnRep_Intensity_Statics::NewProp_OldIntensity = { "OldIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFilteredAudioVolume_eventOnRep_Intensity_Parms, OldIntensity), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZFilteredAudioVolume_OnRep_Intensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZFilteredAudioVolume_OnRep_Intensity_Statics::NewProp_OldIntensity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZFilteredAudioVolume_OnRep_Intensity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFilteredAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZFilteredAudioVolume_OnRep_Intensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZFilteredAudioVolume, nullptr, "OnRep_Intensity", nullptr, nullptr, sizeof(SBZFilteredAudioVolume_eventOnRep_Intensity_Parms), Z_Construct_UFunction_ASBZFilteredAudioVolume_OnRep_Intensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZFilteredAudioVolume_OnRep_Intensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZFilteredAudioVolume_OnRep_Intensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZFilteredAudioVolume_OnRep_Intensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZFilteredAudioVolume_OnRep_Intensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZFilteredAudioVolume_OnRep_Intensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZFilteredAudioVolume_SetEnabled_Statics
	{
		struct SBZFilteredAudioVolume_eventSetEnabled_Parms
		{
			bool bIsEnabled;
		};
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZFilteredAudioVolume_SetEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((SBZFilteredAudioVolume_eventSetEnabled_Parms*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZFilteredAudioVolume_SetEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZFilteredAudioVolume_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZFilteredAudioVolume_SetEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZFilteredAudioVolume_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZFilteredAudioVolume_SetEnabled_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZFilteredAudioVolume_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFilteredAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZFilteredAudioVolume_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZFilteredAudioVolume, nullptr, "SetEnabled", nullptr, nullptr, sizeof(SBZFilteredAudioVolume_eventSetEnabled_Parms), Z_Construct_UFunction_ASBZFilteredAudioVolume_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZFilteredAudioVolume_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZFilteredAudioVolume_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZFilteredAudioVolume_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZFilteredAudioVolume_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZFilteredAudioVolume_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZFilteredAudioVolume_NoRegister()
	{
		return ASBZFilteredAudioVolume::StaticClass();
	}
	struct Z_Construct_UClass_ASBZFilteredAudioVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrowdEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrowdEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StopEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStoppedWhenLoud_MetaData[];
#endif
		static void NewProp_bIsStoppedWhenLoud_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStoppedWhenLoud;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterPolationTimerMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InterPolationTimerMs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Crowd25_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Crowd25;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Crowd50_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Crowd50;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Crowd75_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Crowd75;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Crowd100_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Crowd100;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrowdCurrent_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CrowdCurrent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorFilterComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorFilterComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldStartEnabled_MetaData[];
#endif
		static void NewProp_bShouldStartEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldStartEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZFilteredAudioVolume_Multicast_SetIntensity, "Multicast_SetIntensity" }, // 4206987914
		{ &Z_Construct_UFunction_ASBZFilteredAudioVolume_OnHeistStateChanged, "OnHeistStateChanged" }, // 1176502602
		{ &Z_Construct_UFunction_ASBZFilteredAudioVolume_OnOverlapActorsChanged, "OnOverlapActorsChanged" }, // 1435531938
		{ &Z_Construct_UFunction_ASBZFilteredAudioVolume_OnRep_Intensity, "OnRep_Intensity" }, // 1533984034
		{ &Z_Construct_UFunction_ASBZFilteredAudioVolume_SetEnabled, "SetEnabled" }, // 1141661660
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "SBZFilteredAudioVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZFilteredAudioVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_CrowdEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFilteredAudioVolume" },
		{ "ModuleRelativePath", "Public/SBZFilteredAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_CrowdEvent = { "CrowdEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZFilteredAudioVolume, CrowdEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_CrowdEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_CrowdEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_StopEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFilteredAudioVolume" },
		{ "ModuleRelativePath", "Public/SBZFilteredAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_StopEvent = { "StopEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZFilteredAudioVolume, StopEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_StopEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_StopEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFilteredAudioVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZFilteredAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZFilteredAudioVolume, AudioComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_RTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFilteredAudioVolume" },
		{ "ModuleRelativePath", "Public/SBZFilteredAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZFilteredAudioVolume, RTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_RTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_RTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_Intensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFilteredAudioVolume" },
		{ "ModuleRelativePath", "Public/SBZFilteredAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_Intensity = { "Intensity", "OnRep_Intensity", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZFilteredAudioVolume, Intensity), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_bIsStoppedWhenLoud_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFilteredAudioVolume" },
		{ "ModuleRelativePath", "Public/SBZFilteredAudioVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_bIsStoppedWhenLoud_SetBit(void* Obj)
	{
		((ASBZFilteredAudioVolume*)Obj)->bIsStoppedWhenLoud = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_bIsStoppedWhenLoud = { "bIsStoppedWhenLoud", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZFilteredAudioVolume), &Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_bIsStoppedWhenLoud_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_bIsStoppedWhenLoud_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_bIsStoppedWhenLoud_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_InterPolationTimerMs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFilteredAudioVolume" },
		{ "ModuleRelativePath", "Public/SBZFilteredAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_InterPolationTimerMs = { "InterPolationTimerMs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZFilteredAudioVolume, InterPolationTimerMs), METADATA_PARAMS(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_InterPolationTimerMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_InterPolationTimerMs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_Crowd25_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFilteredAudioVolume" },
		{ "ModuleRelativePath", "Public/SBZFilteredAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_Crowd25 = { "Crowd25", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZFilteredAudioVolume, Crowd25), METADATA_PARAMS(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_Crowd25_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_Crowd25_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_Crowd50_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFilteredAudioVolume" },
		{ "ModuleRelativePath", "Public/SBZFilteredAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_Crowd50 = { "Crowd50", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZFilteredAudioVolume, Crowd50), METADATA_PARAMS(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_Crowd50_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_Crowd50_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_Crowd75_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFilteredAudioVolume" },
		{ "ModuleRelativePath", "Public/SBZFilteredAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_Crowd75 = { "Crowd75", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZFilteredAudioVolume, Crowd75), METADATA_PARAMS(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_Crowd75_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_Crowd75_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_Crowd100_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFilteredAudioVolume" },
		{ "ModuleRelativePath", "Public/SBZFilteredAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_Crowd100 = { "Crowd100", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZFilteredAudioVolume, Crowd100), METADATA_PARAMS(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_Crowd100_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_Crowd100_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_CrowdCurrent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFilteredAudioVolume" },
		{ "ModuleRelativePath", "Public/SBZFilteredAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_CrowdCurrent = { "CrowdCurrent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZFilteredAudioVolume, CrowdCurrent), METADATA_PARAMS(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_CrowdCurrent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_CrowdCurrent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_ActorFilterComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFilteredAudioVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZFilteredAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_ActorFilterComponent = { "ActorFilterComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZFilteredAudioVolume, ActorFilterComponent), Z_Construct_UClass_USBZActorFilterComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_ActorFilterComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_ActorFilterComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_bShouldStartEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFilteredAudioVolume" },
		{ "ModuleRelativePath", "Public/SBZFilteredAudioVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_bShouldStartEnabled_SetBit(void* Obj)
	{
		((ASBZFilteredAudioVolume*)Obj)->bShouldStartEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_bShouldStartEnabled = { "bShouldStartEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZFilteredAudioVolume), &Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_bShouldStartEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_bShouldStartEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_bShouldStartEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_CrowdEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_StopEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_RTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_bIsStoppedWhenLoud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_InterPolationTimerMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_Crowd25,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_Crowd50,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_Crowd75,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_Crowd100,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_CrowdCurrent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_ActorFilterComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::NewProp_bShouldStartEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZFilteredAudioVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::ClassParams = {
		&ASBZFilteredAudioVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZFilteredAudioVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZFilteredAudioVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZFilteredAudioVolume, 2655712723);
	template<> STARBREEZE_API UClass* StaticClass<ASBZFilteredAudioVolume>()
	{
		return ASBZFilteredAudioVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZFilteredAudioVolume(Z_Construct_UClass_ASBZFilteredAudioVolume, &ASBZFilteredAudioVolume::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZFilteredAudioVolume"), false, nullptr, nullptr, nullptr);

	void ASBZFilteredAudioVolume::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Intensity(TEXT("Intensity"));

		const bool bIsValid = true
			&& Name_Intensity == ClassReps[(int32)ENetFields_Private::Intensity].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZFilteredAudioVolume"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZFilteredAudioVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

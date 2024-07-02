// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAudioEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioEvent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetBase();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetPlatformData_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAkAudioEvent::execGetIsInfinite)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsInfinite();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkAudioEvent::execGetMaxAttenuationRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxAttenuationRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkAudioEvent::execGetMaximumDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaximumDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkAudioEvent::execGetMinimumDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMinimumDuration();
		P_NATIVE_END;
	}
	void UAkAudioEvent::StaticRegisterNativesUAkAudioEvent()
	{
		UClass* Class = UAkAudioEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsInfinite", &UAkAudioEvent::execGetIsInfinite },
			{ "GetMaxAttenuationRadius", &UAkAudioEvent::execGetMaxAttenuationRadius },
			{ "GetMaximumDuration", &UAkAudioEvent::execGetMaximumDuration },
			{ "GetMinimumDuration", &UAkAudioEvent::execGetMinimumDuration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics
	{
		struct AkAudioEvent_eventGetIsInfinite_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkAudioEvent_eventGetIsInfinite_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkAudioEvent_eventGetIsInfinite_Parms), &Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAudioEvent, nullptr, "GetIsInfinite", nullptr, nullptr, sizeof(AkAudioEvent_eventGetIsInfinite_Parms), Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius_Statics
	{
		struct AkAudioEvent_eventGetMaxAttenuationRadius_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkAudioEvent_eventGetMaxAttenuationRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAudioEvent, nullptr, "GetMaxAttenuationRadius", nullptr, nullptr, sizeof(AkAudioEvent_eventGetMaxAttenuationRadius_Parms), Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration_Statics
	{
		struct AkAudioEvent_eventGetMaximumDuration_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkAudioEvent_eventGetMaximumDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAudioEvent, nullptr, "GetMaximumDuration", nullptr, nullptr, sizeof(AkAudioEvent_eventGetMaximumDuration_Parms), Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration_Statics
	{
		struct AkAudioEvent_eventGetMinimumDuration_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkAudioEvent_eventGetMinimumDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAudioEvent, nullptr, "GetMinimumDuration", nullptr, nullptr, sizeof(AkAudioEvent_eventGetMinimumDuration_Parms), Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister()
	{
		return UAkAudioEvent::StaticClass();
	}
	struct Z_Construct_UClass_UAkAudioEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalizedPlatformAssetDataMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalizedPlatformAssetDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedPlatformAssetDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LocalizedPlatformAssetDataMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredBank_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RequiredBank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLocalizedPlatformData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentLocalizedPlatformData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAttenuationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAttenuationRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInfinite_MetaData[];
#endif
		static void NewProp_IsInfinite_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInfinite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAudioEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkAudioEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite, "GetIsInfinite" }, // 498840357
		{ &Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius, "GetMaxAttenuationRadius" }, // 387172829
		{ &Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration, "GetMaximumDuration" }, // 3436028164
		{ &Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration, "GetMinimumDuration" }, // 3148893708
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkAudioEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_LocalizedPlatformAssetDataMap_ValueProp = { "LocalizedPlatformAssetDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAkAssetPlatformData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_LocalizedPlatformAssetDataMap_Key_KeyProp = { "LocalizedPlatformAssetDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_LocalizedPlatformAssetDataMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Public/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_LocalizedPlatformAssetDataMap = { "LocalizedPlatformAssetDataMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEvent, LocalizedPlatformAssetDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_LocalizedPlatformAssetDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_LocalizedPlatformAssetDataMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_RequiredBank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Public/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_RequiredBank = { "RequiredBank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEvent, RequiredBank), Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_RequiredBank_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_RequiredBank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_CurrentLocalizedPlatformData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Public/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_CurrentLocalizedPlatformData = { "CurrentLocalizedPlatformData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEvent, CurrentLocalizedPlatformData), Z_Construct_UClass_UAkAssetPlatformData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_CurrentLocalizedPlatformData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_CurrentLocalizedPlatformData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaxAttenuationRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Public/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaxAttenuationRadius = { "MaxAttenuationRadius", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEvent, MaxAttenuationRadius), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaxAttenuationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaxAttenuationRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_IsInfinite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Public/AkAudioEvent.h" },
	};
#endif
	void Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_IsInfinite_SetBit(void* Obj)
	{
		((UAkAudioEvent*)Obj)->IsInfinite = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_IsInfinite = { "IsInfinite", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkAudioEvent), &Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_IsInfinite_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_IsInfinite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_IsInfinite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MinimumDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Public/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MinimumDuration = { "MinimumDuration", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEvent, MinimumDuration), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MinimumDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MinimumDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaximumDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Public/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaximumDuration = { "MaximumDuration", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEvent, MaximumDuration), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaximumDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaximumDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAudioEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_LocalizedPlatformAssetDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_LocalizedPlatformAssetDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_LocalizedPlatformAssetDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_RequiredBank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_CurrentLocalizedPlatformData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaxAttenuationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_IsInfinite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MinimumDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaximumDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAudioEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioEvent_Statics::ClassParams = {
		&UAkAudioEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkAudioEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAudioEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAudioEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkAudioEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAudioEvent, 1248628697);
	template<> AKAUDIO_API UClass* StaticClass<UAkAudioEvent>()
	{
		return UAkAudioEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAudioEvent(Z_Construct_UClass_UAkAudioEvent, &UAkAudioEvent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAudioEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

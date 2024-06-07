// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkDurationCallbackInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkDurationCallbackInfo() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkDurationCallbackInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkDurationCallbackInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkEventCallbackInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkDurationCallbackInfo::StaticRegisterNativesUAkDurationCallbackInfo()
	{
	}
	UClass* Z_Construct_UClass_UAkDurationCallbackInfo_NoRegister()
	{
		return UAkDurationCallbackInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkDurationCallbackInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EstimatedDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EstimatedDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioNodeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AudioNodeID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MediaID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStreaming_MetaData[];
#endif
		static void NewProp_bStreaming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStreaming;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkDurationCallbackInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkEventCallbackInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkDurationCallbackInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkDurationCallbackInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkDurationCallbackInfo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkDurationCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkDurationCallbackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkDurationCallbackInfo, Duration), METADATA_PARAMS(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_EstimatedDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkDurationCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkDurationCallbackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_EstimatedDuration = { "EstimatedDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkDurationCallbackInfo, EstimatedDuration), METADATA_PARAMS(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_EstimatedDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_EstimatedDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_AudioNodeID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkDurationCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkDurationCallbackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_AudioNodeID = { "AudioNodeID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkDurationCallbackInfo, AudioNodeID), METADATA_PARAMS(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_AudioNodeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_AudioNodeID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_MediaID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkDurationCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkDurationCallbackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_MediaID = { "MediaID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkDurationCallbackInfo, MediaID), METADATA_PARAMS(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_MediaID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_MediaID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_bStreaming_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkDurationCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkDurationCallbackInfo.h" },
	};
#endif
	void Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_bStreaming_SetBit(void* Obj)
	{
		((UAkDurationCallbackInfo*)Obj)->bStreaming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_bStreaming = { "bStreaming", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkDurationCallbackInfo), &Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_bStreaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_bStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_bStreaming_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkDurationCallbackInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_EstimatedDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_AudioNodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_MediaID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_bStreaming,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkDurationCallbackInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkDurationCallbackInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkDurationCallbackInfo_Statics::ClassParams = {
		&UAkDurationCallbackInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkDurationCallbackInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkDurationCallbackInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkDurationCallbackInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkDurationCallbackInfo, 2663669543);
	template<> AKAUDIO_API UClass* StaticClass<UAkDurationCallbackInfo>()
	{
		return UAkDurationCallbackInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkDurationCallbackInfo(Z_Construct_UClass_UAkDurationCallbackInfo, &UAkDurationCallbackInfo::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkDurationCallbackInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkDurationCallbackInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

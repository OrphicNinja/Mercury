// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAudioEventData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioEventData() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEventData_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEventData();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetDataSwitchContainer();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetDataSwitchContainer_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkTrigger_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGroupValue_NoRegister();
// End Cross Module References
	void UAkAudioEventData::StaticRegisterNativesUAkAudioEventData()
	{
	}
	UClass* Z_Construct_UClass_UAkAudioEventData_NoRegister()
	{
		return UAkAudioEventData::StaticClass();
	}
	struct Z_Construct_UClass_UAkAudioEventData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalizedMedia_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalizedMedia_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedMedia_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LocalizedMedia;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PostedEvents_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostedEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_PostedEvents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserDefinedSends_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserDefinedSends_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_UserDefinedSends;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PostedTriggers_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostedTriggers_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_PostedTriggers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GroupValues_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_GroupValues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAudioEventData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAssetDataSwitchContainer,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkAudioEventData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkAudioEventData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaxAttenuationRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAudioEventData" },
		{ "ModuleRelativePath", "Public/AkAudioEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaxAttenuationRadius = { "MaxAttenuationRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEventData, MaxAttenuationRadius), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaxAttenuationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaxAttenuationRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_IsInfinite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAudioEventData" },
		{ "ModuleRelativePath", "Public/AkAudioEventData.h" },
	};
#endif
	void Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_IsInfinite_SetBit(void* Obj)
	{
		((UAkAudioEventData*)Obj)->IsInfinite = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_IsInfinite = { "IsInfinite", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkAudioEventData), &Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_IsInfinite_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_IsInfinite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_IsInfinite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MinimumDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAudioEventData" },
		{ "ModuleRelativePath", "Public/AkAudioEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MinimumDuration = { "MinimumDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEventData, MinimumDuration), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MinimumDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MinimumDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaximumDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAudioEventData" },
		{ "ModuleRelativePath", "Public/AkAudioEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaximumDuration = { "MaximumDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEventData, MaximumDuration), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaximumDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaximumDuration_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia_ValueProp = { "LocalizedMedia", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAkAssetDataSwitchContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia_Key_KeyProp = { "LocalizedMedia_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAudioEventData" },
		{ "ModuleRelativePath", "Public/AkAudioEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia = { "LocalizedMedia", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEventData, LocalizedMedia), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedEvents_ElementProp = { "PostedEvents", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedEvents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAudioEventData" },
		{ "ModuleRelativePath", "Public/AkAudioEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedEvents = { "PostedEvents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEventData, PostedEvents), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedEvents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_UserDefinedSends_ElementProp = { "UserDefinedSends", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_UserDefinedSends_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAudioEventData" },
		{ "ModuleRelativePath", "Public/AkAudioEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_UserDefinedSends = { "UserDefinedSends", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEventData, UserDefinedSends), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_UserDefinedSends_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_UserDefinedSends_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedTriggers_ElementProp = { "PostedTriggers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkTrigger_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedTriggers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAudioEventData" },
		{ "ModuleRelativePath", "Public/AkAudioEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedTriggers = { "PostedTriggers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEventData, PostedTriggers), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedTriggers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedTriggers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_GroupValues_ElementProp = { "GroupValues", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkGroupValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_GroupValues_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAudioEventData" },
		{ "ModuleRelativePath", "Public/AkAudioEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_GroupValues = { "GroupValues", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEventData, GroupValues), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_GroupValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_GroupValues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAudioEventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaxAttenuationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_IsInfinite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MinimumDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaximumDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedEvents_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_UserDefinedSends_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_UserDefinedSends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedTriggers_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedTriggers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_GroupValues_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_GroupValues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAudioEventData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioEventData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioEventData_Statics::ClassParams = {
		&UAkAudioEventData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAudioEventData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAudioEventData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkAudioEventData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAudioEventData, 2194019526);
	template<> AKAUDIO_API UClass* StaticClass<UAkAudioEventData>()
	{
		return UAkAudioEventData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAudioEventData(Z_Construct_UClass_UAkAudioEventData, &UAkAudioEventData::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAudioEventData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioEventData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAnimatedInteractionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnimatedInteractionData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAnimatedInteractionData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAnimatedInteractionData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAnimatedInteractionStartType();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAnimationScalePlayRateType();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration();
// End Cross Module References
	void USBZAnimatedInteractionData::StaticRegisterNativesUSBZAnimatedInteractionData()
	{
	}
	UClass* Z_Construct_UClass_USBZAnimatedInteractionData_NoRegister()
	{
		return USBZAnimatedInteractionData::StaticClass();
	}
	struct Z_Construct_UClass_USBZAnimatedInteractionData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationTag;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StartType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StartType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayRateScaleType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRateScaleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayRateScaleType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimatedInteractionTagPerDurations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimatedInteractionTagPerDurations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimatedInteractionTagPerDurations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAnimatedInteractionData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAnimatedInteractionData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAnimatedInteractionData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAnimatedInteractionData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_AnimationTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimatedInteractionData" },
		{ "ModuleRelativePath", "Public/SBZAnimatedInteractionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_AnimationTag = { "AnimationTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAnimatedInteractionData, AnimationTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_AnimationTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_AnimationTag_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_StartType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_StartType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimatedInteractionData" },
		{ "ModuleRelativePath", "Public/SBZAnimatedInteractionData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_StartType = { "StartType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAnimatedInteractionData, StartType), Z_Construct_UEnum_Starbreeze_ESBZAnimatedInteractionStartType, METADATA_PARAMS(Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_StartType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_StartType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_PlayRateScaleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_PlayRateScaleType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimatedInteractionData" },
		{ "ModuleRelativePath", "Public/SBZAnimatedInteractionData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_PlayRateScaleType = { "PlayRateScaleType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAnimatedInteractionData, PlayRateScaleType), Z_Construct_UEnum_Starbreeze_ESBZAnimationScalePlayRateType, METADATA_PARAMS(Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_PlayRateScaleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_PlayRateScaleType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_AnimatedInteractionTagPerDurations_Inner = { "AnimatedInteractionTagPerDurations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZAnimatedInteractionTagPerDuration, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_AnimatedInteractionTagPerDurations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimatedInteractionData" },
		{ "ModuleRelativePath", "Public/SBZAnimatedInteractionData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_AnimatedInteractionTagPerDurations = { "AnimatedInteractionTagPerDurations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAnimatedInteractionData, AnimatedInteractionTagPerDurations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_AnimatedInteractionTagPerDurations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_AnimatedInteractionTagPerDurations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAnimatedInteractionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_AnimationTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_StartType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_StartType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_PlayRateScaleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_PlayRateScaleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_AnimatedInteractionTagPerDurations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAnimatedInteractionData_Statics::NewProp_AnimatedInteractionTagPerDurations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAnimatedInteractionData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAnimatedInteractionData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAnimatedInteractionData_Statics::ClassParams = {
		&USBZAnimatedInteractionData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAnimatedInteractionData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnimatedInteractionData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAnimatedInteractionData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnimatedInteractionData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAnimatedInteractionData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAnimatedInteractionData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAnimatedInteractionData, 851190647);
	template<> STARBREEZE_API UClass* StaticClass<USBZAnimatedInteractionData>()
	{
		return USBZAnimatedInteractionData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAnimatedInteractionData(Z_Construct_UClass_USBZAnimatedInteractionData, &USBZAnimatedInteractionData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAnimatedInteractionData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAnimatedInteractionData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

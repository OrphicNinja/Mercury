// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIUtilityScorer_WithinRange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIUtilityScorer_WithinRange() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityScorer_WithinRange_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityScorer_WithinRange();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityScorer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZRangeTestTargetType();
// End Cross Module References
	void USBZAIUtilityScorer_WithinRange::StaticRegisterNativesUSBZAIUtilityScorer_WithinRange()
	{
	}
	UClass* Z_Construct_UClass_USBZAIUtilityScorer_WithinRange_NoRegister()
	{
		return USBZAIUtilityScorer_WithinRange::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIUtilityScorer_WithinRange_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIUtilityScorer_WithinRange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIUtilityScorer,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityScorer_WithinRange_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIUtilityScorer_WithinRange.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityScorer_WithinRange.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityScorer_WithinRange_Statics::NewProp_Distance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityScorer_WithinRange" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityScorer_WithinRange.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIUtilityScorer_WithinRange_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityScorer_WithinRange, Distance), METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityScorer_WithinRange_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityScorer_WithinRange_Statics::NewProp_Distance_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAIUtilityScorer_WithinRange_Statics::NewProp_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityScorer_WithinRange_Statics::NewProp_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityScorer_WithinRange" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityScorer_WithinRange.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAIUtilityScorer_WithinRange_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityScorer_WithinRange, Target), Z_Construct_UEnum_Starbreeze_ESBZRangeTestTargetType, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityScorer_WithinRange_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityScorer_WithinRange_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIUtilityScorer_WithinRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityScorer_WithinRange_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityScorer_WithinRange_Statics::NewProp_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityScorer_WithinRange_Statics::NewProp_Target,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIUtilityScorer_WithinRange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIUtilityScorer_WithinRange>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIUtilityScorer_WithinRange_Statics::ClassParams = {
		&USBZAIUtilityScorer_WithinRange::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIUtilityScorer_WithinRange_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityScorer_WithinRange_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityScorer_WithinRange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityScorer_WithinRange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIUtilityScorer_WithinRange()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIUtilityScorer_WithinRange_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIUtilityScorer_WithinRange, 206505509);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIUtilityScorer_WithinRange>()
	{
		return USBZAIUtilityScorer_WithinRange::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIUtilityScorer_WithinRange(Z_Construct_UClass_USBZAIUtilityScorer_WithinRange, &USBZAIUtilityScorer_WithinRange::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIUtilityScorer_WithinRange"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIUtilityScorer_WithinRange);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

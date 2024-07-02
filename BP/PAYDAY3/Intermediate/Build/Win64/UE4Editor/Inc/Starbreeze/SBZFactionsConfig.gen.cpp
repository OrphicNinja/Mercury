// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFactionsConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFactionsConfig() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFactionsConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFactionsConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZFactionInfo();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZFactionAttitude();
// End Cross Module References
	void USBZFactionsConfig::StaticRegisterNativesUSBZFactionsConfig()
	{
	}
	UClass* Z_Construct_UClass_USBZFactionsConfig_NoRegister()
	{
		return USBZFactionsConfig::StaticClass();
	}
	struct Z_Construct_UClass_USBZFactionsConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Factions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Factions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Factions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attitudes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attitudes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Attitudes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZFactionsConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFactionsConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZFactionsConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZFactionsConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZFactionsConfig_Statics::NewProp_Factions_Inner = { "Factions", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZFactionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFactionsConfig_Statics::NewProp_Factions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFactionsConfig" },
		{ "ModuleRelativePath", "Public/SBZFactionsConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZFactionsConfig_Statics::NewProp_Factions = { "Factions", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFactionsConfig, Factions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZFactionsConfig_Statics::NewProp_Factions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFactionsConfig_Statics::NewProp_Factions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZFactionsConfig_Statics::NewProp_Attitudes_Inner = { "Attitudes", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZFactionAttitude, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFactionsConfig_Statics::NewProp_Attitudes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFactionsConfig" },
		{ "ModuleRelativePath", "Public/SBZFactionsConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZFactionsConfig_Statics::NewProp_Attitudes = { "Attitudes", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFactionsConfig, Attitudes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZFactionsConfig_Statics::NewProp_Attitudes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFactionsConfig_Statics::NewProp_Attitudes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZFactionsConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFactionsConfig_Statics::NewProp_Factions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFactionsConfig_Statics::NewProp_Factions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFactionsConfig_Statics::NewProp_Attitudes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFactionsConfig_Statics::NewProp_Attitudes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZFactionsConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZFactionsConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZFactionsConfig_Statics::ClassParams = {
		&USBZFactionsConfig::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZFactionsConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZFactionsConfig_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZFactionsConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFactionsConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZFactionsConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZFactionsConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZFactionsConfig, 1991663934);
	template<> STARBREEZE_API UClass* StaticClass<USBZFactionsConfig>()
	{
		return USBZFactionsConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZFactionsConfig(Z_Construct_UClass_USBZFactionsConfig, &USBZFactionsConfig::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZFactionsConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZFactionsConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

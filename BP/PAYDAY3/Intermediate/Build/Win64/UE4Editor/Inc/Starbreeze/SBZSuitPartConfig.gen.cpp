// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSuitPartConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSuitPartConfig() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitPartConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitPartConfig();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartConfig();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSuitPart();
// End Cross Module References
	void USBZSuitPartConfig::StaticRegisterNativesUSBZSuitPartConfig()
	{
	}
	UClass* Z_Construct_UClass_USBZSuitPartConfig_NoRegister()
	{
		return USBZSuitPartConfig::StaticClass();
	}
	struct Z_Construct_UClass_USBZSuitPartConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SuitPart_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitPart_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SuitPart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSuitPartConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZModularPartConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSuitPartConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSuitPartConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSuitPartConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZSuitPartConfig_Statics::NewProp_SuitPart_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSuitPartConfig_Statics::NewProp_SuitPart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitPartConfig" },
		{ "ModuleRelativePath", "Public/SBZSuitPartConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZSuitPartConfig_Statics::NewProp_SuitPart = { "SuitPart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSuitPartConfig, SuitPart), Z_Construct_UEnum_Starbreeze_ESBZSuitPart, METADATA_PARAMS(Z_Construct_UClass_USBZSuitPartConfig_Statics::NewProp_SuitPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSuitPartConfig_Statics::NewProp_SuitPart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSuitPartConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSuitPartConfig_Statics::NewProp_SuitPart_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSuitPartConfig_Statics::NewProp_SuitPart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSuitPartConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSuitPartConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSuitPartConfig_Statics::ClassParams = {
		&USBZSuitPartConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSuitPartConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSuitPartConfig_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSuitPartConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSuitPartConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSuitPartConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSuitPartConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSuitPartConfig, 3994381610);
	template<> STARBREEZE_API UClass* StaticClass<USBZSuitPartConfig>()
	{
		return USBZSuitPartConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSuitPartConfig(Z_Construct_UClass_USBZSuitPartConfig, &USBZSuitPartConfig::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSuitPartConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSuitPartConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponPatternDataConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponPatternDataConfig() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPatternDataConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPatternDataConfig();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartConfig();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSprayCanData_NoRegister();
// End Cross Module References
	void USBZWeaponPatternDataConfig::StaticRegisterNativesUSBZWeaponPatternDataConfig()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponPatternDataConfig_NoRegister()
	{
		return USBZWeaponPatternDataConfig::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponPatternDataConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatternSprayCans_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatternSprayCans_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PatternSprayCans;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponPatternDataConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZEquippablePartConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponPatternDataConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponPatternDataConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponPatternDataConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWeaponPatternDataConfig_Statics::NewProp_PatternSprayCans_Inner = { "PatternSprayCans", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZSprayCanData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponPatternDataConfig_Statics::NewProp_PatternSprayCans_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPatternDataConfig" },
		{ "ModuleRelativePath", "Public/SBZWeaponPatternDataConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZWeaponPatternDataConfig_Statics::NewProp_PatternSprayCans = { "PatternSprayCans", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponPatternDataConfig, PatternSprayCans), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponPatternDataConfig_Statics::NewProp_PatternSprayCans_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPatternDataConfig_Statics::NewProp_PatternSprayCans_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponPatternDataConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponPatternDataConfig_Statics::NewProp_PatternSprayCans_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponPatternDataConfig_Statics::NewProp_PatternSprayCans,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponPatternDataConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponPatternDataConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponPatternDataConfig_Statics::ClassParams = {
		&USBZWeaponPatternDataConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWeaponPatternDataConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPatternDataConfig_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponPatternDataConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPatternDataConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponPatternDataConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponPatternDataConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponPatternDataConfig, 1003779707);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponPatternDataConfig>()
	{
		return USBZWeaponPatternDataConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponPatternDataConfig(Z_Construct_UClass_USBZWeaponPatternDataConfig, &USBZWeaponPatternDataConfig::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponPatternDataConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponPatternDataConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZProjectileImpactConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZProjectileImpactConfig() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZProjectileImpactConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZProjectileImpactConfig();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZImpactConfig();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData();
// End Cross Module References
	void USBZProjectileImpactConfig::StaticRegisterNativesUSBZProjectileImpactConfig()
	{
	}
	UClass* Z_Construct_UClass_USBZProjectileImpactConfig_NoRegister()
	{
		return USBZProjectileImpactConfig::StaticClass();
	}
	struct Z_Construct_UClass_USBZProjectileImpactConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Types_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Types_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Types;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldDoBloodSplatter_MetaData[];
#endif
		static void NewProp_bShouldDoBloodSplatter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldDoBloodSplatter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZProjectileImpactConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZImpactConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZProjectileImpactConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZProjectileImpactConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZProjectileImpactConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZProjectileImpactConfig_Statics::NewProp_Types_Inner = { "Types", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZProjectileImpactConfig_Statics::NewProp_Types_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProjectileImpactConfig" },
		{ "ModuleRelativePath", "Public/SBZProjectileImpactConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZProjectileImpactConfig_Statics::NewProp_Types = { "Types", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZProjectileImpactConfig, Types), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZProjectileImpactConfig_Statics::NewProp_Types_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZProjectileImpactConfig_Statics::NewProp_Types_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZProjectileImpactConfig_Statics::NewProp_bShouldDoBloodSplatter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProjectileImpactConfig" },
		{ "ModuleRelativePath", "Public/SBZProjectileImpactConfig.h" },
	};
#endif
	void Z_Construct_UClass_USBZProjectileImpactConfig_Statics::NewProp_bShouldDoBloodSplatter_SetBit(void* Obj)
	{
		((USBZProjectileImpactConfig*)Obj)->bShouldDoBloodSplatter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZProjectileImpactConfig_Statics::NewProp_bShouldDoBloodSplatter = { "bShouldDoBloodSplatter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZProjectileImpactConfig), &Z_Construct_UClass_USBZProjectileImpactConfig_Statics::NewProp_bShouldDoBloodSplatter_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZProjectileImpactConfig_Statics::NewProp_bShouldDoBloodSplatter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZProjectileImpactConfig_Statics::NewProp_bShouldDoBloodSplatter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZProjectileImpactConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZProjectileImpactConfig_Statics::NewProp_Types_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZProjectileImpactConfig_Statics::NewProp_Types,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZProjectileImpactConfig_Statics::NewProp_bShouldDoBloodSplatter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZProjectileImpactConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZProjectileImpactConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZProjectileImpactConfig_Statics::ClassParams = {
		&USBZProjectileImpactConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZProjectileImpactConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZProjectileImpactConfig_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZProjectileImpactConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZProjectileImpactConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZProjectileImpactConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZProjectileImpactConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZProjectileImpactConfig, 242944087);
	template<> STARBREEZE_API UClass* StaticClass<USBZProjectileImpactConfig>()
	{
		return USBZProjectileImpactConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZProjectileImpactConfig(Z_Construct_UClass_USBZProjectileImpactConfig, &USBZProjectileImpactConfig::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZProjectileImpactConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZProjectileImpactConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

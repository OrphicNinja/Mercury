// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMeleeImpactConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMeleeImpactConfig() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMeleeImpactConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMeleeImpactConfig();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZImpactConfig();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMeleeImpactData();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMeleeImpactType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister();
// End Cross Module References
	void USBZMeleeImpactConfig::StaticRegisterNativesUSBZMeleeImpactConfig()
	{
	}
	UClass* Z_Construct_UClass_USBZMeleeImpactConfig_NoRegister()
	{
		return USBZMeleeImpactConfig::StaticClass();
	}
	struct Z_Construct_UClass_USBZMeleeImpactConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeleeWeaponTypes_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeleeWeaponTypes_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MeleeWeaponTypes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeWeaponTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MeleeWeaponTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ImpactFeedback;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MeleeTypeFeedbackOverride_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeleeTypeFeedbackOverride_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MeleeTypeFeedbackOverride_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeTypeFeedbackOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MeleeTypeFeedbackOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMeleeImpactConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZImpactConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeImpactConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMeleeImpactConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMeleeImpactConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_MeleeWeaponTypes_ValueProp = { "MeleeWeaponTypes", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZMeleeImpactData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_MeleeWeaponTypes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_MeleeWeaponTypes_Key_KeyProp = { "MeleeWeaponTypes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZMeleeImpactType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_MeleeWeaponTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeleeImpactConfig" },
		{ "ModuleRelativePath", "Public/SBZMeleeImpactConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_MeleeWeaponTypes = { "MeleeWeaponTypes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMeleeImpactConfig, MeleeWeaponTypes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_MeleeWeaponTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_MeleeWeaponTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_ImpactFeedback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeleeImpactConfig" },
		{ "ModuleRelativePath", "Public/SBZMeleeImpactConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_ImpactFeedback = { "ImpactFeedback", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMeleeImpactConfig, ImpactFeedback), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_ImpactFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_ImpactFeedback_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_MeleeTypeFeedbackOverride_ValueProp = { "MeleeTypeFeedbackOverride", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_MeleeTypeFeedbackOverride_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_MeleeTypeFeedbackOverride_Key_KeyProp = { "MeleeTypeFeedbackOverride_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZMeleeImpactType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_MeleeTypeFeedbackOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeleeImpactConfig" },
		{ "ModuleRelativePath", "Public/SBZMeleeImpactConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_MeleeTypeFeedbackOverride = { "MeleeTypeFeedbackOverride", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMeleeImpactConfig, MeleeTypeFeedbackOverride), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_MeleeTypeFeedbackOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_MeleeTypeFeedbackOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMeleeImpactConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_MeleeWeaponTypes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_MeleeWeaponTypes_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_MeleeWeaponTypes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_MeleeWeaponTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_ImpactFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_MeleeTypeFeedbackOverride_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_MeleeTypeFeedbackOverride_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_MeleeTypeFeedbackOverride_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeImpactConfig_Statics::NewProp_MeleeTypeFeedbackOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMeleeImpactConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMeleeImpactConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMeleeImpactConfig_Statics::ClassParams = {
		&USBZMeleeImpactConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZMeleeImpactConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeImpactConfig_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMeleeImpactConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeImpactConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMeleeImpactConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMeleeImpactConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMeleeImpactConfig, 4263476968);
	template<> STARBREEZE_API UClass* StaticClass<USBZMeleeImpactConfig>()
	{
		return USBZMeleeImpactConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMeleeImpactConfig(Z_Construct_UClass_USBZMeleeImpactConfig, &USBZMeleeImpactConfig::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMeleeImpactConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMeleeImpactConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

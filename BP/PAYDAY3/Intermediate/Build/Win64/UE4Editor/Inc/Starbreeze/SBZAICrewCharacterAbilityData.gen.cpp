// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAICrewCharacterAbilityData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAICrewCharacterAbilityData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICrewCharacterAbilityData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICrewCharacterAbilityData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICharacterAbilityData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAICrewCharacterAbilityData::StaticRegisterNativesUSBZAICrewCharacterAbilityData()
	{
	}
	UClass* Z_Construct_UClass_USBZAICrewCharacterAbilityData_NoRegister()
	{
		return USBZAICrewCharacterAbilityData::StaticClass();
	}
	struct Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownedHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DownedHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefeatDownedDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefeatDownedDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefeatCuffedDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefeatCuffedDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReviveHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReviveHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAICharacterAbilityData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAICrewCharacterAbilityData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacterAbilityData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::NewProp_DownedHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacterAbilityData" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacterAbilityData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::NewProp_DownedHealth = { "DownedHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICrewCharacterAbilityData, DownedHealth), METADATA_PARAMS(Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::NewProp_DownedHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::NewProp_DownedHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::NewProp_DefeatDownedDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacterAbilityData" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacterAbilityData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::NewProp_DefeatDownedDuration = { "DefeatDownedDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICrewCharacterAbilityData, DefeatDownedDuration), METADATA_PARAMS(Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::NewProp_DefeatDownedDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::NewProp_DefeatDownedDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::NewProp_DefeatCuffedDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacterAbilityData" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacterAbilityData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::NewProp_DefeatCuffedDuration = { "DefeatCuffedDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICrewCharacterAbilityData, DefeatCuffedDuration), METADATA_PARAMS(Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::NewProp_DefeatCuffedDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::NewProp_DefeatCuffedDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::NewProp_ReviveHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacterAbilityData" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacterAbilityData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::NewProp_ReviveHealth = { "ReviveHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICrewCharacterAbilityData, ReviveHealth), METADATA_PARAMS(Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::NewProp_ReviveHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::NewProp_ReviveHealth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::NewProp_DownedHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::NewProp_DefeatDownedDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::NewProp_DefeatCuffedDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::NewProp_ReviveHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAICrewCharacterAbilityData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::ClassParams = {
		&USBZAICrewCharacterAbilityData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAICrewCharacterAbilityData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAICrewCharacterAbilityData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAICrewCharacterAbilityData, 1241570361);
	template<> STARBREEZE_API UClass* StaticClass<USBZAICrewCharacterAbilityData>()
	{
		return USBZAICrewCharacterAbilityData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAICrewCharacterAbilityData(Z_Construct_UClass_USBZAICrewCharacterAbilityData, &USBZAICrewCharacterAbilityData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAICrewCharacterAbilityData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAICrewCharacterAbilityData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

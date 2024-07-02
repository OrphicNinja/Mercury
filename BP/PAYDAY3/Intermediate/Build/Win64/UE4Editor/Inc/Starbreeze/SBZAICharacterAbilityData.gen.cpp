// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAICharacterAbilityData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAICharacterAbilityData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICharacterAbilityData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICharacterAbilityData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterAbilityData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAICharacterAbilityData::StaticRegisterNativesUSBZAICharacterAbilityData()
	{
	}
	UClass* Z_Construct_UClass_USBZAICharacterAbilityData_NoRegister()
	{
		return USBZAICharacterAbilityData::StaticClass();
	}
	struct Z_Construct_UClass_USBZAICharacterAbilityData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorHardness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmorHardness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAICharacterAbilityData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCharacterAbilityData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterAbilityData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAICharacterAbilityData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAICharacterAbilityData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterAbilityData_Statics::NewProp_ArmorHardness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterAbilityData" },
		{ "ModuleRelativePath", "Public/SBZAICharacterAbilityData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAICharacterAbilityData_Statics::NewProp_ArmorHardness = { "ArmorHardness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICharacterAbilityData, ArmorHardness), METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterAbilityData_Statics::NewProp_ArmorHardness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterAbilityData_Statics::NewProp_ArmorHardness_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAICharacterAbilityData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterAbilityData_Statics::NewProp_ArmorHardness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAICharacterAbilityData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAICharacterAbilityData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAICharacterAbilityData_Statics::ClassParams = {
		&USBZAICharacterAbilityData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAICharacterAbilityData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterAbilityData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterAbilityData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterAbilityData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAICharacterAbilityData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAICharacterAbilityData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAICharacterAbilityData, 3188949068);
	template<> STARBREEZE_API UClass* StaticClass<USBZAICharacterAbilityData>()
	{
		return USBZAICharacterAbilityData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAICharacterAbilityData(Z_Construct_UClass_USBZAICharacterAbilityData, &USBZAICharacterAbilityData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAICharacterAbilityData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAICharacterAbilityData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLifeActionAffinitytData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLifeActionAffinitytData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionAffinitytData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionAffinitytData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLifeActionAffinityList();
// End Cross Module References
	void USBZLifeActionAffinitytData::StaticRegisterNativesUSBZLifeActionAffinitytData()
	{
	}
	UClass* Z_Construct_UClass_USBZLifeActionAffinitytData_NoRegister()
	{
		return USBZLifeActionAffinitytData::StaticClass();
	}
	struct Z_Construct_UClass_USBZLifeActionAffinitytData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllowedActions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLifeActionAffinitytData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionAffinitytData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLifeActionAffinitytData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionAffinitytData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionAffinitytData_Statics::NewProp_AllowedActions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionAffinitytData" },
		{ "ModuleRelativePath", "Public/SBZLifeActionAffinitytData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLifeActionAffinitytData_Statics::NewProp_AllowedActions = { "AllowedActions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionAffinitytData, AllowedActions), Z_Construct_UScriptStruct_FSBZLifeActionAffinityList, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionAffinitytData_Statics::NewProp_AllowedActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionAffinitytData_Statics::NewProp_AllowedActions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZLifeActionAffinitytData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionAffinitytData_Statics::NewProp_AllowedActions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLifeActionAffinitytData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLifeActionAffinitytData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLifeActionAffinitytData_Statics::ClassParams = {
		&USBZLifeActionAffinitytData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZLifeActionAffinitytData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionAffinitytData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionAffinitytData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionAffinitytData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLifeActionAffinitytData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLifeActionAffinitytData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLifeActionAffinitytData, 1730673624);
	template<> STARBREEZE_API UClass* StaticClass<USBZLifeActionAffinitytData>()
	{
		return USBZLifeActionAffinitytData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLifeActionAffinitytData(Z_Construct_UClass_USBZLifeActionAffinitytData, &USBZLifeActionAffinitytData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLifeActionAffinitytData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLifeActionAffinitytData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

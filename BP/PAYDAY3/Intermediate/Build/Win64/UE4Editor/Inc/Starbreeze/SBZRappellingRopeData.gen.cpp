// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRappellingRopeData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRappellingRopeData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRappellingRopeData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRappellingRopeData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRappellingRopeSettings();
// End Cross Module References
	void USBZRappellingRopeData::StaticRegisterNativesUSBZRappellingRopeData()
	{
	}
	UClass* Z_Construct_UClass_USBZRappellingRopeData_NoRegister()
	{
		return USBZRappellingRopeData::StaticClass();
	}
	struct Z_Construct_UClass_USBZRappellingRopeData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnterSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnterSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExitSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZRappellingRopeData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRappellingRopeData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZRappellingRopeData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZRappellingRopeData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRappellingRopeData_Statics::NewProp_EnterSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRappellingRopeData" },
		{ "ModuleRelativePath", "Public/SBZRappellingRopeData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZRappellingRopeData_Statics::NewProp_EnterSettings = { "EnterSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRappellingRopeData, EnterSettings), Z_Construct_UScriptStruct_FSBZRappellingRopeSettings, METADATA_PARAMS(Z_Construct_UClass_USBZRappellingRopeData_Statics::NewProp_EnterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRappellingRopeData_Statics::NewProp_EnterSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRappellingRopeData_Statics::NewProp_ExitSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRappellingRopeData" },
		{ "ModuleRelativePath", "Public/SBZRappellingRopeData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZRappellingRopeData_Statics::NewProp_ExitSettings = { "ExitSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRappellingRopeData, ExitSettings), Z_Construct_UScriptStruct_FSBZRappellingRopeSettings, METADATA_PARAMS(Z_Construct_UClass_USBZRappellingRopeData_Statics::NewProp_ExitSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRappellingRopeData_Statics::NewProp_ExitSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZRappellingRopeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRappellingRopeData_Statics::NewProp_EnterSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRappellingRopeData_Statics::NewProp_ExitSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZRappellingRopeData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZRappellingRopeData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZRappellingRopeData_Statics::ClassParams = {
		&USBZRappellingRopeData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZRappellingRopeData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZRappellingRopeData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZRappellingRopeData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRappellingRopeData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZRappellingRopeData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZRappellingRopeData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZRappellingRopeData, 1775675306);
	template<> STARBREEZE_API UClass* StaticClass<USBZRappellingRopeData>()
	{
		return USBZRappellingRopeData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZRappellingRopeData(Z_Construct_UClass_USBZRappellingRopeData, &USBZRappellingRopeData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZRappellingRopeData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZRappellingRopeData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

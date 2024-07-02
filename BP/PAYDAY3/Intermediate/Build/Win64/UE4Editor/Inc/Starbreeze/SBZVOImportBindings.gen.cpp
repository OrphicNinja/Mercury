// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVOImportBindings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVOImportBindings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVOImportBindings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVOImportBindings();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLevelVOInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	void USBZVOImportBindings::StaticRegisterNativesUSBZVOImportBindings()
	{
	}
	UClass* Z_Construct_UClass_USBZVOImportBindings_NoRegister()
	{
		return USBZVOImportBindings::StaticClass();
	}
	struct Z_Construct_UClass_USBZVOImportBindings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VOInfoArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VOInfoArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VOInfoArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelToVOInfo_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelToVOInfo_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelToVOInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LevelToVOInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZVOImportBindings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVOImportBindings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZVOImportBindings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVOImportBindings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZVOImportBindings_Statics::NewProp_VOInfoArray_Inner = { "VOInfoArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZLevelVOInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVOImportBindings_Statics::NewProp_VOInfoArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVOImportBindings" },
		{ "ModuleRelativePath", "Public/SBZVOImportBindings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZVOImportBindings_Statics::NewProp_VOInfoArray = { "VOInfoArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVOImportBindings, VOInfoArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZVOImportBindings_Statics::NewProp_VOInfoArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVOImportBindings_Statics::NewProp_VOInfoArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZVOImportBindings_Statics::NewProp_LevelToVOInfo_ValueProp = { "LevelToVOInfo", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZLevelVOInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZVOImportBindings_Statics::NewProp_LevelToVOInfo_Key_KeyProp = { "LevelToVOInfo_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVOImportBindings_Statics::NewProp_LevelToVOInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVOImportBindings" },
		{ "ModuleRelativePath", "Public/SBZVOImportBindings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZVOImportBindings_Statics::NewProp_LevelToVOInfo = { "LevelToVOInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVOImportBindings, LevelToVOInfo), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZVOImportBindings_Statics::NewProp_LevelToVOInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVOImportBindings_Statics::NewProp_LevelToVOInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZVOImportBindings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVOImportBindings_Statics::NewProp_VOInfoArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVOImportBindings_Statics::NewProp_VOInfoArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVOImportBindings_Statics::NewProp_LevelToVOInfo_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVOImportBindings_Statics::NewProp_LevelToVOInfo_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVOImportBindings_Statics::NewProp_LevelToVOInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZVOImportBindings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZVOImportBindings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZVOImportBindings_Statics::ClassParams = {
		&USBZVOImportBindings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZVOImportBindings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZVOImportBindings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZVOImportBindings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVOImportBindings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZVOImportBindings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZVOImportBindings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZVOImportBindings, 2154237583);
	template<> STARBREEZE_API UClass* StaticClass<USBZVOImportBindings>()
	{
		return USBZVOImportBindings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZVOImportBindings(Z_Construct_UClass_USBZVOImportBindings, &USBZVOImportBindings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZVOImportBindings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZVOImportBindings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

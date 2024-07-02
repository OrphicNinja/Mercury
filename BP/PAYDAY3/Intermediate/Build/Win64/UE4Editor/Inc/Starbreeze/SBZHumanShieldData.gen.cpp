// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHumanShieldData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHumanShieldData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHumanShieldData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHumanShieldData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHumanShieldDirection();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	void USBZHumanShieldData::StaticRegisterNativesUSBZHumanShieldData()
	{
	}
	UClass* Z_Construct_UClass_USBZHumanShieldData_NoRegister()
	{
		return USBZHumanShieldData::StaticClass();
	}
	struct Z_Construct_UClass_USBZHumanShieldData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Directions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Directions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Directions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBufferArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBufferArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowAnyDirectionTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllowAnyDirectionTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHumanShieldData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHumanShieldData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHumanShieldData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHumanShieldData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHumanShieldData_Statics::NewProp_Directions_Inner = { "Directions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZHumanShieldDirection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHumanShieldData_Statics::NewProp_Directions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHumanShieldData" },
		{ "ModuleRelativePath", "Public/SBZHumanShieldData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZHumanShieldData_Statics::NewProp_Directions = { "Directions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHumanShieldData, Directions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZHumanShieldData_Statics::NewProp_Directions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHumanShieldData_Statics::NewProp_Directions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHumanShieldData_Statics::NewProp_TimeBufferArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHumanShieldData" },
		{ "ModuleRelativePath", "Public/SBZHumanShieldData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZHumanShieldData_Statics::NewProp_TimeBufferArray = { "TimeBufferArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(TimeBufferArray, USBZHumanShieldData), STRUCT_OFFSET(USBZHumanShieldData, TimeBufferArray), METADATA_PARAMS(Z_Construct_UClass_USBZHumanShieldData_Statics::NewProp_TimeBufferArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHumanShieldData_Statics::NewProp_TimeBufferArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHumanShieldData_Statics::NewProp_AllowAnyDirectionTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHumanShieldData" },
		{ "ModuleRelativePath", "Public/SBZHumanShieldData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHumanShieldData_Statics::NewProp_AllowAnyDirectionTags = { "AllowAnyDirectionTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHumanShieldData, AllowAnyDirectionTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZHumanShieldData_Statics::NewProp_AllowAnyDirectionTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHumanShieldData_Statics::NewProp_AllowAnyDirectionTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZHumanShieldData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHumanShieldData_Statics::NewProp_Directions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHumanShieldData_Statics::NewProp_Directions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHumanShieldData_Statics::NewProp_TimeBufferArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHumanShieldData_Statics::NewProp_AllowAnyDirectionTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHumanShieldData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHumanShieldData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHumanShieldData_Statics::ClassParams = {
		&USBZHumanShieldData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZHumanShieldData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZHumanShieldData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZHumanShieldData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHumanShieldData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHumanShieldData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHumanShieldData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHumanShieldData, 1609964485);
	template<> STARBREEZE_API UClass* StaticClass<USBZHumanShieldData>()
	{
		return USBZHumanShieldData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHumanShieldData(Z_Construct_UClass_USBZHumanShieldData, &USBZHumanShieldData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHumanShieldData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHumanShieldData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

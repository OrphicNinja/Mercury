// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEmoteData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEmoteData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEmoteData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEmoteData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEmoteMapping();
// End Cross Module References
	void USBZEmoteData::StaticRegisterNativesUSBZEmoteData()
	{
	}
	UClass* Z_Construct_UClass_USBZEmoteData_NoRegister()
	{
		return USBZEmoteData::StaticClass();
	}
	struct Z_Construct_UClass_USBZEmoteData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmoteMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmoteMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EmoteMappings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEmoteData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEmoteData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEmoteData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEmoteData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZEmoteData_Statics::NewProp_EmoteMappings_Inner = { "EmoteMappings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZEmoteMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEmoteData_Statics::NewProp_EmoteMappings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEmoteData" },
		{ "ModuleRelativePath", "Public/SBZEmoteData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZEmoteData_Statics::NewProp_EmoteMappings = { "EmoteMappings", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEmoteData, EmoteMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZEmoteData_Statics::NewProp_EmoteMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEmoteData_Statics::NewProp_EmoteMappings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZEmoteData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEmoteData_Statics::NewProp_EmoteMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEmoteData_Statics::NewProp_EmoteMappings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEmoteData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEmoteData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEmoteData_Statics::ClassParams = {
		&USBZEmoteData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZEmoteData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZEmoteData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEmoteData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEmoteData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEmoteData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEmoteData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEmoteData, 748854098);
	template<> STARBREEZE_API UClass* StaticClass<USBZEmoteData>()
	{
		return USBZEmoteData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEmoteData(Z_Construct_UClass_USBZEmoteData, &USBZEmoteData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEmoteData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEmoteData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

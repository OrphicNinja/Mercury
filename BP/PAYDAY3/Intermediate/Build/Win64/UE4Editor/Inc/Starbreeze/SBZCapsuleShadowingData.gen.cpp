// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCapsuleShadowingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCapsuleShadowingData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCapsuleShadowingData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCapsuleShadowingData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings();
// End Cross Module References
	void USBZCapsuleShadowingData::StaticRegisterNativesUSBZCapsuleShadowingData()
	{
	}
	UClass* Z_Construct_UClass_USBZCapsuleShadowingData_NoRegister()
	{
		return USBZCapsuleShadowingData::StaticClass();
	}
	struct Z_Construct_UClass_USBZCapsuleShadowingData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleShadowingSettingsArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleShadowingSettingsArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CapsuleShadowingSettingsArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCapsuleShadowingData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCapsuleShadowingData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCapsuleShadowingData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCapsuleShadowingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCapsuleShadowingData_Statics::NewProp_CapsuleShadowingSettingsArray_Inner = { "CapsuleShadowingSettingsArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCapsuleShadowingData_Statics::NewProp_CapsuleShadowingSettingsArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCapsuleShadowingData" },
		{ "ModuleRelativePath", "Public/SBZCapsuleShadowingData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZCapsuleShadowingData_Statics::NewProp_CapsuleShadowingSettingsArray = { "CapsuleShadowingSettingsArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCapsuleShadowingData, CapsuleShadowingSettingsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZCapsuleShadowingData_Statics::NewProp_CapsuleShadowingSettingsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCapsuleShadowingData_Statics::NewProp_CapsuleShadowingSettingsArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCapsuleShadowingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCapsuleShadowingData_Statics::NewProp_CapsuleShadowingSettingsArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCapsuleShadowingData_Statics::NewProp_CapsuleShadowingSettingsArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCapsuleShadowingData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCapsuleShadowingData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCapsuleShadowingData_Statics::ClassParams = {
		&USBZCapsuleShadowingData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZCapsuleShadowingData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCapsuleShadowingData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCapsuleShadowingData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCapsuleShadowingData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCapsuleShadowingData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCapsuleShadowingData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCapsuleShadowingData, 2409803968);
	template<> STARBREEZE_API UClass* StaticClass<USBZCapsuleShadowingData>()
	{
		return USBZCapsuleShadowingData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCapsuleShadowingData(Z_Construct_UClass_USBZCapsuleShadowingData, &USBZCapsuleShadowingData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCapsuleShadowingData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCapsuleShadowingData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

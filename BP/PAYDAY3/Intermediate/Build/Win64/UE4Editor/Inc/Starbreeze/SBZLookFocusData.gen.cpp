// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLookFocusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLookFocusData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLookFocusData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLookFocusData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLookFocusParameters();
// End Cross Module References
	void USBZLookFocusData::StaticRegisterNativesUSBZLookFocusData()
	{
	}
	UClass* Z_Construct_UClass_USBZLookFocusData_NoRegister()
	{
		return USBZLookFocusData::StaticClass();
	}
	struct Z_Construct_UClass_USBZLookFocusData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookFocusParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookFocusParameters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLookFocusData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLookFocusData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLookFocusData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLookFocusData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLookFocusData_Statics::NewProp_LookFocusParameters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookFocusData" },
		{ "ModuleRelativePath", "Public/SBZLookFocusData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLookFocusData_Statics::NewProp_LookFocusParameters = { "LookFocusParameters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLookFocusData, LookFocusParameters), Z_Construct_UScriptStruct_FSBZLookFocusParameters, METADATA_PARAMS(Z_Construct_UClass_USBZLookFocusData_Statics::NewProp_LookFocusParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLookFocusData_Statics::NewProp_LookFocusParameters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZLookFocusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLookFocusData_Statics::NewProp_LookFocusParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLookFocusData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLookFocusData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLookFocusData_Statics::ClassParams = {
		&USBZLookFocusData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZLookFocusData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZLookFocusData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLookFocusData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLookFocusData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLookFocusData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLookFocusData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLookFocusData, 1837206896);
	template<> STARBREEZE_API UClass* StaticClass<USBZLookFocusData>()
	{
		return USBZLookFocusData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLookFocusData(Z_Construct_UClass_USBZLookFocusData, &USBZLookFocusData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLookFocusData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLookFocusData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

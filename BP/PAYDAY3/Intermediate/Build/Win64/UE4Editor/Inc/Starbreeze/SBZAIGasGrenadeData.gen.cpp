// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIGasGrenadeData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIGasGrenadeData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIGasGrenadeData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIGasGrenadeData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGasGrenadeData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData();
// End Cross Module References
	void USBZAIGasGrenadeData::StaticRegisterNativesUSBZAIGasGrenadeData()
	{
	}
	UClass* Z_Construct_UClass_USBZAIGasGrenadeData_NoRegister()
	{
		return USBZAIGasGrenadeData::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIGasGrenadeData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifficultyArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DifficultyArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIGasGrenadeData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGasGrenadeData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIGasGrenadeData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIGasGrenadeData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIGasGrenadeData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIGasGrenadeData_Statics::NewProp_DifficultyArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIGasGrenadeData" },
		{ "ModuleRelativePath", "Public/SBZAIGasGrenadeData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIGasGrenadeData_Statics::NewProp_DifficultyArray = { "DifficultyArray", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(DifficultyArray, USBZAIGasGrenadeData), STRUCT_OFFSET(USBZAIGasGrenadeData, DifficultyArray), Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData, METADATA_PARAMS(Z_Construct_UClass_USBZAIGasGrenadeData_Statics::NewProp_DifficultyArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIGasGrenadeData_Statics::NewProp_DifficultyArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIGasGrenadeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIGasGrenadeData_Statics::NewProp_DifficultyArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIGasGrenadeData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIGasGrenadeData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIGasGrenadeData_Statics::ClassParams = {
		&USBZAIGasGrenadeData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIGasGrenadeData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIGasGrenadeData_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIGasGrenadeData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIGasGrenadeData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIGasGrenadeData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIGasGrenadeData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIGasGrenadeData, 171863994);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIGasGrenadeData>()
	{
		return USBZAIGasGrenadeData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIGasGrenadeData(Z_Construct_UClass_USBZAIGasGrenadeData, &USBZAIGasGrenadeData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIGasGrenadeData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIGasGrenadeData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

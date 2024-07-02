// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/DataInputValidation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataInputValidation() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FDataInputValidation();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FValidation();
// End Cross Module References
class UScriptStruct* FDataInputValidation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FDataInputValidation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataInputValidation, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("DataInputValidation"), sizeof(FDataInputValidation), Get_Z_Construct_UScriptStruct_FDataInputValidation_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FDataInputValidation>()
{
	return FDataInputValidation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataInputValidation(FDataInputValidation::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("DataInputValidation"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFDataInputValidation
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFDataInputValidation()
	{
		UScriptStruct::DeferCppStructOps<FDataInputValidation>(FName(TEXT("DataInputValidation")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFDataInputValidation;
	struct Z_Construct_UScriptStruct_FDataInputValidation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Validation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Validation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataInputValidation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataInputValidation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataInputValidation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataInputValidation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataInputValidation_Statics::NewProp_Field_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataInputValidation" },
		{ "ModuleRelativePath", "Public/DataInputValidation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataInputValidation_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataInputValidation, Field), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataInputValidation_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInputValidation_Statics::NewProp_Field_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataInputValidation_Statics::NewProp_Validation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataInputValidation" },
		{ "ModuleRelativePath", "Public/DataInputValidation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataInputValidation_Statics::NewProp_Validation = { "Validation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataInputValidation, Validation), Z_Construct_UScriptStruct_FValidation, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataInputValidation_Statics::NewProp_Validation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInputValidation_Statics::NewProp_Validation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataInputValidation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInputValidation_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInputValidation_Statics::NewProp_Validation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataInputValidation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"DataInputValidation",
		sizeof(FDataInputValidation),
		alignof(FDataInputValidation),
		Z_Construct_UScriptStruct_FDataInputValidation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInputValidation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataInputValidation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInputValidation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataInputValidation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataInputValidation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataInputValidation"), sizeof(FDataInputValidation), Get_Z_Construct_UScriptStruct_FDataInputValidation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataInputValidation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataInputValidation_Hash() { return 298516418U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

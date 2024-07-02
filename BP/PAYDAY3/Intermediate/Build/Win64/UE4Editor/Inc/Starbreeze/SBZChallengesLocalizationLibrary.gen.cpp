// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZChallengesLocalizationLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZChallengesLocalizationLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZChallengesLocalizationLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZChallengesLocalizationLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeLocalizationEntry();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FStatLocalizationEntry();
// End Cross Module References
	DEFINE_FUNCTION(USBZChallengesLocalizationLibrary::execExtractEntriesFromSpreadsheetCSVs)
	{
		P_GET_TARRAY_REF(FChallengeLocalizationEntry,Z_Param_Out_ChallengeLocalizationEntries);
		P_GET_TARRAY_REF(FStatLocalizationEntry,Z_Param_Out_StatLocalizationEntries);
		P_GET_TARRAY_REF(FString,Z_Param_Out_InputSpreadsheetCSVPaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZChallengesLocalizationLibrary::ExtractEntriesFromSpreadsheetCSVs(Z_Param_Out_ChallengeLocalizationEntries,Z_Param_Out_StatLocalizationEntries,Z_Param_Out_InputSpreadsheetCSVPaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChallengesLocalizationLibrary::execWriteEntriesToStringTablesCSVs)
	{
		P_GET_TARRAY_REF(FChallengeLocalizationEntry,Z_Param_Out_ChallengeEntries);
		P_GET_TARRAY_REF(FStatLocalizationEntry,Z_Param_Out_StatEntries);
		P_GET_PROPERTY(FStrProperty,Z_Param_OutputCSVPathChallenges);
		P_GET_PROPERTY(FStrProperty,Z_Param_OutputCSVPathChallengeStats);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZChallengesLocalizationLibrary::WriteEntriesToStringTablesCSVs(Z_Param_Out_ChallengeEntries,Z_Param_Out_StatEntries,Z_Param_OutputCSVPathChallenges,Z_Param_OutputCSVPathChallengeStats);
		P_NATIVE_END;
	}
	void USBZChallengesLocalizationLibrary::StaticRegisterNativesUSBZChallengesLocalizationLibrary()
	{
		UClass* Class = USBZChallengesLocalizationLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExtractEntriesFromSpreadsheetCSVs", &USBZChallengesLocalizationLibrary::execExtractEntriesFromSpreadsheetCSVs },
			{ "WriteEntriesToStringTablesCSVs", &USBZChallengesLocalizationLibrary::execWriteEntriesToStringTablesCSVs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs_Statics
	{
		struct SBZChallengesLocalizationLibrary_eventExtractEntriesFromSpreadsheetCSVs_Parms
		{
			TArray<FChallengeLocalizationEntry> ChallengeLocalizationEntries;
			TArray<FStatLocalizationEntry> StatLocalizationEntries;
			TArray<FString> InputSpreadsheetCSVPaths;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChallengeLocalizationEntries_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChallengeLocalizationEntries;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StatLocalizationEntries_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatLocalizationEntries;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InputSpreadsheetCSVPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputSpreadsheetCSVPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputSpreadsheetCSVPaths;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs_Statics::NewProp_ChallengeLocalizationEntries_Inner = { "ChallengeLocalizationEntries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChallengeLocalizationEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs_Statics::NewProp_ChallengeLocalizationEntries = { "ChallengeLocalizationEntries", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengesLocalizationLibrary_eventExtractEntriesFromSpreadsheetCSVs_Parms, ChallengeLocalizationEntries), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs_Statics::NewProp_StatLocalizationEntries_Inner = { "StatLocalizationEntries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStatLocalizationEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs_Statics::NewProp_StatLocalizationEntries = { "StatLocalizationEntries", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengesLocalizationLibrary_eventExtractEntriesFromSpreadsheetCSVs_Parms, StatLocalizationEntries), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs_Statics::NewProp_InputSpreadsheetCSVPaths_Inner = { "InputSpreadsheetCSVPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs_Statics::NewProp_InputSpreadsheetCSVPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs_Statics::NewProp_InputSpreadsheetCSVPaths = { "InputSpreadsheetCSVPaths", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengesLocalizationLibrary_eventExtractEntriesFromSpreadsheetCSVs_Parms, InputSpreadsheetCSVPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs_Statics::NewProp_InputSpreadsheetCSVPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs_Statics::NewProp_InputSpreadsheetCSVPaths_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs_Statics::NewProp_ChallengeLocalizationEntries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs_Statics::NewProp_ChallengeLocalizationEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs_Statics::NewProp_StatLocalizationEntries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs_Statics::NewProp_StatLocalizationEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs_Statics::NewProp_InputSpreadsheetCSVPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs_Statics::NewProp_InputSpreadsheetCSVPaths,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChallengesLocalizationLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChallengesLocalizationLibrary, nullptr, "ExtractEntriesFromSpreadsheetCSVs", nullptr, nullptr, sizeof(SBZChallengesLocalizationLibrary_eventExtractEntriesFromSpreadsheetCSVs_Parms), Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics
	{
		struct SBZChallengesLocalizationLibrary_eventWriteEntriesToStringTablesCSVs_Parms
		{
			TArray<FChallengeLocalizationEntry> ChallengeEntries;
			TArray<FStatLocalizationEntry> StatEntries;
			FString OutputCSVPathChallenges;
			FString OutputCSVPathChallengeStats;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChallengeEntries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChallengeEntries;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StatEntries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatEntries;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputCSVPathChallenges_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutputCSVPathChallenges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputCSVPathChallengeStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutputCSVPathChallengeStats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::NewProp_ChallengeEntries_Inner = { "ChallengeEntries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChallengeLocalizationEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::NewProp_ChallengeEntries_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::NewProp_ChallengeEntries = { "ChallengeEntries", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengesLocalizationLibrary_eventWriteEntriesToStringTablesCSVs_Parms, ChallengeEntries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::NewProp_ChallengeEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::NewProp_ChallengeEntries_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::NewProp_StatEntries_Inner = { "StatEntries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStatLocalizationEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::NewProp_StatEntries_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::NewProp_StatEntries = { "StatEntries", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengesLocalizationLibrary_eventWriteEntriesToStringTablesCSVs_Parms, StatEntries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::NewProp_StatEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::NewProp_StatEntries_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::NewProp_OutputCSVPathChallenges_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::NewProp_OutputCSVPathChallenges = { "OutputCSVPathChallenges", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengesLocalizationLibrary_eventWriteEntriesToStringTablesCSVs_Parms, OutputCSVPathChallenges), METADATA_PARAMS(Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::NewProp_OutputCSVPathChallenges_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::NewProp_OutputCSVPathChallenges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::NewProp_OutputCSVPathChallengeStats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::NewProp_OutputCSVPathChallengeStats = { "OutputCSVPathChallengeStats", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengesLocalizationLibrary_eventWriteEntriesToStringTablesCSVs_Parms, OutputCSVPathChallengeStats), METADATA_PARAMS(Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::NewProp_OutputCSVPathChallengeStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::NewProp_OutputCSVPathChallengeStats_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::NewProp_ChallengeEntries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::NewProp_ChallengeEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::NewProp_StatEntries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::NewProp_StatEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::NewProp_OutputCSVPathChallenges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::NewProp_OutputCSVPathChallengeStats,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChallengesLocalizationLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChallengesLocalizationLibrary, nullptr, "WriteEntriesToStringTablesCSVs", nullptr, nullptr, sizeof(SBZChallengesLocalizationLibrary_eventWriteEntriesToStringTablesCSVs_Parms), Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZChallengesLocalizationLibrary_NoRegister()
	{
		return USBZChallengesLocalizationLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZChallengesLocalizationLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZChallengesLocalizationLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZChallengesLocalizationLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZChallengesLocalizationLibrary_ExtractEntriesFromSpreadsheetCSVs, "ExtractEntriesFromSpreadsheetCSVs" }, // 2804380927
		{ &Z_Construct_UFunction_USBZChallengesLocalizationLibrary_WriteEntriesToStringTablesCSVs, "WriteEntriesToStringTablesCSVs" }, // 232590781
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChallengesLocalizationLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZChallengesLocalizationLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZChallengesLocalizationLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZChallengesLocalizationLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZChallengesLocalizationLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZChallengesLocalizationLibrary_Statics::ClassParams = {
		&USBZChallengesLocalizationLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZChallengesLocalizationLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengesLocalizationLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZChallengesLocalizationLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZChallengesLocalizationLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZChallengesLocalizationLibrary, 700664478);
	template<> STARBREEZE_API UClass* StaticClass<USBZChallengesLocalizationLibrary>()
	{
		return USBZChallengesLocalizationLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZChallengesLocalizationLibrary(Z_Construct_UClass_USBZChallengesLocalizationLibrary, &USBZChallengesLocalizationLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZChallengesLocalizationLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZChallengesLocalizationLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

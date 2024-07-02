// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gridly/Public/DownloadLocalizedTextsDelegateDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDownloadLocalizedTextsDelegateDelegate() {}
// Cross Module References
	GRIDLY_API UFunction* Z_Construct_UDelegateFunction_Gridly_DownloadLocalizedTextsDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Gridly();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPolyglotTextData();
	GRIDLY_API UScriptStruct* Z_Construct_UScriptStruct_FGridlyResult();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Gridly_DownloadLocalizedTextsDelegate__DelegateSignature_Statics
	{
		struct FPolyglotTextData
		{
			ELocalizedTextSourceCategory Category;
			FString NativeCulture;
			FString Namespace;
			FString Key;
			FString NativeString;
			TMap<FString,FString> LocalizedStrings;
			bool bIsMinimalPatch;
			FText CachedText;
		};

		struct _Script_Gridly_eventDownloadLocalizedTextsDelegate_Parms
		{
			TArray<FPolyglotTextData> PolyglotTextDatas;
			float Progress;
			FGridlyResult Error;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolyglotTextDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolyglotTextDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PolyglotTextDatas;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Error;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Gridly_DownloadLocalizedTextsDelegate__DelegateSignature_Statics::NewProp_PolyglotTextDatas_Inner = { "PolyglotTextDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolyglotTextData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Gridly_DownloadLocalizedTextsDelegate__DelegateSignature_Statics::NewProp_PolyglotTextDatas_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Gridly_DownloadLocalizedTextsDelegate__DelegateSignature_Statics::NewProp_PolyglotTextDatas = { "PolyglotTextDatas", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Gridly_eventDownloadLocalizedTextsDelegate_Parms, PolyglotTextDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_Gridly_DownloadLocalizedTextsDelegate__DelegateSignature_Statics::NewProp_PolyglotTextDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Gridly_DownloadLocalizedTextsDelegate__DelegateSignature_Statics::NewProp_PolyglotTextDatas_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Gridly_DownloadLocalizedTextsDelegate__DelegateSignature_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Gridly_eventDownloadLocalizedTextsDelegate_Parms, Progress), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Gridly_DownloadLocalizedTextsDelegate__DelegateSignature_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Gridly_DownloadLocalizedTextsDelegate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Gridly_eventDownloadLocalizedTextsDelegate_Parms, Error), Z_Construct_UScriptStruct_FGridlyResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_Gridly_DownloadLocalizedTextsDelegate__DelegateSignature_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Gridly_DownloadLocalizedTextsDelegate__DelegateSignature_Statics::NewProp_Error_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Gridly_DownloadLocalizedTextsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Gridly_DownloadLocalizedTextsDelegate__DelegateSignature_Statics::NewProp_PolyglotTextDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Gridly_DownloadLocalizedTextsDelegate__DelegateSignature_Statics::NewProp_PolyglotTextDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Gridly_DownloadLocalizedTextsDelegate__DelegateSignature_Statics::NewProp_Progress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Gridly_DownloadLocalizedTextsDelegate__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Gridly_DownloadLocalizedTextsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DownloadLocalizedTextsDelegateDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Gridly_DownloadLocalizedTextsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Gridly, nullptr, "DownloadLocalizedTextsDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Gridly_eventDownloadLocalizedTextsDelegate_Parms), Z_Construct_UDelegateFunction_Gridly_DownloadLocalizedTextsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Gridly_DownloadLocalizedTextsDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Gridly_DownloadLocalizedTextsDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Gridly_DownloadLocalizedTextsDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Gridly_DownloadLocalizedTextsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Gridly_DownloadLocalizedTextsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

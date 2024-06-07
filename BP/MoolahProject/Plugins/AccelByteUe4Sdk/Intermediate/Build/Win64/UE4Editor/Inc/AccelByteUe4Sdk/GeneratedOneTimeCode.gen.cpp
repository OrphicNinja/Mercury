// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/GeneratedOneTimeCode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratedOneTimeCode() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FGeneratedOneTimeCode();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FGeneratedOneTimeCode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeneratedOneTimeCode, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("GeneratedOneTimeCode"), sizeof(FGeneratedOneTimeCode), Get_Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FGeneratedOneTimeCode>()
{
	return FGeneratedOneTimeCode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGeneratedOneTimeCode(FGeneratedOneTimeCode::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("GeneratedOneTimeCode"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFGeneratedOneTimeCode
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFGeneratedOneTimeCode()
	{
		UScriptStruct::DeferCppStructOps<FGeneratedOneTimeCode>(FName(TEXT("GeneratedOneTimeCode")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFGeneratedOneTimeCode;
	struct Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneTimeLinkCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OneTimeLinkCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneTimeLinkURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OneTimeLinkURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Exp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeneratedOneTimeCode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeneratedOneTimeCode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Statics::NewProp_OneTimeLinkCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GeneratedOneTimeCode" },
		{ "ModuleRelativePath", "Public/GeneratedOneTimeCode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Statics::NewProp_OneTimeLinkCode = { "OneTimeLinkCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedOneTimeCode, OneTimeLinkCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Statics::NewProp_OneTimeLinkCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Statics::NewProp_OneTimeLinkCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Statics::NewProp_OneTimeLinkURL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GeneratedOneTimeCode" },
		{ "ModuleRelativePath", "Public/GeneratedOneTimeCode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Statics::NewProp_OneTimeLinkURL = { "OneTimeLinkURL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedOneTimeCode, OneTimeLinkURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Statics::NewProp_OneTimeLinkURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Statics::NewProp_OneTimeLinkURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Statics::NewProp_Exp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GeneratedOneTimeCode" },
		{ "ModuleRelativePath", "Public/GeneratedOneTimeCode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Statics::NewProp_Exp = { "Exp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedOneTimeCode, Exp), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Statics::NewProp_Exp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Statics::NewProp_Exp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Statics::NewProp_OneTimeLinkCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Statics::NewProp_OneTimeLinkURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Statics::NewProp_Exp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"GeneratedOneTimeCode",
		sizeof(FGeneratedOneTimeCode),
		alignof(FGeneratedOneTimeCode),
		Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeneratedOneTimeCode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GeneratedOneTimeCode"), sizeof(FGeneratedOneTimeCode), Get_Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGeneratedOneTimeCode_Hash() { return 934139584U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccountLinkConflictErrorJson.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccountLinkConflictErrorJson() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables();
// End Cross Module References
class UScriptStruct* FAccountLinkConflictErrorJson::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccountLinkConflictErrorJson"), sizeof(FAccountLinkConflictErrorJson), Get_Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccountLinkConflictErrorJson>()
{
	return FAccountLinkConflictErrorJson::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccountLinkConflictErrorJson(FAccountLinkConflictErrorJson::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccountLinkConflictErrorJson"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccountLinkConflictErrorJson
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccountLinkConflictErrorJson()
	{
		UScriptStruct::DeferCppStructOps<FAccountLinkConflictErrorJson>(FName(TEXT("AccountLinkConflictErrorJson")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccountLinkConflictErrorJson;
	struct Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageVariables_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MessageVariables;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccountLinkConflictErrorJson.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccountLinkConflictErrorJson>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Statics::NewProp_ErrorCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccountLinkConflictErrorJson" },
		{ "ModuleRelativePath", "Public/AccountLinkConflictErrorJson.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccountLinkConflictErrorJson, ErrorCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Statics::NewProp_ErrorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Statics::NewProp_ErrorCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccountLinkConflictErrorJson" },
		{ "ModuleRelativePath", "Public/AccountLinkConflictErrorJson.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccountLinkConflictErrorJson, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Statics::NewProp_MessageVariables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccountLinkConflictErrorJson" },
		{ "ModuleRelativePath", "Public/AccountLinkConflictErrorJson.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Statics::NewProp_MessageVariables = { "MessageVariables", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccountLinkConflictErrorJson, MessageVariables), Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Statics::NewProp_MessageVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Statics::NewProp_MessageVariables_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Statics::NewProp_MessageVariables,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccountLinkConflictErrorJson",
		sizeof(FAccountLinkConflictErrorJson),
		alignof(FAccountLinkConflictErrorJson),
		Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccountLinkConflictErrorJson"), sizeof(FAccountLinkConflictErrorJson), Get_Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccountLinkConflictErrorJson_Hash() { return 2648244139U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ErrorCreateMatchmakingTicketV2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeErrorCreateMatchmakingTicketV2() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2CreateTicketErrorDetails();
// End Cross Module References
class UScriptStruct* FErrorCreateMatchmakingTicketV2::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("ErrorCreateMatchmakingTicketV2"), sizeof(FErrorCreateMatchmakingTicketV2), Get_Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FErrorCreateMatchmakingTicketV2>()
{
	return FErrorCreateMatchmakingTicketV2::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FErrorCreateMatchmakingTicketV2(FErrorCreateMatchmakingTicketV2::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("ErrorCreateMatchmakingTicketV2"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFErrorCreateMatchmakingTicketV2
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFErrorCreateMatchmakingTicketV2()
	{
		UScriptStruct::DeferCppStructOps<FErrorCreateMatchmakingTicketV2>(FName(TEXT("ErrorCreateMatchmakingTicketV2")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFErrorCreateMatchmakingTicketV2;
	struct Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExistingTicketID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExistingTicketID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageVariables_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MessageVariables;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ErrorCreateMatchmakingTicketV2.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FErrorCreateMatchmakingTicketV2>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::NewProp_ErrorCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ErrorCreateMatchmakingTicketV2" },
		{ "ModuleRelativePath", "Public/ErrorCreateMatchmakingTicketV2.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrorCreateMatchmakingTicketV2, ErrorCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::NewProp_ErrorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::NewProp_ErrorCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ErrorCreateMatchmakingTicketV2" },
		{ "ModuleRelativePath", "Public/ErrorCreateMatchmakingTicketV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrorCreateMatchmakingTicketV2, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::NewProp_ExistingTicketID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ErrorCreateMatchmakingTicketV2" },
		{ "ModuleRelativePath", "Public/ErrorCreateMatchmakingTicketV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::NewProp_ExistingTicketID = { "ExistingTicketID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrorCreateMatchmakingTicketV2, ExistingTicketID), METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::NewProp_ExistingTicketID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::NewProp_ExistingTicketID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::NewProp_MessageVariables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ErrorCreateMatchmakingTicketV2" },
		{ "ModuleRelativePath", "Public/ErrorCreateMatchmakingTicketV2.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::NewProp_MessageVariables = { "MessageVariables", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrorCreateMatchmakingTicketV2, MessageVariables), Z_Construct_UScriptStruct_FAccelByteModelsV2CreateTicketErrorDetails, METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::NewProp_MessageVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::NewProp_MessageVariables_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::NewProp_ExistingTicketID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::NewProp_MessageVariables,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"ErrorCreateMatchmakingTicketV2",
		sizeof(FErrorCreateMatchmakingTicketV2),
		alignof(FErrorCreateMatchmakingTicketV2),
		Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ErrorCreateMatchmakingTicketV2"), sizeof(FErrorCreateMatchmakingTicketV2), Get_Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FErrorCreateMatchmakingTicketV2_Hash() { return 2454675177U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

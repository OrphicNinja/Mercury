// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ErrorOAuthInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeErrorOAuthInfo() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FErrorOAuthInfo();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FUserBan();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
// End Cross Module References
class UScriptStruct* FErrorOAuthInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FErrorOAuthInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FErrorOAuthInfo, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("ErrorOAuthInfo"), sizeof(FErrorOAuthInfo), Get_Z_Construct_UScriptStruct_FErrorOAuthInfo_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FErrorOAuthInfo>()
{
	return FErrorOAuthInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FErrorOAuthInfo(FErrorOAuthInfo::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("ErrorOAuthInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFErrorOAuthInfo
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFErrorOAuthInfo()
	{
		UScriptStruct::DeferCppStructOps<FErrorOAuthInfo>(FName(TEXT("ErrorOAuthInfo")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFErrorOAuthInfo;
	struct Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Error;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Error_description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_uri_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Error_uri;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mfa_token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Mfa_token;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Factors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Factors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Factors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_factor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Default_factor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkingToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LinkingToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserBan_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserBan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageVariables_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MessageVariables;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ErrorOAuthInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FErrorOAuthInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_ErrorCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ErrorOAuthInfo" },
		{ "ModuleRelativePath", "Public/ErrorOAuthInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrorOAuthInfo, ErrorCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_ErrorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_ErrorCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ErrorOAuthInfo" },
		{ "ModuleRelativePath", "Public/ErrorOAuthInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrorOAuthInfo, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Error_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ErrorOAuthInfo" },
		{ "ModuleRelativePath", "Public/ErrorOAuthInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrorOAuthInfo, Error), METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Error_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Error_description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ErrorOAuthInfo" },
		{ "ModuleRelativePath", "Public/ErrorOAuthInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Error_description = { "Error_description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrorOAuthInfo, Error_description), METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Error_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Error_description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Error_uri_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ErrorOAuthInfo" },
		{ "ModuleRelativePath", "Public/ErrorOAuthInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Error_uri = { "Error_uri", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrorOAuthInfo, Error_uri), METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Error_uri_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Error_uri_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Mfa_token_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ErrorOAuthInfo" },
		{ "ModuleRelativePath", "Public/ErrorOAuthInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Mfa_token = { "Mfa_token", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrorOAuthInfo, Mfa_token), METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Mfa_token_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Mfa_token_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Factors_Inner = { "Factors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Factors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ErrorOAuthInfo" },
		{ "ModuleRelativePath", "Public/ErrorOAuthInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Factors = { "Factors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrorOAuthInfo, Factors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Factors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Factors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Default_factor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ErrorOAuthInfo" },
		{ "ModuleRelativePath", "Public/ErrorOAuthInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Default_factor = { "Default_factor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrorOAuthInfo, Default_factor), METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Default_factor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Default_factor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Email_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ErrorOAuthInfo" },
		{ "ModuleRelativePath", "Public/ErrorOAuthInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrorOAuthInfo, Email), METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_PlatformId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ErrorOAuthInfo" },
		{ "ModuleRelativePath", "Public/ErrorOAuthInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_PlatformId = { "PlatformId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrorOAuthInfo, PlatformId), METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_PlatformId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_PlatformId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_LinkingToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ErrorOAuthInfo" },
		{ "ModuleRelativePath", "Public/ErrorOAuthInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_LinkingToken = { "LinkingToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrorOAuthInfo, LinkingToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_LinkingToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_LinkingToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_ClientId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ErrorOAuthInfo" },
		{ "ModuleRelativePath", "Public/ErrorOAuthInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrorOAuthInfo, ClientId), METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_ClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_ClientId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_UserBan_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ErrorOAuthInfo" },
		{ "ModuleRelativePath", "Public/ErrorOAuthInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_UserBan = { "UserBan", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrorOAuthInfo, UserBan), Z_Construct_UScriptStruct_FUserBan, METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_UserBan_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_UserBan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_MessageVariables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ErrorOAuthInfo" },
		{ "ModuleRelativePath", "Public/ErrorOAuthInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_MessageVariables = { "MessageVariables", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrorOAuthInfo, MessageVariables), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_MessageVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_MessageVariables_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Error_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Error_uri,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Mfa_token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Factors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Factors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Default_factor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_PlatformId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_LinkingToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_ClientId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_UserBan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::NewProp_MessageVariables,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"ErrorOAuthInfo",
		sizeof(FErrorOAuthInfo),
		alignof(FErrorOAuthInfo),
		Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FErrorOAuthInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FErrorOAuthInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ErrorOAuthInfo"), sizeof(FErrorOAuthInfo), Get_Z_Construct_UScriptStruct_FErrorOAuthInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FErrorOAuthInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FErrorOAuthInfo_Hash() { return 501853993U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/BanUserResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBanUserResponse() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FBanUserResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FBannedBy();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EBanReason();
// End Cross Module References
class UScriptStruct* FBanUserResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FBanUserResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBanUserResponse, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("BanUserResponse"), sizeof(FBanUserResponse), Get_Z_Construct_UScriptStruct_FBanUserResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FBanUserResponse>()
{
	return FBanUserResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBanUserResponse(FBanUserResponse::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("BanUserResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFBanUserResponse
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFBanUserResponse()
	{
		UScriptStruct::DeferCppStructOps<FBanUserResponse>(FName(TEXT("BanUserResponse")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFBanUserResponse;
	struct Z_Construct_UScriptStruct_FBanUserResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ban_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ban;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BanId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BanId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BannedBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BannedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Comment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CreatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisableDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EndDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Reason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBanUserResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BanUserResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBanUserResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Ban_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BanUserResponse" },
		{ "ModuleRelativePath", "Public/BanUserResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Ban = { "Ban", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBanUserResponse, Ban), METADATA_PARAMS(Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Ban_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Ban_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_BanId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BanUserResponse" },
		{ "ModuleRelativePath", "Public/BanUserResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_BanId = { "BanId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBanUserResponse, BanId), METADATA_PARAMS(Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_BanId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_BanId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_BannedBy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BanUserResponse" },
		{ "ModuleRelativePath", "Public/BanUserResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_BannedBy = { "BannedBy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBanUserResponse, BannedBy), Z_Construct_UScriptStruct_FBannedBy, METADATA_PARAMS(Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_BannedBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_BannedBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Comment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BanUserResponse" },
		{ "ModuleRelativePath", "Public/BanUserResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBanUserResponse, Comment), METADATA_PARAMS(Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Comment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BanUserResponse" },
		{ "ModuleRelativePath", "Public/BanUserResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBanUserResponse, CreatedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_CreatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_DisableDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BanUserResponse" },
		{ "ModuleRelativePath", "Public/BanUserResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_DisableDate = { "DisableDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBanUserResponse, DisableDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_DisableDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_DisableDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Enabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BanUserResponse" },
		{ "ModuleRelativePath", "Public/BanUserResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((FBanUserResponse*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBanUserResponse), &Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Enabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_EndDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BanUserResponse" },
		{ "ModuleRelativePath", "Public/BanUserResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBanUserResponse, EndDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_EndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_EndDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BanUserResponse" },
		{ "ModuleRelativePath", "Public/BanUserResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBanUserResponse, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Namespace_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Reason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BanUserResponse" },
		{ "ModuleRelativePath", "Public/BanUserResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBanUserResponse, Reason), Z_Construct_UEnum_AccelByteUe4Sdk_EBanReason, METADATA_PARAMS(Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Reason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BanUserResponse" },
		{ "ModuleRelativePath", "Public/BanUserResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBanUserResponse, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBanUserResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Ban,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_BanId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_BannedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Comment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_CreatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_DisableDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Enabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_EndDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Reason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_Reason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBanUserResponse_Statics::NewProp_UserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBanUserResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"BanUserResponse",
		sizeof(FBanUserResponse),
		alignof(FBanUserResponse),
		Z_Construct_UScriptStruct_FBanUserResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBanUserResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBanUserResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBanUserResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBanUserResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBanUserResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BanUserResponse"), sizeof(FBanUserResponse), Get_Z_Construct_UScriptStruct_FBanUserResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBanUserResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBanUserResponse_Hash() { return 3224989661U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/RegisterResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRegisterResponse() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FRegisterResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FRegisterResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FRegisterResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRegisterResponse, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("RegisterResponse"), sizeof(FRegisterResponse), Get_Z_Construct_UScriptStruct_FRegisterResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FRegisterResponse>()
{
	return FRegisterResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRegisterResponse(FRegisterResponse::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("RegisterResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFRegisterResponse
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFRegisterResponse()
	{
		UScriptStruct::DeferCppStructOps<FRegisterResponse>(FName(TEXT("RegisterResponse")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFRegisterResponse;
	struct Z_Construct_UScriptStruct_FRegisterResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuthType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmailAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EmailAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Country_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Country;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DateOfBirth_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DateOfBirth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisterResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RegisterResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRegisterResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RegisterResponse" },
		{ "ModuleRelativePath", "Public/RegisterResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRegisterResponse, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RegisterResponse" },
		{ "ModuleRelativePath", "Public/RegisterResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRegisterResponse, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_AuthType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RegisterResponse" },
		{ "ModuleRelativePath", "Public/RegisterResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_AuthType = { "AuthType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRegisterResponse, AuthType), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_AuthType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_AuthType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RegisterResponse" },
		{ "ModuleRelativePath", "Public/RegisterResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRegisterResponse, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_EmailAddress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RegisterResponse" },
		{ "ModuleRelativePath", "Public/RegisterResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_EmailAddress = { "EmailAddress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRegisterResponse, EmailAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_EmailAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_EmailAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_Country_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RegisterResponse" },
		{ "ModuleRelativePath", "Public/RegisterResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_Country = { "Country", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRegisterResponse, Country), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_Country_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_Country_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_DateOfBirth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RegisterResponse" },
		{ "ModuleRelativePath", "Public/RegisterResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_DateOfBirth = { "DateOfBirth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRegisterResponse, DateOfBirth), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_DateOfBirth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_DateOfBirth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_Username_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RegisterResponse" },
		{ "ModuleRelativePath", "Public/RegisterResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRegisterResponse, Username), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_Username_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRegisterResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_AuthType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_EmailAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_Country,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_DateOfBirth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisterResponse_Statics::NewProp_Username,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRegisterResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"RegisterResponse",
		sizeof(FRegisterResponse),
		alignof(FRegisterResponse),
		Z_Construct_UScriptStruct_FRegisterResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisterResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisterResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisterResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRegisterResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRegisterResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RegisterResponse"), sizeof(FRegisterResponse), Get_Z_Construct_UScriptStruct_FRegisterResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRegisterResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRegisterResponse_Hash() { return 1588852217U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

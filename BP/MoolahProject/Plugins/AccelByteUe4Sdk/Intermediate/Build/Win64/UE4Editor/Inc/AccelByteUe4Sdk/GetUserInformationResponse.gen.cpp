// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/GetUserInformationResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetUserInformationResponse() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FGetUserInformationResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformUserInformation();
// End Cross Module References
class UScriptStruct* FGetUserInformationResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FGetUserInformationResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetUserInformationResponse, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("GetUserInformationResponse"), sizeof(FGetUserInformationResponse), Get_Z_Construct_UScriptStruct_FGetUserInformationResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FGetUserInformationResponse>()
{
	return FGetUserInformationResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGetUserInformationResponse(FGetUserInformationResponse::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("GetUserInformationResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFGetUserInformationResponse
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFGetUserInformationResponse()
	{
		UScriptStruct::DeferCppStructOps<FGetUserInformationResponse>(FName(TEXT("GetUserInformationResponse")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFGetUserInformationResponse;
	struct Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Country_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Country;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EmailAddresses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmailAddresses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EmailAddresses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhoneNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PhoneNumber;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlatformUsers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformUsers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlatformUsers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XboxUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_XboxUserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GetUserInformationResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetUserInformationResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_Country_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetUserInformationResponse" },
		{ "ModuleRelativePath", "Public/GetUserInformationResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_Country = { "Country", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetUserInformationResponse, Country), METADATA_PARAMS(Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_Country_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_Country_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetUserInformationResponse" },
		{ "ModuleRelativePath", "Public/GetUserInformationResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetUserInformationResponse, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_EmailAddresses_Inner = { "EmailAddresses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_EmailAddresses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetUserInformationResponse" },
		{ "ModuleRelativePath", "Public/GetUserInformationResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_EmailAddresses = { "EmailAddresses", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetUserInformationResponse, EmailAddresses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_EmailAddresses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_EmailAddresses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_PhoneNumber_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetUserInformationResponse" },
		{ "ModuleRelativePath", "Public/GetUserInformationResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_PhoneNumber = { "PhoneNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetUserInformationResponse, PhoneNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_PhoneNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_PhoneNumber_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_PlatformUsers_Inner = { "PlatformUsers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlatformUserInformation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_PlatformUsers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetUserInformationResponse" },
		{ "ModuleRelativePath", "Public/GetUserInformationResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_PlatformUsers = { "PlatformUsers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetUserInformationResponse, PlatformUsers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_PlatformUsers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_PlatformUsers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_Username_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetUserInformationResponse" },
		{ "ModuleRelativePath", "Public/GetUserInformationResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetUserInformationResponse, Username), METADATA_PARAMS(Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_XboxUserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetUserInformationResponse" },
		{ "ModuleRelativePath", "Public/GetUserInformationResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_XboxUserId = { "XboxUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetUserInformationResponse, XboxUserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_XboxUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_XboxUserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_Country,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_EmailAddresses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_EmailAddresses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_PhoneNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_PlatformUsers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_PlatformUsers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::NewProp_XboxUserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"GetUserInformationResponse",
		sizeof(FGetUserInformationResponse),
		alignof(FGetUserInformationResponse),
		Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGetUserInformationResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGetUserInformationResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GetUserInformationResponse"), sizeof(FGetUserInformationResponse), Get_Z_Construct_UScriptStruct_FGetUserInformationResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGetUserInformationResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGetUserInformationResponse_Hash() { return 367870766U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

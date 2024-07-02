// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/UpgradeAndVerifyRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpgradeAndVerifyRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FUpgradeAndVerifyRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("UpgradeAndVerifyRequest"), sizeof(FUpgradeAndVerifyRequest), Get_Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FUpgradeAndVerifyRequest>()
{
	return FUpgradeAndVerifyRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUpgradeAndVerifyRequest(FUpgradeAndVerifyRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UpgradeAndVerifyRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFUpgradeAndVerifyRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFUpgradeAndVerifyRequest()
	{
		UScriptStruct::DeferCppStructOps<FUpgradeAndVerifyRequest>(FName(TEXT("UpgradeAndVerifyRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFUpgradeAndVerifyRequest;
	struct Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Code;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Country_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Country;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DateOfBirth_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DateOfBirth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmailAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EmailAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReachMinimumAge_MetaData[];
#endif
		static void NewProp_ReachMinimumAge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReachMinimumAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidateOnly_MetaData[];
#endif
		static void NewProp_ValidateOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ValidateOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UpgradeAndVerifyRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpgradeAndVerifyRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_Code_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UpgradeAndVerifyRequest" },
		{ "ModuleRelativePath", "Public/UpgradeAndVerifyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpgradeAndVerifyRequest, Code), METADATA_PARAMS(Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_Code_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_Country_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UpgradeAndVerifyRequest" },
		{ "ModuleRelativePath", "Public/UpgradeAndVerifyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_Country = { "Country", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpgradeAndVerifyRequest, Country), METADATA_PARAMS(Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_Country_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_Country_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_DateOfBirth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UpgradeAndVerifyRequest" },
		{ "ModuleRelativePath", "Public/UpgradeAndVerifyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_DateOfBirth = { "DateOfBirth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpgradeAndVerifyRequest, DateOfBirth), METADATA_PARAMS(Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_DateOfBirth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_DateOfBirth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UpgradeAndVerifyRequest" },
		{ "ModuleRelativePath", "Public/UpgradeAndVerifyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpgradeAndVerifyRequest, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_EmailAddress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UpgradeAndVerifyRequest" },
		{ "ModuleRelativePath", "Public/UpgradeAndVerifyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_EmailAddress = { "EmailAddress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpgradeAndVerifyRequest, EmailAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_EmailAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_EmailAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_Password_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UpgradeAndVerifyRequest" },
		{ "ModuleRelativePath", "Public/UpgradeAndVerifyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpgradeAndVerifyRequest, Password), METADATA_PARAMS(Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_ReachMinimumAge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UpgradeAndVerifyRequest" },
		{ "ModuleRelativePath", "Public/UpgradeAndVerifyRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_ReachMinimumAge_SetBit(void* Obj)
	{
		((FUpgradeAndVerifyRequest*)Obj)->ReachMinimumAge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_ReachMinimumAge = { "ReachMinimumAge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUpgradeAndVerifyRequest), &Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_ReachMinimumAge_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_ReachMinimumAge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_ReachMinimumAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_Username_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UpgradeAndVerifyRequest" },
		{ "ModuleRelativePath", "Public/UpgradeAndVerifyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpgradeAndVerifyRequest, Username), METADATA_PARAMS(Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_ValidateOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UpgradeAndVerifyRequest" },
		{ "ModuleRelativePath", "Public/UpgradeAndVerifyRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_ValidateOnly_SetBit(void* Obj)
	{
		((FUpgradeAndVerifyRequest*)Obj)->ValidateOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_ValidateOnly = { "ValidateOnly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUpgradeAndVerifyRequest), &Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_ValidateOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_ValidateOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_ValidateOnly_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_Code,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_Country,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_DateOfBirth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_EmailAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_ReachMinimumAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::NewProp_ValidateOnly,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"UpgradeAndVerifyRequest",
		sizeof(FUpgradeAndVerifyRequest),
		alignof(FUpgradeAndVerifyRequest),
		Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UpgradeAndVerifyRequest"), sizeof(FUpgradeAndVerifyRequest), Get_Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUpgradeAndVerifyRequest_Hash() { return 3991102771U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

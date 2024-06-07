// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ThirdPartyPlatformTokenData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPartyPlatformTokenData() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FThirdPartyPlatformTokenData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("ThirdPartyPlatformTokenData"), sizeof(FThirdPartyPlatformTokenData), Get_Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FThirdPartyPlatformTokenData>()
{
	return FThirdPartyPlatformTokenData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FThirdPartyPlatformTokenData(FThirdPartyPlatformTokenData::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("ThirdPartyPlatformTokenData"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFThirdPartyPlatformTokenData
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFThirdPartyPlatformTokenData()
	{
		UScriptStruct::DeferCppStructOps<FThirdPartyPlatformTokenData>(FName(TEXT("ThirdPartyPlatformTokenData")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFThirdPartyPlatformTokenData;
	struct Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Platform_token;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_token_expires_at_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Platform_token_expires_at;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sand_box_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Sand_box_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ThirdPartyPlatformTokenData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FThirdPartyPlatformTokenData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Statics::NewProp_Platform_token_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPartyPlatformTokenData" },
		{ "ModuleRelativePath", "Public/ThirdPartyPlatformTokenData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Statics::NewProp_Platform_token = { "Platform_token", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FThirdPartyPlatformTokenData, Platform_token), METADATA_PARAMS(Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Statics::NewProp_Platform_token_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Statics::NewProp_Platform_token_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Statics::NewProp_Platform_token_expires_at_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPartyPlatformTokenData" },
		{ "ModuleRelativePath", "Public/ThirdPartyPlatformTokenData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Statics::NewProp_Platform_token_expires_at = { "Platform_token_expires_at", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FThirdPartyPlatformTokenData, Platform_token_expires_at), METADATA_PARAMS(Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Statics::NewProp_Platform_token_expires_at_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Statics::NewProp_Platform_token_expires_at_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Statics::NewProp_Sand_box_id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThirdPartyPlatformTokenData" },
		{ "ModuleRelativePath", "Public/ThirdPartyPlatformTokenData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Statics::NewProp_Sand_box_id = { "Sand_box_id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FThirdPartyPlatformTokenData, Sand_box_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Statics::NewProp_Sand_box_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Statics::NewProp_Sand_box_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Statics::NewProp_Platform_token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Statics::NewProp_Platform_token_expires_at,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Statics::NewProp_Sand_box_id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"ThirdPartyPlatformTokenData",
		sizeof(FThirdPartyPlatformTokenData),
		alignof(FThirdPartyPlatformTokenData),
		Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ThirdPartyPlatformTokenData"), sizeof(FThirdPartyPlatformTokenData), Get_Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FThirdPartyPlatformTokenData_Hash() { return 1597307510U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

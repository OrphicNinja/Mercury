// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/RefreshInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRefreshInfo() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FRefreshInfo();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FRefreshInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FRefreshInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRefreshInfo, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("RefreshInfo"), sizeof(FRefreshInfo), Get_Z_Construct_UScriptStruct_FRefreshInfo_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FRefreshInfo>()
{
	return FRefreshInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRefreshInfo(FRefreshInfo::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("RefreshInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFRefreshInfo
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFRefreshInfo()
	{
		UScriptStruct::DeferCppStructOps<FRefreshInfo>(FName(TEXT("RefreshInfo")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFRefreshInfo;
	struct Z_Construct_UScriptStruct_FRefreshInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RefreshToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expiration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Expiration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRefreshInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RefreshInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRefreshInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRefreshInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRefreshInfo_Statics::NewProp_RefreshToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RefreshInfo" },
		{ "ModuleRelativePath", "Public/RefreshInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRefreshInfo_Statics::NewProp_RefreshToken = { "RefreshToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRefreshInfo, RefreshToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FRefreshInfo_Statics::NewProp_RefreshToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRefreshInfo_Statics::NewProp_RefreshToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRefreshInfo_Statics::NewProp_Expiration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RefreshInfo" },
		{ "ModuleRelativePath", "Public/RefreshInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRefreshInfo_Statics::NewProp_Expiration = { "Expiration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRefreshInfo, Expiration), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FRefreshInfo_Statics::NewProp_Expiration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRefreshInfo_Statics::NewProp_Expiration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRefreshInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRefreshInfo_Statics::NewProp_RefreshToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRefreshInfo_Statics::NewProp_Expiration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRefreshInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"RefreshInfo",
		sizeof(FRefreshInfo),
		alignof(FRefreshInfo),
		Z_Construct_UScriptStruct_FRefreshInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRefreshInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRefreshInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRefreshInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRefreshInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRefreshInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RefreshInfo"), sizeof(FRefreshInfo), Get_Z_Construct_UScriptStruct_FRefreshInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRefreshInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRefreshInfo_Hash() { return 2768172394U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

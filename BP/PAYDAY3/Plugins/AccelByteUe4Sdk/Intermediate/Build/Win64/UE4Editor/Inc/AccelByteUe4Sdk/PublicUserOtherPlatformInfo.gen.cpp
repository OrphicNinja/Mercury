// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/PublicUserOtherPlatformInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePublicUserOtherPlatformInfo() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FPublicUserOtherPlatformInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("PublicUserOtherPlatformInfo"), sizeof(FPublicUserOtherPlatformInfo), Get_Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FPublicUserOtherPlatformInfo>()
{
	return FPublicUserOtherPlatformInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPublicUserOtherPlatformInfo(FPublicUserOtherPlatformInfo::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("PublicUserOtherPlatformInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFPublicUserOtherPlatformInfo
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFPublicUserOtherPlatformInfo()
	{
		UScriptStruct::DeferCppStructOps<FPublicUserOtherPlatformInfo>(FName(TEXT("PublicUserOtherPlatformInfo")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFPublicUserOtherPlatformInfo;
	struct Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PublicUserOtherPlatformInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPublicUserOtherPlatformInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PublicUserOtherPlatformInfo" },
		{ "ModuleRelativePath", "Public/PublicUserOtherPlatformInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPublicUserOtherPlatformInfo, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PublicUserOtherPlatformInfo" },
		{ "ModuleRelativePath", "Public/PublicUserOtherPlatformInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPublicUserOtherPlatformInfo, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_PlatformDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PublicUserOtherPlatformInfo" },
		{ "ModuleRelativePath", "Public/PublicUserOtherPlatformInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_PlatformDisplayName = { "PlatformDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPublicUserOtherPlatformInfo, PlatformDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_PlatformDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_PlatformDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_PlatformId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PublicUserOtherPlatformInfo" },
		{ "ModuleRelativePath", "Public/PublicUserOtherPlatformInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_PlatformId = { "PlatformId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPublicUserOtherPlatformInfo, PlatformId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_PlatformId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_PlatformId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_PlatformUserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PublicUserOtherPlatformInfo" },
		{ "ModuleRelativePath", "Public/PublicUserOtherPlatformInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_PlatformUserId = { "PlatformUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPublicUserOtherPlatformInfo, PlatformUserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_PlatformUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_PlatformUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PublicUserOtherPlatformInfo" },
		{ "ModuleRelativePath", "Public/PublicUserOtherPlatformInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPublicUserOtherPlatformInfo, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_UserName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PublicUserOtherPlatformInfo" },
		{ "ModuleRelativePath", "Public/PublicUserOtherPlatformInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPublicUserOtherPlatformInfo, UserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_UserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_UserName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_PlatformDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_PlatformId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_PlatformUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::NewProp_UserName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"PublicUserOtherPlatformInfo",
		sizeof(FPublicUserOtherPlatformInfo),
		alignof(FPublicUserOtherPlatformInfo),
		Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PublicUserOtherPlatformInfo"), sizeof(FPublicUserOtherPlatformInfo), Get_Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPublicUserOtherPlatformInfo_Hash() { return 1965833955U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

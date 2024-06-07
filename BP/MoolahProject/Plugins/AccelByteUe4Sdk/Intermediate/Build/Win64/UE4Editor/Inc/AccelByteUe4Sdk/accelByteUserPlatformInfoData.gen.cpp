// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/accelByteUserPlatformInfoData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeaccelByteUserPlatformInfoData() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserPlatformInfo();
// End Cross Module References
class UScriptStruct* FaccelByteUserPlatformInfoData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("accelByteUserPlatformInfoData"), sizeof(FaccelByteUserPlatformInfoData), Get_Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FaccelByteUserPlatformInfoData>()
{
	return FaccelByteUserPlatformInfoData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FaccelByteUserPlatformInfoData(FaccelByteUserPlatformInfoData::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("accelByteUserPlatformInfoData"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFaccelByteUserPlatformInfoData
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFaccelByteUserPlatformInfoData()
	{
		UScriptStruct::DeferCppStructOps<FaccelByteUserPlatformInfoData>(FName(TEXT("accelByteUserPlatformInfoData")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFaccelByteUserPlatformInfoData;
	struct Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_displayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_displayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_avatarUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_avatarUrl;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_platformInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_platformInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_platformInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/accelByteUserPlatformInfoData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FaccelByteUserPlatformInfoData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_userId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "accelByteUserPlatformInfoData" },
		{ "ModuleRelativePath", "Public/accelByteUserPlatformInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_userId = { "userId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FaccelByteUserPlatformInfoData, userId), METADATA_PARAMS(Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_userId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_userId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_displayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "accelByteUserPlatformInfoData" },
		{ "ModuleRelativePath", "Public/accelByteUserPlatformInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_displayName = { "displayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FaccelByteUserPlatformInfoData, displayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_displayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_displayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_username_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "accelByteUserPlatformInfoData" },
		{ "ModuleRelativePath", "Public/accelByteUserPlatformInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_username = { "username", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FaccelByteUserPlatformInfoData, username), METADATA_PARAMS(Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_username_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_avatarUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "accelByteUserPlatformInfoData" },
		{ "ModuleRelativePath", "Public/accelByteUserPlatformInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_avatarUrl = { "avatarUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FaccelByteUserPlatformInfoData, avatarUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_avatarUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_avatarUrl_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_platformInfos_Inner = { "platformInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsUserPlatformInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_platformInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "accelByteUserPlatformInfoData" },
		{ "ModuleRelativePath", "Public/accelByteUserPlatformInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_platformInfos = { "platformInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FaccelByteUserPlatformInfoData, platformInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_platformInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_platformInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_userId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_displayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_avatarUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_platformInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::NewProp_platformInfos,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"accelByteUserPlatformInfoData",
		sizeof(FaccelByteUserPlatformInfoData),
		alignof(FaccelByteUserPlatformInfoData),
		Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("accelByteUserPlatformInfoData"), sizeof(FaccelByteUserPlatformInfoData), Get_Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData_Hash() { return 3729714350U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

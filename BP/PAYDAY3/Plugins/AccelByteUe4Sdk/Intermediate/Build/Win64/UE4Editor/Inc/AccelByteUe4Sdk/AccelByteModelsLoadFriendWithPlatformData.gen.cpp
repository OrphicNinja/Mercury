// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsLoadFriendWithPlatformData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsLoadFriendWithPlatformData() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsLobbyBaseResponse();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserPlatformInfo();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsLoadFriendWithPlatformData>() == std::is_polymorphic<FAccelByteModelsLobbyBaseResponse>(), "USTRUCT FAccelByteModelsLoadFriendWithPlatformData cannot be polymorphic unless super FAccelByteModelsLobbyBaseResponse is polymorphic");

class UScriptStruct* FAccelByteModelsLoadFriendWithPlatformData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsLoadFriendWithPlatformData"), sizeof(FAccelByteModelsLoadFriendWithPlatformData), Get_Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsLoadFriendWithPlatformData>()
{
	return FAccelByteModelsLoadFriendWithPlatformData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData(FAccelByteModelsLoadFriendWithPlatformData::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsLoadFriendWithPlatformData"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsLoadFriendWithPlatformData
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsLoadFriendWithPlatformData()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsLoadFriendWithPlatformData>(FName(TEXT("AccelByteModelsLoadFriendWithPlatformData")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsLoadFriendWithPlatformData;
	struct Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_platformInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_platformInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_platformInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLoadFriendWithPlatformData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsLoadFriendWithPlatformData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::NewProp_userId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLoadFriendWithPlatformData" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLoadFriendWithPlatformData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::NewProp_userId = { "userId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLoadFriendWithPlatformData, userId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::NewProp_userId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::NewProp_userId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::NewProp_displayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLoadFriendWithPlatformData" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLoadFriendWithPlatformData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::NewProp_displayName = { "displayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLoadFriendWithPlatformData, displayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::NewProp_displayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::NewProp_displayName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::NewProp_platformInfos_Inner = { "platformInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsUserPlatformInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::NewProp_platformInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLoadFriendWithPlatformData" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLoadFriendWithPlatformData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::NewProp_platformInfos = { "platformInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLoadFriendWithPlatformData, platformInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::NewProp_platformInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::NewProp_platformInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::NewProp_userId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::NewProp_displayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::NewProp_platformInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::NewProp_platformInfos,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsLobbyBaseResponse,
		&NewStructOps,
		"AccelByteModelsLoadFriendWithPlatformData",
		sizeof(FAccelByteModelsLoadFriendWithPlatformData),
		alignof(FAccelByteModelsLoadFriendWithPlatformData),
		Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsLoadFriendWithPlatformData"), sizeof(FAccelByteModelsLoadFriendWithPlatformData), Get_Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsLoadFriendWithPlatformData_Hash() { return 1718653525U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

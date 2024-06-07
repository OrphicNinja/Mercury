// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/BaseUserInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseUserInfo() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FBaseUserInfo();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FBaseUserInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FBaseUserInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseUserInfo, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("BaseUserInfo"), sizeof(FBaseUserInfo), Get_Z_Construct_UScriptStruct_FBaseUserInfo_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FBaseUserInfo>()
{
	return FBaseUserInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBaseUserInfo(FBaseUserInfo::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("BaseUserInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFBaseUserInfo
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFBaseUserInfo()
	{
		UScriptStruct::DeferCppStructOps<FBaseUserInfo>(FName(TEXT("BaseUserInfo")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFBaseUserInfo;
	struct Z_Construct_UScriptStruct_FBaseUserInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvatarUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AvatarUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformUserIds_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformUserIds_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformUserIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PlatformUserIds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublisherAvatarUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PublisherAvatarUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseUserInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BaseUserInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseUserInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_AvatarUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseUserInfo" },
		{ "ModuleRelativePath", "Public/BaseUserInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_AvatarUrl = { "AvatarUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseUserInfo, AvatarUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_AvatarUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_AvatarUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseUserInfo" },
		{ "ModuleRelativePath", "Public/BaseUserInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseUserInfo, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_PlatformUserIds_ValueProp = { "PlatformUserIds", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_PlatformUserIds_Key_KeyProp = { "PlatformUserIds_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_PlatformUserIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseUserInfo" },
		{ "ModuleRelativePath", "Public/BaseUserInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_PlatformUserIds = { "PlatformUserIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseUserInfo, PlatformUserIds), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_PlatformUserIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_PlatformUserIds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseUserInfo" },
		{ "ModuleRelativePath", "Public/BaseUserInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseUserInfo, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_PublisherAvatarUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseUserInfo" },
		{ "ModuleRelativePath", "Public/BaseUserInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_PublisherAvatarUrl = { "PublisherAvatarUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseUserInfo, PublisherAvatarUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_PublisherAvatarUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_PublisherAvatarUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_Username_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseUserInfo" },
		{ "ModuleRelativePath", "Public/BaseUserInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseUserInfo, Username), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_Username_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseUserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_AvatarUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_PlatformUserIds_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_PlatformUserIds_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_PlatformUserIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_PublisherAvatarUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseUserInfo_Statics::NewProp_Username,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseUserInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"BaseUserInfo",
		sizeof(FBaseUserInfo),
		alignof(FBaseUserInfo),
		Z_Construct_UScriptStruct_FBaseUserInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseUserInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseUserInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseUserInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBaseUserInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBaseUserInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BaseUserInfo"), sizeof(FBaseUserInfo), Get_Z_Construct_UScriptStruct_FBaseUserInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBaseUserInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBaseUserInfo_Hash() { return 3012670259U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

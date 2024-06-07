// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsSyncThirdPartyFriendInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsSyncThirdPartyFriendInfo() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsSyncThirdPartyFriendInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsSyncThirdPartyFriendInfo"), sizeof(FAccelByteModelsSyncThirdPartyFriendInfo), Get_Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsSyncThirdPartyFriendInfo>()
{
	return FAccelByteModelsSyncThirdPartyFriendInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo(FAccelByteModelsSyncThirdPartyFriendInfo::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsSyncThirdPartyFriendInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSyncThirdPartyFriendInfo
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSyncThirdPartyFriendInfo()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsSyncThirdPartyFriendInfo>(FName(TEXT("AccelByteModelsSyncThirdPartyFriendInfo")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSyncThirdPartyFriendInfo;
	struct Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLogin_MetaData[];
#endif
		static void NewProp_IsLogin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLogin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PsnEnv_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PsnEnv;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSyncThirdPartyFriendInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsSyncThirdPartyFriendInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::NewProp_IsLogin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSyncThirdPartyFriendInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSyncThirdPartyFriendInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::NewProp_IsLogin_SetBit(void* Obj)
	{
		((FAccelByteModelsSyncThirdPartyFriendInfo*)Obj)->IsLogin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::NewProp_IsLogin = { "IsLogin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsSyncThirdPartyFriendInfo), &Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::NewProp_IsLogin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::NewProp_IsLogin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::NewProp_IsLogin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::NewProp_PlatformId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSyncThirdPartyFriendInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSyncThirdPartyFriendInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::NewProp_PlatformId = { "PlatformId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSyncThirdPartyFriendInfo, PlatformId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::NewProp_PlatformId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::NewProp_PlatformId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::NewProp_PlatformToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSyncThirdPartyFriendInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSyncThirdPartyFriendInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::NewProp_PlatformToken = { "PlatformToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSyncThirdPartyFriendInfo, PlatformToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::NewProp_PlatformToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::NewProp_PlatformToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::NewProp_PsnEnv_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSyncThirdPartyFriendInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSyncThirdPartyFriendInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::NewProp_PsnEnv = { "PsnEnv", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSyncThirdPartyFriendInfo, PsnEnv), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::NewProp_PsnEnv_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::NewProp_PsnEnv_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::NewProp_IsLogin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::NewProp_PlatformId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::NewProp_PlatformToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::NewProp_PsnEnv,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsSyncThirdPartyFriendInfo",
		sizeof(FAccelByteModelsSyncThirdPartyFriendInfo),
		alignof(FAccelByteModelsSyncThirdPartyFriendInfo),
		Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsSyncThirdPartyFriendInfo"), sizeof(FAccelByteModelsSyncThirdPartyFriendInfo), Get_Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendInfo_Hash() { return 4103066516U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

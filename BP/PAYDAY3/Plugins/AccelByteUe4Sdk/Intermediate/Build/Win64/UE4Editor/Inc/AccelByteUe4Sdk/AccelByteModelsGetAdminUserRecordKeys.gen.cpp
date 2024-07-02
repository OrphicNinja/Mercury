// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsGetAdminUserRecordKeys.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsGetAdminUserRecordKeys() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsGetAdminUserRecordKeys::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsGetAdminUserRecordKeys"), sizeof(FAccelByteModelsGetAdminUserRecordKeys), Get_Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsGetAdminUserRecordKeys>()
{
	return FAccelByteModelsGetAdminUserRecordKeys::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys(FAccelByteModelsGetAdminUserRecordKeys::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsGetAdminUserRecordKeys"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGetAdminUserRecordKeys
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGetAdminUserRecordKeys()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsGetAdminUserRecordKeys>(FName(TEXT("AccelByteModelsGetAdminUserRecordKeys")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGetAdminUserRecordKeys;
	struct Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_User_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_User_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGetAdminUserRecordKeys.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsGetAdminUserRecordKeys>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys_Statics::NewProp_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGetAdminUserRecordKeys" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGetAdminUserRecordKeys.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGetAdminUserRecordKeys, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys_Statics::NewProp_User_Id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGetAdminUserRecordKeys" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGetAdminUserRecordKeys.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys_Statics::NewProp_User_Id = { "User_Id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGetAdminUserRecordKeys, User_Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys_Statics::NewProp_User_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys_Statics::NewProp_User_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys_Statics::NewProp_User_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsGetAdminUserRecordKeys",
		sizeof(FAccelByteModelsGetAdminUserRecordKeys),
		alignof(FAccelByteModelsGetAdminUserRecordKeys),
		Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsGetAdminUserRecordKeys"), sizeof(FAccelByteModelsGetAdminUserRecordKeys), Get_Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGetAdminUserRecordKeys_Hash() { return 3538524834U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

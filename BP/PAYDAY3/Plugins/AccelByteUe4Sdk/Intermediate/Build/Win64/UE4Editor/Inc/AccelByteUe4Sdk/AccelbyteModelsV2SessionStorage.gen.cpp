// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelbyteModelsV2SessionStorage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelbyteModelsV2SessionStorage() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
// End Cross Module References
class UScriptStruct* FAccelbyteModelsV2SessionStorage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelbyteModelsV2SessionStorage"), sizeof(FAccelbyteModelsV2SessionStorage), Get_Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelbyteModelsV2SessionStorage>()
{
	return FAccelbyteModelsV2SessionStorage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelbyteModelsV2SessionStorage(FAccelbyteModelsV2SessionStorage::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelbyteModelsV2SessionStorage"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelbyteModelsV2SessionStorage
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelbyteModelsV2SessionStorage()
	{
		UScriptStruct::DeferCppStructOps<FAccelbyteModelsV2SessionStorage>(FName(TEXT("AccelbyteModelsV2SessionStorage")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelbyteModelsV2SessionStorage;
	struct Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Leader_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Leader;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Member_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Member_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Member_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Member;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelbyteModelsV2SessionStorage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelbyteModelsV2SessionStorage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Statics::NewProp_Leader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelbyteModelsV2SessionStorage" },
		{ "ModuleRelativePath", "Public/AccelbyteModelsV2SessionStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Statics::NewProp_Leader = { "Leader", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelbyteModelsV2SessionStorage, Leader), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Statics::NewProp_Leader_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Statics::NewProp_Leader_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Statics::NewProp_Member_ValueProp = { "Member", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Statics::NewProp_Member_Key_KeyProp = { "Member_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Statics::NewProp_Member_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelbyteModelsV2SessionStorage" },
		{ "ModuleRelativePath", "Public/AccelbyteModelsV2SessionStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Statics::NewProp_Member = { "Member", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelbyteModelsV2SessionStorage, Member), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Statics::NewProp_Member_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Statics::NewProp_Member_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Statics::NewProp_Leader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Statics::NewProp_Member_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Statics::NewProp_Member_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Statics::NewProp_Member,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelbyteModelsV2SessionStorage",
		sizeof(FAccelbyteModelsV2SessionStorage),
		alignof(FAccelbyteModelsV2SessionStorage),
		Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelbyteModelsV2SessionStorage"), sizeof(FAccelbyteModelsV2SessionStorage), Get_Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelbyteModelsV2SessionStorage_Hash() { return 425937278U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsDistributionReceiver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsDistributionReceiver() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsAttributes();
// End Cross Module References
class UScriptStruct* FAccelByteModelsDistributionReceiver::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsDistributionReceiver"), sizeof(FAccelByteModelsDistributionReceiver), Get_Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsDistributionReceiver>()
{
	return FAccelByteModelsDistributionReceiver::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsDistributionReceiver(FAccelByteModelsDistributionReceiver::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsDistributionReceiver"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsDistributionReceiver
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsDistributionReceiver()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsDistributionReceiver>(FName(TEXT("AccelByteModelsDistributionReceiver")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsDistributionReceiver;
	struct Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attributes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDistributionReceiver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsDistributionReceiver>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDistributionReceiver" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDistributionReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDistributionReceiver, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDistributionReceiver" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDistributionReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDistributionReceiver, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::NewProp_ExtUserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDistributionReceiver" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDistributionReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::NewProp_ExtUserId = { "ExtUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDistributionReceiver, ExtUserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::NewProp_ExtUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::NewProp_ExtUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::NewProp_Attributes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDistributionReceiver" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDistributionReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDistributionReceiver, Attributes), Z_Construct_UScriptStruct_FAccelByteModelsAttributes, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::NewProp_Attributes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::NewProp_ExtUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::NewProp_Attributes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsDistributionReceiver",
		sizeof(FAccelByteModelsDistributionReceiver),
		alignof(FAccelByteModelsDistributionReceiver),
		Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsDistributionReceiver"), sizeof(FAccelByteModelsDistributionReceiver), Get_Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsDistributionReceiver_Hash() { return 3361339162U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

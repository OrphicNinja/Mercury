// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsBulkUserStatusNotif.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsBulkUserStatusNotif() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif();
// End Cross Module References
class UScriptStruct* FAccelByteModelsBulkUserStatusNotif::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsBulkUserStatusNotif"), sizeof(FAccelByteModelsBulkUserStatusNotif), Get_Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsBulkUserStatusNotif>()
{
	return FAccelByteModelsBulkUserStatusNotif::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif(FAccelByteModelsBulkUserStatusNotif::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsBulkUserStatusNotif"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsBulkUserStatusNotif
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsBulkUserStatusNotif()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsBulkUserStatusNotif>(FName(TEXT("AccelByteModelsBulkUserStatusNotif")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsBulkUserStatusNotif;
	struct Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Online_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Online;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Busy_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Busy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Invisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offline_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Away_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Away;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NotProcessed_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotProcessed_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NotProcessed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsBulkUserStatusNotif.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsBulkUserStatusNotif>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsUserStatusNotif, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsBulkUserStatusNotif" },
		{ "ModuleRelativePath", "Public/AccelByteModelsBulkUserStatusNotif.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsBulkUserStatusNotif, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Online_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsBulkUserStatusNotif" },
		{ "ModuleRelativePath", "Public/AccelByteModelsBulkUserStatusNotif.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Online = { "Online", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsBulkUserStatusNotif, Online), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Online_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Online_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Busy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsBulkUserStatusNotif" },
		{ "ModuleRelativePath", "Public/AccelByteModelsBulkUserStatusNotif.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Busy = { "Busy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsBulkUserStatusNotif, Busy), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Busy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Busy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Invisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsBulkUserStatusNotif" },
		{ "ModuleRelativePath", "Public/AccelByteModelsBulkUserStatusNotif.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Invisible = { "Invisible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsBulkUserStatusNotif, Invisible), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Invisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Invisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Offline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsBulkUserStatusNotif" },
		{ "ModuleRelativePath", "Public/AccelByteModelsBulkUserStatusNotif.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Offline = { "Offline", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsBulkUserStatusNotif, Offline), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Offline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Offline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Away_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsBulkUserStatusNotif" },
		{ "ModuleRelativePath", "Public/AccelByteModelsBulkUserStatusNotif.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Away = { "Away", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsBulkUserStatusNotif, Away), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Away_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Away_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_NotProcessed_Inner = { "NotProcessed", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_NotProcessed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsBulkUserStatusNotif" },
		{ "ModuleRelativePath", "Public/AccelByteModelsBulkUserStatusNotif.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_NotProcessed = { "NotProcessed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsBulkUserStatusNotif, NotProcessed), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_NotProcessed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_NotProcessed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Online,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Busy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Invisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Offline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_Away,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_NotProcessed_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::NewProp_NotProcessed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsBulkUserStatusNotif",
		sizeof(FAccelByteModelsBulkUserStatusNotif),
		alignof(FAccelByteModelsBulkUserStatusNotif),
		Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsBulkUserStatusNotif"), sizeof(FAccelByteModelsBulkUserStatusNotif), Get_Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatusNotif_Hash() { return 258844478U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

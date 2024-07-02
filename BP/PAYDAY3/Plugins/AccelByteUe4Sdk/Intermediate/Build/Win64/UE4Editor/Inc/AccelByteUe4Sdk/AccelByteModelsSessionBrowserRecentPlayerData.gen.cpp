// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsSessionBrowserRecentPlayerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsSessionBrowserRecentPlayerData() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsSessionBrowserRecentPlayerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsSessionBrowserRecentPlayerData"), sizeof(FAccelByteModelsSessionBrowserRecentPlayerData), Get_Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsSessionBrowserRecentPlayerData>()
{
	return FAccelByteModelsSessionBrowserRecentPlayerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData(FAccelByteModelsSessionBrowserRecentPlayerData::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsSessionBrowserRecentPlayerData"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSessionBrowserRecentPlayerData
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSessionBrowserRecentPlayerData()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsSessionBrowserRecentPlayerData>(FName(TEXT("AccelByteModelsSessionBrowserRecentPlayerData")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSessionBrowserRecentPlayerData;
	struct Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Other_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Other_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Other_display_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Other_display_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSessionBrowserRecentPlayerData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsSessionBrowserRecentPlayerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData_Statics::NewProp_Other_id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSessionBrowserRecentPlayerData" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSessionBrowserRecentPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData_Statics::NewProp_Other_id = { "Other_id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSessionBrowserRecentPlayerData, Other_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData_Statics::NewProp_Other_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData_Statics::NewProp_Other_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData_Statics::NewProp_Other_display_name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSessionBrowserRecentPlayerData" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSessionBrowserRecentPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData_Statics::NewProp_Other_display_name = { "Other_display_name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSessionBrowserRecentPlayerData, Other_display_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData_Statics::NewProp_Other_display_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData_Statics::NewProp_Other_display_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData_Statics::NewProp_Other_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData_Statics::NewProp_Other_display_name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsSessionBrowserRecentPlayerData",
		sizeof(FAccelByteModelsSessionBrowserRecentPlayerData),
		alignof(FAccelByteModelsSessionBrowserRecentPlayerData),
		Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsSessionBrowserRecentPlayerData"), sizeof(FAccelByteModelsSessionBrowserRecentPlayerData), Get_Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserRecentPlayerData_Hash() { return 222633830U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

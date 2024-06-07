// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelBytePresenceBroadcastEventPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelBytePresenceBroadcastEventPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
// End Cross Module References
class UScriptStruct* FAccelBytePresenceBroadcastEventPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelBytePresenceBroadcastEventPayload"), sizeof(FAccelBytePresenceBroadcastEventPayload), Get_Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelBytePresenceBroadcastEventPayload>()
{
	return FAccelBytePresenceBroadcastEventPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload(FAccelBytePresenceBroadcastEventPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelBytePresenceBroadcastEventPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelBytePresenceBroadcastEventPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelBytePresenceBroadcastEventPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelBytePresenceBroadcastEventPayload>(FName(TEXT("AccelBytePresenceBroadcastEventPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelBytePresenceBroadcastEventPayload;
	struct Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flight_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Flight_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Platform_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Game_state_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Game_state;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Game_context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Game_context;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Additional_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Additional_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelBytePresenceBroadcastEventPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelBytePresenceBroadcastEventPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewProp_Flight_id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelBytePresenceBroadcastEventPayload" },
		{ "ModuleRelativePath", "Public/AccelBytePresenceBroadcastEventPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewProp_Flight_id = { "Flight_id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelBytePresenceBroadcastEventPayload, Flight_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewProp_Flight_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewProp_Flight_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewProp_Platform_name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelBytePresenceBroadcastEventPayload" },
		{ "ModuleRelativePath", "Public/AccelBytePresenceBroadcastEventPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewProp_Platform_name = { "Platform_name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelBytePresenceBroadcastEventPayload, Platform_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewProp_Platform_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewProp_Platform_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewProp_Game_state_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelBytePresenceBroadcastEventPayload" },
		{ "ModuleRelativePath", "Public/AccelBytePresenceBroadcastEventPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewProp_Game_state = { "Game_state", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelBytePresenceBroadcastEventPayload, Game_state), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewProp_Game_state_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewProp_Game_state_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewProp_Game_context_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelBytePresenceBroadcastEventPayload" },
		{ "ModuleRelativePath", "Public/AccelBytePresenceBroadcastEventPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewProp_Game_context = { "Game_context", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelBytePresenceBroadcastEventPayload, Game_context), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewProp_Game_context_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewProp_Game_context_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewProp_Additional_data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelBytePresenceBroadcastEventPayload" },
		{ "ModuleRelativePath", "Public/AccelBytePresenceBroadcastEventPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewProp_Additional_data = { "Additional_data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelBytePresenceBroadcastEventPayload, Additional_data), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewProp_Additional_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewProp_Additional_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewProp_Flight_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewProp_Platform_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewProp_Game_state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewProp_Game_context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::NewProp_Additional_data,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelBytePresenceBroadcastEventPayload",
		sizeof(FAccelBytePresenceBroadcastEventPayload),
		alignof(FAccelBytePresenceBroadcastEventPayload),
		Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelBytePresenceBroadcastEventPayload"), sizeof(FAccelBytePresenceBroadcastEventPayload), Get_Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelBytePresenceBroadcastEventPayload_Hash() { return 2393679253U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

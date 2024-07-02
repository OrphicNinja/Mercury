// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsLobbyDisconnectedPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsLobbyDisconnectedPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsLobbyDisconnectedPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsLobbyConnectedPayload();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsLobbyDisconnectedPayload>() == std::is_polymorphic<FAccelByteModelsLobbyConnectedPayload>(), "USTRUCT FAccelByteModelsLobbyDisconnectedPayload cannot be polymorphic unless super FAccelByteModelsLobbyConnectedPayload is polymorphic");

class UScriptStruct* FAccelByteModelsLobbyDisconnectedPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsLobbyDisconnectedPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsLobbyDisconnectedPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsLobbyDisconnectedPayload"), sizeof(FAccelByteModelsLobbyDisconnectedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsLobbyDisconnectedPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsLobbyDisconnectedPayload>()
{
	return FAccelByteModelsLobbyDisconnectedPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsLobbyDisconnectedPayload(FAccelByteModelsLobbyDisconnectedPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsLobbyDisconnectedPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsLobbyDisconnectedPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsLobbyDisconnectedPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsLobbyDisconnectedPayload>(FName(TEXT("AccelByteModelsLobbyDisconnectedPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsLobbyDisconnectedPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsLobbyDisconnectedPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StatusCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLobbyDisconnectedPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLobbyDisconnectedPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsLobbyDisconnectedPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsLobbyDisconnectedPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLobbyDisconnectedPayload_Statics::NewProp_StatusCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLobbyDisconnectedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLobbyDisconnectedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLobbyDisconnectedPayload_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLobbyDisconnectedPayload, StatusCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLobbyDisconnectedPayload_Statics::NewProp_StatusCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLobbyDisconnectedPayload_Statics::NewProp_StatusCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsLobbyDisconnectedPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLobbyDisconnectedPayload_Statics::NewProp_StatusCode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsLobbyDisconnectedPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsLobbyConnectedPayload,
		&NewStructOps,
		"AccelByteModelsLobbyDisconnectedPayload",
		sizeof(FAccelByteModelsLobbyDisconnectedPayload),
		alignof(FAccelByteModelsLobbyDisconnectedPayload),
		Z_Construct_UScriptStruct_FAccelByteModelsLobbyDisconnectedPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLobbyDisconnectedPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLobbyDisconnectedPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLobbyDisconnectedPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsLobbyDisconnectedPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsLobbyDisconnectedPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsLobbyDisconnectedPayload"), sizeof(FAccelByteModelsLobbyDisconnectedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsLobbyDisconnectedPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsLobbyDisconnectedPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsLobbyDisconnectedPayload_Hash() { return 3079902666U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsMPV2GameSessionCreatedPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsMPV2GameSessionCreatedPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsMPV2GameSessionCreatedPayload>() == std::is_polymorphic<FAccelByteModelsPredefinedEvent>(), "USTRUCT FAccelByteModelsMPV2GameSessionCreatedPayload cannot be polymorphic unless super FAccelByteModelsPredefinedEvent is polymorphic");

class UScriptStruct* FAccelByteModelsMPV2GameSessionCreatedPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsMPV2GameSessionCreatedPayload"), sizeof(FAccelByteModelsMPV2GameSessionCreatedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsMPV2GameSessionCreatedPayload>()
{
	return FAccelByteModelsMPV2GameSessionCreatedPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload(FAccelByteModelsMPV2GameSessionCreatedPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsMPV2GameSessionCreatedPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV2GameSessionCreatedPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV2GameSessionCreatedPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsMPV2GameSessionCreatedPayload>(FName(TEXT("AccelByteModelsMPV2GameSessionCreatedPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV2GameSessionCreatedPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameSessionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMPV2GameSessionCreatedPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsMPV2GameSessionCreatedPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMPV2GameSessionCreatedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMPV2GameSessionCreatedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMPV2GameSessionCreatedPayload, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload_Statics::NewProp_GameSessionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMPV2GameSessionCreatedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMPV2GameSessionCreatedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload_Statics::NewProp_GameSessionId = { "GameSessionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMPV2GameSessionCreatedPayload, GameSessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload_Statics::NewProp_GameSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload_Statics::NewProp_GameSessionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload_Statics::NewProp_GameSessionId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent,
		&NewStructOps,
		"AccelByteModelsMPV2GameSessionCreatedPayload",
		sizeof(FAccelByteModelsMPV2GameSessionCreatedPayload),
		alignof(FAccelByteModelsMPV2GameSessionCreatedPayload),
		Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsMPV2GameSessionCreatedPayload"), sizeof(FAccelByteModelsMPV2GameSessionCreatedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionCreatedPayload_Hash() { return 506514853U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

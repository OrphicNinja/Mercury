// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsMPV1MatchmakingCanceledPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsMPV1MatchmakingCanceledPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsMPV1MatchmakingCanceledPayload>() == std::is_polymorphic<FAccelByteModelsPredefinedEvent>(), "USTRUCT FAccelByteModelsMPV1MatchmakingCanceledPayload cannot be polymorphic unless super FAccelByteModelsPredefinedEvent is polymorphic");

class UScriptStruct* FAccelByteModelsMPV1MatchmakingCanceledPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsMPV1MatchmakingCanceledPayload"), sizeof(FAccelByteModelsMPV1MatchmakingCanceledPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsMPV1MatchmakingCanceledPayload>()
{
	return FAccelByteModelsMPV1MatchmakingCanceledPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload(FAccelByteModelsMPV1MatchmakingCanceledPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsMPV1MatchmakingCanceledPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV1MatchmakingCanceledPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV1MatchmakingCanceledPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsMPV1MatchmakingCanceledPayload>(FName(TEXT("AccelByteModelsMPV1MatchmakingCanceledPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV1MatchmakingCanceledPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsTempParty_MetaData[];
#endif
		static void NewProp_IsTempParty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTempParty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMPV1MatchmakingCanceledPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsMPV1MatchmakingCanceledPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMPV1MatchmakingCanceledPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMPV1MatchmakingCanceledPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMPV1MatchmakingCanceledPayload, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::NewProp_GameMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMPV1MatchmakingCanceledPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMPV1MatchmakingCanceledPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMPV1MatchmakingCanceledPayload, GameMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::NewProp_GameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::NewProp_IsTempParty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMPV1MatchmakingCanceledPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMPV1MatchmakingCanceledPayload.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::NewProp_IsTempParty_SetBit(void* Obj)
	{
		((FAccelByteModelsMPV1MatchmakingCanceledPayload*)Obj)->IsTempParty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::NewProp_IsTempParty = { "IsTempParty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsMPV1MatchmakingCanceledPayload), &Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::NewProp_IsTempParty_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::NewProp_IsTempParty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::NewProp_IsTempParty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::NewProp_IsTempParty,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent,
		&NewStructOps,
		"AccelByteModelsMPV1MatchmakingCanceledPayload",
		sizeof(FAccelByteModelsMPV1MatchmakingCanceledPayload),
		alignof(FAccelByteModelsMPV1MatchmakingCanceledPayload),
		Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsMPV1MatchmakingCanceledPayload"), sizeof(FAccelByteModelsMPV1MatchmakingCanceledPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingCanceledPayload_Hash() { return 2404379926U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

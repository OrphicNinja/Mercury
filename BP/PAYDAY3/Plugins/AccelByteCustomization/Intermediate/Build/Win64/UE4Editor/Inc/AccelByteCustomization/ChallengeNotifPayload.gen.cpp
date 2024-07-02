// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/ChallengeNotifPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeNotifPayload() {}
// Cross Module References
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeNotifPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeReward();
// End Cross Module References
class UScriptStruct* FChallengeNotifPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTECUSTOMIZATION_API uint32 Get_Z_Construct_UScriptStruct_FChallengeNotifPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeNotifPayload, Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("ChallengeNotifPayload"), sizeof(FChallengeNotifPayload), Get_Z_Construct_UScriptStruct_FChallengeNotifPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FChallengeNotifPayload>()
{
	return FChallengeNotifPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChallengeNotifPayload(FChallengeNotifPayload::StaticStruct, TEXT("/Script/AccelByteCustomization"), TEXT("ChallengeNotifPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteCustomization_StaticRegisterNativesFChallengeNotifPayload
{
	FScriptStruct_AccelByteCustomization_StaticRegisterNativesFChallengeNotifPayload()
	{
		UScriptStruct::DeferCppStructOps<FChallengeNotifPayload>(FName(TEXT("ChallengeNotifPayload")));
	}
} ScriptStruct_AccelByteCustomization_StaticRegisterNativesFChallengeNotifPayload;
	struct Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_challengeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_challengeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_challengeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_challengeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_reward_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_reward;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeNotifPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeNotifPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::NewProp_challengeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeNotifPayload" },
		{ "ModuleRelativePath", "Public/ChallengeNotifPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::NewProp_challengeId = { "challengeId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeNotifPayload, challengeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::NewProp_challengeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::NewProp_challengeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::NewProp_challengeName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeNotifPayload" },
		{ "ModuleRelativePath", "Public/ChallengeNotifPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::NewProp_challengeName = { "challengeName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeNotifPayload, challengeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::NewProp_challengeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::NewProp_challengeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::NewProp_reward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeNotifPayload" },
		{ "ModuleRelativePath", "Public/ChallengeNotifPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::NewProp_reward = { "reward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeNotifPayload, reward), Z_Construct_UScriptStruct_FChallengeReward, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::NewProp_reward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::NewProp_reward_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::NewProp_challengeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::NewProp_challengeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::NewProp_reward,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
		nullptr,
		&NewStructOps,
		"ChallengeNotifPayload",
		sizeof(FChallengeNotifPayload),
		alignof(FChallengeNotifPayload),
		Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChallengeNotifPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChallengeNotifPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteCustomization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChallengeNotifPayload"), sizeof(FChallengeNotifPayload), Get_Z_Construct_UScriptStruct_FChallengeNotifPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChallengeNotifPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChallengeNotifPayload_Hash() { return 539112092U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

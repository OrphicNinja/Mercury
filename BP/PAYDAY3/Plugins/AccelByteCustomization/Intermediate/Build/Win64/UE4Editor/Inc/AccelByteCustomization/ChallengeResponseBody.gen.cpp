// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/ChallengeResponseBody.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeResponseBody() {}
// Cross Module References
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeResponseBody();
	UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeReward();
// End Cross Module References
class UScriptStruct* FChallengeResponseBody::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTECUSTOMIZATION_API uint32 Get_Z_Construct_UScriptStruct_FChallengeResponseBody_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeResponseBody, Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("ChallengeResponseBody"), sizeof(FChallengeResponseBody), Get_Z_Construct_UScriptStruct_FChallengeResponseBody_Hash());
	}
	return Singleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FChallengeResponseBody>()
{
	return FChallengeResponseBody::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChallengeResponseBody(FChallengeResponseBody::StaticStruct, TEXT("/Script/AccelByteCustomization"), TEXT("ChallengeResponseBody"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteCustomization_StaticRegisterNativesFChallengeResponseBody
{
	FScriptStruct_AccelByteCustomization_StaticRegisterNativesFChallengeResponseBody()
	{
		UScriptStruct::DeferCppStructOps<FChallengeResponseBody>(FName(TEXT("ChallengeResponseBody")));
	}
} ScriptStruct_AccelByteCustomization_StaticRegisterNativesFChallengeResponseBody;
	struct Z_Construct_UScriptStruct_FChallengeResponseBody_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeResponseBody.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeResponseBody>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::NewProp_challengeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/ChallengeResponseBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::NewProp_challengeId = { "challengeId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeResponseBody, challengeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::NewProp_challengeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::NewProp_challengeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::NewProp_challengeName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/ChallengeResponseBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::NewProp_challengeName = { "challengeName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeResponseBody, challengeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::NewProp_challengeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::NewProp_challengeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::NewProp_reward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeResponseBody" },
		{ "ModuleRelativePath", "Public/ChallengeResponseBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::NewProp_reward = { "reward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeResponseBody, reward), Z_Construct_UScriptStruct_FChallengeReward, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::NewProp_reward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::NewProp_reward_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::NewProp_challengeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::NewProp_challengeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::NewProp_reward,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
		nullptr,
		&NewStructOps,
		"ChallengeResponseBody",
		sizeof(FChallengeResponseBody),
		alignof(FChallengeResponseBody),
		Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChallengeResponseBody()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChallengeResponseBody_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteCustomization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChallengeResponseBody"), sizeof(FChallengeResponseBody), Get_Z_Construct_UScriptStruct_FChallengeResponseBody_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChallengeResponseBody_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChallengeResponseBody_Hash() { return 1095299326U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

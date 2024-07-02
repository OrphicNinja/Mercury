// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/ChallengeProgressStat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeProgressStat() {}
// Cross Module References
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressStat();
	UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References
class UScriptStruct* FChallengeProgressStat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTECUSTOMIZATION_API uint32 Get_Z_Construct_UScriptStruct_FChallengeProgressStat_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeProgressStat, Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("ChallengeProgressStat"), sizeof(FChallengeProgressStat), Get_Z_Construct_UScriptStruct_FChallengeProgressStat_Hash());
	}
	return Singleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FChallengeProgressStat>()
{
	return FChallengeProgressStat::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChallengeProgressStat(FChallengeProgressStat::StaticStruct, TEXT("/Script/AccelByteCustomization"), TEXT("ChallengeProgressStat"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteCustomization_StaticRegisterNativesFChallengeProgressStat
{
	FScriptStruct_AccelByteCustomization_StaticRegisterNativesFChallengeProgressStat()
	{
		UScriptStruct::DeferCppStructOps<FChallengeProgressStat>(FName(TEXT("ChallengeProgressStat")));
	}
} ScriptStruct_AccelByteCustomization_StaticRegisterNativesFChallengeProgressStat;
	struct Z_Construct_UScriptStruct_FChallengeProgressStat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeProgressStat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeProgressStat>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::NewProp_StatCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressStat" },
		{ "ModuleRelativePath", "Public/ChallengeProgressStat.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::NewProp_StatCode = { "StatCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeProgressStat, StatCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::NewProp_StatCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::NewProp_StatCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::NewProp_CurrentValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressStat" },
		{ "ModuleRelativePath", "Public/ChallengeProgressStat.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeProgressStat, CurrentValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::NewProp_CurrentValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::NewProp_CurrentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::NewProp_TargetValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressStat" },
		{ "ModuleRelativePath", "Public/ChallengeProgressStat.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::NewProp_TargetValue = { "TargetValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeProgressStat, TargetValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::NewProp_TargetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::NewProp_TargetValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::NewProp_StatCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::NewProp_CurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::NewProp_TargetValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
		nullptr,
		&NewStructOps,
		"ChallengeProgressStat",
		sizeof(FChallengeProgressStat),
		alignof(FChallengeProgressStat),
		Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressStat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChallengeProgressStat_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteCustomization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChallengeProgressStat"), sizeof(FChallengeProgressStat), Get_Z_Construct_UScriptStruct_FChallengeProgressStat_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChallengeProgressStat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChallengeProgressStat_Hash() { return 1731109852U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

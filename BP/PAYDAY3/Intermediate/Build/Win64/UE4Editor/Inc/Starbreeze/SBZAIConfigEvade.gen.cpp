// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIConfigEvade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIConfigEvade() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAIConfigEvade();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZAIConfigEvade::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAIConfigEvade_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAIConfigEvade, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAIConfigEvade"), sizeof(FSBZAIConfigEvade), Get_Z_Construct_UScriptStruct_FSBZAIConfigEvade_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAIConfigEvade>()
{
	return FSBZAIConfigEvade::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAIConfigEvade(FSBZAIConfigEvade::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAIConfigEvade"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAIConfigEvade
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAIConfigEvade()
	{
		UScriptStruct::DeferCppStructOps<FSBZAIConfigEvade>(FName(TEXT("SBZAIConfigEvade")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAIConfigEvade;
	struct Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTimeSinceUnderFireToEvade_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTimeSinceUnderFireToEvade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTimeAfterUnderFireToEvade_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTimeAfterUnderFireToEvade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FastEvadeCoolDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FastEvadeCoolDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlowEvadeCoolDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlowEvadeCoolDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFireDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFireDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSlowEvadeDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSlowEvadeDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFastEvadeDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFastEvadeDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngleToStopSlowEvade_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngleToStopSlowEvade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngleToStartSlowEvade_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngleToStartSlowEvade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMovingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxMovingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTimeSinceDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinTimeSinceDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAIConfigEvade.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAIConfigEvade>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MaxTimeSinceUnderFireToEvade_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfigEvade" },
		{ "ModuleRelativePath", "Public/SBZAIConfigEvade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MaxTimeSinceUnderFireToEvade = { "MaxTimeSinceUnderFireToEvade", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIConfigEvade, MaxTimeSinceUnderFireToEvade), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MaxTimeSinceUnderFireToEvade_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MaxTimeSinceUnderFireToEvade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MaxTimeAfterUnderFireToEvade_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfigEvade" },
		{ "ModuleRelativePath", "Public/SBZAIConfigEvade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MaxTimeAfterUnderFireToEvade = { "MaxTimeAfterUnderFireToEvade", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIConfigEvade, MaxTimeAfterUnderFireToEvade), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MaxTimeAfterUnderFireToEvade_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MaxTimeAfterUnderFireToEvade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_FastEvadeCoolDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfigEvade" },
		{ "ModuleRelativePath", "Public/SBZAIConfigEvade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_FastEvadeCoolDown = { "FastEvadeCoolDown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIConfigEvade, FastEvadeCoolDown), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_FastEvadeCoolDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_FastEvadeCoolDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_SlowEvadeCoolDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfigEvade" },
		{ "ModuleRelativePath", "Public/SBZAIConfigEvade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_SlowEvadeCoolDown = { "SlowEvadeCoolDown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIConfigEvade, SlowEvadeCoolDown), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_SlowEvadeCoolDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_SlowEvadeCoolDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MinFireDist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfigEvade" },
		{ "ModuleRelativePath", "Public/SBZAIConfigEvade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MinFireDist = { "MinFireDist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIConfigEvade, MinFireDist), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MinFireDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MinFireDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MinSlowEvadeDist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfigEvade" },
		{ "ModuleRelativePath", "Public/SBZAIConfigEvade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MinSlowEvadeDist = { "MinSlowEvadeDist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIConfigEvade, MinSlowEvadeDist), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MinSlowEvadeDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MinSlowEvadeDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MinFastEvadeDist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfigEvade" },
		{ "ModuleRelativePath", "Public/SBZAIConfigEvade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MinFastEvadeDist = { "MinFastEvadeDist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIConfigEvade, MinFastEvadeDist), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MinFastEvadeDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MinFastEvadeDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MaxAngleToStopSlowEvade_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfigEvade" },
		{ "ModuleRelativePath", "Public/SBZAIConfigEvade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MaxAngleToStopSlowEvade = { "MaxAngleToStopSlowEvade", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIConfigEvade, MaxAngleToStopSlowEvade), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MaxAngleToStopSlowEvade_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MaxAngleToStopSlowEvade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MaxAngleToStartSlowEvade_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfigEvade" },
		{ "ModuleRelativePath", "Public/SBZAIConfigEvade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MaxAngleToStartSlowEvade = { "MaxAngleToStartSlowEvade", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIConfigEvade, MaxAngleToStartSlowEvade), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MaxAngleToStartSlowEvade_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MaxAngleToStartSlowEvade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MaxMovingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfigEvade" },
		{ "ModuleRelativePath", "Public/SBZAIConfigEvade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MaxMovingSpeed = { "MaxMovingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIConfigEvade, MaxMovingSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MaxMovingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MaxMovingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MinTimeSinceDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfigEvade" },
		{ "ModuleRelativePath", "Public/SBZAIConfigEvade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MinTimeSinceDamage = { "MinTimeSinceDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIConfigEvade, MinTimeSinceDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MinTimeSinceDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MinTimeSinceDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MaxTimeSinceUnderFireToEvade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MaxTimeAfterUnderFireToEvade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_FastEvadeCoolDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_SlowEvadeCoolDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MinFireDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MinSlowEvadeDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MinFastEvadeDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MaxAngleToStopSlowEvade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MaxAngleToStartSlowEvade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MaxMovingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::NewProp_MinTimeSinceDamage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAIConfigEvade",
		sizeof(FSBZAIConfigEvade),
		alignof(FSBZAIConfigEvade),
		Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAIConfigEvade()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAIConfigEvade_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAIConfigEvade"), sizeof(FSBZAIConfigEvade), Get_Z_Construct_UScriptStruct_FSBZAIConfigEvade_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAIConfigEvade_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAIConfigEvade_Hash() { return 1472400547U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

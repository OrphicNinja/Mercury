// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGlobalMaterialParameters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGlobalMaterialParameters() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FSBZGlobalMaterialParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZGlobalMaterialParameters"), sizeof(FSBZGlobalMaterialParameters), Get_Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZGlobalMaterialParameters>()
{
	return FSBZGlobalMaterialParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZGlobalMaterialParameters(FSBZGlobalMaterialParameters::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZGlobalMaterialParameters"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGlobalMaterialParameters
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGlobalMaterialParameters()
	{
		UScriptStruct::DeferCppStructOps<FSBZGlobalMaterialParameters>(FName(TEXT("SBZGlobalMaterialParameters")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZGlobalMaterialParameters;
	struct Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WindDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionOriginActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionOriginActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FXGlobalEmissive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FXGlobalEmissive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FXGlobalBaseColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FXGlobalBaseColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyBacklightInfluence_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnemyBacklightInfluence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyBacklightFade_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnemyBacklightFade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyBacklightRangeFuzz_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnemyBacklightRangeFuzz;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZGlobalMaterialParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZGlobalMaterialParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_WindDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGlobalMaterialParameters" },
		{ "ModuleRelativePath", "Public/SBZGlobalMaterialParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_WindDirection = { "WindDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGlobalMaterialParameters, WindDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_WindDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_WindDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_WindSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGlobalMaterialParameters" },
		{ "ModuleRelativePath", "Public/SBZGlobalMaterialParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_WindSpeed = { "WindSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGlobalMaterialParameters, WindSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_WindSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_WindSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_ActionOriginActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGlobalMaterialParameters" },
		{ "ModuleRelativePath", "Public/SBZGlobalMaterialParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_ActionOriginActor = { "ActionOriginActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGlobalMaterialParameters, ActionOriginActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_ActionOriginActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_ActionOriginActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_FXGlobalEmissive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGlobalMaterialParameters" },
		{ "ModuleRelativePath", "Public/SBZGlobalMaterialParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_FXGlobalEmissive = { "FXGlobalEmissive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGlobalMaterialParameters, FXGlobalEmissive), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_FXGlobalEmissive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_FXGlobalEmissive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_FXGlobalBaseColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGlobalMaterialParameters" },
		{ "ModuleRelativePath", "Public/SBZGlobalMaterialParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_FXGlobalBaseColor = { "FXGlobalBaseColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGlobalMaterialParameters, FXGlobalBaseColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_FXGlobalBaseColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_FXGlobalBaseColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_EnemyBacklightInfluence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGlobalMaterialParameters" },
		{ "ModuleRelativePath", "Public/SBZGlobalMaterialParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_EnemyBacklightInfluence = { "EnemyBacklightInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGlobalMaterialParameters, EnemyBacklightInfluence), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_EnemyBacklightInfluence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_EnemyBacklightInfluence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_EnemyBacklightFade_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGlobalMaterialParameters" },
		{ "ModuleRelativePath", "Public/SBZGlobalMaterialParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_EnemyBacklightFade = { "EnemyBacklightFade", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGlobalMaterialParameters, EnemyBacklightFade), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_EnemyBacklightFade_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_EnemyBacklightFade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_EnemyBacklightRangeFuzz_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGlobalMaterialParameters" },
		{ "ModuleRelativePath", "Public/SBZGlobalMaterialParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_EnemyBacklightRangeFuzz = { "EnemyBacklightRangeFuzz", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGlobalMaterialParameters, EnemyBacklightRangeFuzz), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_EnemyBacklightRangeFuzz_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_EnemyBacklightRangeFuzz_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_WindDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_WindSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_ActionOriginActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_FXGlobalEmissive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_FXGlobalBaseColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_EnemyBacklightInfluence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_EnemyBacklightFade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::NewProp_EnemyBacklightRangeFuzz,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZGlobalMaterialParameters",
		sizeof(FSBZGlobalMaterialParameters),
		alignof(FSBZGlobalMaterialParameters),
		Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZGlobalMaterialParameters"), sizeof(FSBZGlobalMaterialParameters), Get_Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZGlobalMaterialParameters_Hash() { return 1362934231U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

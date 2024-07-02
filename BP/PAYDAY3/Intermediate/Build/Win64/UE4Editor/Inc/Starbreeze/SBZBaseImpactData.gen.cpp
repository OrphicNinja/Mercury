// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBaseImpactData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBaseImpactData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBaseImpactData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZBaseImpactData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZBaseImpactData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZBaseImpactData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZBaseImpactData"), sizeof(FSBZBaseImpactData), Get_Z_Construct_UScriptStruct_FSBZBaseImpactData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZBaseImpactData>()
{
	return FSBZBaseImpactData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZBaseImpactData(FSBZBaseImpactData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZBaseImpactData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBaseImpactData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBaseImpactData()
	{
		UScriptStruct::DeferCppStructOps<FSBZBaseImpactData>(FName(TEXT("SBZBaseImpactData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZBaseImpactData;
	struct Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Effect;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Decals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Decals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Decals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterialSoundSwitchState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OverrideMaterialSoundSwitchState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZBaseImpactData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZBaseImpactData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::NewProp_Effect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseImpactData" },
		{ "ModuleRelativePath", "Public/SBZBaseImpactData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBaseImpactData, Effect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::NewProp_Effect_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::NewProp_Decals_Inner = { "Decals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::NewProp_Decals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseImpactData" },
		{ "ModuleRelativePath", "Public/SBZBaseImpactData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::NewProp_Decals = { "Decals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBaseImpactData, Decals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::NewProp_Decals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::NewProp_Decals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::NewProp_OverrideMaterialSoundSwitchState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseImpactData" },
		{ "ModuleRelativePath", "Public/SBZBaseImpactData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::NewProp_OverrideMaterialSoundSwitchState = { "OverrideMaterialSoundSwitchState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBaseImpactData, OverrideMaterialSoundSwitchState), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::NewProp_OverrideMaterialSoundSwitchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::NewProp_OverrideMaterialSoundSwitchState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::NewProp_Effect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::NewProp_Decals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::NewProp_Decals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::NewProp_OverrideMaterialSoundSwitchState,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZBaseImpactData",
		sizeof(FSBZBaseImpactData),
		alignof(FSBZBaseImpactData),
		Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZBaseImpactData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZBaseImpactData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZBaseImpactData"), sizeof(FSBZBaseImpactData), Get_Z_Construct_UScriptStruct_FSBZBaseImpactData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZBaseImpactData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZBaseImpactData_Hash() { return 846910141U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

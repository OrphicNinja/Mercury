// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponSpreadStances.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponSpreadStances() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponSpreadStances();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers();
// End Cross Module References
class UScriptStruct* FSBZWeaponSpreadStances::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponSpreadStances, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponSpreadStances"), sizeof(FSBZWeaponSpreadStances), Get_Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponSpreadStances>()
{
	return FSBZWeaponSpreadStances::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponSpreadStances(FSBZWeaponSpreadStances::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponSpreadStances"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponSpreadStances
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponSpreadStances()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponSpreadStances>(FName(TEXT("SBZWeaponSpreadStances")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponSpreadStances;
	struct Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StandMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Crouch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Crouch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrouchMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadStances.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponSpreadStances>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_Stand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadStances" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadStances.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_Stand = { "Stand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSpreadStances, Stand), Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_Stand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_Stand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_StandMove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadStances" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadStances.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_StandMove = { "StandMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSpreadStances, StandMove), Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_StandMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_StandMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_Crouch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadStances" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadStances.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_Crouch = { "Crouch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSpreadStances, Crouch), Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_Crouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_Crouch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_CrouchMove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadStances" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadStances.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_CrouchMove = { "CrouchMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSpreadStances, CrouchMove), Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_CrouchMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_CrouchMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadStances" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadStances.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSpreadStances, Target), Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_TargetMove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadStances" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadStances.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_TargetMove = { "TargetMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSpreadStances, TargetMove), Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_TargetMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_TargetMove_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_Stand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_StandMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_Crouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_CrouchMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::NewProp_TargetMove,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponSpreadStances",
		sizeof(FSBZWeaponSpreadStances),
		alignof(FSBZWeaponSpreadStances),
		Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponSpreadStances()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponSpreadStances"), sizeof(FSBZWeaponSpreadStances), Get_Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponSpreadStances_Hash() { return 2391732049U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

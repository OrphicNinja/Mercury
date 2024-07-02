// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPropDamagePool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPropDamagePool() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPropDamagePool();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
class UScriptStruct* FSBZPropDamagePool::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPropDamagePool_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPropDamagePool, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPropDamagePool"), sizeof(FSBZPropDamagePool), Get_Z_Construct_UScriptStruct_FSBZPropDamagePool_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPropDamagePool>()
{
	return FSBZPropDamagePool::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPropDamagePool(FSBZPropDamagePool::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPropDamagePool"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPropDamagePool
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPropDamagePool()
	{
		UScriptStruct::DeferCppStructOps<FSBZPropDamagePool>(FName(TEXT("SBZPropDamagePool")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPropDamagePool;
	struct Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimitiveComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTypeTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageTypeTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxHits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPropDamagePool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPropDamagePool>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_PrimitiveComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPropDamagePool" },
		{ "ModuleRelativePath", "Public/SBZPropDamagePool.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_PrimitiveComponent = { "PrimitiveComponent", nullptr, (EPropertyFlags)0x0010008080000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPropDamagePool, PrimitiveComponent), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_PrimitiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_PrimitiveComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_DamageTypeTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPropDamagePool" },
		{ "ModuleRelativePath", "Public/SBZPropDamagePool.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_DamageTypeTags = { "DamageTypeTags", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPropDamagePool, DamageTypeTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_DamageTypeTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_DamageTypeTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPropDamagePool" },
		{ "ModuleRelativePath", "Public/SBZPropDamagePool.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPropDamagePool, MaxHealth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_MaxHits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPropDamagePool" },
		{ "ModuleRelativePath", "Public/SBZPropDamagePool.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_MaxHits = { "MaxHits", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPropDamagePool, MaxHits), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_MaxHits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_MaxHits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPropDamagePool" },
		{ "ModuleRelativePath", "Public/SBZPropDamagePool.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPropDamagePool, Health), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_Hits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPropDamagePool" },
		{ "ModuleRelativePath", "Public/SBZPropDamagePool.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPropDamagePool, Hits), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_Hits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_Hits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_PrimitiveComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_DamageTypeTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_MaxHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::NewProp_Hits,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPropDamagePool",
		sizeof(FSBZPropDamagePool),
		alignof(FSBZPropDamagePool),
		Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPropDamagePool()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPropDamagePool_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPropDamagePool"), sizeof(FSBZPropDamagePool), Get_Z_Construct_UScriptStruct_FSBZPropDamagePool_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPropDamagePool_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPropDamagePool_Hash() { return 3494560916U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

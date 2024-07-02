// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZQueuedAbilityData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZQueuedAbilityData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZQueuedAbilityData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZQueuedAbilityData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZQueuedAbilityData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZQueuedAbilityData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZQueuedAbilityData"), sizeof(FSBZQueuedAbilityData), Get_Z_Construct_UScriptStruct_FSBZQueuedAbilityData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZQueuedAbilityData>()
{
	return FSBZQueuedAbilityData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZQueuedAbilityData(FSBZQueuedAbilityData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZQueuedAbilityData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZQueuedAbilityData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZQueuedAbilityData()
	{
		UScriptStruct::DeferCppStructOps<FSBZQueuedAbilityData>(FName(TEXT("SBZQueuedAbilityData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZQueuedAbilityData;
	struct Z_Construct_UScriptStruct_FSBZQueuedAbilityData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityCDO_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityCDO;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZQueuedAbilityData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZQueuedAbilityData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZQueuedAbilityData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZQueuedAbilityData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZQueuedAbilityData_Statics::NewProp_AbilityCDO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZQueuedAbilityData" },
		{ "ModuleRelativePath", "Public/SBZQueuedAbilityData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZQueuedAbilityData_Statics::NewProp_AbilityCDO = { "AbilityCDO", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZQueuedAbilityData, AbilityCDO), Z_Construct_UClass_USBZGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZQueuedAbilityData_Statics::NewProp_AbilityCDO_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZQueuedAbilityData_Statics::NewProp_AbilityCDO_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZQueuedAbilityData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZQueuedAbilityData_Statics::NewProp_AbilityCDO,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZQueuedAbilityData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZQueuedAbilityData",
		sizeof(FSBZQueuedAbilityData),
		alignof(FSBZQueuedAbilityData),
		Z_Construct_UScriptStruct_FSBZQueuedAbilityData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZQueuedAbilityData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZQueuedAbilityData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZQueuedAbilityData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZQueuedAbilityData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZQueuedAbilityData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZQueuedAbilityData"), sizeof(FSBZQueuedAbilityData), Get_Z_Construct_UScriptStruct_FSBZQueuedAbilityData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZQueuedAbilityData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZQueuedAbilityData_Hash() { return 1442112813U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCuttableTargetData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCuttableTargetData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCuttableTargetData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZCuttableTargetData>() == std::is_polymorphic<FGameplayAbilityTargetData>(), "USTRUCT FSBZCuttableTargetData cannot be polymorphic unless super FGameplayAbilityTargetData is polymorphic");

class UScriptStruct* FSBZCuttableTargetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCuttableTargetData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCuttableTargetData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCuttableTargetData"), sizeof(FSBZCuttableTargetData), Get_Z_Construct_UScriptStruct_FSBZCuttableTargetData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCuttableTargetData>()
{
	return FSBZCuttableTargetData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCuttableTargetData(FSBZCuttableTargetData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCuttableTargetData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCuttableTargetData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCuttableTargetData()
	{
		UScriptStruct::DeferCppStructOps<FSBZCuttableTargetData>(FName(TEXT("SBZCuttableTargetData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCuttableTargetData;
	struct Z_Construct_UScriptStruct_FSBZCuttableTargetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CuttableActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CuttableActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCuttableTargetData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCuttableTargetData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCuttableTargetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCuttableTargetData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCuttableTargetData_Statics::NewProp_CuttableActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableTargetData" },
		{ "ModuleRelativePath", "Public/SBZCuttableTargetData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZCuttableTargetData_Statics::NewProp_CuttableActor = { "CuttableActor", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCuttableTargetData, CuttableActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCuttableTargetData_Statics::NewProp_CuttableActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCuttableTargetData_Statics::NewProp_CuttableActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCuttableTargetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCuttableTargetData_Statics::NewProp_CuttableActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCuttableTargetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FGameplayAbilityTargetData,
		&NewStructOps,
		"SBZCuttableTargetData",
		sizeof(FSBZCuttableTargetData),
		alignof(FSBZCuttableTargetData),
		Z_Construct_UScriptStruct_FSBZCuttableTargetData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCuttableTargetData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCuttableTargetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCuttableTargetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCuttableTargetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCuttableTargetData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCuttableTargetData"), sizeof(FSBZCuttableTargetData), Get_Z_Construct_UScriptStruct_FSBZCuttableTargetData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCuttableTargetData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCuttableTargetData_Hash() { return 2990244568U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSensorToolTargetData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSensorToolTargetData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSensorToolTargetData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZSensorToolTargetData>() == std::is_polymorphic<FGameplayAbilityTargetData>(), "USTRUCT FSBZSensorToolTargetData cannot be polymorphic unless super FGameplayAbilityTargetData is polymorphic");

class UScriptStruct* FSBZSensorToolTargetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSensorToolTargetData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSensorToolTargetData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSensorToolTargetData"), sizeof(FSBZSensorToolTargetData), Get_Z_Construct_UScriptStruct_FSBZSensorToolTargetData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSensorToolTargetData>()
{
	return FSBZSensorToolTargetData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSensorToolTargetData(FSBZSensorToolTargetData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSensorToolTargetData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSensorToolTargetData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSensorToolTargetData()
	{
		UScriptStruct::DeferCppStructOps<FSBZSensorToolTargetData>(FName(TEXT("SBZSensorToolTargetData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSensorToolTargetData;
	struct Z_Construct_UScriptStruct_FSBZSensorToolTargetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggledActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToggledActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSensorToolTargetData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSensorToolTargetData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSensorToolTargetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSensorToolTargetData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSensorToolTargetData_Statics::NewProp_ToggledActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSensorToolTargetData" },
		{ "ModuleRelativePath", "Public/SBZSensorToolTargetData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSensorToolTargetData_Statics::NewProp_ToggledActor = { "ToggledActor", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSensorToolTargetData, ToggledActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSensorToolTargetData_Statics::NewProp_ToggledActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSensorToolTargetData_Statics::NewProp_ToggledActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSensorToolTargetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSensorToolTargetData_Statics::NewProp_ToggledActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSensorToolTargetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FGameplayAbilityTargetData,
		&NewStructOps,
		"SBZSensorToolTargetData",
		sizeof(FSBZSensorToolTargetData),
		alignof(FSBZSensorToolTargetData),
		Z_Construct_UScriptStruct_FSBZSensorToolTargetData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSensorToolTargetData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSensorToolTargetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSensorToolTargetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSensorToolTargetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSensorToolTargetData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSensorToolTargetData"), sizeof(FSBZSensorToolTargetData), Get_Z_Construct_UScriptStruct_FSBZSensorToolTargetData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSensorToolTargetData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSensorToolTargetData_Hash() { return 1308747581U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

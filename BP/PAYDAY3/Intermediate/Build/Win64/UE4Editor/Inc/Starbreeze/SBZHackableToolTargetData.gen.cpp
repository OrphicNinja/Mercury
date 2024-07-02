// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHackableToolTargetData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHackableToolTargetData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHackableToolTargetData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZHackableToolTargetData>() == std::is_polymorphic<FGameplayAbilityTargetData>(), "USTRUCT FSBZHackableToolTargetData cannot be polymorphic unless super FGameplayAbilityTargetData is polymorphic");

class UScriptStruct* FSBZHackableToolTargetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZHackableToolTargetData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZHackableToolTargetData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZHackableToolTargetData"), sizeof(FSBZHackableToolTargetData), Get_Z_Construct_UScriptStruct_FSBZHackableToolTargetData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZHackableToolTargetData>()
{
	return FSBZHackableToolTargetData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZHackableToolTargetData(FSBZHackableToolTargetData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZHackableToolTargetData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHackableToolTargetData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHackableToolTargetData()
	{
		UScriptStruct::DeferCppStructOps<FSBZHackableToolTargetData>(FName(TEXT("SBZHackableToolTargetData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZHackableToolTargetData;
	struct Z_Construct_UScriptStruct_FSBZHackableToolTargetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackableActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HackableActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHackableToolTargetData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZHackableToolTargetData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZHackableToolTargetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZHackableToolTargetData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHackableToolTargetData_Statics::NewProp_HackableActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableToolTargetData" },
		{ "ModuleRelativePath", "Public/SBZHackableToolTargetData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZHackableToolTargetData_Statics::NewProp_HackableActor = { "HackableActor", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHackableToolTargetData, HackableActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHackableToolTargetData_Statics::NewProp_HackableActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHackableToolTargetData_Statics::NewProp_HackableActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZHackableToolTargetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHackableToolTargetData_Statics::NewProp_HackableActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZHackableToolTargetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FGameplayAbilityTargetData,
		&NewStructOps,
		"SBZHackableToolTargetData",
		sizeof(FSBZHackableToolTargetData),
		alignof(FSBZHackableToolTargetData),
		Z_Construct_UScriptStruct_FSBZHackableToolTargetData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHackableToolTargetData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHackableToolTargetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHackableToolTargetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZHackableToolTargetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZHackableToolTargetData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZHackableToolTargetData"), sizeof(FSBZHackableToolTargetData), Get_Z_Construct_UScriptStruct_FSBZHackableToolTargetData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZHackableToolTargetData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZHackableToolTargetData_Hash() { return 2425087463U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

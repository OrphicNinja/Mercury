// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZKnifeProjectileTargetData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZKnifeProjectileTargetData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZKnifeProjectileTargetData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZProjectileTargetData();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZKnifeProjectileTargetData>() == std::is_polymorphic<FSBZProjectileTargetData>(), "USTRUCT FSBZKnifeProjectileTargetData cannot be polymorphic unless super FSBZProjectileTargetData is polymorphic");

class UScriptStruct* FSBZKnifeProjectileTargetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZKnifeProjectileTargetData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZKnifeProjectileTargetData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZKnifeProjectileTargetData"), sizeof(FSBZKnifeProjectileTargetData), Get_Z_Construct_UScriptStruct_FSBZKnifeProjectileTargetData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZKnifeProjectileTargetData>()
{
	return FSBZKnifeProjectileTargetData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZKnifeProjectileTargetData(FSBZKnifeProjectileTargetData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZKnifeProjectileTargetData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZKnifeProjectileTargetData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZKnifeProjectileTargetData()
	{
		UScriptStruct::DeferCppStructOps<FSBZKnifeProjectileTargetData>(FName(TEXT("SBZKnifeProjectileTargetData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZKnifeProjectileTargetData;
	struct Z_Construct_UScriptStruct_FSBZKnifeProjectileTargetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZKnifeProjectileTargetData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZKnifeProjectileTargetData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZKnifeProjectileTargetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZKnifeProjectileTargetData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZKnifeProjectileTargetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZProjectileTargetData,
		&NewStructOps,
		"SBZKnifeProjectileTargetData",
		sizeof(FSBZKnifeProjectileTargetData),
		alignof(FSBZKnifeProjectileTargetData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZKnifeProjectileTargetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZKnifeProjectileTargetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZKnifeProjectileTargetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZKnifeProjectileTargetData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZKnifeProjectileTargetData"), sizeof(FSBZKnifeProjectileTargetData), Get_Z_Construct_UScriptStruct_FSBZKnifeProjectileTargetData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZKnifeProjectileTargetData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZKnifeProjectileTargetData_Hash() { return 3530141934U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVelocityTrackedComponentArrayData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVelocityTrackedComponentArrayData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVelocityTrackedComponentArrayData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZVelocityTrackedComponentArrayData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZVelocityTrackedComponentArrayData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZVelocityTrackedComponentArrayData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZVelocityTrackedComponentArrayData"), sizeof(FSBZVelocityTrackedComponentArrayData), Get_Z_Construct_UScriptStruct_FSBZVelocityTrackedComponentArrayData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZVelocityTrackedComponentArrayData>()
{
	return FSBZVelocityTrackedComponentArrayData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZVelocityTrackedComponentArrayData(FSBZVelocityTrackedComponentArrayData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZVelocityTrackedComponentArrayData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVelocityTrackedComponentArrayData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVelocityTrackedComponentArrayData()
	{
		UScriptStruct::DeferCppStructOps<FSBZVelocityTrackedComponentArrayData>(FName(TEXT("SBZVelocityTrackedComponentArrayData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZVelocityTrackedComponentArrayData;
	struct Z_Construct_UScriptStruct_FSBZVelocityTrackedComponentArrayData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVelocityTrackedComponentArrayData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZVelocityTrackedComponentArrayData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZVelocityTrackedComponentArrayData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZVelocityTrackedComponentArrayData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZVelocityTrackedComponentArrayData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZVelocityTrackedComponentArrayData",
		sizeof(FSBZVelocityTrackedComponentArrayData),
		alignof(FSBZVelocityTrackedComponentArrayData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVelocityTrackedComponentArrayData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVelocityTrackedComponentArrayData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZVelocityTrackedComponentArrayData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZVelocityTrackedComponentArrayData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZVelocityTrackedComponentArrayData"), sizeof(FSBZVelocityTrackedComponentArrayData), Get_Z_Construct_UScriptStruct_FSBZVelocityTrackedComponentArrayData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZVelocityTrackedComponentArrayData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZVelocityTrackedComponentArrayData_Hash() { return 2170452992U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

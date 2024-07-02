// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3SquadSpawnReservation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3SquadSpawnReservation() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3SquadSpawnReservation();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FPD3SquadSpawnReservation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FPD3SquadSpawnReservation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPD3SquadSpawnReservation, Z_Construct_UPackage__Script_Starbreeze(), TEXT("PD3SquadSpawnReservation"), sizeof(FPD3SquadSpawnReservation), Get_Z_Construct_UScriptStruct_FPD3SquadSpawnReservation_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FPD3SquadSpawnReservation>()
{
	return FPD3SquadSpawnReservation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPD3SquadSpawnReservation(FPD3SquadSpawnReservation::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("PD3SquadSpawnReservation"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFPD3SquadSpawnReservation
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFPD3SquadSpawnReservation()
	{
		UScriptStruct::DeferCppStructOps<FPD3SquadSpawnReservation>(FName(TEXT("PD3SquadSpawnReservation")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFPD3SquadSpawnReservation;
	struct Z_Construct_UScriptStruct_FPD3SquadSpawnReservation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3SquadSpawnReservation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PD3SquadSpawnReservation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPD3SquadSpawnReservation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPD3SquadSpawnReservation>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPD3SquadSpawnReservation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"PD3SquadSpawnReservation",
		sizeof(FPD3SquadSpawnReservation),
		alignof(FPD3SquadSpawnReservation),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3SquadSpawnReservation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3SquadSpawnReservation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPD3SquadSpawnReservation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPD3SquadSpawnReservation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PD3SquadSpawnReservation"), sizeof(FPD3SquadSpawnReservation), Get_Z_Construct_UScriptStruct_FPD3SquadSpawnReservation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPD3SquadSpawnReservation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPD3SquadSpawnReservation_Hash() { return 516710781U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWheeledVehicleReplicatedMovement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWheeledVehicleReplicatedMovement() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZWheeledVehicleReplicatedMovement>() == std::is_polymorphic<FSBZVehicleReplicatedMovementBase>(), "USTRUCT FSBZWheeledVehicleReplicatedMovement cannot be polymorphic unless super FSBZVehicleReplicatedMovementBase is polymorphic");

class UScriptStruct* FSBZWheeledVehicleReplicatedMovement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWheeledVehicleReplicatedMovement"), sizeof(FSBZWheeledVehicleReplicatedMovement), Get_Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWheeledVehicleReplicatedMovement>()
{
	return FSBZWheeledVehicleReplicatedMovement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement(FSBZWheeledVehicleReplicatedMovement::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWheeledVehicleReplicatedMovement"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWheeledVehicleReplicatedMovement
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWheeledVehicleReplicatedMovement()
	{
		UScriptStruct::DeferCppStructOps<FSBZWheeledVehicleReplicatedMovement>(FName(TEXT("SBZWheeledVehicleReplicatedMovement")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWheeledVehicleReplicatedMovement;
	struct Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Steering_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_Steering;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleReplicatedMovement.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWheeledVehicleReplicatedMovement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement_Statics::NewProp_Steering_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleReplicatedMovement" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleReplicatedMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement_Statics::NewProp_Steering = { "Steering", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWheeledVehicleReplicatedMovement, Steering), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement_Statics::NewProp_Steering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement_Statics::NewProp_Steering_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement_Statics::NewProp_Steering,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase,
		&NewStructOps,
		"SBZWheeledVehicleReplicatedMovement",
		sizeof(FSBZWheeledVehicleReplicatedMovement),
		alignof(FSBZWheeledVehicleReplicatedMovement),
		Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWheeledVehicleReplicatedMovement"), sizeof(FSBZWheeledVehicleReplicatedMovement), Get_Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement_Hash() { return 83221306U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTrafficCivilians.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTrafficCivilians() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficCivilians();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWheeledVehicle_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleArrayElement();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Interval();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
class UScriptStruct* FSBZTrafficCivilians::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficCivilians_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTrafficCivilians, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTrafficCivilians"), sizeof(FSBZTrafficCivilians), Get_Z_Construct_UScriptStruct_FSBZTrafficCivilians_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTrafficCivilians>()
{
	return FSBZTrafficCivilians::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTrafficCivilians(FSBZTrafficCivilians::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTrafficCivilians"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficCivilians
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficCivilians()
	{
		UScriptStruct::DeferCppStructOps<FSBZTrafficCivilians>(FName(TEXT("SBZTrafficCivilians")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficCivilians;
	struct Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_VehicleArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VehicleArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeightedVehicleArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightedVehicleArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeightedVehicleArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmountVehicleToSpawnEachInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmountVehicleToSpawnEachInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAmountVehiclesInLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAmountVehiclesInLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleSpawnInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VehicleSpawnInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleDriveOffSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VehicleDriveOffSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleDriveOffTurnSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VehicleDriveOffTurnSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTrafficCivilians.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTrafficCivilians>();
	}
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_VehicleArray_Inner = { "VehicleArray", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_VehicleArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficCivilians" },
		{ "ModuleRelativePath", "Public/SBZTrafficCivilians.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_VehicleArray = { "VehicleArray", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficCivilians, VehicleArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_VehicleArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_VehicleArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_WeightedVehicleArray_Inner = { "WeightedVehicleArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZVehicleArrayElement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_WeightedVehicleArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficCivilians" },
		{ "ModuleRelativePath", "Public/SBZTrafficCivilians.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_WeightedVehicleArray = { "WeightedVehicleArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficCivilians, WeightedVehicleArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_WeightedVehicleArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_WeightedVehicleArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_AmountVehicleToSpawnEachInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficCivilians" },
		{ "ModuleRelativePath", "Public/SBZTrafficCivilians.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_AmountVehicleToSpawnEachInterval = { "AmountVehicleToSpawnEachInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficCivilians, AmountVehicleToSpawnEachInterval), Z_Construct_UScriptStruct_FInt32Interval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_AmountVehicleToSpawnEachInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_AmountVehicleToSpawnEachInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_MaxAmountVehiclesInLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficCivilians" },
		{ "ModuleRelativePath", "Public/SBZTrafficCivilians.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_MaxAmountVehiclesInLevel = { "MaxAmountVehiclesInLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficCivilians, MaxAmountVehiclesInLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_MaxAmountVehiclesInLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_MaxAmountVehiclesInLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_VehicleSpawnInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficCivilians" },
		{ "ModuleRelativePath", "Public/SBZTrafficCivilians.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_VehicleSpawnInterval = { "VehicleSpawnInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficCivilians, VehicleSpawnInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_VehicleSpawnInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_VehicleSpawnInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_VehicleDriveOffSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficCivilians" },
		{ "ModuleRelativePath", "Public/SBZTrafficCivilians.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_VehicleDriveOffSpeed = { "VehicleDriveOffSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficCivilians, VehicleDriveOffSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_VehicleDriveOffSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_VehicleDriveOffSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_VehicleDriveOffTurnSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficCivilians" },
		{ "ModuleRelativePath", "Public/SBZTrafficCivilians.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_VehicleDriveOffTurnSpeed = { "VehicleDriveOffTurnSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficCivilians, VehicleDriveOffTurnSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_VehicleDriveOffTurnSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_VehicleDriveOffTurnSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_VehicleArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_VehicleArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_WeightedVehicleArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_WeightedVehicleArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_AmountVehicleToSpawnEachInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_MaxAmountVehiclesInLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_VehicleSpawnInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_VehicleDriveOffSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::NewProp_VehicleDriveOffTurnSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTrafficCivilians",
		sizeof(FSBZTrafficCivilians),
		alignof(FSBZTrafficCivilians),
		Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficCivilians()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficCivilians_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTrafficCivilians"), sizeof(FSBZTrafficCivilians), Get_Z_Construct_UScriptStruct_FSBZTrafficCivilians_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTrafficCivilians_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficCivilians_Hash() { return 1525133783U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

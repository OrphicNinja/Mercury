// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTrafficFirstResponders.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTrafficFirstResponders() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficFirstResponders();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWheeledVehicle_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleArrayElement();
// End Cross Module References
class UScriptStruct* FSBZTrafficFirstResponders::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTrafficFirstResponders, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTrafficFirstResponders"), sizeof(FSBZTrafficFirstResponders), Get_Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTrafficFirstResponders>()
{
	return FSBZTrafficFirstResponders::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTrafficFirstResponders(FSBZTrafficFirstResponders::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTrafficFirstResponders"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficFirstResponders
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficFirstResponders()
	{
		UScriptStruct::DeferCppStructOps<FSBZTrafficFirstResponders>(FName(TEXT("SBZTrafficFirstResponders")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficFirstResponders;
	struct Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmountVehiclesToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmountVehiclesToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmountVehiclesToWaitOn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmountVehiclesToWaitOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTrafficFirstResponders.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTrafficFirstResponders>();
	}
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::NewProp_VehicleArray_Inner = { "VehicleArray", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::NewProp_VehicleArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficFirstResponders" },
		{ "ModuleRelativePath", "Public/SBZTrafficFirstResponders.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::NewProp_VehicleArray = { "VehicleArray", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficFirstResponders, VehicleArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::NewProp_VehicleArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::NewProp_VehicleArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::NewProp_WeightedVehicleArray_Inner = { "WeightedVehicleArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZVehicleArrayElement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::NewProp_WeightedVehicleArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficFirstResponders" },
		{ "ModuleRelativePath", "Public/SBZTrafficFirstResponders.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::NewProp_WeightedVehicleArray = { "WeightedVehicleArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficFirstResponders, WeightedVehicleArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::NewProp_WeightedVehicleArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::NewProp_WeightedVehicleArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::NewProp_AmountVehiclesToSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficFirstResponders" },
		{ "ModuleRelativePath", "Public/SBZTrafficFirstResponders.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::NewProp_AmountVehiclesToSpawn = { "AmountVehiclesToSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficFirstResponders, AmountVehiclesToSpawn), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::NewProp_AmountVehiclesToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::NewProp_AmountVehiclesToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::NewProp_AmountVehiclesToWaitOn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficFirstResponders" },
		{ "ModuleRelativePath", "Public/SBZTrafficFirstResponders.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::NewProp_AmountVehiclesToWaitOn = { "AmountVehiclesToWaitOn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficFirstResponders, AmountVehiclesToWaitOn), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::NewProp_AmountVehiclesToWaitOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::NewProp_AmountVehiclesToWaitOn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::NewProp_VehicleArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::NewProp_VehicleArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::NewProp_WeightedVehicleArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::NewProp_WeightedVehicleArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::NewProp_AmountVehiclesToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::NewProp_AmountVehiclesToWaitOn,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTrafficFirstResponders",
		sizeof(FSBZTrafficFirstResponders),
		alignof(FSBZTrafficFirstResponders),
		Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficFirstResponders()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTrafficFirstResponders"), sizeof(FSBZTrafficFirstResponders), Get_Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficFirstResponders_Hash() { return 220249800U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

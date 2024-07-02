// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTrafficSwatVans.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTrafficSwatVans() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficSwatVans();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWheeledVehicle_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleArrayElement();
// End Cross Module References
class UScriptStruct* FSBZTrafficSwatVans::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTrafficSwatVans, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTrafficSwatVans"), sizeof(FSBZTrafficSwatVans), Get_Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTrafficSwatVans>()
{
	return FSBZTrafficSwatVans::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTrafficSwatVans(FSBZTrafficSwatVans::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTrafficSwatVans"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficSwatVans
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficSwatVans()
	{
		UScriptStruct::DeferCppStructOps<FSBZTrafficSwatVans>(FName(TEXT("SBZTrafficSwatVans")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficSwatVans;
	struct Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTrafficSwatVans.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTrafficSwatVans>();
	}
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Statics::NewProp_VehicleArray_Inner = { "VehicleArray", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Statics::NewProp_VehicleArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficSwatVans" },
		{ "ModuleRelativePath", "Public/SBZTrafficSwatVans.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Statics::NewProp_VehicleArray = { "VehicleArray", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficSwatVans, VehicleArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Statics::NewProp_VehicleArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Statics::NewProp_VehicleArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Statics::NewProp_WeightedVehicleArray_Inner = { "WeightedVehicleArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZVehicleArrayElement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Statics::NewProp_WeightedVehicleArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficSwatVans" },
		{ "ModuleRelativePath", "Public/SBZTrafficSwatVans.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Statics::NewProp_WeightedVehicleArray = { "WeightedVehicleArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficSwatVans, WeightedVehicleArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Statics::NewProp_WeightedVehicleArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Statics::NewProp_WeightedVehicleArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Statics::NewProp_VehicleArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Statics::NewProp_VehicleArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Statics::NewProp_WeightedVehicleArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Statics::NewProp_WeightedVehicleArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTrafficSwatVans",
		sizeof(FSBZTrafficSwatVans),
		alignof(FSBZTrafficSwatVans),
		Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficSwatVans()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTrafficSwatVans"), sizeof(FSBZTrafficSwatVans), Get_Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficSwatVans_Hash() { return 3093442652U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

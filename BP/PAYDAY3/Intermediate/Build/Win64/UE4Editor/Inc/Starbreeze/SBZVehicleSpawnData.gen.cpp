// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVehicleSpawnData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVehicleSpawnData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleSpawnData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleSplineData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAssaultVehicleSpawnerData_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZVehicleSpawnData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZVehicleSpawnData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZVehicleSpawnData"), sizeof(FSBZVehicleSpawnData), Get_Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZVehicleSpawnData>()
{
	return FSBZVehicleSpawnData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZVehicleSpawnData(FSBZVehicleSpawnData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZVehicleSpawnData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVehicleSpawnData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVehicleSpawnData()
	{
		UScriptStruct::DeferCppStructOps<FSBZVehicleSpawnData>(FName(TEXT("SBZVehicleSpawnData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZVehicleSpawnData;
	struct Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Paths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Paths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Paths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleSpawnData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VehicleSpawnData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZVehicleSpawnData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZVehicleSpawnData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::NewProp_Paths_Inner = { "Paths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZVehicleSplineData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::NewProp_Paths_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSpawnData" },
		{ "ModuleRelativePath", "Public/SBZVehicleSpawnData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::NewProp_Paths = { "Paths", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVehicleSpawnData, Paths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::NewProp_Paths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::NewProp_Paths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::NewProp_VehicleSpawnData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSpawnData" },
		{ "ModuleRelativePath", "Public/SBZVehicleSpawnData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::NewProp_VehicleSpawnData = { "VehicleSpawnData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVehicleSpawnData, VehicleSpawnData), Z_Construct_UClass_USBZAssaultVehicleSpawnerData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::NewProp_VehicleSpawnData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::NewProp_VehicleSpawnData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::NewProp_bEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSpawnData" },
		{ "ModuleRelativePath", "Public/SBZVehicleSpawnData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FSBZVehicleSpawnData*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZVehicleSpawnData), &Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::NewProp_Paths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::NewProp_Paths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::NewProp_VehicleSpawnData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::NewProp_bEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZVehicleSpawnData",
		sizeof(FSBZVehicleSpawnData),
		alignof(FSBZVehicleSpawnData),
		Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleSpawnData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZVehicleSpawnData"), sizeof(FSBZVehicleSpawnData), Get_Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZVehicleSpawnData_Hash() { return 1974637165U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

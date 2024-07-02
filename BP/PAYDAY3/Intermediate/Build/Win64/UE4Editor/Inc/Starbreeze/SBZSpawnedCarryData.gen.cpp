// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpawnedCarryData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpawnedCarryData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnedCarryData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZSpawnedCarryData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSpawnedCarryData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSpawnedCarryData"), sizeof(FSBZSpawnedCarryData), Get_Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSpawnedCarryData>()
{
	return FSBZSpawnedCarryData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSpawnedCarryData(FSBZSpawnedCarryData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSpawnedCarryData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnedCarryData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnedCarryData()
	{
		UScriptStruct::DeferCppStructOps<FSBZSpawnedCarryData>(FName(TEXT("SBZSpawnedCarryData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnedCarryData;
	struct Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Quat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NetID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPagerEnabled_MetaData[];
#endif
		static void NewProp_bIsPagerEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPagerEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSpawnedCarryData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSpawnedCarryData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_Quat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnedCarryData" },
		{ "ModuleRelativePath", "Public/SBZSpawnedCarryData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_Quat = { "Quat", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnedCarryData, Quat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_Quat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_Quat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnedCarryData" },
		{ "ModuleRelativePath", "Public/SBZSpawnedCarryData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnedCarryData, Location), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_ActorClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnedCarryData" },
		{ "ModuleRelativePath", "Public/SBZSpawnedCarryData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnedCarryData, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_NetID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnedCarryData" },
		{ "ModuleRelativePath", "Public/SBZSpawnedCarryData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_NetID = { "NetID", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnedCarryData, NetID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_NetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_NetID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_Seed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnedCarryData" },
		{ "ModuleRelativePath", "Public/SBZSpawnedCarryData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnedCarryData, Seed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_SpawnedActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnedCarryData" },
		{ "ModuleRelativePath", "Public/SBZSpawnedCarryData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000080002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnedCarryData, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_SpawnedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_SpawnedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_bIsPagerEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnedCarryData" },
		{ "ModuleRelativePath", "Public/SBZSpawnedCarryData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_bIsPagerEnabled_SetBit(void* Obj)
	{
		((FSBZSpawnedCarryData*)Obj)->bIsPagerEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_bIsPagerEnabled = { "bIsPagerEnabled", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZSpawnedCarryData), &Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_bIsPagerEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_bIsPagerEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_bIsPagerEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_Quat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_NetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_SpawnedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::NewProp_bIsPagerEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSpawnedCarryData",
		sizeof(FSBZSpawnedCarryData),
		alignof(FSBZSpawnedCarryData),
		Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnedCarryData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSpawnedCarryData"), sizeof(FSBZSpawnedCarryData), Get_Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnedCarryData_Hash() { return 374903643U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

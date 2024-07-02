// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMeshZones.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMeshZones() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMeshZones();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZMeshZones::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMeshZones_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMeshZones, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMeshZones"), sizeof(FSBZMeshZones), Get_Z_Construct_UScriptStruct_FSBZMeshZones_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMeshZones>()
{
	return FSBZMeshZones::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMeshZones(FSBZMeshZones::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMeshZones"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMeshZones
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMeshZones()
	{
		UScriptStruct::DeferCppStructOps<FSBZMeshZones>(FName(TEXT("SBZMeshZones")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMeshZones;
	struct Z_Construct_UScriptStruct_FSBZMeshZones_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Zones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Zones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Zones;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMeshZones_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMeshZones.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMeshZones_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMeshZones>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMeshZones_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeshZones" },
		{ "ModuleRelativePath", "Public/SBZMeshZones.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSBZMeshZones_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001400000008000d, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMeshZones, Mesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMeshZones_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMeshZones_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSBZMeshZones_Statics::NewProp_Zones_Inner = { "Zones", nullptr, (EPropertyFlags)0x0004000000080008, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMeshZones_Statics::NewProp_Zones_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeshZones" },
		{ "ModuleRelativePath", "Public/SBZMeshZones.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZMeshZones_Statics::NewProp_Zones = { "Zones", nullptr, (EPropertyFlags)0x001400800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMeshZones, Zones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMeshZones_Statics::NewProp_Zones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMeshZones_Statics::NewProp_Zones_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMeshZones_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMeshZones_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMeshZones_Statics::NewProp_Zones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMeshZones_Statics::NewProp_Zones,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMeshZones_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZMeshZones",
		sizeof(FSBZMeshZones),
		alignof(FSBZMeshZones),
		Z_Construct_UScriptStruct_FSBZMeshZones_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMeshZones_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMeshZones_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMeshZones_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMeshZones()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMeshZones_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMeshZones"), sizeof(FSBZMeshZones), Get_Z_Construct_UScriptStruct_FSBZMeshZones_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMeshZones_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMeshZones_Hash() { return 1354969614U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpawnLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpawnLocation() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnLocation();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLocationInformation();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZSpawnLocation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnLocation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSpawnLocation, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSpawnLocation"), sizeof(FSBZSpawnLocation), Get_Z_Construct_UScriptStruct_FSBZSpawnLocation_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSpawnLocation>()
{
	return FSBZSpawnLocation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSpawnLocation(FSBZSpawnLocation::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSpawnLocation"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnLocation
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnLocation()
	{
		UScriptStruct::DeferCppStructOps<FSBZSpawnLocation>(FName(TEXT("SBZSpawnLocation")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnLocation;
	struct Z_Construct_UScriptStruct_FSBZSpawnLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationInformation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PossibleSpawningActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PossibleSpawningActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PossibleSpawningActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnLocation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSpawnLocation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSpawnLocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSpawnLocation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnLocation_Statics::NewProp_LocationInformation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnLocation" },
		{ "ModuleRelativePath", "Public/SBZSpawnLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSpawnLocation_Statics::NewProp_LocationInformation = { "LocationInformation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnLocation, LocationInformation), Z_Construct_UScriptStruct_FSBZLocationInformation, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnLocation_Statics::NewProp_LocationInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnLocation_Statics::NewProp_LocationInformation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSpawnLocation_Statics::NewProp_PossibleSpawningActors_Inner = { "PossibleSpawningActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnLocation_Statics::NewProp_PossibleSpawningActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnLocation" },
		{ "ModuleRelativePath", "Public/SBZSpawnLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSpawnLocation_Statics::NewProp_PossibleSpawningActors = { "PossibleSpawningActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnLocation, PossibleSpawningActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnLocation_Statics::NewProp_PossibleSpawningActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnLocation_Statics::NewProp_PossibleSpawningActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSpawnLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnLocation_Statics::NewProp_LocationInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnLocation_Statics::NewProp_PossibleSpawningActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnLocation_Statics::NewProp_PossibleSpawningActors,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSpawnLocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSpawnLocation",
		sizeof(FSBZSpawnLocation),
		alignof(FSBZSpawnLocation),
		Z_Construct_UScriptStruct_FSBZSpawnLocation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnLocation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnLocation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnLocation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnLocation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnLocation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSpawnLocation"), sizeof(FSBZSpawnLocation), Get_Z_Construct_UScriptStruct_FSBZSpawnLocation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSpawnLocation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnLocation_Hash() { return 1802949564U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

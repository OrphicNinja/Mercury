// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLocalGasLocations.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLocalGasLocations() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLocalGasLocations();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLocalGasLocation();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZLocalGasLocations>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FSBZLocalGasLocations cannot be polymorphic unless super FFastArraySerializer is polymorphic");

class UScriptStruct* FSBZLocalGasLocations::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLocalGasLocations_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLocalGasLocations, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLocalGasLocations"), sizeof(FSBZLocalGasLocations), Get_Z_Construct_UScriptStruct_FSBZLocalGasLocations_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLocalGasLocations>()
{
	return FSBZLocalGasLocations::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLocalGasLocations(FSBZLocalGasLocations::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLocalGasLocations"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLocalGasLocations
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLocalGasLocations()
	{
		UScriptStruct::DeferCppStructOps<FSBZLocalGasLocations>(FName(TEXT("SBZLocalGasLocations")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLocalGasLocations;
	struct Z_Construct_UScriptStruct_FSBZLocalGasLocations_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Locations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Locations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Locations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLocalGasLocations_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLocalGasLocations.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLocalGasLocations_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLocalGasLocations>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLocalGasLocations_Statics::NewProp_Locations_Inner = { "Locations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZLocalGasLocation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLocalGasLocations_Statics::NewProp_Locations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalGasLocations" },
		{ "ModuleRelativePath", "Public/SBZLocalGasLocations.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZLocalGasLocations_Statics::NewProp_Locations = { "Locations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLocalGasLocations, Locations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLocalGasLocations_Statics::NewProp_Locations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLocalGasLocations_Statics::NewProp_Locations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLocalGasLocations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLocalGasLocations_Statics::NewProp_Locations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLocalGasLocations_Statics::NewProp_Locations,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLocalGasLocations_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"SBZLocalGasLocations",
		sizeof(FSBZLocalGasLocations),
		alignof(FSBZLocalGasLocations),
		Z_Construct_UScriptStruct_FSBZLocalGasLocations_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLocalGasLocations_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLocalGasLocations_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLocalGasLocations_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLocalGasLocations()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLocalGasLocations_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLocalGasLocations"), sizeof(FSBZLocalGasLocations), Get_Z_Construct_UScriptStruct_FSBZLocalGasLocations_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLocalGasLocations_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLocalGasLocations_Hash() { return 4231093457U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

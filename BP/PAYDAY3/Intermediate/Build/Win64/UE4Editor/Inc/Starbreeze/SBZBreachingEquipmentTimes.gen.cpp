// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBreachingEquipmentTimes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBreachingEquipmentTimes() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZBreachingEquipmentTimes::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZBreachingEquipmentTimes"), sizeof(FSBZBreachingEquipmentTimes), Get_Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZBreachingEquipmentTimes>()
{
	return FSBZBreachingEquipmentTimes::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZBreachingEquipmentTimes(FSBZBreachingEquipmentTimes::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZBreachingEquipmentTimes"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBreachingEquipmentTimes
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBreachingEquipmentTimes()
	{
		UScriptStruct::DeferCppStructOps<FSBZBreachingEquipmentTimes>(FName(TEXT("SBZBreachingEquipmentTimes")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZBreachingEquipmentTimes;
	struct Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedZoneTimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RedZoneTimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YellowZoneTimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YellowZoneTimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreenZoneTimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GreenZoneTimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalFuelTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalFuelTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentTimes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZBreachingEquipmentTimes>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::NewProp_RedZoneTimeSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentTimes" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentTimes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::NewProp_RedZoneTimeSeconds = { "RedZoneTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBreachingEquipmentTimes, RedZoneTimeSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::NewProp_RedZoneTimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::NewProp_RedZoneTimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::NewProp_YellowZoneTimeSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentTimes" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentTimes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::NewProp_YellowZoneTimeSeconds = { "YellowZoneTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBreachingEquipmentTimes, YellowZoneTimeSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::NewProp_YellowZoneTimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::NewProp_YellowZoneTimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::NewProp_GreenZoneTimeSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentTimes" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentTimes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::NewProp_GreenZoneTimeSeconds = { "GreenZoneTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBreachingEquipmentTimes, GreenZoneTimeSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::NewProp_GreenZoneTimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::NewProp_GreenZoneTimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::NewProp_TotalFuelTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentTimes" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentTimes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::NewProp_TotalFuelTime = { "TotalFuelTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBreachingEquipmentTimes, TotalFuelTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::NewProp_TotalFuelTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::NewProp_TotalFuelTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::NewProp_RedZoneTimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::NewProp_YellowZoneTimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::NewProp_GreenZoneTimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::NewProp_TotalFuelTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZBreachingEquipmentTimes",
		sizeof(FSBZBreachingEquipmentTimes),
		alignof(FSBZBreachingEquipmentTimes),
		Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZBreachingEquipmentTimes"), sizeof(FSBZBreachingEquipmentTimes), Get_Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes_Hash() { return 3315269985U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

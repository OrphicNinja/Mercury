// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVehicleLights.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVehicleLights() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleLights();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZVehicleLights::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZVehicleLights_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZVehicleLights, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZVehicleLights"), sizeof(FSBZVehicleLights), Get_Z_Construct_UScriptStruct_FSBZVehicleLights_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZVehicleLights>()
{
	return FSBZVehicleLights::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZVehicleLights(FSBZVehicleLights::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZVehicleLights"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVehicleLights
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVehicleLights()
	{
		UScriptStruct::DeferCppStructOps<FSBZVehicleLights>(FName(TEXT("SBZVehicleLights")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZVehicleLights;
	struct Z_Construct_UScriptStruct_FSBZVehicleLights_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Headlights_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Headlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TailLights_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TailLights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogLights_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FogLights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakeLights_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BrakeLights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverseLights_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReverseLights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TurnLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TurnRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Broken_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Broken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZVehicleLights.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZVehicleLights>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_Headlights_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleLights" },
		{ "ModuleRelativePath", "Public/SBZVehicleLights.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_Headlights = { "Headlights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVehicleLights, Headlights), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_Headlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_Headlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_TailLights_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleLights" },
		{ "ModuleRelativePath", "Public/SBZVehicleLights.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_TailLights = { "TailLights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVehicleLights, TailLights), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_TailLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_TailLights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_FogLights_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleLights" },
		{ "ModuleRelativePath", "Public/SBZVehicleLights.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_FogLights = { "FogLights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVehicleLights, FogLights), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_FogLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_FogLights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_BrakeLights_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleLights" },
		{ "ModuleRelativePath", "Public/SBZVehicleLights.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_BrakeLights = { "BrakeLights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVehicleLights, BrakeLights), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_BrakeLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_BrakeLights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_ReverseLights_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleLights" },
		{ "ModuleRelativePath", "Public/SBZVehicleLights.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_ReverseLights = { "ReverseLights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVehicleLights, ReverseLights), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_ReverseLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_ReverseLights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_TurnLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleLights" },
		{ "ModuleRelativePath", "Public/SBZVehicleLights.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_TurnLeft = { "TurnLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVehicleLights, TurnLeft), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_TurnLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_TurnLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_TurnRight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleLights" },
		{ "ModuleRelativePath", "Public/SBZVehicleLights.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_TurnRight = { "TurnRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVehicleLights, TurnRight), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_TurnRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_TurnRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_Broken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleLights" },
		{ "ModuleRelativePath", "Public/SBZVehicleLights.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_Broken = { "Broken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVehicleLights, Broken), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_Broken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_Broken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_Headlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_TailLights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_FogLights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_BrakeLights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_ReverseLights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_TurnLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_TurnRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::NewProp_Broken,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZVehicleLights",
		sizeof(FSBZVehicleLights),
		alignof(FSBZVehicleLights),
		Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleLights()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZVehicleLights_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZVehicleLights"), sizeof(FSBZVehicleLights), Get_Z_Construct_UScriptStruct_FSBZVehicleLights_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZVehicleLights_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZVehicleLights_Hash() { return 1077606973U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

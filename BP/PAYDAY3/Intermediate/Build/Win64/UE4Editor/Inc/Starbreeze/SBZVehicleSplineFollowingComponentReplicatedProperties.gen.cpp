// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVehicleSplineFollowingComponentReplicatedProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVehicleSplineFollowingComponentReplicatedProperties() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpline_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZVehicleSplineFollowingComponentReplicatedProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZVehicleSplineFollowingComponentReplicatedProperties"), sizeof(FSBZVehicleSplineFollowingComponentReplicatedProperties), Get_Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZVehicleSplineFollowingComponentReplicatedProperties>()
{
	return FSBZVehicleSplineFollowingComponentReplicatedProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties(FSBZVehicleSplineFollowingComponentReplicatedProperties::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZVehicleSplineFollowingComponentReplicatedProperties"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVehicleSplineFollowingComponentReplicatedProperties
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVehicleSplineFollowingComponentReplicatedProperties()
	{
		UScriptStruct::DeferCppStructOps<FSBZVehicleSplineFollowingComponentReplicatedProperties>(FName(TEXT("SBZVehicleSplineFollowingComponentReplicatedProperties")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZVehicleSplineFollowingComponentReplicatedProperties;
	struct Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Path_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraveledDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraveledDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponentReplicatedProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZVehicleSplineFollowingComponentReplicatedProperties>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Statics::NewProp_Path_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSplineFollowingComponentReplicatedProperties" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponentReplicatedProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVehicleSplineFollowingComponentReplicatedProperties, Path), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Statics::NewProp_TraveledDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSplineFollowingComponentReplicatedProperties" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponentReplicatedProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Statics::NewProp_TraveledDistance = { "TraveledDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVehicleSplineFollowingComponentReplicatedProperties, TraveledDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Statics::NewProp_TraveledDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Statics::NewProp_TraveledDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Statics::NewProp_Path_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Statics::NewProp_TraveledDistance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZVehicleSplineFollowingComponentReplicatedProperties",
		sizeof(FSBZVehicleSplineFollowingComponentReplicatedProperties),
		alignof(FSBZVehicleSplineFollowingComponentReplicatedProperties),
		Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZVehicleSplineFollowingComponentReplicatedProperties"), sizeof(FSBZVehicleSplineFollowingComponentReplicatedProperties), Get_Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties_Hash() { return 2434352626U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

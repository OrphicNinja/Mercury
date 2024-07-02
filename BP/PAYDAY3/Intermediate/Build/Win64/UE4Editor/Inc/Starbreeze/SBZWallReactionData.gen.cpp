// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWallReactionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWallReactionData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWallReactionData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FSBZWallReactionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWallReactionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWallReactionData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWallReactionData"), sizeof(FSBZWallReactionData), Get_Z_Construct_UScriptStruct_FSBZWallReactionData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWallReactionData>()
{
	return FSBZWallReactionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWallReactionData(FSBZWallReactionData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWallReactionData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWallReactionData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWallReactionData()
	{
		UScriptStruct::DeferCppStructOps<FSBZWallReactionData>(FName(TEXT("SBZWallReactionData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWallReactionData;
	struct Z_Construct_UScriptStruct_FSBZWallReactionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetectionDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitImpactPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitImpactPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpringFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpringFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastUpdateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWallReactionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWallReactionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_Alpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWallReactionData" },
		{ "ModuleRelativePath", "Public/SBZWallReactionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWallReactionData, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_MaxOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWallReactionData" },
		{ "ModuleRelativePath", "Public/SBZWallReactionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_MaxOffset = { "MaxOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWallReactionData, MaxOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_MaxOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_MaxOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_DetectionDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWallReactionData" },
		{ "ModuleRelativePath", "Public/SBZWallReactionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_DetectionDistance = { "DetectionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWallReactionData, DetectionDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_DetectionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_DetectionDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_HitLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWallReactionData" },
		{ "ModuleRelativePath", "Public/SBZWallReactionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWallReactionData, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_HitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_HitLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_HitImpactPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWallReactionData" },
		{ "ModuleRelativePath", "Public/SBZWallReactionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_HitImpactPoint = { "HitImpactPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWallReactionData, HitImpactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_HitImpactPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_HitImpactPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_HitDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWallReactionData" },
		{ "ModuleRelativePath", "Public/SBZWallReactionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_HitDistance = { "HitDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWallReactionData, HitDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_HitDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_HitDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_TraceDist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWallReactionData" },
		{ "ModuleRelativePath", "Public/SBZWallReactionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_TraceDist = { "TraceDist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWallReactionData, TraceDist), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_TraceDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_TraceDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_InterpolationSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWallReactionData" },
		{ "ModuleRelativePath", "Public/SBZWallReactionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_InterpolationSpeed = { "InterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWallReactionData, InterpolationSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_InterpolationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_InterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_InterpolationSpringFactor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWallReactionData" },
		{ "ModuleRelativePath", "Public/SBZWallReactionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_InterpolationSpringFactor = { "InterpolationSpringFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWallReactionData, InterpolationSpringFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_InterpolationSpringFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_InterpolationSpringFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_LastUpdateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWallReactionData" },
		{ "ModuleRelativePath", "Public/SBZWallReactionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_LastUpdateTime = { "LastUpdateTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWallReactionData, LastUpdateTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_LastUpdateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_LastUpdateTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_MaxOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_DetectionDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_HitImpactPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_HitDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_TraceDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_InterpolationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_InterpolationSpringFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::NewProp_LastUpdateTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWallReactionData",
		sizeof(FSBZWallReactionData),
		alignof(FSBZWallReactionData),
		Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWallReactionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWallReactionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWallReactionData"), sizeof(FSBZWallReactionData), Get_Z_Construct_UScriptStruct_FSBZWallReactionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWallReactionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWallReactionData_Hash() { return 999595098U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

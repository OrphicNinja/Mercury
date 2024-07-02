// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStandardImpactData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStandardImpactData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStandardImpactData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBaseImpactData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZStandardImpactData>() == std::is_polymorphic<FSBZBaseImpactData>(), "USTRUCT FSBZStandardImpactData cannot be polymorphic unless super FSBZBaseImpactData is polymorphic");

class UScriptStruct* FSBZStandardImpactData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZStandardImpactData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZStandardImpactData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZStandardImpactData"), sizeof(FSBZStandardImpactData), Get_Z_Construct_UScriptStruct_FSBZStandardImpactData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZStandardImpactData>()
{
	return FSBZStandardImpactData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZStandardImpactData(FSBZStandardImpactData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZStandardImpactData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZStandardImpactData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZStandardImpactData()
	{
		UScriptStruct::DeferCppStructOps<FSBZStandardImpactData>(FName(TEXT("SBZStandardImpactData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZStandardImpactData;
	struct Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecalDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalMaxStretchCosAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecalMaxStretchCosAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalMaxStretchScaler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalMaxStretchScaler;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZStandardImpactData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZStandardImpactData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::NewProp_DecalScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStandardImpactData" },
		{ "ModuleRelativePath", "Public/SBZStandardImpactData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::NewProp_DecalScale = { "DecalScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStandardImpactData, DecalScale), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::NewProp_DecalScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::NewProp_DecalScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::NewProp_DecalDepth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStandardImpactData" },
		{ "ModuleRelativePath", "Public/SBZStandardImpactData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::NewProp_DecalDepth = { "DecalDepth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStandardImpactData, DecalDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::NewProp_DecalDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::NewProp_DecalDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::NewProp_DecalMaxStretchCosAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStandardImpactData" },
		{ "ModuleRelativePath", "Public/SBZStandardImpactData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::NewProp_DecalMaxStretchCosAngle = { "DecalMaxStretchCosAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStandardImpactData, DecalMaxStretchCosAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::NewProp_DecalMaxStretchCosAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::NewProp_DecalMaxStretchCosAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::NewProp_DecalMaxStretchScaler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStandardImpactData" },
		{ "ModuleRelativePath", "Public/SBZStandardImpactData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::NewProp_DecalMaxStretchScaler = { "DecalMaxStretchScaler", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStandardImpactData, DecalMaxStretchScaler), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::NewProp_DecalMaxStretchScaler_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::NewProp_DecalMaxStretchScaler_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::NewProp_DecalScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::NewProp_DecalDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::NewProp_DecalMaxStretchCosAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::NewProp_DecalMaxStretchScaler,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZBaseImpactData,
		&NewStructOps,
		"SBZStandardImpactData",
		sizeof(FSBZStandardImpactData),
		alignof(FSBZStandardImpactData),
		Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZStandardImpactData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZStandardImpactData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZStandardImpactData"), sizeof(FSBZStandardImpactData), Get_Z_Construct_UScriptStruct_FSBZStandardImpactData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZStandardImpactData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZStandardImpactData_Hash() { return 3222989514U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

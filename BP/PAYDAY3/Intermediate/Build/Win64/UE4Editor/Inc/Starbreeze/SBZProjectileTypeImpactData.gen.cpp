// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZProjectileTypeImpactData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZProjectileTypeImpactData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBaseImpactData();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZProjectileImpactType();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZProjectileTypeImpactData>() == std::is_polymorphic<FSBZBaseImpactData>(), "USTRUCT FSBZProjectileTypeImpactData cannot be polymorphic unless super FSBZBaseImpactData is polymorphic");

class UScriptStruct* FSBZProjectileTypeImpactData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZProjectileTypeImpactData"), sizeof(FSBZProjectileTypeImpactData), Get_Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZProjectileTypeImpactData>()
{
	return FSBZProjectileTypeImpactData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZProjectileTypeImpactData(FSBZProjectileTypeImpactData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZProjectileTypeImpactData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZProjectileTypeImpactData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZProjectileTypeImpactData()
	{
		UScriptStruct::DeferCppStructOps<FSBZProjectileTypeImpactData>(FName(TEXT("SBZProjectileTypeImpactData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZProjectileTypeImpactData;
	struct Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImpactType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ImpactType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecalMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZProjectileTypeImpactData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZProjectileTypeImpactData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Statics::NewProp_ImpactType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Statics::NewProp_ImpactType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProjectileTypeImpactData" },
		{ "ModuleRelativePath", "Public/SBZProjectileTypeImpactData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Statics::NewProp_ImpactType = { "ImpactType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProjectileTypeImpactData, ImpactType), Z_Construct_UEnum_Starbreeze_ESBZProjectileImpactType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Statics::NewProp_ImpactType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Statics::NewProp_ImpactType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Statics::NewProp_DecalMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProjectileTypeImpactData" },
		{ "ModuleRelativePath", "Public/SBZProjectileTypeImpactData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Statics::NewProp_DecalMultiplier = { "DecalMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProjectileTypeImpactData, DecalMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Statics::NewProp_DecalMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Statics::NewProp_DecalMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Statics::NewProp_ImpactType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Statics::NewProp_ImpactType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Statics::NewProp_DecalMultiplier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZBaseImpactData,
		&NewStructOps,
		"SBZProjectileTypeImpactData",
		sizeof(FSBZProjectileTypeImpactData),
		alignof(FSBZProjectileTypeImpactData),
		Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZProjectileTypeImpactData"), sizeof(FSBZProjectileTypeImpactData), Get_Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZProjectileTypeImpactData_Hash() { return 3568058323U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

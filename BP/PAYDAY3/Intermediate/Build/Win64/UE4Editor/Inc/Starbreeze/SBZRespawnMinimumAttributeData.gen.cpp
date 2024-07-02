// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRespawnMinimumAttributeData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRespawnMinimumAttributeData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZRespawnMinimumAttributeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZRespawnMinimumAttributeData"), sizeof(FSBZRespawnMinimumAttributeData), Get_Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZRespawnMinimumAttributeData>()
{
	return FSBZRespawnMinimumAttributeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZRespawnMinimumAttributeData(FSBZRespawnMinimumAttributeData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZRespawnMinimumAttributeData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRespawnMinimumAttributeData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRespawnMinimumAttributeData()
	{
		UScriptStruct::DeferCppStructOps<FSBZRespawnMinimumAttributeData>(FName(TEXT("SBZRespawnMinimumAttributeData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZRespawnMinimumAttributeData;
	struct Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceValues_MetaData[];
#endif
		static void NewProp_bForceValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceValues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentOfMaxChunkCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentOfMaxChunkCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownedCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DownedCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAmmoMagazineCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponAmmoMagazineCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ThrowableAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EquippableAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZRespawnMinimumAttributeData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZRespawnMinimumAttributeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_bForceValues_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRespawnMinimumAttributeData" },
		{ "ModuleRelativePath", "Public/SBZRespawnMinimumAttributeData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_bForceValues_SetBit(void* Obj)
	{
		((FSBZRespawnMinimumAttributeData*)Obj)->bForceValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_bForceValues = { "bForceValues", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZRespawnMinimumAttributeData), &Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_bForceValues_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_bForceValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_bForceValues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRespawnMinimumAttributeData" },
		{ "ModuleRelativePath", "Public/SBZRespawnMinimumAttributeData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRespawnMinimumAttributeData, Health), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_PercentOfMaxChunkCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRespawnMinimumAttributeData" },
		{ "ModuleRelativePath", "Public/SBZRespawnMinimumAttributeData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_PercentOfMaxChunkCount = { "PercentOfMaxChunkCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRespawnMinimumAttributeData, PercentOfMaxChunkCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_PercentOfMaxChunkCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_PercentOfMaxChunkCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_DownedCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRespawnMinimumAttributeData" },
		{ "ModuleRelativePath", "Public/SBZRespawnMinimumAttributeData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_DownedCount = { "DownedCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRespawnMinimumAttributeData, DownedCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_DownedCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_DownedCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_WeaponAmmoMagazineCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRespawnMinimumAttributeData" },
		{ "ModuleRelativePath", "Public/SBZRespawnMinimumAttributeData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_WeaponAmmoMagazineCount = { "WeaponAmmoMagazineCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRespawnMinimumAttributeData, WeaponAmmoMagazineCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_WeaponAmmoMagazineCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_WeaponAmmoMagazineCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_ThrowableAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRespawnMinimumAttributeData" },
		{ "ModuleRelativePath", "Public/SBZRespawnMinimumAttributeData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_ThrowableAmmo = { "ThrowableAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRespawnMinimumAttributeData, ThrowableAmmo), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_ThrowableAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_ThrowableAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_EquippableAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRespawnMinimumAttributeData" },
		{ "ModuleRelativePath", "Public/SBZRespawnMinimumAttributeData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_EquippableAmmo = { "EquippableAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRespawnMinimumAttributeData, EquippableAmmo), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_EquippableAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_EquippableAmmo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_bForceValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_PercentOfMaxChunkCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_DownedCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_WeaponAmmoMagazineCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_ThrowableAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::NewProp_EquippableAmmo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZRespawnMinimumAttributeData",
		sizeof(FSBZRespawnMinimumAttributeData),
		alignof(FSBZRespawnMinimumAttributeData),
		Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZRespawnMinimumAttributeData"), sizeof(FSBZRespawnMinimumAttributeData), Get_Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZRespawnMinimumAttributeData_Hash() { return 1291616017U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

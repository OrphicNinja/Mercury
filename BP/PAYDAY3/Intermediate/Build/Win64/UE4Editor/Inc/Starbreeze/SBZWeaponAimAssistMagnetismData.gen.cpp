// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponAimAssistMagnetismData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponAimAssistMagnetismData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZWeaponAimAssistMagnetismData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponAimAssistMagnetismData"), sizeof(FSBZWeaponAimAssistMagnetismData), Get_Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponAimAssistMagnetismData>()
{
	return FSBZWeaponAimAssistMagnetismData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponAimAssistMagnetismData(FSBZWeaponAimAssistMagnetismData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponAimAssistMagnetismData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponAimAssistMagnetismData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponAimAssistMagnetismData()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponAimAssistMagnetismData>(FName(TEXT("SBZWeaponAimAssistMagnetismData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponAimAssistMagnetismData;
	struct Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletDeviationDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BulletDeviationDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletMagnetismSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BulletMagnetismSpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSpread_MetaData[];
#endif
		static void NewProp_bIgnoreSpread_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSpread;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponAimAssistMagnetismData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponAimAssistMagnetismData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAimAssistMagnetismData" },
		{ "ModuleRelativePath", "Public/SBZWeaponAimAssistMagnetismData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponAimAssistMagnetismData, MaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::NewProp_BulletDeviationDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAimAssistMagnetismData" },
		{ "ModuleRelativePath", "Public/SBZWeaponAimAssistMagnetismData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::NewProp_BulletDeviationDistance = { "BulletDeviationDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponAimAssistMagnetismData, BulletDeviationDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::NewProp_BulletDeviationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::NewProp_BulletDeviationDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::NewProp_BulletMagnetismSpread_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAimAssistMagnetismData" },
		{ "ModuleRelativePath", "Public/SBZWeaponAimAssistMagnetismData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::NewProp_BulletMagnetismSpread = { "BulletMagnetismSpread", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponAimAssistMagnetismData, BulletMagnetismSpread), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::NewProp_BulletMagnetismSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::NewProp_BulletMagnetismSpread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::NewProp_bIgnoreSpread_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAimAssistMagnetismData" },
		{ "ModuleRelativePath", "Public/SBZWeaponAimAssistMagnetismData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::NewProp_bIgnoreSpread_SetBit(void* Obj)
	{
		((FSBZWeaponAimAssistMagnetismData*)Obj)->bIgnoreSpread = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::NewProp_bIgnoreSpread = { "bIgnoreSpread", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZWeaponAimAssistMagnetismData), &Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::NewProp_bIgnoreSpread_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::NewProp_bIgnoreSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::NewProp_bIgnoreSpread_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::NewProp_BulletDeviationDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::NewProp_BulletMagnetismSpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::NewProp_bIgnoreSpread,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponAimAssistMagnetismData",
		sizeof(FSBZWeaponAimAssistMagnetismData),
		alignof(FSBZWeaponAimAssistMagnetismData),
		Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponAimAssistMagnetismData"), sizeof(FSBZWeaponAimAssistMagnetismData), Get_Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData_Hash() { return 3133711190U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

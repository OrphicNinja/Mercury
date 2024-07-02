// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTrafficGridlockInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTrafficGridlockInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWheeledVehicle_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZTrafficGridlockInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTrafficGridlockInfo"), sizeof(FSBZTrafficGridlockInfo), Get_Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTrafficGridlockInfo>()
{
	return FSBZTrafficGridlockInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTrafficGridlockInfo(FSBZTrafficGridlockInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTrafficGridlockInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficGridlockInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficGridlockInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZTrafficGridlockInfo>(FName(TEXT("SBZTrafficGridlockInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficGridlockInfo;
	struct Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VehicleArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VehicleArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridlockBreakTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GridlockBreakTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTrafficGridlockInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTrafficGridlockInfo>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Statics::NewProp_VehicleArray_Inner = { "VehicleArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Statics::NewProp_VehicleArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficGridlockInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficGridlockInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Statics::NewProp_VehicleArray = { "VehicleArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficGridlockInfo, VehicleArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Statics::NewProp_VehicleArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Statics::NewProp_VehicleArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Statics::NewProp_GridlockBreakTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficGridlockInfo" },
		{ "ModuleRelativePath", "Public/SBZTrafficGridlockInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Statics::NewProp_GridlockBreakTimer = { "GridlockBreakTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficGridlockInfo, GridlockBreakTimer), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Statics::NewProp_GridlockBreakTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Statics::NewProp_GridlockBreakTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Statics::NewProp_VehicleArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Statics::NewProp_VehicleArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Statics::NewProp_GridlockBreakTimer,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTrafficGridlockInfo",
		sizeof(FSBZTrafficGridlockInfo),
		alignof(FSBZTrafficGridlockInfo),
		Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTrafficGridlockInfo"), sizeof(FSBZTrafficGridlockInfo), Get_Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo_Hash() { return 1329097030U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

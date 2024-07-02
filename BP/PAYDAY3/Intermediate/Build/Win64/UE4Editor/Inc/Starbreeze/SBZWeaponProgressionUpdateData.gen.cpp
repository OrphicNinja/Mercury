// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponProgressionUpdateData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponProgressionUpdateData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPartDataAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZWeaponProgressionUpdateData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponProgressionUpdateData"), sizeof(FSBZWeaponProgressionUpdateData), Get_Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponProgressionUpdateData>()
{
	return FSBZWeaponProgressionUpdateData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponProgressionUpdateData(FSBZWeaponProgressionUpdateData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponProgressionUpdateData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponProgressionUpdateData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponProgressionUpdateData()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponProgressionUpdateData>(FName(TEXT("SBZWeaponProgressionUpdateData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponProgressionUpdateData;
	struct Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippableData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OldPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OldLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLevelPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentLevelPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextLevelPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextLevelPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnlockedPartArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockedPartArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnlockedPartArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponProgressionUpdateData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponProgressionUpdateData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_EquippableData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponProgressionUpdateData" },
		{ "ModuleRelativePath", "Public/SBZWeaponProgressionUpdateData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_EquippableData = { "EquippableData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponProgressionUpdateData, EquippableData), Z_Construct_UClass_USBZEquippableData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_EquippableData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_EquippableData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_OldPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponProgressionUpdateData" },
		{ "ModuleRelativePath", "Public/SBZWeaponProgressionUpdateData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_OldPoints = { "OldPoints", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponProgressionUpdateData, OldPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_OldPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_OldPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_OldLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponProgressionUpdateData" },
		{ "ModuleRelativePath", "Public/SBZWeaponProgressionUpdateData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_OldLevel = { "OldLevel", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponProgressionUpdateData, OldLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_OldLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_OldLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_NewPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponProgressionUpdateData" },
		{ "ModuleRelativePath", "Public/SBZWeaponProgressionUpdateData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_NewPoints = { "NewPoints", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponProgressionUpdateData, NewPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_NewPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_NewPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_NewLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponProgressionUpdateData" },
		{ "ModuleRelativePath", "Public/SBZWeaponProgressionUpdateData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponProgressionUpdateData, NewLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_NewLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_NewLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_CurrentLevelPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponProgressionUpdateData" },
		{ "ModuleRelativePath", "Public/SBZWeaponProgressionUpdateData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_CurrentLevelPoints = { "CurrentLevelPoints", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponProgressionUpdateData, CurrentLevelPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_CurrentLevelPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_CurrentLevelPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_NextLevelPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponProgressionUpdateData" },
		{ "ModuleRelativePath", "Public/SBZWeaponProgressionUpdateData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_NextLevelPoints = { "NextLevelPoints", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponProgressionUpdateData, NextLevelPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_NextLevelPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_NextLevelPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_UnlockedPartArray_Inner = { "UnlockedPartArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZWeaponPartDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_UnlockedPartArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponProgressionUpdateData" },
		{ "ModuleRelativePath", "Public/SBZWeaponProgressionUpdateData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_UnlockedPartArray = { "UnlockedPartArray", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponProgressionUpdateData, UnlockedPartArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_UnlockedPartArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_UnlockedPartArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_EquippableData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_OldPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_OldLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_NewPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_NewLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_CurrentLevelPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_NextLevelPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_UnlockedPartArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::NewProp_UnlockedPartArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponProgressionUpdateData",
		sizeof(FSBZWeaponProgressionUpdateData),
		alignof(FSBZWeaponProgressionUpdateData),
		Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponProgressionUpdateData"), sizeof(FSBZWeaponProgressionUpdateData), Get_Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData_Hash() { return 1741781557U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

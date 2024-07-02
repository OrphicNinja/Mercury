// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReconnectPlayerStateLoadoutData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReconnectPlayerStateLoadoutData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZReconnectPlayerStateLoadoutData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZReconnectPlayerStateLoadoutData"), sizeof(FSBZReconnectPlayerStateLoadoutData), Get_Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZReconnectPlayerStateLoadoutData>()
{
	return FSBZReconnectPlayerStateLoadoutData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData(FSBZReconnectPlayerStateLoadoutData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZReconnectPlayerStateLoadoutData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZReconnectPlayerStateLoadoutData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZReconnectPlayerStateLoadoutData()
	{
		UScriptStruct::DeferCppStructOps<FSBZReconnectPlayerStateLoadoutData>(FName(TEXT("SBZReconnectPlayerStateLoadoutData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZReconnectPlayerStateLoadoutData;
	struct Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorTrauma_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmorTrauma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmorScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownedCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DownedCount;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EquippableAmmoLoadedScaleArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableAmmoLoadedScaleArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EquippableAmmoLoadedScaleArray;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EquippableAmmoInventoryScaleArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableAmmoInventoryScaleArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EquippableAmmoInventoryScaleArray;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrowableAmmoInventoryScaleArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableAmmoInventoryScaleArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ThrowableAmmoInventoryScaleArray;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ToolPlaceableAmmoInventoryScaleArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolPlaceableAmmoInventoryScaleArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ToolPlaceableAmmoInventoryScaleArray;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ToolAmmoInventoryScaleArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolAmmoInventoryScaleArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ToolAmmoInventoryScaleArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateLoadoutData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZReconnectPlayerStateLoadoutData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_HealthScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateLoadoutData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateLoadoutData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_HealthScale = { "HealthScale", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateLoadoutData, HealthScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_HealthScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_HealthScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ArmorTrauma_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateLoadoutData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateLoadoutData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ArmorTrauma = { "ArmorTrauma", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateLoadoutData, ArmorTrauma), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ArmorTrauma_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ArmorTrauma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ArmorScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateLoadoutData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateLoadoutData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ArmorScale = { "ArmorScale", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateLoadoutData, ArmorScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ArmorScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ArmorScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_DownedCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateLoadoutData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateLoadoutData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_DownedCount = { "DownedCount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateLoadoutData, DownedCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_DownedCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_DownedCount_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_EquippableAmmoLoadedScaleArray_Inner = { "EquippableAmmoLoadedScaleArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_EquippableAmmoLoadedScaleArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateLoadoutData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateLoadoutData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_EquippableAmmoLoadedScaleArray = { "EquippableAmmoLoadedScaleArray", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateLoadoutData, EquippableAmmoLoadedScaleArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_EquippableAmmoLoadedScaleArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_EquippableAmmoLoadedScaleArray_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_EquippableAmmoInventoryScaleArray_Inner = { "EquippableAmmoInventoryScaleArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_EquippableAmmoInventoryScaleArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateLoadoutData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateLoadoutData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_EquippableAmmoInventoryScaleArray = { "EquippableAmmoInventoryScaleArray", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateLoadoutData, EquippableAmmoInventoryScaleArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_EquippableAmmoInventoryScaleArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_EquippableAmmoInventoryScaleArray_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ThrowableAmmoInventoryScaleArray_Inner = { "ThrowableAmmoInventoryScaleArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ThrowableAmmoInventoryScaleArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateLoadoutData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateLoadoutData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ThrowableAmmoInventoryScaleArray = { "ThrowableAmmoInventoryScaleArray", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateLoadoutData, ThrowableAmmoInventoryScaleArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ThrowableAmmoInventoryScaleArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ThrowableAmmoInventoryScaleArray_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ToolPlaceableAmmoInventoryScaleArray_Inner = { "ToolPlaceableAmmoInventoryScaleArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ToolPlaceableAmmoInventoryScaleArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateLoadoutData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateLoadoutData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ToolPlaceableAmmoInventoryScaleArray = { "ToolPlaceableAmmoInventoryScaleArray", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateLoadoutData, ToolPlaceableAmmoInventoryScaleArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ToolPlaceableAmmoInventoryScaleArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ToolPlaceableAmmoInventoryScaleArray_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ToolAmmoInventoryScaleArray_Inner = { "ToolAmmoInventoryScaleArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ToolAmmoInventoryScaleArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateLoadoutData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateLoadoutData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ToolAmmoInventoryScaleArray = { "ToolAmmoInventoryScaleArray", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateLoadoutData, ToolAmmoInventoryScaleArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ToolAmmoInventoryScaleArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ToolAmmoInventoryScaleArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_HealthScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ArmorTrauma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ArmorScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_DownedCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_EquippableAmmoLoadedScaleArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_EquippableAmmoLoadedScaleArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_EquippableAmmoInventoryScaleArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_EquippableAmmoInventoryScaleArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ThrowableAmmoInventoryScaleArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ThrowableAmmoInventoryScaleArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ToolPlaceableAmmoInventoryScaleArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ToolPlaceableAmmoInventoryScaleArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ToolAmmoInventoryScaleArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::NewProp_ToolAmmoInventoryScaleArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZReconnectPlayerStateLoadoutData",
		sizeof(FSBZReconnectPlayerStateLoadoutData),
		alignof(FSBZReconnectPlayerStateLoadoutData),
		Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZReconnectPlayerStateLoadoutData"), sizeof(FSBZReconnectPlayerStateLoadoutData), Get_Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData_Hash() { return 3775773839U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

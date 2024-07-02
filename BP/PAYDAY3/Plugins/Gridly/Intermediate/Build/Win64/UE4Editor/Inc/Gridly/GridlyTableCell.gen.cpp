// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gridly/Public/GridlyTableCell.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridlyTableCell() {}
// Cross Module References
	GRIDLY_API UScriptStruct* Z_Construct_UScriptStruct_FGridlyTableCell();
	UPackage* Z_Construct_UPackage__Script_Gridly();
// End Cross Module References
class UScriptStruct* FGridlyTableCell::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GRIDLY_API uint32 Get_Z_Construct_UScriptStruct_FGridlyTableCell_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridlyTableCell, Z_Construct_UPackage__Script_Gridly(), TEXT("GridlyTableCell"), sizeof(FGridlyTableCell), Get_Z_Construct_UScriptStruct_FGridlyTableCell_Hash());
	}
	return Singleton;
}
template<> GRIDLY_API UScriptStruct* StaticStruct<FGridlyTableCell>()
{
	return FGridlyTableCell::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGridlyTableCell(FGridlyTableCell::StaticStruct, TEXT("/Script/Gridly"), TEXT("GridlyTableCell"), false, nullptr, nullptr);
static struct FScriptStruct_Gridly_StaticRegisterNativesFGridlyTableCell
{
	FScriptStruct_Gridly_StaticRegisterNativesFGridlyTableCell()
	{
		UScriptStruct::DeferCppStructOps<FGridlyTableCell>(FName(TEXT("GridlyTableCell")));
	}
} ScriptStruct_Gridly_StaticRegisterNativesFGridlyTableCell;
	struct Z_Construct_UScriptStruct_FGridlyTableCell_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ColumnId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DependencyStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DependencyStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridlyTableCell_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GridlyTableCell.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGridlyTableCell_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridlyTableCell>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridlyTableCell_Statics::NewProp_ColumnId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GridlyTableCell" },
		{ "ModuleRelativePath", "Public/GridlyTableCell.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGridlyTableCell_Statics::NewProp_ColumnId = { "ColumnId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridlyTableCell, ColumnId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGridlyTableCell_Statics::NewProp_ColumnId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridlyTableCell_Statics::NewProp_ColumnId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridlyTableCell_Statics::NewProp_DependencyStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GridlyTableCell" },
		{ "ModuleRelativePath", "Public/GridlyTableCell.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGridlyTableCell_Statics::NewProp_DependencyStatus = { "DependencyStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridlyTableCell, DependencyStatus), METADATA_PARAMS(Z_Construct_UScriptStruct_FGridlyTableCell_Statics::NewProp_DependencyStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridlyTableCell_Statics::NewProp_DependencyStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridlyTableCell_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GridlyTableCell" },
		{ "ModuleRelativePath", "Public/GridlyTableCell.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGridlyTableCell_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridlyTableCell, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FGridlyTableCell_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridlyTableCell_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridlyTableCell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridlyTableCell_Statics::NewProp_ColumnId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridlyTableCell_Statics::NewProp_DependencyStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridlyTableCell_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridlyTableCell_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Gridly,
		nullptr,
		&NewStructOps,
		"GridlyTableCell",
		sizeof(FGridlyTableCell),
		alignof(FGridlyTableCell),
		Z_Construct_UScriptStruct_FGridlyTableCell_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridlyTableCell_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGridlyTableCell_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridlyTableCell_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGridlyTableCell()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGridlyTableCell_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Gridly();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GridlyTableCell"), sizeof(FGridlyTableCell), Get_Z_Construct_UScriptStruct_FGridlyTableCell_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGridlyTableCell_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGridlyTableCell_Hash() { return 3539159608U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

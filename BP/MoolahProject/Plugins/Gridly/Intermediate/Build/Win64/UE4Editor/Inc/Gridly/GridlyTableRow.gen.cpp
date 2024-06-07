// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gridly/Public/GridlyTableRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridlyTableRow() {}
// Cross Module References
	GRIDLY_API UScriptStruct* Z_Construct_UScriptStruct_FGridlyTableRow();
	UPackage* Z_Construct_UPackage__Script_Gridly();
	GRIDLY_API UScriptStruct* Z_Construct_UScriptStruct_FGridlyTableCell();
// End Cross Module References
class UScriptStruct* FGridlyTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GRIDLY_API uint32 Get_Z_Construct_UScriptStruct_FGridlyTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridlyTableRow, Z_Construct_UPackage__Script_Gridly(), TEXT("GridlyTableRow"), sizeof(FGridlyTableRow), Get_Z_Construct_UScriptStruct_FGridlyTableRow_Hash());
	}
	return Singleton;
}
template<> GRIDLY_API UScriptStruct* StaticStruct<FGridlyTableRow>()
{
	return FGridlyTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGridlyTableRow(FGridlyTableRow::StaticStruct, TEXT("/Script/Gridly"), TEXT("GridlyTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_Gridly_StaticRegisterNativesFGridlyTableRow
{
	FScriptStruct_Gridly_StaticRegisterNativesFGridlyTableRow()
	{
		UScriptStruct::DeferCppStructOps<FGridlyTableRow>(FName(TEXT("GridlyTableRow")));
	}
} ScriptStruct_Gridly_StaticRegisterNativesFGridlyTableRow;
	struct Z_Construct_UScriptStruct_FGridlyTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cells_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cells_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Cells;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridlyTableRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GridlyTableRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGridlyTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridlyTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridlyTableRow_Statics::NewProp_Id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GridlyTableRow" },
		{ "ModuleRelativePath", "Public/GridlyTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGridlyTableRow_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridlyTableRow, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FGridlyTableRow_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridlyTableRow_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridlyTableRow_Statics::NewProp_Path_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GridlyTableRow" },
		{ "ModuleRelativePath", "Public/GridlyTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGridlyTableRow_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridlyTableRow, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FGridlyTableRow_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridlyTableRow_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridlyTableRow_Statics::NewProp_Cells_Inner = { "Cells", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGridlyTableCell, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridlyTableRow_Statics::NewProp_Cells_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GridlyTableRow" },
		{ "ModuleRelativePath", "Public/GridlyTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGridlyTableRow_Statics::NewProp_Cells = { "Cells", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridlyTableRow, Cells), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridlyTableRow_Statics::NewProp_Cells_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridlyTableRow_Statics::NewProp_Cells_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridlyTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridlyTableRow_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridlyTableRow_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridlyTableRow_Statics::NewProp_Cells_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridlyTableRow_Statics::NewProp_Cells,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridlyTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Gridly,
		nullptr,
		&NewStructOps,
		"GridlyTableRow",
		sizeof(FGridlyTableRow),
		alignof(FGridlyTableRow),
		Z_Construct_UScriptStruct_FGridlyTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridlyTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGridlyTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridlyTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGridlyTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGridlyTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Gridly();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GridlyTableRow"), sizeof(FGridlyTableRow), Get_Z_Construct_UScriptStruct_FGridlyTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGridlyTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGridlyTableRow_Hash() { return 1414757107U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

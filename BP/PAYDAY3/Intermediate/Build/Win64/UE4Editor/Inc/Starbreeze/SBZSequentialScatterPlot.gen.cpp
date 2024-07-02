// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSequentialScatterPlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSequentialScatterPlot() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSequentialScatterPlot();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FSBZSequentialScatterPlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSequentialScatterPlot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSequentialScatterPlot, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSequentialScatterPlot"), sizeof(FSBZSequentialScatterPlot), Get_Z_Construct_UScriptStruct_FSBZSequentialScatterPlot_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSequentialScatterPlot>()
{
	return FSBZSequentialScatterPlot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSequentialScatterPlot(FSBZSequentialScatterPlot::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSequentialScatterPlot"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSequentialScatterPlot
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSequentialScatterPlot()
	{
		UScriptStruct::DeferCppStructOps<FSBZSequentialScatterPlot>(FName(TEXT("SBZSequentialScatterPlot")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSequentialScatterPlot;
	struct Z_Construct_UScriptStruct_FSBZSequentialScatterPlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSequentialScatterPlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSequentialScatterPlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSequentialScatterPlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSequentialScatterPlot>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSequentialScatterPlot_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSequentialScatterPlot_Statics::NewProp_Points_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSequentialScatterPlot" },
		{ "ModuleRelativePath", "Public/SBZSequentialScatterPlot.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSequentialScatterPlot_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSequentialScatterPlot, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSequentialScatterPlot_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSequentialScatterPlot_Statics::NewProp_Points_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSequentialScatterPlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSequentialScatterPlot_Statics::NewProp_Points_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSequentialScatterPlot_Statics::NewProp_Points,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSequentialScatterPlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSequentialScatterPlot",
		sizeof(FSBZSequentialScatterPlot),
		alignof(FSBZSequentialScatterPlot),
		Z_Construct_UScriptStruct_FSBZSequentialScatterPlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSequentialScatterPlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSequentialScatterPlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSequentialScatterPlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSequentialScatterPlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSequentialScatterPlot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSequentialScatterPlot"), sizeof(FSBZSequentialScatterPlot), Get_Z_Construct_UScriptStruct_FSBZSequentialScatterPlot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSequentialScatterPlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSequentialScatterPlot_Hash() { return 3923640116U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

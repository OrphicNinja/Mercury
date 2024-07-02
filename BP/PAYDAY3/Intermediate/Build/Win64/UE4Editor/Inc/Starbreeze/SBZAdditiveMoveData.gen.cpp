// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAdditiveMoveData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAdditiveMoveData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAdditiveMoveData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
class UScriptStruct* FSBZAdditiveMoveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAdditiveMoveData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAdditiveMoveData"), sizeof(FSBZAdditiveMoveData), Get_Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAdditiveMoveData>()
{
	return FSBZAdditiveMoveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAdditiveMoveData(FSBZAdditiveMoveData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAdditiveMoveData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAdditiveMoveData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAdditiveMoveData()
	{
		UScriptStruct::DeferCppStructOps<FSBZAdditiveMoveData>(FName(TEXT("SBZAdditiveMoveData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAdditiveMoveData;
	struct Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveMoveAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditiveMoveAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveCameraAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditiveCameraAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveMovePlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditiveMovePlayRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAdditiveMoveData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAdditiveMoveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Statics::NewProp_AdditiveMoveAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAdditiveMoveData" },
		{ "ModuleRelativePath", "Public/SBZAdditiveMoveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Statics::NewProp_AdditiveMoveAlpha = { "AdditiveMoveAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAdditiveMoveData, AdditiveMoveAlpha), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Statics::NewProp_AdditiveMoveAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Statics::NewProp_AdditiveMoveAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Statics::NewProp_AdditiveCameraAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAdditiveMoveData" },
		{ "ModuleRelativePath", "Public/SBZAdditiveMoveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Statics::NewProp_AdditiveCameraAlpha = { "AdditiveCameraAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAdditiveMoveData, AdditiveCameraAlpha), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Statics::NewProp_AdditiveCameraAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Statics::NewProp_AdditiveCameraAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Statics::NewProp_AdditiveMovePlayRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAdditiveMoveData" },
		{ "ModuleRelativePath", "Public/SBZAdditiveMoveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Statics::NewProp_AdditiveMovePlayRate = { "AdditiveMovePlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAdditiveMoveData, AdditiveMovePlayRate), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Statics::NewProp_AdditiveMovePlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Statics::NewProp_AdditiveMovePlayRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Statics::NewProp_AdditiveMoveAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Statics::NewProp_AdditiveCameraAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Statics::NewProp_AdditiveMovePlayRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAdditiveMoveData",
		sizeof(FSBZAdditiveMoveData),
		alignof(FSBZAdditiveMoveData),
		Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAdditiveMoveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAdditiveMoveData"), sizeof(FSBZAdditiveMoveData), Get_Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAdditiveMoveData_Hash() { return 20659652U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

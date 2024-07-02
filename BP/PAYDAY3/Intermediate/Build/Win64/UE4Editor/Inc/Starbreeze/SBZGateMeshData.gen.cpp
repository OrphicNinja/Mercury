// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGateMeshData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGateMeshData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGateMeshData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FSBZGateMeshData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZGateMeshData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZGateMeshData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZGateMeshData"), sizeof(FSBZGateMeshData), Get_Z_Construct_UScriptStruct_FSBZGateMeshData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZGateMeshData>()
{
	return FSBZGateMeshData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZGateMeshData(FSBZGateMeshData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZGateMeshData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGateMeshData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGateMeshData()
	{
		UScriptStruct::DeferCppStructOps<FSBZGateMeshData>(FName(TEXT("SBZGateMeshData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZGateMeshData;
	struct Z_Construct_UScriptStruct_FSBZGateMeshData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshSelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundSelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalBoundBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalBoundBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalActorBoundBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalActorBoundBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHingedRight_MetaData[];
#endif
		static void NewProp_bIsHingedRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHingedRight;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SnapPointsArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapPointsArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SnapPointsArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZGateMeshData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZGateMeshData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_MeshSelector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGateMeshData" },
		{ "ModuleRelativePath", "Public/SBZGateMeshData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_MeshSelector = { "MeshSelector", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGateMeshData, MeshSelector), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_MeshSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_MeshSelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_BoundSelector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGateMeshData" },
		{ "ModuleRelativePath", "Public/SBZGateMeshData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_BoundSelector = { "BoundSelector", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGateMeshData, BoundSelector), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_BoundSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_BoundSelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_LocalBoundBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGateMeshData" },
		{ "ModuleRelativePath", "Public/SBZGateMeshData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_LocalBoundBox = { "LocalBoundBox", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGateMeshData, LocalBoundBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_LocalBoundBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_LocalBoundBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_LocalActorBoundBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGateMeshData" },
		{ "ModuleRelativePath", "Public/SBZGateMeshData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_LocalActorBoundBox = { "LocalActorBoundBox", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGateMeshData, LocalActorBoundBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_LocalActorBoundBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_LocalActorBoundBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_bIsHingedRight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGateMeshData" },
		{ "ModuleRelativePath", "Public/SBZGateMeshData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_bIsHingedRight_SetBit(void* Obj)
	{
		((FSBZGateMeshData*)Obj)->bIsHingedRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_bIsHingedRight = { "bIsHingedRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZGateMeshData), &Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_bIsHingedRight_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_bIsHingedRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_bIsHingedRight_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_SnapPointsArray_Inner = { "SnapPointsArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_SnapPointsArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGateMeshData" },
		{ "ModuleRelativePath", "Public/SBZGateMeshData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_SnapPointsArray = { "SnapPointsArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGateMeshData, SnapPointsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_SnapPointsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_SnapPointsArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_MeshSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_BoundSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_LocalBoundBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_LocalActorBoundBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_bIsHingedRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_SnapPointsArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::NewProp_SnapPointsArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZGateMeshData",
		sizeof(FSBZGateMeshData),
		alignof(FSBZGateMeshData),
		Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZGateMeshData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZGateMeshData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZGateMeshData"), sizeof(FSBZGateMeshData), Get_Z_Construct_UScriptStruct_FSBZGateMeshData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZGateMeshData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZGateMeshData_Hash() { return 985939679U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

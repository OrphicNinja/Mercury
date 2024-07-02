// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gridly/Public/GridlyColumnInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridlyColumnInfo() {}
// Cross Module References
	GRIDLY_API UScriptStruct* Z_Construct_UScriptStruct_FGridlyColumnInfo();
	UPackage* Z_Construct_UPackage__Script_Gridly();
	GRIDLY_API UEnum* Z_Construct_UEnum_Gridly_EGridlyColumnDataType();
// End Cross Module References
class UScriptStruct* FGridlyColumnInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GRIDLY_API uint32 Get_Z_Construct_UScriptStruct_FGridlyColumnInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridlyColumnInfo, Z_Construct_UPackage__Script_Gridly(), TEXT("GridlyColumnInfo"), sizeof(FGridlyColumnInfo), Get_Z_Construct_UScriptStruct_FGridlyColumnInfo_Hash());
	}
	return Singleton;
}
template<> GRIDLY_API UScriptStruct* StaticStruct<FGridlyColumnInfo>()
{
	return FGridlyColumnInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGridlyColumnInfo(FGridlyColumnInfo::StaticStruct, TEXT("/Script/Gridly"), TEXT("GridlyColumnInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Gridly_StaticRegisterNativesFGridlyColumnInfo
{
	FScriptStruct_Gridly_StaticRegisterNativesFGridlyColumnInfo()
	{
		UScriptStruct::DeferCppStructOps<FGridlyColumnInfo>(FName(TEXT("GridlyColumnInfo")));
	}
} ScriptStruct_Gridly_StaticRegisterNativesFGridlyColumnInfo;
	struct Z_Construct_UScriptStruct_FGridlyColumnInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DataType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridlyColumnInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GridlyColumnInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGridlyColumnInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridlyColumnInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridlyColumnInfo_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GridlyColumnInfo" },
		{ "ModuleRelativePath", "Public/GridlyColumnInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGridlyColumnInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridlyColumnInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FGridlyColumnInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridlyColumnInfo_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGridlyColumnInfo_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridlyColumnInfo_Statics::NewProp_DataType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GridlyColumnInfo" },
		{ "ModuleRelativePath", "Public/GridlyColumnInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGridlyColumnInfo_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridlyColumnInfo, DataType), Z_Construct_UEnum_Gridly_EGridlyColumnDataType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridlyColumnInfo_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridlyColumnInfo_Statics::NewProp_DataType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridlyColumnInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridlyColumnInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridlyColumnInfo_Statics::NewProp_DataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridlyColumnInfo_Statics::NewProp_DataType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridlyColumnInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Gridly,
		nullptr,
		&NewStructOps,
		"GridlyColumnInfo",
		sizeof(FGridlyColumnInfo),
		alignof(FGridlyColumnInfo),
		Z_Construct_UScriptStruct_FGridlyColumnInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridlyColumnInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGridlyColumnInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridlyColumnInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGridlyColumnInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGridlyColumnInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Gridly();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GridlyColumnInfo"), sizeof(FGridlyColumnInfo), Get_Z_Construct_UScriptStruct_FGridlyColumnInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGridlyColumnInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGridlyColumnInfo_Hash() { return 2566374852U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

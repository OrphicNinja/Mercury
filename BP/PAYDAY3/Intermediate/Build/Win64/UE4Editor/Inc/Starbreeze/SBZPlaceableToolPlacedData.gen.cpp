// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlaceableToolPlacedData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlaceableToolPlacedData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameEventStructBase();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableToolBase_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZPlaceableToolPlacedData>() == std::is_polymorphic<FSBZGameEventStructBase>(), "USTRUCT FSBZPlaceableToolPlacedData cannot be polymorphic unless super FSBZGameEventStructBase is polymorphic");

class UScriptStruct* FSBZPlaceableToolPlacedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPlaceableToolPlacedData"), sizeof(FSBZPlaceableToolPlacedData), Get_Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPlaceableToolPlacedData>()
{
	return FSBZPlaceableToolPlacedData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPlaceableToolPlacedData(FSBZPlaceableToolPlacedData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPlaceableToolPlacedData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlaceableToolPlacedData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlaceableToolPlacedData()
	{
		UScriptStruct::DeferCppStructOps<FSBZPlaceableToolPlacedData>(FName(TEXT("SBZPlaceableToolPlacedData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlaceableToolPlacedData;
	struct Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaceableTool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaceableTool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceableToolPlacedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPlaceableToolPlacedData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableToolPlacedData" },
		{ "ModuleRelativePath", "Public/SBZPlaceableToolPlacedData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlaceableToolPlacedData, OwnerCharacter), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData_Statics::NewProp_OwnerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData_Statics::NewProp_OwnerCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData_Statics::NewProp_PlaceableTool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableToolPlacedData" },
		{ "ModuleRelativePath", "Public/SBZPlaceableToolPlacedData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData_Statics::NewProp_PlaceableTool = { "PlaceableTool", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlaceableToolPlacedData, PlaceableTool), Z_Construct_UClass_ASBZPlaceableToolBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData_Statics::NewProp_PlaceableTool_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData_Statics::NewProp_PlaceableTool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData_Statics::NewProp_OwnerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData_Statics::NewProp_PlaceableTool,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZGameEventStructBase,
		&NewStructOps,
		"SBZPlaceableToolPlacedData",
		sizeof(FSBZPlaceableToolPlacedData),
		alignof(FSBZPlaceableToolPlacedData),
		Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPlaceableToolPlacedData"), sizeof(FSBZPlaceableToolPlacedData), Get_Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPlaceableToolPlacedData_Hash() { return 2876890006U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

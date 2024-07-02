// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlaceableChargesPlacedData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlaceableChargesPlacedData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameEventStructBase();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableCharges_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZPlaceableChargesPlacedData>() == std::is_polymorphic<FSBZGameEventStructBase>(), "USTRUCT FSBZPlaceableChargesPlacedData cannot be polymorphic unless super FSBZGameEventStructBase is polymorphic");

class UScriptStruct* FSBZPlaceableChargesPlacedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPlaceableChargesPlacedData"), sizeof(FSBZPlaceableChargesPlacedData), Get_Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPlaceableChargesPlacedData>()
{
	return FSBZPlaceableChargesPlacedData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPlaceableChargesPlacedData(FSBZPlaceableChargesPlacedData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPlaceableChargesPlacedData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlaceableChargesPlacedData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlaceableChargesPlacedData()
	{
		UScriptStruct::DeferCppStructOps<FSBZPlaceableChargesPlacedData>(FName(TEXT("SBZPlaceableChargesPlacedData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlaceableChargesPlacedData;
	struct Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaceableCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaceableCharge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceableChargesPlacedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPlaceableChargesPlacedData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableChargesPlacedData" },
		{ "ModuleRelativePath", "Public/SBZPlaceableChargesPlacedData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlaceableChargesPlacedData, OwnerCharacter), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData_Statics::NewProp_OwnerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData_Statics::NewProp_OwnerCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData_Statics::NewProp_PlaceableCharge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableChargesPlacedData" },
		{ "ModuleRelativePath", "Public/SBZPlaceableChargesPlacedData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData_Statics::NewProp_PlaceableCharge = { "PlaceableCharge", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlaceableChargesPlacedData, PlaceableCharge), Z_Construct_UClass_ASBZPlaceableCharges_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData_Statics::NewProp_PlaceableCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData_Statics::NewProp_PlaceableCharge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData_Statics::NewProp_OwnerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData_Statics::NewProp_PlaceableCharge,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZGameEventStructBase,
		&NewStructOps,
		"SBZPlaceableChargesPlacedData",
		sizeof(FSBZPlaceableChargesPlacedData),
		alignof(FSBZPlaceableChargesPlacedData),
		Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPlaceableChargesPlacedData"), sizeof(FSBZPlaceableChargesPlacedData), Get_Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPlaceableChargesPlacedData_Hash() { return 2994836103U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDefeatStateChangedData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDefeatStateChangedData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDefeatStateChangedData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameEventStructBase();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3DefeatState();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZDefeatStateChangedData>() == std::is_polymorphic<FSBZGameEventStructBase>(), "USTRUCT FSBZDefeatStateChangedData cannot be polymorphic unless super FSBZGameEventStructBase is polymorphic");

class UScriptStruct* FSBZDefeatStateChangedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZDefeatStateChangedData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZDefeatStateChangedData"), sizeof(FSBZDefeatStateChangedData), Get_Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZDefeatStateChangedData>()
{
	return FSBZDefeatStateChangedData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZDefeatStateChangedData(FSBZDefeatStateChangedData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZDefeatStateChangedData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDefeatStateChangedData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDefeatStateChangedData()
	{
		UScriptStruct::DeferCppStructOps<FSBZDefeatStateChangedData>(FName(TEXT("SBZDefeatStateChangedData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZDefeatStateChangedData;
	struct Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldDefeatState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldDefeatState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldDefeatState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewDefeatState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewDefeatState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewDefeatState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInitialDefeatStateChange_MetaData[];
#endif
		static void NewProp_bIsInitialDefeatStateChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInitialDefeatStateChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZDefeatStateChangedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZDefeatStateChangedData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::NewProp_OldDefeatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::NewProp_OldDefeatState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDefeatStateChangedData" },
		{ "ModuleRelativePath", "Public/SBZDefeatStateChangedData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::NewProp_OldDefeatState = { "OldDefeatState", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDefeatStateChangedData, OldDefeatState), Z_Construct_UEnum_Starbreeze_EPD3DefeatState, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::NewProp_OldDefeatState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::NewProp_OldDefeatState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::NewProp_NewDefeatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::NewProp_NewDefeatState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDefeatStateChangedData" },
		{ "ModuleRelativePath", "Public/SBZDefeatStateChangedData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::NewProp_NewDefeatState = { "NewDefeatState", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDefeatStateChangedData, NewDefeatState), Z_Construct_UEnum_Starbreeze_EPD3DefeatState, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::NewProp_NewDefeatState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::NewProp_NewDefeatState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::NewProp_bIsInitialDefeatStateChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDefeatStateChangedData" },
		{ "ModuleRelativePath", "Public/SBZDefeatStateChangedData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::NewProp_bIsInitialDefeatStateChange_SetBit(void* Obj)
	{
		((FSBZDefeatStateChangedData*)Obj)->bIsInitialDefeatStateChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::NewProp_bIsInitialDefeatStateChange = { "bIsInitialDefeatStateChange", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZDefeatStateChangedData), &Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::NewProp_bIsInitialDefeatStateChange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::NewProp_bIsInitialDefeatStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::NewProp_bIsInitialDefeatStateChange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::NewProp_OldDefeatState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::NewProp_OldDefeatState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::NewProp_NewDefeatState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::NewProp_NewDefeatState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::NewProp_bIsInitialDefeatStateChange,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZGameEventStructBase,
		&NewStructOps,
		"SBZDefeatStateChangedData",
		sizeof(FSBZDefeatStateChangedData),
		alignof(FSBZDefeatStateChangedData),
		Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZDefeatStateChangedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZDefeatStateChangedData"), sizeof(FSBZDefeatStateChangedData), Get_Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZDefeatStateChangedData_Hash() { return 2733740010U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

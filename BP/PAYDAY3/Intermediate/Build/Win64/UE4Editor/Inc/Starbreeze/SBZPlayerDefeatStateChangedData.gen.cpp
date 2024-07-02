// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerDefeatStateChangedData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerDefeatStateChangedData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDefeatStateChangedData();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZPlayerDefeatStateChangedData>() == std::is_polymorphic<FSBZDefeatStateChangedData>(), "USTRUCT FSBZPlayerDefeatStateChangedData cannot be polymorphic unless super FSBZDefeatStateChangedData is polymorphic");

class UScriptStruct* FSBZPlayerDefeatStateChangedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPlayerDefeatStateChangedData"), sizeof(FSBZPlayerDefeatStateChangedData), Get_Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPlayerDefeatStateChangedData>()
{
	return FSBZPlayerDefeatStateChangedData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPlayerDefeatStateChangedData(FSBZPlayerDefeatStateChangedData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPlayerDefeatStateChangedData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerDefeatStateChangedData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerDefeatStateChangedData()
	{
		UScriptStruct::DeferCppStructOps<FSBZPlayerDefeatStateChangedData>(FName(TEXT("SBZPlayerDefeatStateChangedData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerDefeatStateChangedData;
	struct Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerDefeatStateChangedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPlayerDefeatStateChangedData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData_Statics::NewProp_PlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerDefeatStateChangedData" },
		{ "ModuleRelativePath", "Public/SBZPlayerDefeatStateChangedData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerDefeatStateChangedData, PlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData_Statics::NewProp_PlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData_Statics::NewProp_PlayerState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData_Statics::NewProp_PlayerState,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZDefeatStateChangedData,
		&NewStructOps,
		"SBZPlayerDefeatStateChangedData",
		sizeof(FSBZPlayerDefeatStateChangedData),
		alignof(FSBZPlayerDefeatStateChangedData),
		Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPlayerDefeatStateChangedData"), sizeof(FSBZPlayerDefeatStateChangedData), Get_Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData_Hash() { return 2152855278U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

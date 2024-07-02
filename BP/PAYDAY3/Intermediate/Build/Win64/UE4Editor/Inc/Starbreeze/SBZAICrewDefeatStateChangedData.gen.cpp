// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAICrewDefeatStateChangedData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAICrewDefeatStateChangedData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDefeatStateChangedData();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAICrewState_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZAICrewDefeatStateChangedData>() == std::is_polymorphic<FSBZDefeatStateChangedData>(), "USTRUCT FSBZAICrewDefeatStateChangedData cannot be polymorphic unless super FSBZDefeatStateChangedData is polymorphic");

class UScriptStruct* FSBZAICrewDefeatStateChangedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAICrewDefeatStateChangedData"), sizeof(FSBZAICrewDefeatStateChangedData), Get_Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAICrewDefeatStateChangedData>()
{
	return FSBZAICrewDefeatStateChangedData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAICrewDefeatStateChangedData(FSBZAICrewDefeatStateChangedData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAICrewDefeatStateChangedData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAICrewDefeatStateChangedData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAICrewDefeatStateChangedData()
	{
		UScriptStruct::DeferCppStructOps<FSBZAICrewDefeatStateChangedData>(FName(TEXT("SBZAICrewDefeatStateChangedData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAICrewDefeatStateChangedData;
	struct Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AICrewState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AICrewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAICrewDefeatStateChangedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAICrewDefeatStateChangedData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData_Statics::NewProp_AICrewState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewDefeatStateChangedData" },
		{ "ModuleRelativePath", "Public/SBZAICrewDefeatStateChangedData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData_Statics::NewProp_AICrewState = { "AICrewState", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAICrewDefeatStateChangedData, AICrewState), Z_Construct_UClass_ASBZAICrewState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData_Statics::NewProp_AICrewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData_Statics::NewProp_AICrewState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData_Statics::NewProp_AICrewState,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZDefeatStateChangedData,
		&NewStructOps,
		"SBZAICrewDefeatStateChangedData",
		sizeof(FSBZAICrewDefeatStateChangedData),
		alignof(FSBZAICrewDefeatStateChangedData),
		Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAICrewDefeatStateChangedData"), sizeof(FSBZAICrewDefeatStateChangedData), Get_Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAICrewDefeatStateChangedData_Hash() { return 4050739495U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

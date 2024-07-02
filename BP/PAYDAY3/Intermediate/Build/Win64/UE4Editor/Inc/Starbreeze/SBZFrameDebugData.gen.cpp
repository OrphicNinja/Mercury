// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFrameDebugData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFrameDebugData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZFrameDebugData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStageDebugData();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZFrameDebugData>() == std::is_polymorphic<FSBZStageDebugData>(), "USTRUCT FSBZFrameDebugData cannot be polymorphic unless super FSBZStageDebugData is polymorphic");

class UScriptStruct* FSBZFrameDebugData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZFrameDebugData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZFrameDebugData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZFrameDebugData"), sizeof(FSBZFrameDebugData), Get_Z_Construct_UScriptStruct_FSBZFrameDebugData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZFrameDebugData>()
{
	return FSBZFrameDebugData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZFrameDebugData(FSBZFrameDebugData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZFrameDebugData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZFrameDebugData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZFrameDebugData()
	{
		UScriptStruct::DeferCppStructOps<FSBZFrameDebugData>(FName(TEXT("SBZFrameDebugData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZFrameDebugData;
	struct Z_Construct_UScriptStruct_FSBZFrameDebugData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FrameId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFrameDebugData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZFrameDebugData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZFrameDebugData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZFrameDebugData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFrameDebugData_Statics::NewProp_FrameId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFrameDebugData" },
		{ "ModuleRelativePath", "Public/SBZFrameDebugData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZFrameDebugData_Statics::NewProp_FrameId = { "FrameId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFrameDebugData, FrameId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFrameDebugData_Statics::NewProp_FrameId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFrameDebugData_Statics::NewProp_FrameId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFrameDebugData_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFrameDebugData" },
		{ "ModuleRelativePath", "Public/SBZFrameDebugData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZFrameDebugData_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFrameDebugData, DeltaTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFrameDebugData_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFrameDebugData_Statics::NewProp_DeltaTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZFrameDebugData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFrameDebugData_Statics::NewProp_FrameId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFrameDebugData_Statics::NewProp_DeltaTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZFrameDebugData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZStageDebugData,
		&NewStructOps,
		"SBZFrameDebugData",
		sizeof(FSBZFrameDebugData),
		alignof(FSBZFrameDebugData),
		Z_Construct_UScriptStruct_FSBZFrameDebugData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFrameDebugData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFrameDebugData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFrameDebugData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZFrameDebugData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZFrameDebugData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZFrameDebugData"), sizeof(FSBZFrameDebugData), Get_Z_Construct_UScriptStruct_FSBZFrameDebugData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZFrameDebugData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZFrameDebugData_Hash() { return 520752669U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

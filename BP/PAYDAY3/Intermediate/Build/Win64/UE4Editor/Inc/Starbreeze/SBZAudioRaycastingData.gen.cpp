// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAudioRaycastingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAudioRaycastingData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAudioRaycastingData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZAudioRaycastingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAudioRaycastingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAudioRaycastingData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAudioRaycastingData"), sizeof(FSBZAudioRaycastingData), Get_Z_Construct_UScriptStruct_FSBZAudioRaycastingData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAudioRaycastingData>()
{
	return FSBZAudioRaycastingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAudioRaycastingData(FSBZAudioRaycastingData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAudioRaycastingData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAudioRaycastingData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAudioRaycastingData()
	{
		UScriptStruct::DeferCppStructOps<FSBZAudioRaycastingData>(FName(TEXT("SBZAudioRaycastingData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAudioRaycastingData;
	struct Z_Construct_UScriptStruct_FSBZAudioRaycastingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAudioRaycastingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAudioRaycastingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAudioRaycastingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAudioRaycastingData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAudioRaycastingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAudioRaycastingData",
		sizeof(FSBZAudioRaycastingData),
		alignof(FSBZAudioRaycastingData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAudioRaycastingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAudioRaycastingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAudioRaycastingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAudioRaycastingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAudioRaycastingData"), sizeof(FSBZAudioRaycastingData), Get_Z_Construct_UScriptStruct_FSBZAudioRaycastingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAudioRaycastingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAudioRaycastingData_Hash() { return 1662977147U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

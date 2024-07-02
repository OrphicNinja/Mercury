// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAnimationSpawnedActorCPD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnimationSpawnedActorCPD() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZAnimationSpawnedActorCPD::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAnimationSpawnedActorCPD"), sizeof(FSBZAnimationSpawnedActorCPD), Get_Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAnimationSpawnedActorCPD>()
{
	return FSBZAnimationSpawnedActorCPD::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAnimationSpawnedActorCPD(FSBZAnimationSpawnedActorCPD::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAnimationSpawnedActorCPD"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimationSpawnedActorCPD
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimationSpawnedActorCPD()
	{
		UScriptStruct::DeferCppStructOps<FSBZAnimationSpawnedActorCPD>(FName(TEXT("SBZAnimationSpawnedActorCPD")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimationSpawnedActorCPD;
	struct Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPDIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CPDIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPDValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CPDValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAnimationSpawnedActorCPD.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAnimationSpawnedActorCPD>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD_Statics::NewProp_CPDIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimationSpawnedActorCPD" },
		{ "ModuleRelativePath", "Public/SBZAnimationSpawnedActorCPD.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD_Statics::NewProp_CPDIndex = { "CPDIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimationSpawnedActorCPD, CPDIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD_Statics::NewProp_CPDIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD_Statics::NewProp_CPDIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD_Statics::NewProp_CPDValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimationSpawnedActorCPD" },
		{ "ModuleRelativePath", "Public/SBZAnimationSpawnedActorCPD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD_Statics::NewProp_CPDValue = { "CPDValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimationSpawnedActorCPD, CPDValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD_Statics::NewProp_CPDValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD_Statics::NewProp_CPDValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD_Statics::NewProp_CPDIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD_Statics::NewProp_CPDValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAnimationSpawnedActorCPD",
		sizeof(FSBZAnimationSpawnedActorCPD),
		alignof(FSBZAnimationSpawnedActorCPD),
		Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAnimationSpawnedActorCPD"), sizeof(FSBZAnimationSpawnedActorCPD), Get_Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD_Hash() { return 3042850168U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

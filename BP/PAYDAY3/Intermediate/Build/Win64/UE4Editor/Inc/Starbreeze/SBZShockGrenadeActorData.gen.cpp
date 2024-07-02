// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZShockGrenadeActorData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZShockGrenadeActorData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZShockGrenadeActorData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZShockGrenadeActorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZShockGrenadeActorData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZShockGrenadeActorData"), sizeof(FSBZShockGrenadeActorData), Get_Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZShockGrenadeActorData>()
{
	return FSBZShockGrenadeActorData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZShockGrenadeActorData(FSBZShockGrenadeActorData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZShockGrenadeActorData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZShockGrenadeActorData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZShockGrenadeActorData()
	{
		UScriptStruct::DeferCppStructOps<FSBZShockGrenadeActorData>(FName(TEXT("SBZShockGrenadeActorData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZShockGrenadeActorData;
	struct Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChainNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsExplosionTriggered_MetaData[];
#endif
		static void NewProp_bIsExplosionTriggered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsExplosionTriggered;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZShockGrenadeActorData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZShockGrenadeActorData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Statics::NewProp_ChainNumber_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShockGrenadeActorData" },
		{ "ModuleRelativePath", "Public/SBZShockGrenadeActorData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Statics::NewProp_ChainNumber = { "ChainNumber", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZShockGrenadeActorData, ChainNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Statics::NewProp_ChainNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Statics::NewProp_ChainNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Statics::NewProp_bIsExplosionTriggered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShockGrenadeActorData" },
		{ "ModuleRelativePath", "Public/SBZShockGrenadeActorData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Statics::NewProp_bIsExplosionTriggered_SetBit(void* Obj)
	{
		((FSBZShockGrenadeActorData*)Obj)->bIsExplosionTriggered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Statics::NewProp_bIsExplosionTriggered = { "bIsExplosionTriggered", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZShockGrenadeActorData), &Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Statics::NewProp_bIsExplosionTriggered_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Statics::NewProp_bIsExplosionTriggered_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Statics::NewProp_bIsExplosionTriggered_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Statics::NewProp_ChainNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Statics::NewProp_bIsExplosionTriggered,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZShockGrenadeActorData",
		sizeof(FSBZShockGrenadeActorData),
		alignof(FSBZShockGrenadeActorData),
		Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZShockGrenadeActorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZShockGrenadeActorData"), sizeof(FSBZShockGrenadeActorData), Get_Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZShockGrenadeActorData_Hash() { return 2689717450U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

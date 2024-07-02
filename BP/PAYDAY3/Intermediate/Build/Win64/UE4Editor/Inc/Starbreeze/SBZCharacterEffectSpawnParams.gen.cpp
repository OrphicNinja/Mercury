// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterEffectSpawnParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterEffectSpawnParams() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZCharacterEffectSpawnParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCharacterEffectSpawnParams"), sizeof(FSBZCharacterEffectSpawnParams), Get_Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCharacterEffectSpawnParams>()
{
	return FSBZCharacterEffectSpawnParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCharacterEffectSpawnParams(FSBZCharacterEffectSpawnParams::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCharacterEffectSpawnParams"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCharacterEffectSpawnParams
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCharacterEffectSpawnParams()
	{
		UScriptStruct::DeferCppStructOps<FSBZCharacterEffectSpawnParams>(FName(TEXT("SBZCharacterEffectSpawnParams")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCharacterEffectSpawnParams;
	struct Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialCharacterEffectValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitialCharacterEffectValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHidesWhenActive_MetaData[];
#endif
		static void NewProp_bHidesWhenActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHidesWhenActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterEffectSpawnParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCharacterEffectSpawnParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::NewProp_InitialProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEffectSpawnParams" },
		{ "ModuleRelativePath", "Public/SBZCharacterEffectSpawnParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::NewProp_InitialProgress = { "InitialProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEffectSpawnParams, InitialProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::NewProp_InitialProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::NewProp_InitialProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::NewProp_InitialCharacterEffectValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEffectSpawnParams" },
		{ "ModuleRelativePath", "Public/SBZCharacterEffectSpawnParams.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::NewProp_InitialCharacterEffectValue = { "InitialCharacterEffectValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEffectSpawnParams, InitialCharacterEffectValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::NewProp_InitialCharacterEffectValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::NewProp_InitialCharacterEffectValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::NewProp_bHidesWhenActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEffectSpawnParams" },
		{ "ModuleRelativePath", "Public/SBZCharacterEffectSpawnParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::NewProp_bHidesWhenActive_SetBit(void* Obj)
	{
		((FSBZCharacterEffectSpawnParams*)Obj)->bHidesWhenActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::NewProp_bHidesWhenActive = { "bHidesWhenActive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZCharacterEffectSpawnParams), &Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::NewProp_bHidesWhenActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::NewProp_bHidesWhenActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::NewProp_bHidesWhenActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::NewProp_InitialProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::NewProp_InitialCharacterEffectValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::NewProp_bHidesWhenActive,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCharacterEffectSpawnParams",
		sizeof(FSBZCharacterEffectSpawnParams),
		alignof(FSBZCharacterEffectSpawnParams),
		Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCharacterEffectSpawnParams"), sizeof(FSBZCharacterEffectSpawnParams), Get_Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCharacterEffectSpawnParams_Hash() { return 41403039U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

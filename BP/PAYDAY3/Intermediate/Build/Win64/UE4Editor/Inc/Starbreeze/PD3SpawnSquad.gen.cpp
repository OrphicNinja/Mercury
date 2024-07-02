// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3SpawnSquad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3SpawnSquad() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3SpawnSquad();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3SpawnSquadPawn_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
class UScriptStruct* FPD3SpawnSquad::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FPD3SpawnSquad_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPD3SpawnSquad, Z_Construct_UPackage__Script_Starbreeze(), TEXT("PD3SpawnSquad"), sizeof(FPD3SpawnSquad), Get_Z_Construct_UScriptStruct_FPD3SpawnSquad_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FPD3SpawnSquad>()
{
	return FPD3SpawnSquad::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPD3SpawnSquad(FPD3SpawnSquad::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("PD3SpawnSquad"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFPD3SpawnSquad
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFPD3SpawnSquad()
	{
		UScriptStruct::DeferCppStructOps<FPD3SpawnSquad>(FName(TEXT("PD3SpawnSquad")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFPD3SpawnSquad;
	struct Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PawnArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedPawnTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedPawnTypes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PD3SpawnSquad.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPD3SpawnSquad>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::NewProp_PawnArray_Inner = { "PawnArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPD3SpawnSquadPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::NewProp_PawnArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3SpawnSquad" },
		{ "ModuleRelativePath", "Public/PD3SpawnSquad.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::NewProp_PawnArray = { "PawnArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3SpawnSquad, PawnArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::NewProp_PawnArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::NewProp_PawnArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::NewProp_Weight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3SpawnSquad" },
		{ "ModuleRelativePath", "Public/PD3SpawnSquad.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3SpawnSquad, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::NewProp_CachedPawnTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3SpawnSquad" },
		{ "ModuleRelativePath", "Public/PD3SpawnSquad.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::NewProp_CachedPawnTypes = { "CachedPawnTypes", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3SpawnSquad, CachedPawnTypes), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::NewProp_CachedPawnTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::NewProp_CachedPawnTypes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::NewProp_PawnArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::NewProp_PawnArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::NewProp_CachedPawnTypes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"PD3SpawnSquad",
		sizeof(FPD3SpawnSquad),
		alignof(FPD3SpawnSquad),
		Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPD3SpawnSquad()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPD3SpawnSquad_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PD3SpawnSquad"), sizeof(FPD3SpawnSquad), Get_Z_Construct_UScriptStruct_FPD3SpawnSquad_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPD3SpawnSquad_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPD3SpawnSquad_Hash() { return 1815776768U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

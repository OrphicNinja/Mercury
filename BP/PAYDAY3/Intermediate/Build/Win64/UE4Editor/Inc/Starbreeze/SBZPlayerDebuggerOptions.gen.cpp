// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerDebuggerOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerDebuggerOptions() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZPlayerDebuggerOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPlayerDebuggerOptions"), sizeof(FSBZPlayerDebuggerOptions), Get_Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPlayerDebuggerOptions>()
{
	return FSBZPlayerDebuggerOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPlayerDebuggerOptions(FSBZPlayerDebuggerOptions::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPlayerDebuggerOptions"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerDebuggerOptions
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerDebuggerOptions()
	{
		UScriptStruct::DeferCppStructOps<FSBZPlayerDebuggerOptions>(FName(TEXT("SBZPlayerDebuggerOptions")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerDebuggerOptions;
	struct Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGod_MetaData[];
#endif
		static void NewProp_bIsGod_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInfiniteAmmo_MetaData[];
#endif
		static void NewProp_bIsInfiniteAmmo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInfiniteAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInvisible_MetaData[];
#endif
		static void NewProp_bIsInvisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInvisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInaudible_MetaData[];
#endif
		static void NewProp_bIsInaudible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInaudible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerDebuggerOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPlayerDebuggerOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsGod_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerDebuggerOptions" },
		{ "ModuleRelativePath", "Public/SBZPlayerDebuggerOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsGod_SetBit(void* Obj)
	{
		((FSBZPlayerDebuggerOptions*)Obj)->bIsGod = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsGod = { "bIsGod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZPlayerDebuggerOptions), &Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsGod_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsGod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsGod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsInfiniteAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerDebuggerOptions" },
		{ "ModuleRelativePath", "Public/SBZPlayerDebuggerOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsInfiniteAmmo_SetBit(void* Obj)
	{
		((FSBZPlayerDebuggerOptions*)Obj)->bIsInfiniteAmmo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsInfiniteAmmo = { "bIsInfiniteAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZPlayerDebuggerOptions), &Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsInfiniteAmmo_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsInfiniteAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsInfiniteAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsInvisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerDebuggerOptions" },
		{ "ModuleRelativePath", "Public/SBZPlayerDebuggerOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsInvisible_SetBit(void* Obj)
	{
		((FSBZPlayerDebuggerOptions*)Obj)->bIsInvisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsInvisible = { "bIsInvisible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZPlayerDebuggerOptions), &Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsInvisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsInvisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsInvisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsInaudible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerDebuggerOptions" },
		{ "ModuleRelativePath", "Public/SBZPlayerDebuggerOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsInaudible_SetBit(void* Obj)
	{
		((FSBZPlayerDebuggerOptions*)Obj)->bIsInaudible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsInaudible = { "bIsInaudible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZPlayerDebuggerOptions), &Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsInaudible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsInaudible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsInaudible_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsGod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsInfiniteAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsInvisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::NewProp_bIsInaudible,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPlayerDebuggerOptions",
		sizeof(FSBZPlayerDebuggerOptions),
		alignof(FSBZPlayerDebuggerOptions),
		Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPlayerDebuggerOptions"), sizeof(FSBZPlayerDebuggerOptions), Get_Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions_Hash() { return 1257319922U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

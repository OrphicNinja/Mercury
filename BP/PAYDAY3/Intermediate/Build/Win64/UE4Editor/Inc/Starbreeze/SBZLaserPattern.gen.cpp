// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLaserPattern.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLaserPattern() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLaserPattern();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZLaserPattern::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLaserPattern_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLaserPattern, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLaserPattern"), sizeof(FSBZLaserPattern), Get_Z_Construct_UScriptStruct_FSBZLaserPattern_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLaserPattern>()
{
	return FSBZLaserPattern::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLaserPattern(FSBZLaserPattern::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLaserPattern"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLaserPattern
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLaserPattern()
	{
		UScriptStruct::DeferCppStructOps<FSBZLaserPattern>(FName(TEXT("SBZLaserPattern")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLaserPattern;
	struct Z_Construct_UScriptStruct_FSBZLaserPattern_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LaserIndexes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserIndexes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LaserIndexes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLaserPattern_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLaserPattern.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLaserPattern_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLaserPattern>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZLaserPattern_Statics::NewProp_LaserIndexes_Inner = { "LaserIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLaserPattern_Statics::NewProp_LaserIndexes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserPattern" },
		{ "ModuleRelativePath", "Public/SBZLaserPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZLaserPattern_Statics::NewProp_LaserIndexes = { "LaserIndexes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLaserPattern, LaserIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLaserPattern_Statics::NewProp_LaserIndexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLaserPattern_Statics::NewProp_LaserIndexes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLaserPattern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLaserPattern_Statics::NewProp_LaserIndexes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLaserPattern_Statics::NewProp_LaserIndexes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLaserPattern_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZLaserPattern",
		sizeof(FSBZLaserPattern),
		alignof(FSBZLaserPattern),
		Z_Construct_UScriptStruct_FSBZLaserPattern_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLaserPattern_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLaserPattern_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLaserPattern_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLaserPattern()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLaserPattern_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLaserPattern"), sizeof(FSBZLaserPattern), Get_Z_Construct_UScriptStruct_FSBZLaserPattern_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLaserPattern_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLaserPattern_Hash() { return 2378287381U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

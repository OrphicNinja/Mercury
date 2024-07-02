// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZShotgunSpreadPattern.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZShotgunSpreadPattern() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FSBZShotgunSpreadPattern::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZShotgunSpreadPattern"), sizeof(FSBZShotgunSpreadPattern), Get_Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZShotgunSpreadPattern>()
{
	return FSBZShotgunSpreadPattern::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZShotgunSpreadPattern(FSBZShotgunSpreadPattern::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZShotgunSpreadPattern"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZShotgunSpreadPattern
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZShotgunSpreadPattern()
	{
		UScriptStruct::DeferCppStructOps<FSBZShotgunSpreadPattern>(FName(TEXT("SBZShotgunSpreadPattern")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZShotgunSpreadPattern;
	struct Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PelletSpreadAngles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelletSpreadAngles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PelletSpreadAngles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZShotgunSpreadPattern.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZShotgunSpreadPattern>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern_Statics::NewProp_PelletSpreadAngles_Inner = { "PelletSpreadAngles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern_Statics::NewProp_PelletSpreadAngles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShotgunSpreadPattern" },
		{ "ModuleRelativePath", "Public/SBZShotgunSpreadPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern_Statics::NewProp_PelletSpreadAngles = { "PelletSpreadAngles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZShotgunSpreadPattern, PelletSpreadAngles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern_Statics::NewProp_PelletSpreadAngles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern_Statics::NewProp_PelletSpreadAngles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern_Statics::NewProp_PelletSpreadAngles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern_Statics::NewProp_PelletSpreadAngles,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZShotgunSpreadPattern",
		sizeof(FSBZShotgunSpreadPattern),
		alignof(FSBZShotgunSpreadPattern),
		Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZShotgunSpreadPattern"), sizeof(FSBZShotgunSpreadPattern), Get_Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern_Hash() { return 1130674110U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

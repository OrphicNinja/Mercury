// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLevelTimesStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLevelTimesStruct() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLevelTimesStruct();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZLevelTimesStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLevelTimesStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLevelTimesStruct, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLevelTimesStruct"), sizeof(FSBZLevelTimesStruct), Get_Z_Construct_UScriptStruct_FSBZLevelTimesStruct_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLevelTimesStruct>()
{
	return FSBZLevelTimesStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLevelTimesStruct(FSBZLevelTimesStruct::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLevelTimesStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLevelTimesStruct
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLevelTimesStruct()
	{
		UScriptStruct::DeferCppStructOps<FSBZLevelTimesStruct>(FName(TEXT("SBZLevelTimesStruct")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLevelTimesStruct;
	struct Z_Construct_UScriptStruct_FSBZLevelTimesStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoudTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoudTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StealthTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StealthTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLevelTimesStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLevelTimesStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLevelTimesStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLevelTimesStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLevelTimesStruct_Statics::NewProp_LoudTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLevelTimesStruct" },
		{ "ModuleRelativePath", "Public/SBZLevelTimesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZLevelTimesStruct_Statics::NewProp_LoudTime = { "LoudTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLevelTimesStruct, LoudTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLevelTimesStruct_Statics::NewProp_LoudTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLevelTimesStruct_Statics::NewProp_LoudTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLevelTimesStruct_Statics::NewProp_StealthTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLevelTimesStruct" },
		{ "ModuleRelativePath", "Public/SBZLevelTimesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZLevelTimesStruct_Statics::NewProp_StealthTime = { "StealthTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLevelTimesStruct, StealthTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLevelTimesStruct_Statics::NewProp_StealthTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLevelTimesStruct_Statics::NewProp_StealthTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLevelTimesStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLevelTimesStruct_Statics::NewProp_LoudTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLevelTimesStruct_Statics::NewProp_StealthTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLevelTimesStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZLevelTimesStruct",
		sizeof(FSBZLevelTimesStruct),
		alignof(FSBZLevelTimesStruct),
		Z_Construct_UScriptStruct_FSBZLevelTimesStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLevelTimesStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLevelTimesStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLevelTimesStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLevelTimesStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLevelTimesStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLevelTimesStruct"), sizeof(FSBZLevelTimesStruct), Get_Z_Construct_UScriptStruct_FSBZLevelTimesStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLevelTimesStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLevelTimesStruct_Hash() { return 3456719334U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

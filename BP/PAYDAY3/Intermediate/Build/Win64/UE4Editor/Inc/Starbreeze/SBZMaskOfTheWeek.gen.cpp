// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskOfTheWeek.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskOfTheWeek() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskOfTheWeek();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock();
// End Cross Module References
class UScriptStruct* FSBZMaskOfTheWeek::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMaskOfTheWeek_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMaskOfTheWeek, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMaskOfTheWeek"), sizeof(FSBZMaskOfTheWeek), Get_Z_Construct_UScriptStruct_FSBZMaskOfTheWeek_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMaskOfTheWeek>()
{
	return FSBZMaskOfTheWeek::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMaskOfTheWeek(FSBZMaskOfTheWeek::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMaskOfTheWeek"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskOfTheWeek
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskOfTheWeek()
	{
		UScriptStruct::DeferCppStructOps<FSBZMaskOfTheWeek>(FName(TEXT("SBZMaskOfTheWeek")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskOfTheWeek;
	struct Z_Construct_UScriptStruct_FSBZMaskOfTheWeek_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskOfTheWeekBlockArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskOfTheWeekBlockArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaskOfTheWeekBlockArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskOfTheWeek_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskOfTheWeek.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMaskOfTheWeek_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMaskOfTheWeek>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZMaskOfTheWeek_Statics::NewProp_MaskOfTheWeekBlockArray_Inner = { "MaskOfTheWeekBlockArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskOfTheWeek_Statics::NewProp_MaskOfTheWeekBlockArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskOfTheWeek" },
		{ "ModuleRelativePath", "Public/SBZMaskOfTheWeek.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZMaskOfTheWeek_Statics::NewProp_MaskOfTheWeekBlockArray = { "MaskOfTheWeekBlockArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMaskOfTheWeek, MaskOfTheWeekBlockArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskOfTheWeek_Statics::NewProp_MaskOfTheWeekBlockArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskOfTheWeek_Statics::NewProp_MaskOfTheWeekBlockArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMaskOfTheWeek_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskOfTheWeek_Statics::NewProp_MaskOfTheWeekBlockArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskOfTheWeek_Statics::NewProp_MaskOfTheWeekBlockArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMaskOfTheWeek_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZMaskOfTheWeek",
		sizeof(FSBZMaskOfTheWeek),
		alignof(FSBZMaskOfTheWeek),
		Z_Construct_UScriptStruct_FSBZMaskOfTheWeek_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskOfTheWeek_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskOfTheWeek_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskOfTheWeek_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskOfTheWeek()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMaskOfTheWeek_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMaskOfTheWeek"), sizeof(FSBZMaskOfTheWeek), Get_Z_Construct_UScriptStruct_FSBZMaskOfTheWeek_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMaskOfTheWeek_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMaskOfTheWeek_Hash() { return 1075172719U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

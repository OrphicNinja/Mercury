// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponPatternAreaPart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponPatternAreaPart() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZWeaponPatternAreaPart::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponPatternAreaPart"), sizeof(FSBZWeaponPatternAreaPart), Get_Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponPatternAreaPart>()
{
	return FSBZWeaponPatternAreaPart::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponPatternAreaPart(FSBZWeaponPatternAreaPart::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponPatternAreaPart"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponPatternAreaPart
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponPatternAreaPart()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponPatternAreaPart>(FName(TEXT("SBZWeaponPatternAreaPart")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponPatternAreaPart;
	struct Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_PartIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeFullPart_MetaData[];
#endif
		static void NewProp_bIncludeFullPart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeFullPart;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_SubPartIndexes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubPartIndexes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubPartIndexes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponPatternAreaPart.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponPatternAreaPart>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::NewProp_PartIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPatternAreaPart" },
		{ "ModuleRelativePath", "Public/SBZWeaponPatternAreaPart.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::NewProp_PartIndex = { "PartIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponPatternAreaPart, PartIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::NewProp_PartIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::NewProp_PartIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::NewProp_bIncludeFullPart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPatternAreaPart" },
		{ "ModuleRelativePath", "Public/SBZWeaponPatternAreaPart.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::NewProp_bIncludeFullPart_SetBit(void* Obj)
	{
		((FSBZWeaponPatternAreaPart*)Obj)->bIncludeFullPart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::NewProp_bIncludeFullPart = { "bIncludeFullPart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZWeaponPatternAreaPart), &Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::NewProp_bIncludeFullPart_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::NewProp_bIncludeFullPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::NewProp_bIncludeFullPart_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::NewProp_SubPartIndexes_Inner = { "SubPartIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::NewProp_SubPartIndexes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPatternAreaPart" },
		{ "ModuleRelativePath", "Public/SBZWeaponPatternAreaPart.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::NewProp_SubPartIndexes = { "SubPartIndexes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponPatternAreaPart, SubPartIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::NewProp_SubPartIndexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::NewProp_SubPartIndexes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::NewProp_PartIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::NewProp_bIncludeFullPart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::NewProp_SubPartIndexes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::NewProp_SubPartIndexes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponPatternAreaPart",
		sizeof(FSBZWeaponPatternAreaPart),
		alignof(FSBZWeaponPatternAreaPart),
		Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponPatternAreaPart"), sizeof(FSBZWeaponPatternAreaPart), Get_Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponPatternAreaPart_Hash() { return 1400422328U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

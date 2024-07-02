// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayersReadyStatusStateArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayersReadyStatusStateArray() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerReadyInfo();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZPlayersReadyStatusStateArray>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FSBZPlayersReadyStatusStateArray cannot be polymorphic unless super FFastArraySerializer is polymorphic");

class UScriptStruct* FSBZPlayersReadyStatusStateArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPlayersReadyStatusStateArray"), sizeof(FSBZPlayersReadyStatusStateArray), Get_Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPlayersReadyStatusStateArray>()
{
	return FSBZPlayersReadyStatusStateArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPlayersReadyStatusStateArray(FSBZPlayersReadyStatusStateArray::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPlayersReadyStatusStateArray"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayersReadyStatusStateArray
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayersReadyStatusStateArray()
	{
		UScriptStruct::DeferCppStructOps<FSBZPlayersReadyStatusStateArray>(FName(TEXT("SBZPlayersReadyStatusStateArray")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayersReadyStatusStateArray;
	struct Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SBZPlayersReadyInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SBZPlayersReadyInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SBZPlayersReadyInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayersReadyStatusStateArray.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPlayersReadyStatusStateArray>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray_Statics::NewProp_SBZPlayersReadyInfo_Inner = { "SBZPlayersReadyInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPlayerReadyInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray_Statics::NewProp_SBZPlayersReadyInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayersReadyStatusStateArray" },
		{ "ModuleRelativePath", "Public/SBZPlayersReadyStatusStateArray.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray_Statics::NewProp_SBZPlayersReadyInfo = { "SBZPlayersReadyInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayersReadyStatusStateArray, SBZPlayersReadyInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray_Statics::NewProp_SBZPlayersReadyInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray_Statics::NewProp_SBZPlayersReadyInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray_Statics::NewProp_SBZPlayersReadyInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray_Statics::NewProp_SBZPlayersReadyInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"SBZPlayersReadyStatusStateArray",
		sizeof(FSBZPlayersReadyStatusStateArray),
		alignof(FSBZPlayersReadyStatusStateArray),
		Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPlayersReadyStatusStateArray"), sizeof(FSBZPlayersReadyStatusStateArray), Get_Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPlayersReadyStatusStateArray_Hash() { return 2224543691U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPreferredPlayerCharacterArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPreferredPlayerCharacterArray() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCharacterData_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZPreferredPlayerCharacterArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPreferredPlayerCharacterArray"), sizeof(FSBZPreferredPlayerCharacterArray), Get_Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPreferredPlayerCharacterArray>()
{
	return FSBZPreferredPlayerCharacterArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPreferredPlayerCharacterArray(FSBZPreferredPlayerCharacterArray::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPreferredPlayerCharacterArray"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPreferredPlayerCharacterArray
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPreferredPlayerCharacterArray()
	{
		UScriptStruct::DeferCppStructOps<FSBZPreferredPlayerCharacterArray>(FName(TEXT("SBZPreferredPlayerCharacterArray")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPreferredPlayerCharacterArray;
	struct Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerPreferredCharacterArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPreferredCharacterArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerPreferredCharacterArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPreferredPlayerCharacterArray.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPreferredPlayerCharacterArray>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray_Statics::NewProp_PlayerPreferredCharacterArray_Inner = { "PlayerPreferredCharacterArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZPlayerCharacterData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray_Statics::NewProp_PlayerPreferredCharacterArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPreferredPlayerCharacterArray" },
		{ "ModuleRelativePath", "Public/SBZPreferredPlayerCharacterArray.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray_Statics::NewProp_PlayerPreferredCharacterArray = { "PlayerPreferredCharacterArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPreferredPlayerCharacterArray, PlayerPreferredCharacterArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray_Statics::NewProp_PlayerPreferredCharacterArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray_Statics::NewProp_PlayerPreferredCharacterArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray_Statics::NewProp_PlayerPreferredCharacterArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray_Statics::NewProp_PlayerPreferredCharacterArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPreferredPlayerCharacterArray",
		sizeof(FSBZPreferredPlayerCharacterArray),
		alignof(FSBZPreferredPlayerCharacterArray),
		Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPreferredPlayerCharacterArray"), sizeof(FSBZPreferredPlayerCharacterArray), Get_Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray_Hash() { return 3582509669U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

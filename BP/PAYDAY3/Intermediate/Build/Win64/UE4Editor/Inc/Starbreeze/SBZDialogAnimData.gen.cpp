// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDialogAnimData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDialogAnimData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDialogAnimData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFacialEmotion();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPhoneme();
// End Cross Module References
class UScriptStruct* FSBZDialogAnimData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZDialogAnimData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZDialogAnimData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZDialogAnimData"), sizeof(FSBZDialogAnimData), Get_Z_Construct_UScriptStruct_FSBZDialogAnimData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZDialogAnimData>()
{
	return FSBZDialogAnimData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZDialogAnimData(FSBZDialogAnimData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZDialogAnimData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDialogAnimData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDialogAnimData()
	{
		UScriptStruct::DeferCppStructOps<FSBZDialogAnimData>(FName(TEXT("SBZDialogAnimData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZDialogAnimData;
	struct Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhonemeDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PhonemeDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideFacialEmotion_MetaData[];
#endif
		static void NewProp_bOverrideFacialEmotion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideFacialEmotion;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FacialEmotion_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FacialEmotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FacialEmotion;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Phonemes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Phonemes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Phonemes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZDialogAnimData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZDialogAnimData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_PhonemeDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDialogAnimData" },
		{ "ModuleRelativePath", "Public/SBZDialogAnimData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_PhonemeDataTable = { "PhonemeDataTable", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDialogAnimData, PhonemeDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_PhonemeDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_PhonemeDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_bOverrideFacialEmotion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDialogAnimData" },
		{ "ModuleRelativePath", "Public/SBZDialogAnimData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_bOverrideFacialEmotion_SetBit(void* Obj)
	{
		((FSBZDialogAnimData*)Obj)->bOverrideFacialEmotion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_bOverrideFacialEmotion = { "bOverrideFacialEmotion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZDialogAnimData), &Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_bOverrideFacialEmotion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_bOverrideFacialEmotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_bOverrideFacialEmotion_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_FacialEmotion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_FacialEmotion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDialogAnimData" },
		{ "ModuleRelativePath", "Public/SBZDialogAnimData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_FacialEmotion = { "FacialEmotion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDialogAnimData, FacialEmotion), Z_Construct_UEnum_Starbreeze_ESBZFacialEmotion, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_FacialEmotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_FacialEmotion_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_Phonemes_Inner = { "Phonemes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPhoneme, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_Phonemes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDialogAnimData" },
		{ "ModuleRelativePath", "Public/SBZDialogAnimData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_Phonemes = { "Phonemes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDialogAnimData, Phonemes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_Phonemes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_Phonemes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_PhonemeDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_bOverrideFacialEmotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_FacialEmotion_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_FacialEmotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_Phonemes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::NewProp_Phonemes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZDialogAnimData",
		sizeof(FSBZDialogAnimData),
		alignof(FSBZDialogAnimData),
		Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZDialogAnimData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZDialogAnimData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZDialogAnimData"), sizeof(FSBZDialogAnimData), Get_Z_Construct_UScriptStruct_FSBZDialogAnimData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZDialogAnimData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZDialogAnimData_Hash() { return 3415880704U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

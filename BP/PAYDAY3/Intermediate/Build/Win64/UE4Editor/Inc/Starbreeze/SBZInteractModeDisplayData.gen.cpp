// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInteractModeDisplayData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInteractModeDisplayData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInteractModeDisplayData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZInteractModeDisplayData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZInteractModeDisplayData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZInteractModeDisplayData"), sizeof(FSBZInteractModeDisplayData), Get_Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZInteractModeDisplayData>()
{
	return FSBZInteractModeDisplayData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZInteractModeDisplayData(FSBZInteractModeDisplayData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZInteractModeDisplayData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInteractModeDisplayData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInteractModeDisplayData()
	{
		UScriptStruct::DeferCppStructOps<FSBZInteractModeDisplayData>(FName(TEXT("SBZInteractModeDisplayData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZInteractModeDisplayData;
	struct Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInstant_MetaData[];
#endif
		static void NewProp_bIsInstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFailed_MetaData[];
#endif
		static void NewProp_bIsFailed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAllowed_MetaData[];
#endif
		static void NewProp_bIsAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsIllegal_MetaData[];
#endif
		static void NewProp_bIsIllegal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsIllegal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractModeDisplayData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZInteractModeDisplayData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsInstant_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractModeDisplayData" },
		{ "ModuleRelativePath", "Public/SBZInteractModeDisplayData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsInstant_SetBit(void* Obj)
	{
		((FSBZInteractModeDisplayData*)Obj)->bIsInstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsInstant = { "bIsInstant", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZInteractModeDisplayData), &Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsInstant_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsInstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsInstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsFailed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractModeDisplayData" },
		{ "ModuleRelativePath", "Public/SBZInteractModeDisplayData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsFailed_SetBit(void* Obj)
	{
		((FSBZInteractModeDisplayData*)Obj)->bIsFailed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsFailed = { "bIsFailed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZInteractModeDisplayData), &Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsFailed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsAllowed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractModeDisplayData" },
		{ "ModuleRelativePath", "Public/SBZInteractModeDisplayData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsAllowed_SetBit(void* Obj)
	{
		((FSBZInteractModeDisplayData*)Obj)->bIsAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsAllowed = { "bIsAllowed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZInteractModeDisplayData), &Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsAllowed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsIllegal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractModeDisplayData" },
		{ "ModuleRelativePath", "Public/SBZInteractModeDisplayData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsIllegal_SetBit(void* Obj)
	{
		((FSBZInteractModeDisplayData*)Obj)->bIsIllegal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsIllegal = { "bIsIllegal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZInteractModeDisplayData), &Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsIllegal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsIllegal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsIllegal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_Text_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractModeDisplayData" },
		{ "ModuleRelativePath", "Public/SBZInteractModeDisplayData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractModeDisplayData, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsInstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_bIsIllegal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::NewProp_Text,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZInteractModeDisplayData",
		sizeof(FSBZInteractModeDisplayData),
		alignof(FSBZInteractModeDisplayData),
		Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZInteractModeDisplayData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZInteractModeDisplayData"), sizeof(FSBZInteractModeDisplayData), Get_Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZInteractModeDisplayData_Hash() { return 1855651964U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZActionMetaData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZActionMetaData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZActionMetaData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAttractorPredicate_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
class UScriptStruct* FSBZActionMetaData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZActionMetaData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZActionMetaData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZActionMetaData"), sizeof(FSBZActionMetaData), Get_Z_Construct_UScriptStruct_FSBZActionMetaData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZActionMetaData>()
{
	return FSBZActionMetaData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZActionMetaData(FSBZActionMetaData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZActionMetaData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZActionMetaData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZActionMetaData()
	{
		UScriptStruct::DeferCppStructOps<FSBZActionMetaData>(FName(TEXT("SBZActionMetaData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZActionMetaData;
	struct Z_Construct_UScriptStruct_FSBZActionMetaData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMaxAge_MetaData[];
#endif
		static void NewProp_bUseMaxAge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMaxAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMinAge_MetaData[];
#endif
		static void NewProp_bUseMinAge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMinAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttractorPredicates_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttractorPredicates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttractorPredicates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttractorPredicates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequiredTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutorRequiredTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExecutorRequiredTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZActionMetaData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZActionMetaData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_ItemName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActionMetaData" },
		{ "ModuleRelativePath", "Public/SBZActionMetaData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZActionMetaData, ItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_Action_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActionMetaData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZActionMetaData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZActionMetaData, Action), Z_Construct_UClass_USBZAIAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_Action_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_bUseMaxAge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActionMetaData" },
		{ "ModuleRelativePath", "Public/SBZActionMetaData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_bUseMaxAge_SetBit(void* Obj)
	{
		((FSBZActionMetaData*)Obj)->bUseMaxAge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_bUseMaxAge = { "bUseMaxAge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZActionMetaData), &Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_bUseMaxAge_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_bUseMaxAge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_bUseMaxAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_MaxAge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActionMetaData" },
		{ "ModuleRelativePath", "Public/SBZActionMetaData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_MaxAge = { "MaxAge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZActionMetaData, MaxAge), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_MaxAge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_MaxAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_bUseMinAge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActionMetaData" },
		{ "ModuleRelativePath", "Public/SBZActionMetaData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_bUseMinAge_SetBit(void* Obj)
	{
		((FSBZActionMetaData*)Obj)->bUseMinAge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_bUseMinAge = { "bUseMinAge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZActionMetaData), &Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_bUseMinAge_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_bUseMinAge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_bUseMinAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_MinAge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActionMetaData" },
		{ "ModuleRelativePath", "Public/SBZActionMetaData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_MinAge = { "MinAge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZActionMetaData, MinAge), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_MinAge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_MinAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_AttractorPredicates_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActionMetaData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZActionMetaData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_AttractorPredicates_Inner = { "AttractorPredicates", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAttractorPredicate_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_AttractorPredicates_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_AttractorPredicates_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_AttractorPredicates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActionMetaData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZActionMetaData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_AttractorPredicates = { "AttractorPredicates", nullptr, (EPropertyFlags)0x001000800200000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZActionMetaData, AttractorPredicates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_AttractorPredicates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_AttractorPredicates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_RequiredTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActionMetaData" },
		{ "ModuleRelativePath", "Public/SBZActionMetaData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_RequiredTags = { "RequiredTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZActionMetaData, RequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_RequiredTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_RequiredTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_ExecutorRequiredTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActionMetaData" },
		{ "ModuleRelativePath", "Public/SBZActionMetaData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_ExecutorRequiredTags = { "ExecutorRequiredTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZActionMetaData, ExecutorRequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_ExecutorRequiredTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_ExecutorRequiredTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_bUseMaxAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_MaxAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_bUseMinAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_MinAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_AttractorPredicates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_AttractorPredicates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_RequiredTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::NewProp_ExecutorRequiredTags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZActionMetaData",
		sizeof(FSBZActionMetaData),
		alignof(FSBZActionMetaData),
		Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZActionMetaData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZActionMetaData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZActionMetaData"), sizeof(FSBZActionMetaData), Get_Z_Construct_UScriptStruct_FSBZActionMetaData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZActionMetaData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZActionMetaData_Hash() { return 1333435109U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAllowedStanceTransition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAllowedStanceTransition() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAllowedStanceTransition();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCharacterStance();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
class UScriptStruct* FSBZAllowedStanceTransition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAllowedStanceTransition, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAllowedStanceTransition"), sizeof(FSBZAllowedStanceTransition), Get_Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAllowedStanceTransition>()
{
	return FSBZAllowedStanceTransition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAllowedStanceTransition(FSBZAllowedStanceTransition::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAllowedStanceTransition"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAllowedStanceTransition
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAllowedStanceTransition()
	{
		UScriptStruct::DeferCppStructOps<FSBZAllowedStanceTransition>(FName(TEXT("SBZAllowedStanceTransition")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAllowedStanceTransition;
	struct Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreviousStance_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousStance_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PreviousStance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentStance_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentStance_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentStance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockingTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockingTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAllowedStanceTransition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAllowedStanceTransition>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::NewProp_PreviousStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::NewProp_PreviousStance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAllowedStanceTransition" },
		{ "ModuleRelativePath", "Public/SBZAllowedStanceTransition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::NewProp_PreviousStance = { "PreviousStance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAllowedStanceTransition, PreviousStance), Z_Construct_UEnum_Starbreeze_ESBZCharacterStance, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::NewProp_PreviousStance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::NewProp_PreviousStance_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::NewProp_CurrentStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::NewProp_CurrentStance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAllowedStanceTransition" },
		{ "ModuleRelativePath", "Public/SBZAllowedStanceTransition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::NewProp_CurrentStance = { "CurrentStance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAllowedStanceTransition, CurrentStance), Z_Construct_UEnum_Starbreeze_ESBZCharacterStance, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::NewProp_CurrentStance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::NewProp_CurrentStance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::NewProp_BlockingTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAllowedStanceTransition" },
		{ "ModuleRelativePath", "Public/SBZAllowedStanceTransition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::NewProp_BlockingTags = { "BlockingTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAllowedStanceTransition, BlockingTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::NewProp_BlockingTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::NewProp_BlockingTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::NewProp_PreviousStance_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::NewProp_PreviousStance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::NewProp_CurrentStance_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::NewProp_CurrentStance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::NewProp_BlockingTags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAllowedStanceTransition",
		sizeof(FSBZAllowedStanceTransition),
		alignof(FSBZAllowedStanceTransition),
		Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAllowedStanceTransition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAllowedStanceTransition"), sizeof(FSBZAllowedStanceTransition), Get_Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAllowedStanceTransition_Hash() { return 1023837862U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

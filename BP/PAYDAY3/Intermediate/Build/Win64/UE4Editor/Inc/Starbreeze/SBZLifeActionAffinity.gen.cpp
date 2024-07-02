// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLifeActionAffinity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLifeActionAffinity() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLifeActionAffinity();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
class UScriptStruct* FSBZLifeActionAffinity::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLifeActionAffinity, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLifeActionAffinity"), sizeof(FSBZLifeActionAffinity), Get_Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLifeActionAffinity>()
{
	return FSBZLifeActionAffinity::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLifeActionAffinity(FSBZLifeActionAffinity::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLifeActionAffinity"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLifeActionAffinity
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLifeActionAffinity()
	{
		UScriptStruct::DeferCppStructOps<FSBZLifeActionAffinity>(FName(TEXT("SBZLifeActionAffinity")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLifeActionAffinity;
	struct Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffinityName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AffinityName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Actions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionAffinity.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLifeActionAffinity>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Statics::NewProp_AffinityName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionAffinity" },
		{ "ModuleRelativePath", "Public/SBZLifeActionAffinity.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Statics::NewProp_AffinityName = { "AffinityName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLifeActionAffinity, AffinityName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Statics::NewProp_AffinityName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Statics::NewProp_AffinityName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Statics::NewProp_Actions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionAffinity" },
		{ "ModuleRelativePath", "Public/SBZLifeActionAffinity.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLifeActionAffinity, Actions), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Statics::NewProp_Actions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Statics::NewProp_Actions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Statics::NewProp_CharacterScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionAffinity" },
		{ "ModuleRelativePath", "Public/SBZLifeActionAffinity.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Statics::NewProp_CharacterScale = { "CharacterScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLifeActionAffinity, CharacterScale), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Statics::NewProp_CharacterScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Statics::NewProp_CharacterScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Statics::NewProp_AffinityName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Statics::NewProp_Actions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Statics::NewProp_CharacterScale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZLifeActionAffinity",
		sizeof(FSBZLifeActionAffinity),
		alignof(FSBZLifeActionAffinity),
		Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLifeActionAffinity()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLifeActionAffinity"), sizeof(FSBZLifeActionAffinity), Get_Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLifeActionAffinity_Hash() { return 2685344767U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

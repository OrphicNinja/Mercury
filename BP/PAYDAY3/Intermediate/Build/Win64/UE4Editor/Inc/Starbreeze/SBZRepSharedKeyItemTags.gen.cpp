// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRepSharedKeyItemTags.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRepSharedKeyItemTags() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
class UScriptStruct* FSBZRepSharedKeyItemTags::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZRepSharedKeyItemTags"), sizeof(FSBZRepSharedKeyItemTags), Get_Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZRepSharedKeyItemTags>()
{
	return FSBZRepSharedKeyItemTags::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZRepSharedKeyItemTags(FSBZRepSharedKeyItemTags::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZRepSharedKeyItemTags"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRepSharedKeyItemTags
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRepSharedKeyItemTags()
	{
		UScriptStruct::DeferCppStructOps<FSBZRepSharedKeyItemTags>(FName(TEXT("SBZRepSharedKeyItemTags")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZRepSharedKeyItemTags;
	struct Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZRepSharedKeyItemTags.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZRepSharedKeyItemTags>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags_Statics::NewProp_Tag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRepSharedKeyItemTags" },
		{ "ModuleRelativePath", "Public/SBZRepSharedKeyItemTags.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRepSharedKeyItemTags, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags_Statics::NewProp_Count_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRepSharedKeyItemTags" },
		{ "ModuleRelativePath", "Public/SBZRepSharedKeyItemTags.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRepSharedKeyItemTags, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags_Statics::NewProp_Count_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags_Statics::NewProp_Count,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZRepSharedKeyItemTags",
		sizeof(FSBZRepSharedKeyItemTags),
		alignof(FSBZRepSharedKeyItemTags),
		Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZRepSharedKeyItemTags"), sizeof(FSBZRepSharedKeyItemTags), Get_Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags_Hash() { return 215357922U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

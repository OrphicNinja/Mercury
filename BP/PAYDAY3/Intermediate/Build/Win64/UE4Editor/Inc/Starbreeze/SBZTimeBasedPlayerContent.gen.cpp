// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTimeBasedPlayerContent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTimeBasedPlayerContent() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTimeBasedPlayerContent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskOfTheWeek();
// End Cross Module References
class UScriptStruct* FSBZTimeBasedPlayerContent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTimeBasedPlayerContent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTimeBasedPlayerContent, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTimeBasedPlayerContent"), sizeof(FSBZTimeBasedPlayerContent), Get_Z_Construct_UScriptStruct_FSBZTimeBasedPlayerContent_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTimeBasedPlayerContent>()
{
	return FSBZTimeBasedPlayerContent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTimeBasedPlayerContent(FSBZTimeBasedPlayerContent::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTimeBasedPlayerContent"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTimeBasedPlayerContent
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTimeBasedPlayerContent()
	{
		UScriptStruct::DeferCppStructOps<FSBZTimeBasedPlayerContent>(FName(TEXT("SBZTimeBasedPlayerContent")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTimeBasedPlayerContent;
	struct Z_Construct_UScriptStruct_FSBZTimeBasedPlayerContent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskOfTheWeek_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskOfTheWeek;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTimeBasedPlayerContent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTimeBasedPlayerContent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTimeBasedPlayerContent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTimeBasedPlayerContent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTimeBasedPlayerContent_Statics::NewProp_MaskOfTheWeek_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTimeBasedPlayerContent" },
		{ "ModuleRelativePath", "Public/SBZTimeBasedPlayerContent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTimeBasedPlayerContent_Statics::NewProp_MaskOfTheWeek = { "MaskOfTheWeek", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTimeBasedPlayerContent, MaskOfTheWeek), Z_Construct_UScriptStruct_FSBZMaskOfTheWeek, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTimeBasedPlayerContent_Statics::NewProp_MaskOfTheWeek_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTimeBasedPlayerContent_Statics::NewProp_MaskOfTheWeek_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTimeBasedPlayerContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTimeBasedPlayerContent_Statics::NewProp_MaskOfTheWeek,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTimeBasedPlayerContent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTimeBasedPlayerContent",
		sizeof(FSBZTimeBasedPlayerContent),
		alignof(FSBZTimeBasedPlayerContent),
		Z_Construct_UScriptStruct_FSBZTimeBasedPlayerContent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTimeBasedPlayerContent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTimeBasedPlayerContent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTimeBasedPlayerContent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTimeBasedPlayerContent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTimeBasedPlayerContent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTimeBasedPlayerContent"), sizeof(FSBZTimeBasedPlayerContent), Get_Z_Construct_UScriptStruct_FSBZTimeBasedPlayerContent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTimeBasedPlayerContent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTimeBasedPlayerContent_Hash() { return 142237016U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

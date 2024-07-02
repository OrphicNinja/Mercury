// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMetaNotification.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMetaNotification() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMetaNotification();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult();
// End Cross Module References
class UScriptStruct* FSBZMetaNotification::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMetaNotification_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMetaNotification, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMetaNotification"), sizeof(FSBZMetaNotification), Get_Z_Construct_UScriptStruct_FSBZMetaNotification_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMetaNotification>()
{
	return FSBZMetaNotification::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMetaNotification(FSBZMetaNotification::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMetaNotification"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMetaNotification
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMetaNotification()
	{
		UScriptStruct::DeferCppStructOps<FSBZMetaNotification>(FName(TEXT("SBZMetaNotification")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMetaNotification;
	struct Z_Construct_UScriptStruct_FSBZMetaNotification_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MetaResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MetaResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMetaNotification_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMetaNotification.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMetaNotification_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMetaNotification>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZMetaNotification_Statics::NewProp_MetaResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMetaNotification_Statics::NewProp_MetaResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMetaNotification" },
		{ "ModuleRelativePath", "Public/SBZMetaNotification.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZMetaNotification_Statics::NewProp_MetaResult = { "MetaResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMetaNotification, MetaResult), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMetaNotification_Statics::NewProp_MetaResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMetaNotification_Statics::NewProp_MetaResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMetaNotification_Statics::NewProp_DisplayText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMetaNotification" },
		{ "ModuleRelativePath", "Public/SBZMetaNotification.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZMetaNotification_Statics::NewProp_DisplayText = { "DisplayText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMetaNotification, DisplayText), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMetaNotification_Statics::NewProp_DisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMetaNotification_Statics::NewProp_DisplayText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMetaNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMetaNotification_Statics::NewProp_MetaResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMetaNotification_Statics::NewProp_MetaResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMetaNotification_Statics::NewProp_DisplayText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMetaNotification_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZMetaNotification",
		sizeof(FSBZMetaNotification),
		alignof(FSBZMetaNotification),
		Z_Construct_UScriptStruct_FSBZMetaNotification_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMetaNotification_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMetaNotification_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMetaNotification_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMetaNotification()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMetaNotification_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMetaNotification"), sizeof(FSBZMetaNotification), Get_Z_Construct_UScriptStruct_FSBZMetaNotification_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMetaNotification_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMetaNotification_Hash() { return 625145565U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

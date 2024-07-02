// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHackableDisplayText.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHackableDisplayText() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHackableDisplayText();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZHackableDisplayText::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZHackableDisplayText_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZHackableDisplayText, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZHackableDisplayText"), sizeof(FSBZHackableDisplayText), Get_Z_Construct_UScriptStruct_FSBZHackableDisplayText_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZHackableDisplayText>()
{
	return FSBZHackableDisplayText::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZHackableDisplayText(FSBZHackableDisplayText::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZHackableDisplayText"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHackableDisplayText
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHackableDisplayText()
	{
		UScriptStruct::DeferCppStructOps<FSBZHackableDisplayText>(FName(TEXT("SBZHackableDisplayText")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZHackableDisplayText;
	struct Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Header;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportantInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ImportantInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AdditionalText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZHackableDisplayText.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZHackableDisplayText>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::NewProp_Header_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableDisplayText" },
		{ "ModuleRelativePath", "Public/SBZHackableDisplayText.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHackableDisplayText, Header), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::NewProp_Header_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::NewProp_Header_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableDisplayText" },
		{ "ModuleRelativePath", "Public/SBZHackableDisplayText.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHackableDisplayText, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::NewProp_ImportantInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableDisplayText" },
		{ "ModuleRelativePath", "Public/SBZHackableDisplayText.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::NewProp_ImportantInfo = { "ImportantInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHackableDisplayText, ImportantInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::NewProp_ImportantInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::NewProp_ImportantInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::NewProp_AdditionalText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableDisplayText" },
		{ "ModuleRelativePath", "Public/SBZHackableDisplayText.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::NewProp_AdditionalText = { "AdditionalText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHackableDisplayText, AdditionalText), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::NewProp_AdditionalText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::NewProp_AdditionalText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::NewProp_Header,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::NewProp_ImportantInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::NewProp_AdditionalText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZHackableDisplayText",
		sizeof(FSBZHackableDisplayText),
		alignof(FSBZHackableDisplayText),
		Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZHackableDisplayText()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZHackableDisplayText_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZHackableDisplayText"), sizeof(FSBZHackableDisplayText), Get_Z_Construct_UScriptStruct_FSBZHackableDisplayText_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZHackableDisplayText_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZHackableDisplayText_Hash() { return 810272096U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

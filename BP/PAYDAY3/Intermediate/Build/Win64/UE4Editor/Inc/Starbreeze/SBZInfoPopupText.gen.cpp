// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInfoPopupText.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInfoPopupText() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInfoPopupText();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZInfoPopupText::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZInfoPopupText_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZInfoPopupText, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZInfoPopupText"), sizeof(FSBZInfoPopupText), Get_Z_Construct_UScriptStruct_FSBZInfoPopupText_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZInfoPopupText>()
{
	return FSBZInfoPopupText::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZInfoPopupText(FSBZInfoPopupText::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZInfoPopupText"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInfoPopupText
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInfoPopupText()
	{
		UScriptStruct::DeferCppStructOps<FSBZInfoPopupText>(FName(TEXT("SBZInfoPopupText")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZInfoPopupText;
	struct Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HeaderText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_BodyText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasPlaystationSpecificBodyText_MetaData[];
#endif
		static void NewProp_bHasPlaystationSpecificBodyText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasPlaystationSpecificBodyText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyTextPlaystation_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_BodyTextPlaystation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasXboxSpecificBodyText_MetaData[];
#endif
		static void NewProp_bHasXboxSpecificBodyText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasXboxSpecificBodyText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyTextXbox_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_BodyTextXbox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZInfoPopupText.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZInfoPopupText>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_HeaderText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfoPopupText" },
		{ "ModuleRelativePath", "Public/SBZInfoPopupText.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_HeaderText = { "HeaderText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInfoPopupText, HeaderText), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_HeaderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_HeaderText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_BodyText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfoPopupText" },
		{ "ModuleRelativePath", "Public/SBZInfoPopupText.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_BodyText = { "BodyText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInfoPopupText, BodyText), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_BodyText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_BodyText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_bHasPlaystationSpecificBodyText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfoPopupText" },
		{ "ModuleRelativePath", "Public/SBZInfoPopupText.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_bHasPlaystationSpecificBodyText_SetBit(void* Obj)
	{
		((FSBZInfoPopupText*)Obj)->bHasPlaystationSpecificBodyText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_bHasPlaystationSpecificBodyText = { "bHasPlaystationSpecificBodyText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZInfoPopupText), &Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_bHasPlaystationSpecificBodyText_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_bHasPlaystationSpecificBodyText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_bHasPlaystationSpecificBodyText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_BodyTextPlaystation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfoPopupText" },
		{ "ModuleRelativePath", "Public/SBZInfoPopupText.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_BodyTextPlaystation = { "BodyTextPlaystation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInfoPopupText, BodyTextPlaystation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_BodyTextPlaystation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_BodyTextPlaystation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_bHasXboxSpecificBodyText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfoPopupText" },
		{ "ModuleRelativePath", "Public/SBZInfoPopupText.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_bHasXboxSpecificBodyText_SetBit(void* Obj)
	{
		((FSBZInfoPopupText*)Obj)->bHasXboxSpecificBodyText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_bHasXboxSpecificBodyText = { "bHasXboxSpecificBodyText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZInfoPopupText), &Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_bHasXboxSpecificBodyText_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_bHasXboxSpecificBodyText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_bHasXboxSpecificBodyText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_BodyTextXbox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfoPopupText" },
		{ "ModuleRelativePath", "Public/SBZInfoPopupText.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_BodyTextXbox = { "BodyTextXbox", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInfoPopupText, BodyTextXbox), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_BodyTextXbox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_BodyTextXbox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_HeaderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_BodyText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_bHasPlaystationSpecificBodyText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_BodyTextPlaystation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_bHasXboxSpecificBodyText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::NewProp_BodyTextXbox,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZInfoPopupText",
		sizeof(FSBZInfoPopupText),
		alignof(FSBZInfoPopupText),
		Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZInfoPopupText()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZInfoPopupText_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZInfoPopupText"), sizeof(FSBZInfoPopupText), Get_Z_Construct_UScriptStruct_FSBZInfoPopupText_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZInfoPopupText_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZInfoPopupText_Hash() { return 1271776794U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

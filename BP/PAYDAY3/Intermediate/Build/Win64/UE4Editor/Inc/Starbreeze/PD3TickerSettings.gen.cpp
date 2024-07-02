// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3TickerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3TickerSettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3TickerSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FPD3TickerSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FPD3TickerSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPD3TickerSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("PD3TickerSettings"), sizeof(FPD3TickerSettings), Get_Z_Construct_UScriptStruct_FPD3TickerSettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FPD3TickerSettings>()
{
	return FPD3TickerSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPD3TickerSettings(FPD3TickerSettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("PD3TickerSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFPD3TickerSettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFPD3TickerSettings()
	{
		UScriptStruct::DeferCppStructOps<FPD3TickerSettings>(FName(TEXT("PD3TickerSettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFPD3TickerSettings;
	struct Z_Construct_UScriptStruct_FPD3TickerSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PD3TickerSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPD3TickerSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::NewProp_DisplayText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3TickerSettings" },
		{ "ModuleRelativePath", "Public/PD3TickerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::NewProp_DisplayText = { "DisplayText", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3TickerSettings, DisplayText), METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::NewProp_DisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::NewProp_DisplayText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::NewProp_Text_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3TickerSettings" },
		{ "ModuleRelativePath", "Public/PD3TickerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3TickerSettings, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::NewProp_TextColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3TickerSettings" },
		{ "ModuleRelativePath", "Public/PD3TickerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3TickerSettings, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::NewProp_TextColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3TickerSettings" },
		{ "ModuleRelativePath", "Public/PD3TickerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3TickerSettings, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::NewProp_BackgroundColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::NewProp_DisplayText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::NewProp_TextColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::NewProp_BackgroundColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"PD3TickerSettings",
		sizeof(FPD3TickerSettings),
		alignof(FPD3TickerSettings),
		Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPD3TickerSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPD3TickerSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PD3TickerSettings"), sizeof(FPD3TickerSettings), Get_Z_Construct_UScriptStruct_FPD3TickerSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPD3TickerSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPD3TickerSettings_Hash() { return 413780749U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCrosshairSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCrosshairSettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCrosshairSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FSBZCrosshairSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCrosshairSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCrosshairSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCrosshairSettings"), sizeof(FSBZCrosshairSettings), Get_Z_Construct_UScriptStruct_FSBZCrosshairSettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCrosshairSettings>()
{
	return FSBZCrosshairSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCrosshairSettings(FSBZCrosshairSettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCrosshairSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCrosshairSettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCrosshairSettings()
	{
		UScriptStruct::DeferCppStructOps<FSBZCrosshairSettings>(FName(TEXT("SBZCrosshairSettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCrosshairSettings;
	struct Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BarWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BarLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DotSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DotSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCrosshairScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinCrosshairScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCrosshairScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCrosshairScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairBarColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrosshairBarColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairDotColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrosshairDotColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCrosshairSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCrosshairSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_BarWidth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCrosshairSettings" },
		{ "ModuleRelativePath", "Public/SBZCrosshairSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_BarWidth = { "BarWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCrosshairSettings, BarWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_BarWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_BarWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_BarLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCrosshairSettings" },
		{ "ModuleRelativePath", "Public/SBZCrosshairSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_BarLength = { "BarLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCrosshairSettings, BarLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_BarLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_BarLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_DotSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCrosshairSettings" },
		{ "ModuleRelativePath", "Public/SBZCrosshairSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_DotSize = { "DotSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCrosshairSettings, DotSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_DotSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_DotSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_MinCrosshairScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCrosshairSettings" },
		{ "ModuleRelativePath", "Public/SBZCrosshairSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_MinCrosshairScale = { "MinCrosshairScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCrosshairSettings, MinCrosshairScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_MinCrosshairScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_MinCrosshairScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_MaxCrosshairScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCrosshairSettings" },
		{ "ModuleRelativePath", "Public/SBZCrosshairSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_MaxCrosshairScale = { "MaxCrosshairScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCrosshairSettings, MaxCrosshairScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_MaxCrosshairScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_MaxCrosshairScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_CrosshairBarColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCrosshairSettings" },
		{ "ModuleRelativePath", "Public/SBZCrosshairSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_CrosshairBarColor = { "CrosshairBarColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCrosshairSettings, CrosshairBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_CrosshairBarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_CrosshairBarColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_CrosshairDotColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCrosshairSettings" },
		{ "ModuleRelativePath", "Public/SBZCrosshairSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_CrosshairDotColor = { "CrosshairDotColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCrosshairSettings, CrosshairDotColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_CrosshairDotColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_CrosshairDotColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_BarWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_BarLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_DotSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_MinCrosshairScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_MaxCrosshairScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_CrosshairBarColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::NewProp_CrosshairDotColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCrosshairSettings",
		sizeof(FSBZCrosshairSettings),
		alignof(FSBZCrosshairSettings),
		Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCrosshairSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCrosshairSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCrosshairSettings"), sizeof(FSBZCrosshairSettings), Get_Z_Construct_UScriptStruct_FSBZCrosshairSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCrosshairSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCrosshairSettings_Hash() { return 1741876785U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

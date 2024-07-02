// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCheaterHandlingSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCheaterHandlingSettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCheaterPolicyType();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZNotOwningHeistPolicyType();
// End Cross Module References
class UScriptStruct* FSBZCheaterHandlingSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCheaterHandlingSettings"), sizeof(FSBZCheaterHandlingSettings), Get_Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCheaterHandlingSettings>()
{
	return FSBZCheaterHandlingSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCheaterHandlingSettings(FSBZCheaterHandlingSettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCheaterHandlingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCheaterHandlingSettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCheaterHandlingSettings()
	{
		UScriptStruct::DeferCppStructOps<FSBZCheaterHandlingSettings>(FName(TEXT("SBZCheaterHandlingSettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCheaterHandlingSettings;
	struct Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CheaterPolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheaterPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CheaterPolicy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NotOwningHeistPolicyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotOwningHeistPolicyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NotOwningHeistPolicyType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BanPeriodInDays_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BanPeriodInDays;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCheaterHandlingSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCheaterHandlingSettings>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::NewProp_CheaterPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::NewProp_CheaterPolicy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCheaterHandlingSettings" },
		{ "ModuleRelativePath", "Public/SBZCheaterHandlingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::NewProp_CheaterPolicy = { "CheaterPolicy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCheaterHandlingSettings, CheaterPolicy), Z_Construct_UEnum_Starbreeze_ESBZCheaterPolicyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::NewProp_CheaterPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::NewProp_CheaterPolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::NewProp_NotOwningHeistPolicyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::NewProp_NotOwningHeistPolicyType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCheaterHandlingSettings" },
		{ "ModuleRelativePath", "Public/SBZCheaterHandlingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::NewProp_NotOwningHeistPolicyType = { "NotOwningHeistPolicyType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCheaterHandlingSettings, NotOwningHeistPolicyType), Z_Construct_UEnum_Starbreeze_ESBZNotOwningHeistPolicyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::NewProp_NotOwningHeistPolicyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::NewProp_NotOwningHeistPolicyType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::NewProp_BanPeriodInDays_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCheaterHandlingSettings" },
		{ "ModuleRelativePath", "Public/SBZCheaterHandlingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::NewProp_BanPeriodInDays = { "BanPeriodInDays", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCheaterHandlingSettings, BanPeriodInDays), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::NewProp_BanPeriodInDays_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::NewProp_BanPeriodInDays_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::NewProp_CheaterPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::NewProp_CheaterPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::NewProp_NotOwningHeistPolicyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::NewProp_NotOwningHeistPolicyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::NewProp_BanPeriodInDays,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCheaterHandlingSettings",
		sizeof(FSBZCheaterHandlingSettings),
		alignof(FSBZCheaterHandlingSettings),
		Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCheaterHandlingSettings"), sizeof(FSBZCheaterHandlingSettings), Get_Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCheaterHandlingSettings_Hash() { return 535458960U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

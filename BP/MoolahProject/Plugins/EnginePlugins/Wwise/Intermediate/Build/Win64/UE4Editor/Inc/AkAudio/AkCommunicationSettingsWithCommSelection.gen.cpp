// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkCommunicationSettingsWithCommSelection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkCommunicationSettingsWithCommSelection() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettings();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCommSystem();
// End Cross Module References

static_assert(std::is_polymorphic<FAkCommunicationSettingsWithCommSelection>() == std::is_polymorphic<FAkCommunicationSettings>(), "USTRUCT FAkCommunicationSettingsWithCommSelection cannot be polymorphic unless super FAkCommunicationSettings is polymorphic");

class UScriptStruct* FAkCommunicationSettingsWithCommSelection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCommunicationSettingsWithCommSelection"), sizeof(FAkCommunicationSettingsWithCommSelection), Get_Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkCommunicationSettingsWithCommSelection>()
{
	return FAkCommunicationSettingsWithCommSelection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkCommunicationSettingsWithCommSelection(FAkCommunicationSettingsWithCommSelection::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkCommunicationSettingsWithCommSelection"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkCommunicationSettingsWithCommSelection
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkCommunicationSettingsWithCommSelection()
	{
		UScriptStruct::DeferCppStructOps<FAkCommunicationSettingsWithCommSelection>(FName(TEXT("AkCommunicationSettingsWithCommSelection")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkCommunicationSettingsWithCommSelection;
	struct Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CommunicationSystem_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommunicationSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CommunicationSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkCommunicationSettingsWithCommSelection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommunicationSettingsWithCommSelection>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewProp_CommunicationSystem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewProp_CommunicationSystem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCommunicationSettingsWithCommSelection" },
		{ "ModuleRelativePath", "Public/AkCommunicationSettingsWithCommSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewProp_CommunicationSystem = { "CommunicationSystem", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommunicationSettingsWithCommSelection, CommunicationSystem), Z_Construct_UEnum_AkAudio_EAkCommSystem, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewProp_CommunicationSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewProp_CommunicationSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewProp_CommunicationSystem_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewProp_CommunicationSystem,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkCommunicationSettings,
		&NewStructOps,
		"AkCommunicationSettingsWithCommSelection",
		sizeof(FAkCommunicationSettingsWithCommSelection),
		alignof(FAkCommunicationSettingsWithCommSelection),
		Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkCommunicationSettingsWithCommSelection"), sizeof(FAkCommunicationSettingsWithCommSelection), Get_Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Hash() { return 4203820200U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

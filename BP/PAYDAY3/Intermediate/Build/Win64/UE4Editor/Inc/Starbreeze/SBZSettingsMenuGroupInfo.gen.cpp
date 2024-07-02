// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingsMenuGroupInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingsMenuGroupInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSettingData();
// End Cross Module References
class UScriptStruct* FSBZSettingsMenuGroupInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSettingsMenuGroupInfo"), sizeof(FSBZSettingsMenuGroupInfo), Get_Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSettingsMenuGroupInfo>()
{
	return FSBZSettingsMenuGroupInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSettingsMenuGroupInfo(FSBZSettingsMenuGroupInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSettingsMenuGroupInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSettingsMenuGroupInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSettingsMenuGroupInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZSettingsMenuGroupInfo>(FName(TEXT("SBZSettingsMenuGroupInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSettingsMenuGroupInfo;
	struct Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupNameLocalized_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_GroupNameLocalized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasPlaystationSpecificGroupNameLocalized_MetaData[];
#endif
		static void NewProp_bHasPlaystationSpecificGroupNameLocalized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasPlaystationSpecificGroupNameLocalized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupNameLocalizedPlaystation_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_GroupNameLocalizedPlaystation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasXBoxSpecificGroupNameLocalized_MetaData[];
#endif
		static void NewProp_bHasXBoxSpecificGroupNameLocalized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasXBoxSpecificGroupNameLocalized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupNameLocalizedXBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_GroupNameLocalizedXBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowOnlyOnWindowsPlatform_MetaData[];
#endif
		static void NewProp_bShowOnlyOnWindowsPlatform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowOnlyOnWindowsPlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideInShippingBuild_MetaData[];
#endif
		static void NewProp_bHideInShippingBuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideInShippingBuild;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuGroupInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSettingsMenuGroupInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_GroupNameLocalized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuGroupInfo" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuGroupInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_GroupNameLocalized = { "GroupNameLocalized", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingsMenuGroupInfo, GroupNameLocalized), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_GroupNameLocalized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_GroupNameLocalized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bHasPlaystationSpecificGroupNameLocalized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuGroupInfo" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuGroupInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bHasPlaystationSpecificGroupNameLocalized_SetBit(void* Obj)
	{
		((FSBZSettingsMenuGroupInfo*)Obj)->bHasPlaystationSpecificGroupNameLocalized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bHasPlaystationSpecificGroupNameLocalized = { "bHasPlaystationSpecificGroupNameLocalized", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSettingsMenuGroupInfo), &Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bHasPlaystationSpecificGroupNameLocalized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bHasPlaystationSpecificGroupNameLocalized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bHasPlaystationSpecificGroupNameLocalized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_GroupNameLocalizedPlaystation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuGroupInfo" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuGroupInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_GroupNameLocalizedPlaystation = { "GroupNameLocalizedPlaystation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingsMenuGroupInfo, GroupNameLocalizedPlaystation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_GroupNameLocalizedPlaystation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_GroupNameLocalizedPlaystation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bHasXBoxSpecificGroupNameLocalized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuGroupInfo" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuGroupInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bHasXBoxSpecificGroupNameLocalized_SetBit(void* Obj)
	{
		((FSBZSettingsMenuGroupInfo*)Obj)->bHasXBoxSpecificGroupNameLocalized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bHasXBoxSpecificGroupNameLocalized = { "bHasXBoxSpecificGroupNameLocalized", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSettingsMenuGroupInfo), &Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bHasXBoxSpecificGroupNameLocalized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bHasXBoxSpecificGroupNameLocalized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bHasXBoxSpecificGroupNameLocalized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_GroupNameLocalizedXBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuGroupInfo" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuGroupInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_GroupNameLocalizedXBox = { "GroupNameLocalizedXBox", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingsMenuGroupInfo, GroupNameLocalizedXBox), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_GroupNameLocalizedXBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_GroupNameLocalizedXBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_GroupName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuGroupInfo" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuGroupInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingsMenuGroupInfo, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bShowOnlyOnWindowsPlatform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuGroupInfo" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuGroupInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bShowOnlyOnWindowsPlatform_SetBit(void* Obj)
	{
		((FSBZSettingsMenuGroupInfo*)Obj)->bShowOnlyOnWindowsPlatform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bShowOnlyOnWindowsPlatform = { "bShowOnlyOnWindowsPlatform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSettingsMenuGroupInfo), &Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bShowOnlyOnWindowsPlatform_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bShowOnlyOnWindowsPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bShowOnlyOnWindowsPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bHideInShippingBuild_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuGroupInfo" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuGroupInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bHideInShippingBuild_SetBit(void* Obj)
	{
		((FSBZSettingsMenuGroupInfo*)Obj)->bHideInShippingBuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bHideInShippingBuild = { "bHideInShippingBuild", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSettingsMenuGroupInfo), &Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bHideInShippingBuild_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bHideInShippingBuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bHideInShippingBuild_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_Settings_Inner = { "Settings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSettingData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_Settings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuGroupInfo" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuGroupInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingsMenuGroupInfo, Settings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_GroupNameLocalized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bHasPlaystationSpecificGroupNameLocalized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_GroupNameLocalizedPlaystation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bHasXBoxSpecificGroupNameLocalized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_GroupNameLocalizedXBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bShowOnlyOnWindowsPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_bHideInShippingBuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_Settings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::NewProp_Settings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSettingsMenuGroupInfo",
		sizeof(FSBZSettingsMenuGroupInfo),
		alignof(FSBZSettingsMenuGroupInfo),
		Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSettingsMenuGroupInfo"), sizeof(FSBZSettingsMenuGroupInfo), Get_Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo_Hash() { return 3277497307U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

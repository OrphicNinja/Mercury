// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingsMenuCategoryInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingsMenuCategoryInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsFunctions_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo();
// End Cross Module References
class UScriptStruct* FSBZSettingsMenuCategoryInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSettingsMenuCategoryInfo"), sizeof(FSBZSettingsMenuCategoryInfo), Get_Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSettingsMenuCategoryInfo>()
{
	return FSBZSettingsMenuCategoryInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSettingsMenuCategoryInfo(FSBZSettingsMenuCategoryInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSettingsMenuCategoryInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSettingsMenuCategoryInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSettingsMenuCategoryInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZSettingsMenuCategoryInfo>(FName(TEXT("SBZSettingsMenuCategoryInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSettingsMenuCategoryInfo;
	struct Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryNameLocalized_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CategoryNameLocalized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasPlaystationSpecificCategoryNameLocalized_MetaData[];
#endif
		static void NewProp_bHasPlaystationSpecificCategoryNameLocalized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasPlaystationSpecificCategoryNameLocalized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryNameLocalizedPlaystation_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CategoryNameLocalizedPlaystation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasXBoxSpecificCategoryNameLocalized_MetaData[];
#endif
		static void NewProp_bHasXBoxSpecificCategoryNameLocalized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasXBoxSpecificCategoryNameLocalized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryNameLocalizedXBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CategoryNameLocalizedXBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CategoryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsFunctions_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SettingsFunctions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SettingsGroups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SettingsGroups;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuCategoryInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSettingsMenuCategoryInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_CategoryNameLocalized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuCategoryInfo" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuCategoryInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_CategoryNameLocalized = { "CategoryNameLocalized", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingsMenuCategoryInfo, CategoryNameLocalized), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_CategoryNameLocalized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_CategoryNameLocalized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_bHasPlaystationSpecificCategoryNameLocalized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuCategoryInfo" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuCategoryInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_bHasPlaystationSpecificCategoryNameLocalized_SetBit(void* Obj)
	{
		((FSBZSettingsMenuCategoryInfo*)Obj)->bHasPlaystationSpecificCategoryNameLocalized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_bHasPlaystationSpecificCategoryNameLocalized = { "bHasPlaystationSpecificCategoryNameLocalized", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSettingsMenuCategoryInfo), &Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_bHasPlaystationSpecificCategoryNameLocalized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_bHasPlaystationSpecificCategoryNameLocalized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_bHasPlaystationSpecificCategoryNameLocalized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_CategoryNameLocalizedPlaystation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuCategoryInfo" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuCategoryInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_CategoryNameLocalizedPlaystation = { "CategoryNameLocalizedPlaystation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingsMenuCategoryInfo, CategoryNameLocalizedPlaystation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_CategoryNameLocalizedPlaystation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_CategoryNameLocalizedPlaystation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_bHasXBoxSpecificCategoryNameLocalized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuCategoryInfo" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuCategoryInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_bHasXBoxSpecificCategoryNameLocalized_SetBit(void* Obj)
	{
		((FSBZSettingsMenuCategoryInfo*)Obj)->bHasXBoxSpecificCategoryNameLocalized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_bHasXBoxSpecificCategoryNameLocalized = { "bHasXBoxSpecificCategoryNameLocalized", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSettingsMenuCategoryInfo), &Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_bHasXBoxSpecificCategoryNameLocalized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_bHasXBoxSpecificCategoryNameLocalized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_bHasXBoxSpecificCategoryNameLocalized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_CategoryNameLocalizedXBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuCategoryInfo" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuCategoryInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_CategoryNameLocalizedXBox = { "CategoryNameLocalizedXBox", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingsMenuCategoryInfo, CategoryNameLocalizedXBox), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_CategoryNameLocalizedXBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_CategoryNameLocalizedXBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_CategoryName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuCategoryInfo" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuCategoryInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingsMenuCategoryInfo, CategoryName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_CategoryName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_SettingsFunctions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuCategoryInfo" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuCategoryInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_SettingsFunctions = { "SettingsFunctions", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingsMenuCategoryInfo, SettingsFunctions), Z_Construct_UClass_USBZSettingsFunctions_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_SettingsFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_SettingsFunctions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_SettingsGroups_Inner = { "SettingsGroups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSettingsMenuGroupInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_SettingsGroups_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuCategoryInfo" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuCategoryInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_SettingsGroups = { "SettingsGroups", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingsMenuCategoryInfo, SettingsGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_SettingsGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_SettingsGroups_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_CategoryNameLocalized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_bHasPlaystationSpecificCategoryNameLocalized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_CategoryNameLocalizedPlaystation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_bHasXBoxSpecificCategoryNameLocalized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_CategoryNameLocalizedXBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_SettingsFunctions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_SettingsGroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::NewProp_SettingsGroups,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSettingsMenuCategoryInfo",
		sizeof(FSBZSettingsMenuCategoryInfo),
		alignof(FSBZSettingsMenuCategoryInfo),
		Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSettingsMenuCategoryInfo"), sizeof(FSBZSettingsMenuCategoryInfo), Get_Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo_Hash() { return 3362291764U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

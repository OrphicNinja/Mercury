// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerUiItemInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerUiItemInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemProgressionSource();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillLineData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZPlayerUiItemInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPlayerUiItemInfo"), sizeof(FSBZPlayerUiItemInfo), Get_Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPlayerUiItemInfo>()
{
	return FSBZPlayerUiItemInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPlayerUiItemInfo(FSBZPlayerUiItemInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPlayerUiItemInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerUiItemInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerUiItemInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZPlayerUiItemInfo>(FName(TEXT("SBZPlayerUiItemInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerUiItemInfo;
	struct Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAvailable_MetaData[];
#endif
		static void NewProp_bIsAvailable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAvailable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfamyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InfamyLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemProgressionSource_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemProgressionSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemProgressionSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillLineToUnlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillLineToUnlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryBaseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryBaseData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerUiItemInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPlayerUiItemInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_bIsAvailable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerUiItemInfo" },
		{ "ModuleRelativePath", "Public/SBZPlayerUiItemInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_bIsAvailable_SetBit(void* Obj)
	{
		((FSBZPlayerUiItemInfo*)Obj)->bIsAvailable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_bIsAvailable = { "bIsAvailable", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZPlayerUiItemInfo), &Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_bIsAvailable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_bIsAvailable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_bIsAvailable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_InfamyLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerUiItemInfo" },
		{ "ModuleRelativePath", "Public/SBZPlayerUiItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_InfamyLevel = { "InfamyLevel", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerUiItemInfo, InfamyLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_InfamyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_InfamyLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_ItemProgressionSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_ItemProgressionSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerUiItemInfo" },
		{ "ModuleRelativePath", "Public/SBZPlayerUiItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_ItemProgressionSource = { "ItemProgressionSource", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerUiItemInfo, ItemProgressionSource), Z_Construct_UEnum_Starbreeze_ESBZItemProgressionSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_ItemProgressionSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_ItemProgressionSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_SkillLineToUnlock_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerUiItemInfo" },
		{ "ModuleRelativePath", "Public/SBZPlayerUiItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_SkillLineToUnlock = { "SkillLineToUnlock", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerUiItemInfo, SkillLineToUnlock), Z_Construct_UClass_USBZSkillLineData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_SkillLineToUnlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_SkillLineToUnlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_InventoryBaseData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerUiItemInfo" },
		{ "ModuleRelativePath", "Public/SBZPlayerUiItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_InventoryBaseData = { "InventoryBaseData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerUiItemInfo, InventoryBaseData), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_InventoryBaseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_InventoryBaseData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_bIsAvailable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_InfamyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_ItemProgressionSource_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_ItemProgressionSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_SkillLineToUnlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::NewProp_InventoryBaseData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPlayerUiItemInfo",
		sizeof(FSBZPlayerUiItemInfo),
		alignof(FSBZPlayerUiItemInfo),
		Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPlayerUiItemInfo"), sizeof(FSBZPlayerUiItemInfo), Get_Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo_Hash() { return 254890541U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

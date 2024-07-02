// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerItemInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerItemInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerItemInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemProgressionSource();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillLineData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZPlayerItemInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPlayerItemInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPlayerItemInfo"), sizeof(FSBZPlayerItemInfo), Get_Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPlayerItemInfo>()
{
	return FSBZPlayerItemInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPlayerItemInfo(FSBZPlayerItemInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPlayerItemInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerItemInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerItemInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZPlayerItemInfo>(FName(TEXT("SBZPlayerItemInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerItemInfo;
	struct Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemProgressionSource_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemProgressionSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemProgressionSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfamyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InfamyLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryBaseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryBaseData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerItemInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPlayerItemInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::NewProp_ItemProgressionSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::NewProp_ItemProgressionSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerItemInfo" },
		{ "ModuleRelativePath", "Public/SBZPlayerItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::NewProp_ItemProgressionSource = { "ItemProgressionSource", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerItemInfo, ItemProgressionSource), Z_Construct_UEnum_Starbreeze_ESBZItemProgressionSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::NewProp_ItemProgressionSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::NewProp_ItemProgressionSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::NewProp_InfamyLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerItemInfo" },
		{ "ModuleRelativePath", "Public/SBZPlayerItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::NewProp_InfamyLevel = { "InfamyLevel", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerItemInfo, InfamyLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::NewProp_InfamyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::NewProp_InfamyLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::NewProp_SkillLine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerItemInfo" },
		{ "ModuleRelativePath", "Public/SBZPlayerItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::NewProp_SkillLine = { "SkillLine", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerItemInfo, SkillLine), Z_Construct_UClass_USBZSkillLineData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::NewProp_SkillLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::NewProp_SkillLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::NewProp_InventoryBaseData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerItemInfo" },
		{ "ModuleRelativePath", "Public/SBZPlayerItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::NewProp_InventoryBaseData = { "InventoryBaseData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerItemInfo, InventoryBaseData), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::NewProp_InventoryBaseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::NewProp_InventoryBaseData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::NewProp_ItemProgressionSource_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::NewProp_ItemProgressionSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::NewProp_InfamyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::NewProp_SkillLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::NewProp_InventoryBaseData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPlayerItemInfo",
		sizeof(FSBZPlayerItemInfo),
		alignof(FSBZPlayerItemInfo),
		Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerItemInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPlayerItemInfo"), sizeof(FSBZPlayerItemInfo), Get_Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerItemInfo_Hash() { return 884330073U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

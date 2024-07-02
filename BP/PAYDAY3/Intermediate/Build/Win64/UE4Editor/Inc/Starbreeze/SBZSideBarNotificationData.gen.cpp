// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSideBarNotificationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSideBarNotificationData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSideBarNotificationData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZSideBarNotificationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSideBarNotificationData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSideBarNotificationData"), sizeof(FSBZSideBarNotificationData), Get_Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSideBarNotificationData>()
{
	return FSBZSideBarNotificationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSideBarNotificationData(FSBZSideBarNotificationData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSideBarNotificationData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSideBarNotificationData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSideBarNotificationData()
	{
		UScriptStruct::DeferCppStructOps<FSBZSideBarNotificationData>(FName(TEXT("SBZSideBarNotificationData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSideBarNotificationData;
	struct Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DescriptionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisplayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSideBarNotificationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSideBarNotificationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::NewProp_HeaderText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSideBarNotificationData" },
		{ "ModuleRelativePath", "Public/SBZSideBarNotificationData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::NewProp_HeaderText = { "HeaderText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSideBarNotificationData, HeaderText), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::NewProp_HeaderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::NewProp_HeaderText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::NewProp_DescriptionText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSideBarNotificationData" },
		{ "ModuleRelativePath", "Public/SBZSideBarNotificationData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::NewProp_DescriptionText = { "DescriptionText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSideBarNotificationData, DescriptionText), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::NewProp_DescriptionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::NewProp_DescriptionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::NewProp_DisplayTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSideBarNotificationData" },
		{ "ModuleRelativePath", "Public/SBZSideBarNotificationData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::NewProp_DisplayTime = { "DisplayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSideBarNotificationData, DisplayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::NewProp_DisplayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::NewProp_DisplayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::NewProp_InventoryItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSideBarNotificationData" },
		{ "ModuleRelativePath", "Public/SBZSideBarNotificationData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::NewProp_InventoryItem = { "InventoryItem", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSideBarNotificationData, InventoryItem), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::NewProp_InventoryItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::NewProp_InventoryItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::NewProp_HeaderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::NewProp_DescriptionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::NewProp_DisplayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::NewProp_InventoryItem,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSideBarNotificationData",
		sizeof(FSBZSideBarNotificationData),
		alignof(FSBZSideBarNotificationData),
		Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSideBarNotificationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSideBarNotificationData"), sizeof(FSBZSideBarNotificationData), Get_Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSideBarNotificationData_Hash() { return 3038390042U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZUIFullscreenNotificationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZUIFullscreenNotificationData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZNotificationType();
// End Cross Module References
class UScriptStruct* FSBZUIFullscreenNotificationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZUIFullscreenNotificationData"), sizeof(FSBZUIFullscreenNotificationData), Get_Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZUIFullscreenNotificationData>()
{
	return FSBZUIFullscreenNotificationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZUIFullscreenNotificationData(FSBZUIFullscreenNotificationData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZUIFullscreenNotificationData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZUIFullscreenNotificationData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZUIFullscreenNotificationData()
	{
		UScriptStruct::DeferCppStructOps<FSBZUIFullscreenNotificationData>(FName(TEXT("SBZUIFullscreenNotificationData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZUIFullscreenNotificationData;
	struct Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics
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
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NotificationType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotificationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NotificationType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZUIFullscreenNotificationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZUIFullscreenNotificationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::NewProp_HeaderText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIFullscreenNotificationData" },
		{ "ModuleRelativePath", "Public/SBZUIFullscreenNotificationData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::NewProp_HeaderText = { "HeaderText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUIFullscreenNotificationData, HeaderText), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::NewProp_HeaderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::NewProp_HeaderText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::NewProp_DescriptionText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIFullscreenNotificationData" },
		{ "ModuleRelativePath", "Public/SBZUIFullscreenNotificationData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::NewProp_DescriptionText = { "DescriptionText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUIFullscreenNotificationData, DescriptionText), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::NewProp_DescriptionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::NewProp_DescriptionText_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::NewProp_NotificationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::NewProp_NotificationType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIFullscreenNotificationData" },
		{ "ModuleRelativePath", "Public/SBZUIFullscreenNotificationData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::NewProp_NotificationType = { "NotificationType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUIFullscreenNotificationData, NotificationType), Z_Construct_UEnum_Starbreeze_ESBZNotificationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::NewProp_NotificationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::NewProp_NotificationType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::NewProp_HeaderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::NewProp_DescriptionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::NewProp_NotificationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::NewProp_NotificationType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZUIFullscreenNotificationData",
		sizeof(FSBZUIFullscreenNotificationData),
		alignof(FSBZUIFullscreenNotificationData),
		Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZUIFullscreenNotificationData"), sizeof(FSBZUIFullscreenNotificationData), Get_Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData_Hash() { return 4039863237U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

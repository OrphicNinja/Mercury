// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHUDNotificationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHUDNotificationData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHUDNotificationData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZHUDNotificationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZHUDNotificationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZHUDNotificationData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZHUDNotificationData"), sizeof(FSBZHUDNotificationData), Get_Z_Construct_UScriptStruct_FSBZHUDNotificationData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZHUDNotificationData>()
{
	return FSBZHUDNotificationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZHUDNotificationData(FSBZHUDNotificationData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZHUDNotificationData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHUDNotificationData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHUDNotificationData()
	{
		UScriptStruct::DeferCppStructOps<FSBZHUDNotificationData>(FName(TEXT("SBZHUDNotificationData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZHUDNotificationData;
	struct Z_Construct_UScriptStruct_FSBZHUDNotificationData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisplayTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHUDNotificationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZHUDNotificationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZHUDNotificationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZHUDNotificationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHUDNotificationData_Statics::NewProp_DisplayText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDNotificationData" },
		{ "ModuleRelativePath", "Public/SBZHUDNotificationData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZHUDNotificationData_Statics::NewProp_DisplayText = { "DisplayText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHUDNotificationData, DisplayText), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHUDNotificationData_Statics::NewProp_DisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHUDNotificationData_Statics::NewProp_DisplayText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHUDNotificationData_Statics::NewProp_DisplayTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDNotificationData" },
		{ "ModuleRelativePath", "Public/SBZHUDNotificationData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZHUDNotificationData_Statics::NewProp_DisplayTime = { "DisplayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHUDNotificationData, DisplayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHUDNotificationData_Statics::NewProp_DisplayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHUDNotificationData_Statics::NewProp_DisplayTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZHUDNotificationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHUDNotificationData_Statics::NewProp_DisplayText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHUDNotificationData_Statics::NewProp_DisplayTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZHUDNotificationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZHUDNotificationData",
		sizeof(FSBZHUDNotificationData),
		alignof(FSBZHUDNotificationData),
		Z_Construct_UScriptStruct_FSBZHUDNotificationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHUDNotificationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHUDNotificationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHUDNotificationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZHUDNotificationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZHUDNotificationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZHUDNotificationData"), sizeof(FSBZHUDNotificationData), Get_Z_Construct_UScriptStruct_FSBZHUDNotificationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZHUDNotificationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZHUDNotificationData_Hash() { return 505078398U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

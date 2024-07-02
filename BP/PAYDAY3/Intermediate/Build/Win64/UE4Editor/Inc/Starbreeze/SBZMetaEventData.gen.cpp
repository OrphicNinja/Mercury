// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMetaEventData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMetaEventData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMetaEventData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaEventType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMetaEventModifierData();
// End Cross Module References
class UScriptStruct* FSBZMetaEventData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMetaEventData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMetaEventData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMetaEventData"), sizeof(FSBZMetaEventData), Get_Z_Construct_UScriptStruct_FSBZMetaEventData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMetaEventData>()
{
	return FSBZMetaEventData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMetaEventData(FSBZMetaEventData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMetaEventData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMetaEventData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMetaEventData()
	{
		UScriptStruct::DeferCppStructOps<FSBZMetaEventData>(FName(TEXT("SBZMetaEventData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMetaEventData;
	struct Z_Construct_UScriptStruct_FSBZMetaEventData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Active_MetaData[];
#endif
		static void NewProp_Active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Active;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StopDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMetaEventData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMetaEventData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_Active_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMetaEventData" },
		{ "ModuleRelativePath", "Public/SBZMetaEventData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_Active_SetBit(void* Obj)
	{
		((FSBZMetaEventData*)Obj)->Active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZMetaEventData), &Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_Active_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_Active_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_Active_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_EventType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMetaEventData" },
		{ "ModuleRelativePath", "Public/SBZMetaEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMetaEventData, EventType), Z_Construct_UEnum_Starbreeze_ESBZMetaEventType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_EventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_EventType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_StartDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMetaEventData" },
		{ "ModuleRelativePath", "Public/SBZMetaEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_StartDate = { "StartDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMetaEventData, StartDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_StartDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_StartDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_StopDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMetaEventData" },
		{ "ModuleRelativePath", "Public/SBZMetaEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_StopDate = { "StopDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMetaEventData, StopDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_StopDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_StopDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMetaEventData" },
		{ "ModuleRelativePath", "Public/SBZMetaEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMetaEventData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZMetaEventModifierData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_Modifiers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMetaEventData" },
		{ "ModuleRelativePath", "Public/SBZMetaEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMetaEventData, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_Modifiers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_Active,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_EventType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_EventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_StartDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_StopDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_Modifiers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::NewProp_Modifiers,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZMetaEventData",
		sizeof(FSBZMetaEventData),
		alignof(FSBZMetaEventData),
		Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMetaEventData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMetaEventData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMetaEventData"), sizeof(FSBZMetaEventData), Get_Z_Construct_UScriptStruct_FSBZMetaEventData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMetaEventData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMetaEventData_Hash() { return 1424757380U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

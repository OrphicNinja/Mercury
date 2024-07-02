// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDrillRepData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDrillRepData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDrillRepData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDrillState();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDrillMaterial_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZDrillRepData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZDrillRepData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZDrillRepData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZDrillRepData"), sizeof(FSBZDrillRepData), Get_Z_Construct_UScriptStruct_FSBZDrillRepData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZDrillRepData>()
{
	return FSBZDrillRepData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZDrillRepData(FSBZDrillRepData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZDrillRepData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDrillRepData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDrillRepData()
	{
		UScriptStruct::DeferCppStructOps<FSBZDrillRepData>(FName(TEXT("SBZDrillRepData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZDrillRepData;
	struct Z_Construct_UScriptStruct_FSBZDrillRepData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressLast_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProgressLast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatLast_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeatLast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatPerSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeatPerSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressPerSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProgressPerSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFastSpeed_MetaData[];
#endif
		static void NewProp_bFastSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFastSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZDrillRepData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZDrillRepData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillRepData" },
		{ "ModuleRelativePath", "Public/SBZDrillRepData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDrillRepData, State), Z_Construct_UEnum_Starbreeze_ESBZDrillState, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_ProgressLast_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillRepData" },
		{ "ModuleRelativePath", "Public/SBZDrillRepData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_ProgressLast = { "ProgressLast", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDrillRepData, ProgressLast), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_ProgressLast_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_ProgressLast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_HeatLast_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillRepData" },
		{ "ModuleRelativePath", "Public/SBZDrillRepData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_HeatLast = { "HeatLast", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDrillRepData, HeatLast), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_HeatLast_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_HeatLast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_HeatPerSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillRepData" },
		{ "ModuleRelativePath", "Public/SBZDrillRepData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_HeatPerSec = { "HeatPerSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDrillRepData, HeatPerSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_HeatPerSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_HeatPerSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_ProgressPerSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillRepData" },
		{ "ModuleRelativePath", "Public/SBZDrillRepData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_ProgressPerSec = { "ProgressPerSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDrillRepData, ProgressPerSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_ProgressPerSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_ProgressPerSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_LastTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillRepData" },
		{ "ModuleRelativePath", "Public/SBZDrillRepData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_LastTime = { "LastTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDrillRepData, LastTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_LastTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_LastTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_bFastSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillRepData" },
		{ "ModuleRelativePath", "Public/SBZDrillRepData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_bFastSpeed_SetBit(void* Obj)
	{
		((FSBZDrillRepData*)Obj)->bFastSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_bFastSpeed = { "bFastSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZDrillRepData), &Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_bFastSpeed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_bFastSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_bFastSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_CurrentMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillRepData" },
		{ "ModuleRelativePath", "Public/SBZDrillRepData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_CurrentMaterial = { "CurrentMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDrillRepData, CurrentMaterial), Z_Construct_UClass_USBZDrillMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_CurrentMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_CurrentMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_ProgressLast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_HeatLast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_HeatPerSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_ProgressPerSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_LastTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_bFastSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::NewProp_CurrentMaterial,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZDrillRepData",
		sizeof(FSBZDrillRepData),
		alignof(FSBZDrillRepData),
		Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZDrillRepData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZDrillRepData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZDrillRepData"), sizeof(FSBZDrillRepData), Get_Z_Construct_UScriptStruct_FSBZDrillRepData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZDrillRepData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZDrillRepData_Hash() { return 508450534U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

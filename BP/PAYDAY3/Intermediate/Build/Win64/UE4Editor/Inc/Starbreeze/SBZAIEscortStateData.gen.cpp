// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIEscortStateData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIEscortStateData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAIEscortStateData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZAIEscortStateData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAIEscortStateData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAIEscortStateData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAIEscortStateData"), sizeof(FSBZAIEscortStateData), Get_Z_Construct_UScriptStruct_FSBZAIEscortStateData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAIEscortStateData>()
{
	return FSBZAIEscortStateData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAIEscortStateData(FSBZAIEscortStateData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAIEscortStateData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAIEscortStateData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAIEscortStateData()
	{
		UScriptStruct::DeferCppStructOps<FSBZAIEscortStateData>(FName(TEXT("SBZAIEscortStateData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAIEscortStateData;
	struct Z_Construct_UScriptStruct_FSBZAIEscortStateData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscortStateBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EscortStateBehavior;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavQueryFilterOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NavQueryFilterOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIEscortStateData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAIEscortStateData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAIEscortStateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAIEscortStateData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIEscortStateData_Statics::NewProp_EscortStateBehavior_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIEscortStateData" },
		{ "ModuleRelativePath", "Public/SBZAIEscortStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZAIEscortStateData_Statics::NewProp_EscortStateBehavior = { "EscortStateBehavior", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIEscortStateData, EscortStateBehavior), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIEscortStateData_Statics::NewProp_EscortStateBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIEscortStateData_Statics::NewProp_EscortStateBehavior_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIEscortStateData_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIEscortStateData" },
		{ "ModuleRelativePath", "Public/SBZAIEscortStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAIEscortStateData_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIEscortStateData, Priority), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIEscortStateData_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIEscortStateData_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIEscortStateData_Statics::NewProp_NavQueryFilterOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIEscortStateData" },
		{ "ModuleRelativePath", "Public/SBZAIEscortStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSBZAIEscortStateData_Statics::NewProp_NavQueryFilterOverride = { "NavQueryFilterOverride", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIEscortStateData, NavQueryFilterOverride), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIEscortStateData_Statics::NewProp_NavQueryFilterOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIEscortStateData_Statics::NewProp_NavQueryFilterOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAIEscortStateData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIEscortStateData_Statics::NewProp_EscortStateBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIEscortStateData_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIEscortStateData_Statics::NewProp_NavQueryFilterOverride,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAIEscortStateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAIEscortStateData",
		sizeof(FSBZAIEscortStateData),
		alignof(FSBZAIEscortStateData),
		Z_Construct_UScriptStruct_FSBZAIEscortStateData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIEscortStateData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIEscortStateData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIEscortStateData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAIEscortStateData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAIEscortStateData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAIEscortStateData"), sizeof(FSBZAIEscortStateData), Get_Z_Construct_UScriptStruct_FSBZAIEscortStateData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAIEscortStateData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAIEscortStateData_Hash() { return 4291559687U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

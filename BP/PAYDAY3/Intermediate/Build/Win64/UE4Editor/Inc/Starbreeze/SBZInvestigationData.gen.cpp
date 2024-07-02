// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInvestigationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInvestigationData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInvestigationData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_Investigate_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActionNotificationAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZInvestigationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZInvestigationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZInvestigationData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZInvestigationData"), sizeof(FSBZInvestigationData), Get_Z_Construct_UScriptStruct_FSBZInvestigationData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZInvestigationData>()
{
	return FSBZInvestigationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZInvestigationData(FSBZInvestigationData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZInvestigationData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInvestigationData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInvestigationData()
	{
		UScriptStruct::DeferCppStructOps<FSBZInvestigationData>(FName(TEXT("SBZInvestigationData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZInvestigationData;
	struct Z_Construct_UScriptStruct_FSBZInvestigationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Investigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Investigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OrderInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Escalation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Escalation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZInvestigationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZInvestigationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewProp_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInvestigationData" },
		{ "ModuleRelativePath", "Public/SBZInvestigationData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInvestigationData, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewProp_Instigator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInvestigationData" },
		{ "ModuleRelativePath", "Public/SBZInvestigationData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInvestigationData, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewProp_Investigator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInvestigationData" },
		{ "ModuleRelativePath", "Public/SBZInvestigationData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewProp_Investigator = { "Investigator", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInvestigationData, Investigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewProp_Investigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewProp_Investigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewProp_OrderInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInvestigationData" },
		{ "ModuleRelativePath", "Public/SBZInvestigationData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewProp_OrderInstance = { "OrderInstance", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInvestigationData, OrderInstance), Z_Construct_UClass_USBZAIOrder_Investigate_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewProp_OrderInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewProp_OrderInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewProp_Escalation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInvestigationData" },
		{ "ModuleRelativePath", "Public/SBZInvestigationData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewProp_Escalation = { "Escalation", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInvestigationData, Escalation), Z_Construct_UClass_USBZActionNotificationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewProp_Escalation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewProp_Escalation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewProp_Investigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewProp_OrderInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::NewProp_Escalation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZInvestigationData",
		sizeof(FSBZInvestigationData),
		alignof(FSBZInvestigationData),
		Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZInvestigationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZInvestigationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZInvestigationData"), sizeof(FSBZInvestigationData), Get_Z_Construct_UScriptStruct_FSBZInvestigationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZInvestigationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZInvestigationData_Hash() { return 4237523277U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

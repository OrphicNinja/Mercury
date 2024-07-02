// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCheckInteractableScreenInputData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCheckInteractableScreenInputData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgentManager_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZCheckInteractableScreenInputData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCheckInteractableScreenInputData"), sizeof(FSBZCheckInteractableScreenInputData), Get_Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCheckInteractableScreenInputData>()
{
	return FSBZCheckInteractableScreenInputData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCheckInteractableScreenInputData(FSBZCheckInteractableScreenInputData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCheckInteractableScreenInputData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCheckInteractableScreenInputData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCheckInteractableScreenInputData()
	{
		UScriptStruct::DeferCppStructOps<FSBZCheckInteractableScreenInputData>(FName(TEXT("SBZCheckInteractableScreenInputData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCheckInteractableScreenInputData;
	struct Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AgentManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCheckInteractableScreenInputData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCheckInteractableScreenInputData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData_Statics::NewProp_Interactor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCheckInteractableScreenInputData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCheckInteractableScreenInputData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCheckInteractableScreenInputData, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData_Statics::NewProp_Interactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData_Statics::NewProp_AgentManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCheckInteractableScreenInputData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCheckInteractableScreenInputData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData_Statics::NewProp_AgentManager = { "AgentManager", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCheckInteractableScreenInputData, AgentManager), Z_Construct_UClass_USBZAgentManager_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData_Statics::NewProp_AgentManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData_Statics::NewProp_AgentManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData_Statics::NewProp_AgentManager,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCheckInteractableScreenInputData",
		sizeof(FSBZCheckInteractableScreenInputData),
		alignof(FSBZCheckInteractableScreenInputData),
		Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCheckInteractableScreenInputData"), sizeof(FSBZCheckInteractableScreenInputData), Get_Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCheckInteractableScreenInputData_Hash() { return 3847204039U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

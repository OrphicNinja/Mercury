// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReplicatedInteractionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReplicatedInteractionData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZReplicatedInteractionData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZReplicatedInteractionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZReplicatedInteractionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZReplicatedInteractionData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZReplicatedInteractionData"), sizeof(FSBZReplicatedInteractionData), Get_Z_Construct_UScriptStruct_FSBZReplicatedInteractionData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZReplicatedInteractionData>()
{
	return FSBZReplicatedInteractionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZReplicatedInteractionData(FSBZReplicatedInteractionData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZReplicatedInteractionData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZReplicatedInteractionData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZReplicatedInteractionData()
	{
		UScriptStruct::DeferCppStructOps<FSBZReplicatedInteractionData>(FName(TEXT("SBZReplicatedInteractionData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZReplicatedInteractionData;
	struct Z_Construct_UScriptStruct_FSBZReplicatedInteractionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_ModeIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReplicatedInteractionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZReplicatedInteractionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZReplicatedInteractionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZReplicatedInteractionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReplicatedInteractionData_Statics::NewProp_CurrentInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplicatedInteractionData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZReplicatedInteractionData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZReplicatedInteractionData_Statics::NewProp_CurrentInteraction = { "CurrentInteraction", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReplicatedInteractionData, CurrentInteraction), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReplicatedInteractionData_Statics::NewProp_CurrentInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplicatedInteractionData_Statics::NewProp_CurrentInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReplicatedInteractionData_Statics::NewProp_ModeIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplicatedInteractionData" },
		{ "ModuleRelativePath", "Public/SBZReplicatedInteractionData.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FSBZReplicatedInteractionData_Statics::NewProp_ModeIndex = { "ModeIndex", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReplicatedInteractionData, ModeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReplicatedInteractionData_Statics::NewProp_ModeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplicatedInteractionData_Statics::NewProp_ModeIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZReplicatedInteractionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReplicatedInteractionData_Statics::NewProp_CurrentInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReplicatedInteractionData_Statics::NewProp_ModeIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZReplicatedInteractionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZReplicatedInteractionData",
		sizeof(FSBZReplicatedInteractionData),
		alignof(FSBZReplicatedInteractionData),
		Z_Construct_UScriptStruct_FSBZReplicatedInteractionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplicatedInteractionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReplicatedInteractionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplicatedInteractionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZReplicatedInteractionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZReplicatedInteractionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZReplicatedInteractionData"), sizeof(FSBZReplicatedInteractionData), Get_Z_Construct_UScriptStruct_FSBZReplicatedInteractionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZReplicatedInteractionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZReplicatedInteractionData_Hash() { return 1123609433U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

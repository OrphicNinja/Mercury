// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPawnSpawnRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPawnSpawnRequest() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPawnSpawnRequest();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPawnSpawnRequestData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPawnSpawnBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSpawnSignificance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZPawnSpawnRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPawnSpawnRequest, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPawnSpawnRequest"), sizeof(FSBZPawnSpawnRequest), Get_Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPawnSpawnRequest>()
{
	return FSBZPawnSpawnRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPawnSpawnRequest(FSBZPawnSpawnRequest::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPawnSpawnRequest"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPawnSpawnRequest
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPawnSpawnRequest()
	{
		UScriptStruct::DeferCppStructOps<FSBZPawnSpawnRequest>(FName(TEXT("SBZPawnSpawnRequest")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPawnSpawnRequest;
	struct Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawner_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Spawner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Significance_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Significance_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Significance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameplayEffectClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPawnSpawnRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnRequest" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPawnSpawnRequest, Data), Z_Construct_UClass_USBZPawnSpawnRequestData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_Spawner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnRequest" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_Spawner = { "Spawner", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPawnSpawnRequest, Spawner), Z_Construct_UClass_ASBZPawnSpawnBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_Spawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_Spawner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_Action_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnRequest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPawnSpawnRequest, Action), Z_Construct_UClass_USBZAIAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_Action_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_Significance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_Significance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnRequest" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_Significance = { "Significance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPawnSpawnRequest, Significance), Z_Construct_UEnum_Starbreeze_ESBZSpawnSignificance, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_Significance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_Significance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_GameplayEffectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnRequest" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_GameplayEffectClass = { "GameplayEffectClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPawnSpawnRequest, GameplayEffectClass), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_GameplayEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_GameplayEffectClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_Spawner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_Significance_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_Significance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::NewProp_GameplayEffectClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPawnSpawnRequest",
		sizeof(FSBZPawnSpawnRequest),
		alignof(FSBZPawnSpawnRequest),
		Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPawnSpawnRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPawnSpawnRequest"), sizeof(FSBZPawnSpawnRequest), Get_Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPawnSpawnRequest_Hash() { return 4143033606U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZActorSpawnRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZActorSpawnRequest() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZActorSpawnRequest();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActorSpawnRequestData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZActorSpawnBase_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZActorSpawnRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZActorSpawnRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZActorSpawnRequest, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZActorSpawnRequest"), sizeof(FSBZActorSpawnRequest), Get_Z_Construct_UScriptStruct_FSBZActorSpawnRequest_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZActorSpawnRequest>()
{
	return FSBZActorSpawnRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZActorSpawnRequest(FSBZActorSpawnRequest::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZActorSpawnRequest"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZActorSpawnRequest
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZActorSpawnRequest()
	{
		UScriptStruct::DeferCppStructOps<FSBZActorSpawnRequest>(FName(TEXT("SBZActorSpawnRequest")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZActorSpawnRequest;
	struct Z_Construct_UScriptStruct_FSBZActorSpawnRequest_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActorSpawnRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZActorSpawnRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZActorSpawnRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZActorSpawnRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActorSpawnRequest_Statics::NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorSpawnRequest" },
		{ "ModuleRelativePath", "Public/SBZActorSpawnRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZActorSpawnRequest_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZActorSpawnRequest, Data), Z_Construct_UClass_USBZActorSpawnRequestData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActorSpawnRequest_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActorSpawnRequest_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActorSpawnRequest_Statics::NewProp_Spawner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorSpawnRequest" },
		{ "ModuleRelativePath", "Public/SBZActorSpawnRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSBZActorSpawnRequest_Statics::NewProp_Spawner = { "Spawner", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZActorSpawnRequest, Spawner), Z_Construct_UClass_ASBZActorSpawnBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActorSpawnRequest_Statics::NewProp_Spawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActorSpawnRequest_Statics::NewProp_Spawner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZActorSpawnRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZActorSpawnRequest_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZActorSpawnRequest_Statics::NewProp_Spawner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZActorSpawnRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZActorSpawnRequest",
		sizeof(FSBZActorSpawnRequest),
		alignof(FSBZActorSpawnRequest),
		Z_Construct_UScriptStruct_FSBZActorSpawnRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActorSpawnRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActorSpawnRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActorSpawnRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZActorSpawnRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZActorSpawnRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZActorSpawnRequest"), sizeof(FSBZActorSpawnRequest), Get_Z_Construct_UScriptStruct_FSBZActorSpawnRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZActorSpawnRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZActorSpawnRequest_Hash() { return 3495920115U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

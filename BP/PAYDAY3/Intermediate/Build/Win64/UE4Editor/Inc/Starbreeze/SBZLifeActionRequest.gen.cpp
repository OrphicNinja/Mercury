// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLifeActionRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLifeActionRequest() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLifeActionRequest();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionInstance_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionSlot_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionAffinitytData_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZLifeActionRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLifeActionRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLifeActionRequest, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLifeActionRequest"), sizeof(FSBZLifeActionRequest), Get_Z_Construct_UScriptStruct_FSBZLifeActionRequest_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLifeActionRequest>()
{
	return FSBZLifeActionRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLifeActionRequest(FSBZLifeActionRequest::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLifeActionRequest"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLifeActionRequest
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLifeActionRequest()
	{
		UScriptStruct::DeferCppStructOps<FSBZLifeActionRequest>(FName(TEXT("SBZLifeActionRequest")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLifeActionRequest;
	struct Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecificActionComponentOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpecificActionComponentOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecificActionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpecificActionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecificActionInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpecificActionInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecificActionSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpecificActionSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecificAffinityData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpecificAffinityData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLifeActionRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SpecificActionComponentOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionRequest" },
		{ "ModuleRelativePath", "Public/SBZLifeActionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SpecificActionComponentOwner = { "SpecificActionComponentOwner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLifeActionRequest, SpecificActionComponentOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SpecificActionComponentOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SpecificActionComponentOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SpecificActionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionRequest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SpecificActionComponent = { "SpecificActionComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLifeActionRequest, SpecificActionComponent), Z_Construct_UClass_USBZLifeActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SpecificActionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SpecificActionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SpecificActionInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionRequest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SpecificActionInstance = { "SpecificActionInstance", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLifeActionRequest, SpecificActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SpecificActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SpecificActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SpecificActionSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionRequest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SpecificActionSlot = { "SpecificActionSlot", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLifeActionRequest, SpecificActionSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SpecificActionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SpecificActionSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_ActionTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionRequest" },
		{ "ModuleRelativePath", "Public/SBZLifeActionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_ActionTag = { "ActionTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLifeActionRequest, ActionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_ActionTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_ActionTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SlotTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionRequest" },
		{ "ModuleRelativePath", "Public/SBZLifeActionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SlotTag = { "SlotTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLifeActionRequest, SlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SlotTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SlotTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SpecificAffinityData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionRequest" },
		{ "ModuleRelativePath", "Public/SBZLifeActionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SpecificAffinityData = { "SpecificAffinityData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLifeActionRequest, SpecificAffinityData), Z_Construct_UClass_USBZLifeActionAffinitytData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SpecificAffinityData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SpecificAffinityData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SpecificActionComponentOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SpecificActionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SpecificActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SpecificActionSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_ActionTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SlotTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::NewProp_SpecificAffinityData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZLifeActionRequest",
		sizeof(FSBZLifeActionRequest),
		alignof(FSBZLifeActionRequest),
		Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLifeActionRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLifeActionRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLifeActionRequest"), sizeof(FSBZLifeActionRequest), Get_Z_Construct_UScriptStruct_FSBZLifeActionRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLifeActionRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLifeActionRequest_Hash() { return 3461786551U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

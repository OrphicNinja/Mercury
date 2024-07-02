// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMontageSectionSwitchRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMontageSectionSwitchRequest() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAutoSectionSwitchNotifyState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZMontageSectionSwitchRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMontageSectionSwitchRequest"), sizeof(FSBZMontageSectionSwitchRequest), Get_Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMontageSectionSwitchRequest>()
{
	return FSBZMontageSectionSwitchRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMontageSectionSwitchRequest(FSBZMontageSectionSwitchRequest::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMontageSectionSwitchRequest"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMontageSectionSwitchRequest
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMontageSectionSwitchRequest()
	{
		UScriptStruct::DeferCppStructOps<FSBZMontageSectionSwitchRequest>(FName(TEXT("SBZMontageSectionSwitchRequest")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMontageSectionSwitchRequest;
	struct Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NotifyState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMontageSectionSwitchRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMontageSectionSwitchRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest_Statics::NewProp_NotifyState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMontageSectionSwitchRequest" },
		{ "ModuleRelativePath", "Public/SBZMontageSectionSwitchRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest_Statics::NewProp_NotifyState = { "NotifyState", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMontageSectionSwitchRequest, NotifyState), Z_Construct_UClass_USBZAutoSectionSwitchNotifyState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest_Statics::NewProp_NotifyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest_Statics::NewProp_NotifyState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest_Statics::NewProp_Montage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMontageSectionSwitchRequest" },
		{ "ModuleRelativePath", "Public/SBZMontageSectionSwitchRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMontageSectionSwitchRequest, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest_Statics::NewProp_Montage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest_Statics::NewProp_NotifyState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest_Statics::NewProp_Montage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZMontageSectionSwitchRequest",
		sizeof(FSBZMontageSectionSwitchRequest),
		alignof(FSBZMontageSectionSwitchRequest),
		Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMontageSectionSwitchRequest"), sizeof(FSBZMontageSectionSwitchRequest), Get_Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMontageSectionSwitchRequest_Hash() { return 2148434896U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

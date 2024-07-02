// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEventRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEventRequest() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEventRequest();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVoicePriority();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTargetFinder_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
// End Cross Module References
class UScriptStruct* FSBZEventRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZEventRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZEventRequest, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZEventRequest"), sizeof(FSBZEventRequest), Get_Z_Construct_UScriptStruct_FSBZEventRequest_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZEventRequest>()
{
	return FSBZEventRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZEventRequest(FSBZEventRequest::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZEventRequest"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEventRequest
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEventRequest()
	{
		UScriptStruct::DeferCppStructOps<FSBZEventRequest>(FName(TEXT("SBZEventRequest")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZEventRequest;
	struct Z_Construct_UScriptStruct_FSBZEventRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoiceComment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VoicePriority_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoicePriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VoicePriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EQSQuery_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EQSQuery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetFinder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetFinder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldLoopFromBeginPlay_MetaData[];
#endif
		static void NewProp_bShouldLoopFromBeginPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldLoopFromBeginPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundLoopInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoundLoopInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEventRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZEventRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZEventRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_VoiceComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEventRequest" },
		{ "ModuleRelativePath", "Public/SBZEventRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_VoiceComment = { "VoiceComment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEventRequest, VoiceComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_VoiceComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_VoiceComment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_VoicePriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_VoicePriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEventRequest" },
		{ "ModuleRelativePath", "Public/SBZEventRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_VoicePriority = { "VoicePriority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEventRequest, VoicePriority), Z_Construct_UEnum_Starbreeze_ESBZVoicePriority, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_VoicePriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_VoicePriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_EQSQuery_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEventRequest" },
		{ "ModuleRelativePath", "Public/SBZEventRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_EQSQuery = { "EQSQuery", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEventRequest, EQSQuery), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_EQSQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_EQSQuery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_TargetFinder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEventRequest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZEventRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_TargetFinder = { "TargetFinder", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEventRequest, TargetFinder), Z_Construct_UClass_USBZTargetFinder_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_TargetFinder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_TargetFinder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_bShouldLoopFromBeginPlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEventRequest" },
		{ "ModuleRelativePath", "Public/SBZEventRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_bShouldLoopFromBeginPlay_SetBit(void* Obj)
	{
		((FSBZEventRequest*)Obj)->bShouldLoopFromBeginPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_bShouldLoopFromBeginPlay = { "bShouldLoopFromBeginPlay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZEventRequest), &Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_bShouldLoopFromBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_bShouldLoopFromBeginPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_bShouldLoopFromBeginPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_SoundLoopInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEventRequest" },
		{ "ModuleRelativePath", "Public/SBZEventRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_SoundLoopInterval = { "SoundLoopInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEventRequest, SoundLoopInterval), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_SoundLoopInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_SoundLoopInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZEventRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_VoiceComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_VoicePriority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_VoicePriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_EQSQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_TargetFinder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_bShouldLoopFromBeginPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEventRequest_Statics::NewProp_SoundLoopInterval,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZEventRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZEventRequest",
		sizeof(FSBZEventRequest),
		alignof(FSBZEventRequest),
		Z_Construct_UScriptStruct_FSBZEventRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEventRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEventRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEventRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZEventRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZEventRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZEventRequest"), sizeof(FSBZEventRequest), Get_Z_Construct_UScriptStruct_FSBZEventRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZEventRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZEventRequest_Hash() { return 2574428904U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

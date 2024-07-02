// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIAlertnessComment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIAlertnessComment() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAIAlertnessComment();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZAIAlertnessComment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAIAlertnessComment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAIAlertnessComment, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAIAlertnessComment"), sizeof(FSBZAIAlertnessComment), Get_Z_Construct_UScriptStruct_FSBZAIAlertnessComment_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAIAlertnessComment>()
{
	return FSBZAIAlertnessComment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAIAlertnessComment(FSBZAIAlertnessComment::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAIAlertnessComment"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAIAlertnessComment
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAIAlertnessComment()
	{
		UScriptStruct::DeferCppStructOps<FSBZAIAlertnessComment>(FName(TEXT("SBZAIAlertnessComment")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAIAlertnessComment;
	struct Z_Construct_UScriptStruct_FSBZAIAlertnessComment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RaisedTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RaisedTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoweredTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoweredTo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIAlertnessComment_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAlertnessComment.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAIAlertnessComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAIAlertnessComment>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIAlertnessComment_Statics::NewProp_RaisedTo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAlertnessComment" },
		{ "ModuleRelativePath", "Public/SBZAIAlertnessComment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZAIAlertnessComment_Statics::NewProp_RaisedTo = { "RaisedTo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIAlertnessComment, RaisedTo), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIAlertnessComment_Statics::NewProp_RaisedTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIAlertnessComment_Statics::NewProp_RaisedTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIAlertnessComment_Statics::NewProp_LoweredTo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAlertnessComment" },
		{ "ModuleRelativePath", "Public/SBZAIAlertnessComment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZAIAlertnessComment_Statics::NewProp_LoweredTo = { "LoweredTo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIAlertnessComment, LoweredTo), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIAlertnessComment_Statics::NewProp_LoweredTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIAlertnessComment_Statics::NewProp_LoweredTo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAIAlertnessComment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIAlertnessComment_Statics::NewProp_RaisedTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIAlertnessComment_Statics::NewProp_LoweredTo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAIAlertnessComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAIAlertnessComment",
		sizeof(FSBZAIAlertnessComment),
		alignof(FSBZAIAlertnessComment),
		Z_Construct_UScriptStruct_FSBZAIAlertnessComment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIAlertnessComment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIAlertnessComment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIAlertnessComment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAIAlertnessComment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAIAlertnessComment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAIAlertnessComment"), sizeof(FSBZAIAlertnessComment), Get_Z_Construct_UScriptStruct_FSBZAIAlertnessComment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAIAlertnessComment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAIAlertnessComment_Hash() { return 853952856U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

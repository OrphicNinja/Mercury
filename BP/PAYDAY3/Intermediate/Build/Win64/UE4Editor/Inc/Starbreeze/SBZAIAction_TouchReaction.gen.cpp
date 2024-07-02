// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIAction_TouchReaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIAction_TouchReaction() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_TouchReaction_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_TouchReaction();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_Order();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3DefeatState();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVoicePriority();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActionNotificationAsset_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIAction_TouchReaction::execOnTargetDefeatStateChanged)
	{
		P_GET_OBJECT(ASBZPlayerState,Z_Param_InSBZPlayerState);
		P_GET_ENUM(EPD3DefeatState,Z_Param_OldDefeatState);
		P_GET_ENUM(EPD3DefeatState,Z_Param_InDefeatState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetDefeatStateChanged(Z_Param_InSBZPlayerState,EPD3DefeatState(Z_Param_OldDefeatState),EPD3DefeatState(Z_Param_InDefeatState));
		P_NATIVE_END;
	}
	void USBZAIAction_TouchReaction::StaticRegisterNativesUSBZAIAction_TouchReaction()
	{
		UClass* Class = USBZAIAction_TouchReaction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTargetDefeatStateChanged", &USBZAIAction_TouchReaction::execOnTargetDefeatStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIAction_TouchReaction_OnTargetDefeatStateChanged_Statics
	{
		struct SBZAIAction_TouchReaction_eventOnTargetDefeatStateChanged_Parms
		{
			ASBZPlayerState* InSBZPlayerState;
			EPD3DefeatState OldDefeatState;
			EPD3DefeatState InDefeatState;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSBZPlayerState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldDefeatState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldDefeatState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InDefeatState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InDefeatState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIAction_TouchReaction_OnTargetDefeatStateChanged_Statics::NewProp_InSBZPlayerState = { "InSBZPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAction_TouchReaction_eventOnTargetDefeatStateChanged_Parms, InSBZPlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIAction_TouchReaction_OnTargetDefeatStateChanged_Statics::NewProp_OldDefeatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAIAction_TouchReaction_OnTargetDefeatStateChanged_Statics::NewProp_OldDefeatState = { "OldDefeatState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAction_TouchReaction_eventOnTargetDefeatStateChanged_Parms, OldDefeatState), Z_Construct_UEnum_Starbreeze_EPD3DefeatState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIAction_TouchReaction_OnTargetDefeatStateChanged_Statics::NewProp_InDefeatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAIAction_TouchReaction_OnTargetDefeatStateChanged_Statics::NewProp_InDefeatState = { "InDefeatState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAction_TouchReaction_eventOnTargetDefeatStateChanged_Parms, InDefeatState), Z_Construct_UEnum_Starbreeze_EPD3DefeatState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIAction_TouchReaction_OnTargetDefeatStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_TouchReaction_OnTargetDefeatStateChanged_Statics::NewProp_InSBZPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_TouchReaction_OnTargetDefeatStateChanged_Statics::NewProp_OldDefeatState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_TouchReaction_OnTargetDefeatStateChanged_Statics::NewProp_OldDefeatState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_TouchReaction_OnTargetDefeatStateChanged_Statics::NewProp_InDefeatState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_TouchReaction_OnTargetDefeatStateChanged_Statics::NewProp_InDefeatState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIAction_TouchReaction_OnTargetDefeatStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIAction_TouchReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIAction_TouchReaction_OnTargetDefeatStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIAction_TouchReaction, nullptr, "OnTargetDefeatStateChanged", nullptr, nullptr, sizeof(SBZAIAction_TouchReaction_eventOnTargetDefeatStateChanged_Parms), Z_Construct_UFunction_USBZAIAction_TouchReaction_OnTargetDefeatStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAction_TouchReaction_OnTargetDefeatStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIAction_TouchReaction_OnTargetDefeatStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAction_TouchReaction_OnTargetDefeatStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIAction_TouchReaction_OnTargetDefeatStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIAction_TouchReaction_OnTargetDefeatStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIAction_TouchReaction_NoRegister()
	{
		return USBZAIAction_TouchReaction::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIAction_TouchReaction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrivateVoiceComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrivateVoiceComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublicVoiceComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PublicVoiceComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResumeVoiceComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResumeVoiceComment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VoicePriority_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoicePriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VoicePriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Escalation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Escalation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrivateToPublicTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrivateToPublicTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForbiddenTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForbiddenTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIAction_Order,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIAction_TouchReaction_OnTargetDefeatStateChanged, "OnTargetDefeatStateChanged" }, // 134769555
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIAction_TouchReaction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAction_TouchReaction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_PrivateVoiceComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_TouchReaction" },
		{ "ModuleRelativePath", "Public/SBZAIAction_TouchReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_PrivateVoiceComment = { "PrivateVoiceComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAction_TouchReaction, PrivateVoiceComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_PrivateVoiceComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_PrivateVoiceComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_PublicVoiceComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_TouchReaction" },
		{ "ModuleRelativePath", "Public/SBZAIAction_TouchReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_PublicVoiceComment = { "PublicVoiceComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAction_TouchReaction, PublicVoiceComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_PublicVoiceComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_PublicVoiceComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_ResumeVoiceComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_TouchReaction" },
		{ "ModuleRelativePath", "Public/SBZAIAction_TouchReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_ResumeVoiceComment = { "ResumeVoiceComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAction_TouchReaction, ResumeVoiceComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_ResumeVoiceComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_ResumeVoiceComment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_VoicePriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_VoicePriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_TouchReaction" },
		{ "ModuleRelativePath", "Public/SBZAIAction_TouchReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_VoicePriority = { "VoicePriority", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAction_TouchReaction, VoicePriority), Z_Construct_UEnum_Starbreeze_ESBZVoicePriority, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_VoicePriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_VoicePriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_Escalation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_TouchReaction" },
		{ "ModuleRelativePath", "Public/SBZAIAction_TouchReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_Escalation = { "Escalation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAction_TouchReaction, Escalation), Z_Construct_UClass_USBZActionNotificationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_Escalation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_Escalation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_PrivateToPublicTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_TouchReaction" },
		{ "ModuleRelativePath", "Public/SBZAIAction_TouchReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_PrivateToPublicTags = { "PrivateToPublicTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAction_TouchReaction, PrivateToPublicTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_PrivateToPublicTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_PrivateToPublicTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_ForbiddenTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_TouchReaction" },
		{ "ModuleRelativePath", "Public/SBZAIAction_TouchReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_ForbiddenTags = { "ForbiddenTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAction_TouchReaction, ForbiddenTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_ForbiddenTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_ForbiddenTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_TargetPlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_TouchReaction" },
		{ "ModuleRelativePath", "Public/SBZAIAction_TouchReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_TargetPlayerState = { "TargetPlayerState", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAction_TouchReaction, TargetPlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_TargetPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_TargetPlayerState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_PrivateVoiceComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_PublicVoiceComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_ResumeVoiceComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_VoicePriority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_VoicePriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_Escalation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_PrivateToPublicTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_ForbiddenTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::NewProp_TargetPlayerState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIAction_TouchReaction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::ClassParams = {
		&USBZAIAction_TouchReaction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIAction_TouchReaction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIAction_TouchReaction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIAction_TouchReaction, 364136051);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIAction_TouchReaction>()
	{
		return USBZAIAction_TouchReaction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIAction_TouchReaction(Z_Construct_UClass_USBZAIAction_TouchReaction, &USBZAIAction_TouchReaction::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIAction_TouchReaction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIAction_TouchReaction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

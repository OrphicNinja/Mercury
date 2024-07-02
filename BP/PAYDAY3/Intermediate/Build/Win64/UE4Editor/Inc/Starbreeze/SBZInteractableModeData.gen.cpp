// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInteractableModeData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInteractableModeData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInteractableModeData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAnimatedInteractionData_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZInteractableModeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZInteractableModeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZInteractableModeData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZInteractableModeData"), sizeof(FSBZInteractableModeData), Get_Z_Construct_UScriptStruct_FSBZInteractableModeData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZInteractableModeData>()
{
	return FSBZInteractableModeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZInteractableModeData(FSBZInteractableModeData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZInteractableModeData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInteractableModeData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInteractableModeData()
	{
		UScriptStruct::DeferCppStructOps<FSBZInteractableModeData>(FName(TEXT("SBZInteractableModeData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZInteractableModeData;
	struct Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInputConsumed_MetaData[];
#endif
		static void NewProp_bIsInputConsumed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInputConsumed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDistanceBreaksInteraction_MetaData[];
#endif
		static void NewProp_bDistanceBreaksInteraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDistanceBreaksInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAllowedInCasing_MetaData[];
#endif
		static void NewProp_bIsAllowedInCasing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAllowedInCasing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSignalInteract_MetaData[];
#endif
		static void NewProp_bIsSignalInteract_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSignalInteract;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsIllegal_MetaData[];
#endif
		static void NewProp_bIsIllegal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsIllegal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnimationName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimatedInteractionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimatedInteractionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStart2DAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnStart2DAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStart3DAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnStart3DAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinish2DAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnFinish2DAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinish3DAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnFinish3DAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCancel2DAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnCancel2DAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCancel3DAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnCancel3DAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CompletedComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CancelComment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractableModeData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZInteractableModeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_Text_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableModeData" },
		{ "ModuleRelativePath", "Public/SBZInteractableModeData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractableModeData, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableModeData" },
		{ "ModuleRelativePath", "Public/SBZInteractableModeData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractableModeData, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsInputConsumed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableModeData" },
		{ "ModuleRelativePath", "Public/SBZInteractableModeData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsInputConsumed_SetBit(void* Obj)
	{
		((FSBZInteractableModeData*)Obj)->bIsInputConsumed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsInputConsumed = { "bIsInputConsumed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZInteractableModeData), &Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsInputConsumed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsInputConsumed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsInputConsumed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bDistanceBreaksInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableModeData" },
		{ "ModuleRelativePath", "Public/SBZInteractableModeData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bDistanceBreaksInteraction_SetBit(void* Obj)
	{
		((FSBZInteractableModeData*)Obj)->bDistanceBreaksInteraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bDistanceBreaksInteraction = { "bDistanceBreaksInteraction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZInteractableModeData), &Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bDistanceBreaksInteraction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bDistanceBreaksInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bDistanceBreaksInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsAllowedInCasing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableModeData" },
		{ "ModuleRelativePath", "Public/SBZInteractableModeData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsAllowedInCasing_SetBit(void* Obj)
	{
		((FSBZInteractableModeData*)Obj)->bIsAllowedInCasing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsAllowedInCasing = { "bIsAllowedInCasing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZInteractableModeData), &Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsAllowedInCasing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsAllowedInCasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsAllowedInCasing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsSignalInteract_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableModeData" },
		{ "ModuleRelativePath", "Public/SBZInteractableModeData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsSignalInteract_SetBit(void* Obj)
	{
		((FSBZInteractableModeData*)Obj)->bIsSignalInteract = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsSignalInteract = { "bIsSignalInteract", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZInteractableModeData), &Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsSignalInteract_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsSignalInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsSignalInteract_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsIllegal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableModeData" },
		{ "ModuleRelativePath", "Public/SBZInteractableModeData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsIllegal_SetBit(void* Obj)
	{
		((FSBZInteractableModeData*)Obj)->bIsIllegal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsIllegal = { "bIsIllegal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZInteractableModeData), &Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsIllegal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsIllegal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsIllegal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableModeData" },
		{ "ModuleRelativePath", "Public/SBZInteractableModeData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractableModeData, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_AnimationName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableModeData" },
		{ "ModuleRelativePath", "Public/SBZInteractableModeData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_AnimationName = { "AnimationName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractableModeData, AnimationName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_AnimationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_AnimationName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_AnimatedInteractionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableModeData" },
		{ "ModuleRelativePath", "Public/SBZInteractableModeData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_AnimatedInteractionData = { "AnimatedInteractionData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractableModeData, AnimatedInteractionData), Z_Construct_UClass_USBZAnimatedInteractionData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_AnimatedInteractionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_AnimatedInteractionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnStart2DAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableModeData" },
		{ "ModuleRelativePath", "Public/SBZInteractableModeData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnStart2DAudioEvent = { "OnStart2DAudioEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractableModeData, OnStart2DAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnStart2DAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnStart2DAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnStart3DAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableModeData" },
		{ "ModuleRelativePath", "Public/SBZInteractableModeData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnStart3DAudioEvent = { "OnStart3DAudioEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractableModeData, OnStart3DAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnStart3DAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnStart3DAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnFinish2DAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableModeData" },
		{ "ModuleRelativePath", "Public/SBZInteractableModeData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnFinish2DAudioEvent = { "OnFinish2DAudioEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractableModeData, OnFinish2DAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnFinish2DAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnFinish2DAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnFinish3DAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableModeData" },
		{ "ModuleRelativePath", "Public/SBZInteractableModeData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnFinish3DAudioEvent = { "OnFinish3DAudioEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractableModeData, OnFinish3DAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnFinish3DAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnFinish3DAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnCancel2DAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableModeData" },
		{ "ModuleRelativePath", "Public/SBZInteractableModeData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnCancel2DAudioEvent = { "OnCancel2DAudioEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractableModeData, OnCancel2DAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnCancel2DAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnCancel2DAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnCancel3DAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableModeData" },
		{ "ModuleRelativePath", "Public/SBZInteractableModeData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnCancel3DAudioEvent = { "OnCancel3DAudioEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractableModeData, OnCancel3DAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnCancel3DAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnCancel3DAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_StartComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableModeData" },
		{ "ModuleRelativePath", "Public/SBZInteractableModeData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_StartComment = { "StartComment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractableModeData, StartComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_StartComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_StartComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_CompletedComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableModeData" },
		{ "ModuleRelativePath", "Public/SBZInteractableModeData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_CompletedComment = { "CompletedComment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractableModeData, CompletedComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_CompletedComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_CompletedComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_CancelComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableModeData" },
		{ "ModuleRelativePath", "Public/SBZInteractableModeData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_CancelComment = { "CancelComment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractableModeData, CancelComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_CancelComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_CancelComment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsInputConsumed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bDistanceBreaksInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsAllowedInCasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsSignalInteract,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_bIsIllegal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_AnimationName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_AnimatedInteractionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnStart2DAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnStart3DAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnFinish2DAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnFinish3DAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnCancel2DAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_OnCancel3DAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_StartComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_CompletedComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::NewProp_CancelComment,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZInteractableModeData",
		sizeof(FSBZInteractableModeData),
		alignof(FSBZInteractableModeData),
		Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZInteractableModeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZInteractableModeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZInteractableModeData"), sizeof(FSBZInteractableModeData), Get_Z_Construct_UScriptStruct_FSBZInteractableModeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZInteractableModeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZInteractableModeData_Hash() { return 1262774923U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

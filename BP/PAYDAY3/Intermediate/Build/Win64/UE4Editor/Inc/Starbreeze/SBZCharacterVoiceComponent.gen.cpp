// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterVoiceComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterVoiceComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterVoiceComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterVoiceComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerCallEvent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVoicePriority();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVoiceEventData();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVoiceGruntType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogAnimDataCollection_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterCommentAssets();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAIAlertnessComment();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogDataAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZCharacterVoiceComponent::execCallRecieved)
	{
		P_GET_STRUCT_REF(FSBZPlayerCallEvent,Z_Param_Out_CallEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallRecieved(Z_Param_Out_CallEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterVoiceComponent::execHandleAudioComponentActivated)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_Component);
		P_GET_UBOOL(Z_Param_bReset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleAudioComponentActivated(Z_Param_Component,Z_Param_bReset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterVoiceComponent::execHandleAudioComponentDeactivated)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleAudioComponentDeactivated(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterVoiceComponent::execMulticast_SaySystemComment)
	{
		P_GET_OBJECT(USBZVoiceCommentDataAsset,Z_Param_CommentDataAsset);
		P_GET_ENUM(ESBZVoicePriority,Z_Param_InPlayingPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SaySystemComment_Implementation(Z_Param_CommentDataAsset,ESBZVoicePriority(Z_Param_InPlayingPriority));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterVoiceComponent::execMulticast_SaySystemComment_ServerInstigated)
	{
		P_GET_OBJECT(USBZVoiceCommentDataAsset,Z_Param_CommentDataAsset);
		P_GET_ENUM(ESBZVoicePriority,Z_Param_InPlayingPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SaySystemComment_ServerInstigated_Implementation(Z_Param_CommentDataAsset,ESBZVoicePriority(Z_Param_InPlayingPriority));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterVoiceComponent::execOnDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterVoiceComponent::execOnStaminaValueChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OldValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStaminaValueChanged(Z_Param_NewValue,Z_Param_OldValue,Z_Param_MaxValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterVoiceComponent::execOnTakeDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTakeDamage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterVoiceComponent::execSay)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AudioEvent);
		P_GET_ENUM(ESBZVoicePriority,Z_Param_InPlayingPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Say(Z_Param_AudioEvent,ESBZVoicePriority(Z_Param_InPlayingPriority));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterVoiceComponent::execSayCharacterEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CommentState);
		P_GET_STRUCT_REF(FSBZVoiceEventData,Z_Param_Out_InCharacterVoiceEvent);
		P_GET_ENUM(ESBZVoicePriority,Z_Param_InPlayingPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SayCharacterEvent(Z_Param_CommentState,Z_Param_Out_InCharacterVoiceEvent,ESBZVoicePriority(Z_Param_InPlayingPriority));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterVoiceComponent::execSayDialogLine)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AudioEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SayDialogLine(Z_Param_AudioEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterVoiceComponent::execSayDialogLineByCharacterEvent)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_CommentState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SayDialogLineByCharacterEvent(Z_Param_Out_CommentState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterVoiceComponent::execSayGrunt)
	{
		P_GET_ENUM(ESBZVoiceGruntType,Z_Param_GruntType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SayGrunt(ESBZVoiceGruntType(Z_Param_GruntType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterVoiceComponent::execSaySystemComment)
	{
		P_GET_OBJECT(USBZVoiceCommentDataAsset,Z_Param_CommentDataAsset);
		P_GET_ENUM(ESBZVoicePriority,Z_Param_InPlayingPriority);
		P_GET_UBOOL(Z_Param_bReplicated);
		P_GET_UBOOL(Z_Param_bServerInstigated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaySystemComment(Z_Param_CommentDataAsset,ESBZVoicePriority(Z_Param_InPlayingPriority),Z_Param_bReplicated,Z_Param_bServerInstigated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterVoiceComponent::execServer_SaySystemComment)
	{
		P_GET_OBJECT(USBZVoiceCommentDataAsset,Z_Param_CommentDataAsset);
		P_GET_ENUM(ESBZVoicePriority,Z_Param_InPlayingPriority);
		P_GET_UBOOL(Z_Param_bServerInstigated);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SaySystemComment_Validate(Z_Param_CommentDataAsset,ESBZVoicePriority(Z_Param_InPlayingPriority),Z_Param_bServerInstigated))
		{
			RPC_ValidateFailed(TEXT("Server_SaySystemComment_Validate"));
			return;
		}
		P_THIS->Server_SaySystemComment_Implementation(Z_Param_CommentDataAsset,ESBZVoicePriority(Z_Param_InPlayingPriority),Z_Param_bServerInstigated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterVoiceComponent::execStopTalking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopTalking();
		P_NATIVE_END;
	}
	static FName NAME_USBZCharacterVoiceComponent_Multicast_SaySystemComment = FName(TEXT("Multicast_SaySystemComment"));
	void USBZCharacterVoiceComponent::Multicast_SaySystemComment(const USBZVoiceCommentDataAsset* CommentDataAsset, ESBZVoicePriority InPlayingPriority)
	{
		SBZCharacterVoiceComponent_eventMulticast_SaySystemComment_Parms Parms;
		Parms.CommentDataAsset=CommentDataAsset;
		Parms.InPlayingPriority=InPlayingPriority;
		ProcessEvent(FindFunctionChecked(NAME_USBZCharacterVoiceComponent_Multicast_SaySystemComment),&Parms);
	}
	static FName NAME_USBZCharacterVoiceComponent_Multicast_SaySystemComment_ServerInstigated = FName(TEXT("Multicast_SaySystemComment_ServerInstigated"));
	void USBZCharacterVoiceComponent::Multicast_SaySystemComment_ServerInstigated(const USBZVoiceCommentDataAsset* CommentDataAsset, ESBZVoicePriority InPlayingPriority)
	{
		SBZCharacterVoiceComponent_eventMulticast_SaySystemComment_ServerInstigated_Parms Parms;
		Parms.CommentDataAsset=CommentDataAsset;
		Parms.InPlayingPriority=InPlayingPriority;
		ProcessEvent(FindFunctionChecked(NAME_USBZCharacterVoiceComponent_Multicast_SaySystemComment_ServerInstigated),&Parms);
	}
	static FName NAME_USBZCharacterVoiceComponent_Server_SaySystemComment = FName(TEXT("Server_SaySystemComment"));
	void USBZCharacterVoiceComponent::Server_SaySystemComment(const USBZVoiceCommentDataAsset* CommentDataAsset, ESBZVoicePriority InPlayingPriority, bool bServerInstigated)
	{
		SBZCharacterVoiceComponent_eventServer_SaySystemComment_Parms Parms;
		Parms.CommentDataAsset=CommentDataAsset;
		Parms.InPlayingPriority=InPlayingPriority;
		Parms.bServerInstigated=bServerInstigated ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZCharacterVoiceComponent_Server_SaySystemComment),&Parms);
	}
	void USBZCharacterVoiceComponent::StaticRegisterNativesUSBZCharacterVoiceComponent()
	{
		UClass* Class = USBZCharacterVoiceComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallRecieved", &USBZCharacterVoiceComponent::execCallRecieved },
			{ "HandleAudioComponentActivated", &USBZCharacterVoiceComponent::execHandleAudioComponentActivated },
			{ "HandleAudioComponentDeactivated", &USBZCharacterVoiceComponent::execHandleAudioComponentDeactivated },
			{ "Multicast_SaySystemComment", &USBZCharacterVoiceComponent::execMulticast_SaySystemComment },
			{ "Multicast_SaySystemComment_ServerInstigated", &USBZCharacterVoiceComponent::execMulticast_SaySystemComment_ServerInstigated },
			{ "OnDeath", &USBZCharacterVoiceComponent::execOnDeath },
			{ "OnStaminaValueChanged", &USBZCharacterVoiceComponent::execOnStaminaValueChanged },
			{ "OnTakeDamage", &USBZCharacterVoiceComponent::execOnTakeDamage },
			{ "Say", &USBZCharacterVoiceComponent::execSay },
			{ "SayCharacterEvent", &USBZCharacterVoiceComponent::execSayCharacterEvent },
			{ "SayDialogLine", &USBZCharacterVoiceComponent::execSayDialogLine },
			{ "SayDialogLineByCharacterEvent", &USBZCharacterVoiceComponent::execSayDialogLineByCharacterEvent },
			{ "SayGrunt", &USBZCharacterVoiceComponent::execSayGrunt },
			{ "SaySystemComment", &USBZCharacterVoiceComponent::execSaySystemComment },
			{ "Server_SaySystemComment", &USBZCharacterVoiceComponent::execServer_SaySystemComment },
			{ "StopTalking", &USBZCharacterVoiceComponent::execStopTalking },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCharacterVoiceComponent_CallRecieved_Statics
	{
		struct SBZCharacterVoiceComponent_eventCallRecieved_Parms
		{
			FSBZPlayerCallEvent CallEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CallEventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterVoiceComponent_CallRecieved_Statics::NewProp_CallEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_CallRecieved_Statics::NewProp_CallEventData = { "CallEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterVoiceComponent_eventCallRecieved_Parms, CallEventData), Z_Construct_UScriptStruct_FSBZPlayerCallEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterVoiceComponent_CallRecieved_Statics::NewProp_CallEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_CallRecieved_Statics::NewProp_CallEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterVoiceComponent_CallRecieved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_CallRecieved_Statics::NewProp_CallEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterVoiceComponent_CallRecieved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterVoiceComponent_CallRecieved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterVoiceComponent, nullptr, "CallRecieved", nullptr, nullptr, sizeof(SBZCharacterVoiceComponent_eventCallRecieved_Parms), Z_Construct_UFunction_USBZCharacterVoiceComponent_CallRecieved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_CallRecieved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterVoiceComponent_CallRecieved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_CallRecieved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterVoiceComponent_CallRecieved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterVoiceComponent_CallRecieved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentActivated_Statics
	{
		struct SBZCharacterVoiceComponent_eventHandleAudioComponentActivated_Parms
		{
			UActorComponent* Component;
			bool bReset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_bReset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentActivated_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentActivated_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterVoiceComponent_eventHandleAudioComponentActivated_Parms, Component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentActivated_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentActivated_Statics::NewProp_Component_MetaData)) };
	void Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentActivated_Statics::NewProp_bReset_SetBit(void* Obj)
	{
		((SBZCharacterVoiceComponent_eventHandleAudioComponentActivated_Parms*)Obj)->bReset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentActivated_Statics::NewProp_bReset = { "bReset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCharacterVoiceComponent_eventHandleAudioComponentActivated_Parms), &Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentActivated_Statics::NewProp_bReset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentActivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentActivated_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentActivated_Statics::NewProp_bReset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterVoiceComponent, nullptr, "HandleAudioComponentActivated", nullptr, nullptr, sizeof(SBZCharacterVoiceComponent_eventHandleAudioComponentActivated_Parms), Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentActivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentDeactivated_Statics
	{
		struct SBZCharacterVoiceComponent_eventHandleAudioComponentDeactivated_Parms
		{
			UActorComponent* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentDeactivated_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentDeactivated_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterVoiceComponent_eventHandleAudioComponentDeactivated_Parms, Component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentDeactivated_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentDeactivated_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentDeactivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentDeactivated_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentDeactivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentDeactivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterVoiceComponent, nullptr, "HandleAudioComponentDeactivated", nullptr, nullptr, sizeof(SBZCharacterVoiceComponent_eventHandleAudioComponentDeactivated_Parms), Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentDeactivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentDeactivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentDeactivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentDeactivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentDeactivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentDeactivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommentDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CommentDataAsset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPlayingPriority_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPlayingPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_Statics::NewProp_CommentDataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_Statics::NewProp_CommentDataAsset = { "CommentDataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterVoiceComponent_eventMulticast_SaySystemComment_Parms, CommentDataAsset), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_Statics::NewProp_CommentDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_Statics::NewProp_CommentDataAsset_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_Statics::NewProp_InPlayingPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_Statics::NewProp_InPlayingPriority = { "InPlayingPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterVoiceComponent_eventMulticast_SaySystemComment_Parms, InPlayingPriority), Z_Construct_UEnum_Starbreeze_ESBZVoicePriority, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_Statics::NewProp_CommentDataAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_Statics::NewProp_InPlayingPriority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_Statics::NewProp_InPlayingPriority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterVoiceComponent, nullptr, "Multicast_SaySystemComment", nullptr, nullptr, sizeof(SBZCharacterVoiceComponent_eventMulticast_SaySystemComment_Parms), Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_ServerInstigated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommentDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CommentDataAsset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPlayingPriority_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPlayingPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_ServerInstigated_Statics::NewProp_CommentDataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_ServerInstigated_Statics::NewProp_CommentDataAsset = { "CommentDataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterVoiceComponent_eventMulticast_SaySystemComment_ServerInstigated_Parms, CommentDataAsset), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_ServerInstigated_Statics::NewProp_CommentDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_ServerInstigated_Statics::NewProp_CommentDataAsset_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_ServerInstigated_Statics::NewProp_InPlayingPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_ServerInstigated_Statics::NewProp_InPlayingPriority = { "InPlayingPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterVoiceComponent_eventMulticast_SaySystemComment_ServerInstigated_Parms, InPlayingPriority), Z_Construct_UEnum_Starbreeze_ESBZVoicePriority, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_ServerInstigated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_ServerInstigated_Statics::NewProp_CommentDataAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_ServerInstigated_Statics::NewProp_InPlayingPriority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_ServerInstigated_Statics::NewProp_InPlayingPriority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_ServerInstigated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_ServerInstigated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterVoiceComponent, nullptr, "Multicast_SaySystemComment_ServerInstigated", nullptr, nullptr, sizeof(SBZCharacterVoiceComponent_eventMulticast_SaySystemComment_ServerInstigated_Parms), Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_ServerInstigated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_ServerInstigated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_ServerInstigated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_ServerInstigated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_ServerInstigated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_ServerInstigated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterVoiceComponent_OnDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterVoiceComponent_OnDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterVoiceComponent_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterVoiceComponent, nullptr, "OnDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterVoiceComponent_OnDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_OnDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterVoiceComponent_OnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterVoiceComponent_OnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterVoiceComponent_OnStaminaValueChanged_Statics
	{
		struct SBZCharacterVoiceComponent_eventOnStaminaValueChanged_Parms
		{
			float NewValue;
			float OldValue;
			float MaxValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_OnStaminaValueChanged_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterVoiceComponent_eventOnStaminaValueChanged_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_OnStaminaValueChanged_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterVoiceComponent_eventOnStaminaValueChanged_Parms, OldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_OnStaminaValueChanged_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterVoiceComponent_eventOnStaminaValueChanged_Parms, MaxValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterVoiceComponent_OnStaminaValueChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_OnStaminaValueChanged_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_OnStaminaValueChanged_Statics::NewProp_OldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_OnStaminaValueChanged_Statics::NewProp_MaxValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterVoiceComponent_OnStaminaValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterVoiceComponent_OnStaminaValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterVoiceComponent, nullptr, "OnStaminaValueChanged", nullptr, nullptr, sizeof(SBZCharacterVoiceComponent_eventOnStaminaValueChanged_Parms), Z_Construct_UFunction_USBZCharacterVoiceComponent_OnStaminaValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_OnStaminaValueChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterVoiceComponent_OnStaminaValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_OnStaminaValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterVoiceComponent_OnStaminaValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterVoiceComponent_OnStaminaValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterVoiceComponent_OnTakeDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterVoiceComponent_OnTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterVoiceComponent_OnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterVoiceComponent, nullptr, "OnTakeDamage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterVoiceComponent_OnTakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_OnTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterVoiceComponent_OnTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterVoiceComponent_OnTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterVoiceComponent_Say_Statics
	{
		struct SBZCharacterVoiceComponent_eventSay_Parms
		{
			UAkAudioEvent* AudioEvent;
			ESBZVoicePriority InPlayingPriority;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioEvent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPlayingPriority_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPlayingPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_Say_Statics::NewProp_AudioEvent = { "AudioEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterVoiceComponent_eventSay_Parms, AudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_Say_Statics::NewProp_InPlayingPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_Say_Statics::NewProp_InPlayingPriority = { "InPlayingPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterVoiceComponent_eventSay_Parms, InPlayingPriority), Z_Construct_UEnum_Starbreeze_ESBZVoicePriority, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterVoiceComponent_Say_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_Say_Statics::NewProp_AudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_Say_Statics::NewProp_InPlayingPriority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_Say_Statics::NewProp_InPlayingPriority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterVoiceComponent_Say_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterVoiceComponent_Say_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterVoiceComponent, nullptr, "Say", nullptr, nullptr, sizeof(SBZCharacterVoiceComponent_eventSay_Parms), Z_Construct_UFunction_USBZCharacterVoiceComponent_Say_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_Say_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterVoiceComponent_Say_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_Say_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterVoiceComponent_Say()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterVoiceComponent_Say_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterVoiceComponent_SayCharacterEvent_Statics
	{
		struct SBZCharacterVoiceComponent_eventSayCharacterEvent_Parms
		{
			FString CommentState;
			FSBZVoiceEventData InCharacterVoiceEvent;
			ESBZVoicePriority InPlayingPriority;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CommentState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCharacterVoiceEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InCharacterVoiceEvent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPlayingPriority_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPlayingPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterVoiceComponent_SayCharacterEvent_Statics::NewProp_CommentState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_SayCharacterEvent_Statics::NewProp_CommentState = { "CommentState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterVoiceComponent_eventSayCharacterEvent_Parms, CommentState), METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterVoiceComponent_SayCharacterEvent_Statics::NewProp_CommentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_SayCharacterEvent_Statics::NewProp_CommentState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterVoiceComponent_SayCharacterEvent_Statics::NewProp_InCharacterVoiceEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_SayCharacterEvent_Statics::NewProp_InCharacterVoiceEvent = { "InCharacterVoiceEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterVoiceComponent_eventSayCharacterEvent_Parms, InCharacterVoiceEvent), Z_Construct_UScriptStruct_FSBZVoiceEventData, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterVoiceComponent_SayCharacterEvent_Statics::NewProp_InCharacterVoiceEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_SayCharacterEvent_Statics::NewProp_InCharacterVoiceEvent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_SayCharacterEvent_Statics::NewProp_InPlayingPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_SayCharacterEvent_Statics::NewProp_InPlayingPriority = { "InPlayingPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterVoiceComponent_eventSayCharacterEvent_Parms, InPlayingPriority), Z_Construct_UEnum_Starbreeze_ESBZVoicePriority, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterVoiceComponent_SayCharacterEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_SayCharacterEvent_Statics::NewProp_CommentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_SayCharacterEvent_Statics::NewProp_InCharacterVoiceEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_SayCharacterEvent_Statics::NewProp_InPlayingPriority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_SayCharacterEvent_Statics::NewProp_InPlayingPriority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterVoiceComponent_SayCharacterEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterVoiceComponent_SayCharacterEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterVoiceComponent, nullptr, "SayCharacterEvent", nullptr, nullptr, sizeof(SBZCharacterVoiceComponent_eventSayCharacterEvent_Parms), Z_Construct_UFunction_USBZCharacterVoiceComponent_SayCharacterEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_SayCharacterEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterVoiceComponent_SayCharacterEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_SayCharacterEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterVoiceComponent_SayCharacterEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterVoiceComponent_SayCharacterEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLine_Statics
	{
		struct SBZCharacterVoiceComponent_eventSayDialogLine_Parms
		{
			UAkAudioEvent* AudioEvent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLine_Statics::NewProp_AudioEvent = { "AudioEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterVoiceComponent_eventSayDialogLine_Parms, AudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLine_Statics::NewProp_AudioEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterVoiceComponent, nullptr, "SayDialogLine", nullptr, nullptr, sizeof(SBZCharacterVoiceComponent_eventSayDialogLine_Parms), Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLineByCharacterEvent_Statics
	{
		struct SBZCharacterVoiceComponent_eventSayDialogLineByCharacterEvent_Parms
		{
			FString CommentState;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CommentState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLineByCharacterEvent_Statics::NewProp_CommentState = { "CommentState", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterVoiceComponent_eventSayDialogLineByCharacterEvent_Parms, CommentState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLineByCharacterEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLineByCharacterEvent_Statics::NewProp_CommentState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLineByCharacterEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLineByCharacterEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterVoiceComponent, nullptr, "SayDialogLineByCharacterEvent", nullptr, nullptr, sizeof(SBZCharacterVoiceComponent_eventSayDialogLineByCharacterEvent_Parms), Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLineByCharacterEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLineByCharacterEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLineByCharacterEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLineByCharacterEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLineByCharacterEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLineByCharacterEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterVoiceComponent_SayGrunt_Statics
	{
		struct SBZCharacterVoiceComponent_eventSayGrunt_Parms
		{
			ESBZVoiceGruntType GruntType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GruntType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GruntType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_SayGrunt_Statics::NewProp_GruntType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_SayGrunt_Statics::NewProp_GruntType = { "GruntType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterVoiceComponent_eventSayGrunt_Parms, GruntType), Z_Construct_UEnum_Starbreeze_ESBZVoiceGruntType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterVoiceComponent_SayGrunt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_SayGrunt_Statics::NewProp_GruntType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_SayGrunt_Statics::NewProp_GruntType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterVoiceComponent_SayGrunt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterVoiceComponent_SayGrunt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterVoiceComponent, nullptr, "SayGrunt", nullptr, nullptr, sizeof(SBZCharacterVoiceComponent_eventSayGrunt_Parms), Z_Construct_UFunction_USBZCharacterVoiceComponent_SayGrunt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_SayGrunt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterVoiceComponent_SayGrunt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_SayGrunt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterVoiceComponent_SayGrunt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterVoiceComponent_SayGrunt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics
	{
		struct SBZCharacterVoiceComponent_eventSaySystemComment_Parms
		{
			const USBZVoiceCommentDataAsset* CommentDataAsset;
			ESBZVoicePriority InPlayingPriority;
			bool bReplicated;
			bool bServerInstigated;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommentDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CommentDataAsset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPlayingPriority_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPlayingPriority;
		static void NewProp_bReplicated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicated;
		static void NewProp_bServerInstigated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bServerInstigated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics::NewProp_CommentDataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics::NewProp_CommentDataAsset = { "CommentDataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterVoiceComponent_eventSaySystemComment_Parms, CommentDataAsset), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics::NewProp_CommentDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics::NewProp_CommentDataAsset_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics::NewProp_InPlayingPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics::NewProp_InPlayingPriority = { "InPlayingPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterVoiceComponent_eventSaySystemComment_Parms, InPlayingPriority), Z_Construct_UEnum_Starbreeze_ESBZVoicePriority, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics::NewProp_bReplicated_SetBit(void* Obj)
	{
		((SBZCharacterVoiceComponent_eventSaySystemComment_Parms*)Obj)->bReplicated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics::NewProp_bReplicated = { "bReplicated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCharacterVoiceComponent_eventSaySystemComment_Parms), &Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics::NewProp_bReplicated_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics::NewProp_bServerInstigated_SetBit(void* Obj)
	{
		((SBZCharacterVoiceComponent_eventSaySystemComment_Parms*)Obj)->bServerInstigated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics::NewProp_bServerInstigated = { "bServerInstigated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCharacterVoiceComponent_eventSaySystemComment_Parms), &Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics::NewProp_bServerInstigated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics::NewProp_CommentDataAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics::NewProp_InPlayingPriority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics::NewProp_InPlayingPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics::NewProp_bReplicated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics::NewProp_bServerInstigated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterVoiceComponent, nullptr, "SaySystemComment", nullptr, nullptr, sizeof(SBZCharacterVoiceComponent_eventSaySystemComment_Parms), Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterVoiceComponent_Server_SaySystemComment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommentDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CommentDataAsset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPlayingPriority_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPlayingPriority;
		static void NewProp_bServerInstigated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bServerInstigated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterVoiceComponent_Server_SaySystemComment_Statics::NewProp_CommentDataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_Server_SaySystemComment_Statics::NewProp_CommentDataAsset = { "CommentDataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterVoiceComponent_eventServer_SaySystemComment_Parms, CommentDataAsset), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterVoiceComponent_Server_SaySystemComment_Statics::NewProp_CommentDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_Server_SaySystemComment_Statics::NewProp_CommentDataAsset_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_Server_SaySystemComment_Statics::NewProp_InPlayingPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_Server_SaySystemComment_Statics::NewProp_InPlayingPriority = { "InPlayingPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterVoiceComponent_eventServer_SaySystemComment_Parms, InPlayingPriority), Z_Construct_UEnum_Starbreeze_ESBZVoicePriority, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZCharacterVoiceComponent_Server_SaySystemComment_Statics::NewProp_bServerInstigated_SetBit(void* Obj)
	{
		((SBZCharacterVoiceComponent_eventServer_SaySystemComment_Parms*)Obj)->bServerInstigated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCharacterVoiceComponent_Server_SaySystemComment_Statics::NewProp_bServerInstigated = { "bServerInstigated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCharacterVoiceComponent_eventServer_SaySystemComment_Parms), &Z_Construct_UFunction_USBZCharacterVoiceComponent_Server_SaySystemComment_Statics::NewProp_bServerInstigated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterVoiceComponent_Server_SaySystemComment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_Server_SaySystemComment_Statics::NewProp_CommentDataAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_Server_SaySystemComment_Statics::NewProp_InPlayingPriority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_Server_SaySystemComment_Statics::NewProp_InPlayingPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterVoiceComponent_Server_SaySystemComment_Statics::NewProp_bServerInstigated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterVoiceComponent_Server_SaySystemComment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterVoiceComponent_Server_SaySystemComment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterVoiceComponent, nullptr, "Server_SaySystemComment", nullptr, nullptr, sizeof(SBZCharacterVoiceComponent_eventServer_SaySystemComment_Parms), Z_Construct_UFunction_USBZCharacterVoiceComponent_Server_SaySystemComment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_Server_SaySystemComment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterVoiceComponent_Server_SaySystemComment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_Server_SaySystemComment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterVoiceComponent_Server_SaySystemComment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterVoiceComponent_Server_SaySystemComment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterVoiceComponent_StopTalking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterVoiceComponent_StopTalking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterVoiceComponent_StopTalking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterVoiceComponent, nullptr, "StopTalking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterVoiceComponent_StopTalking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterVoiceComponent_StopTalking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterVoiceComponent_StopTalking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterVoiceComponent_StopTalking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCharacterVoiceComponent_NoRegister()
	{
		return USBZCharacterVoiceComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZCharacterVoiceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceAttachPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VoiceAttachPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceAttachOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VoiceAttachOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceSpacialRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoiceSpacialRTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceFilterRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoiceFilterRTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceFilterRTPCValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VoiceFilterRTPCValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundBanks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundBanks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoundBanks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogAnimDataCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogAnimDataCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceEventDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VoiceEventDataArray;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultSwitches_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultSwitches_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSwitches_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DefaultSwitches;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomDefaultSwitches_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomDefaultSwitches_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RandomDefaultSwitches;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomVoiceSwitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomVoiceSwitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartFatigueEventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartFatigueEventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopFatigueEventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StopFatigueEventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FatigueRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FatigueRTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommentAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CommentAssets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIAlertnessComments_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AIAlertnessComments_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIAlertnessComments_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AIAlertnessComments;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIAlertnessDialogRules_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AIAlertnessDialogRules_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIAlertnessDialogRules_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AIAlertnessDialogRules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveLipSyncPrefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RemoveLipSyncPrefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveSubtitlePrefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RemoveSubtitlePrefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveSubtitleSuffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RemoveSubtitleSuffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SBZCharacterOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SBZCharacterOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerformsInDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerformsInDialog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCharacterVoiceComponent_CallRecieved, "CallRecieved" }, // 4036332010
		{ &Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentActivated, "HandleAudioComponentActivated" }, // 1002410918
		{ &Z_Construct_UFunction_USBZCharacterVoiceComponent_HandleAudioComponentDeactivated, "HandleAudioComponentDeactivated" }, // 889433528
		{ &Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment, "Multicast_SaySystemComment" }, // 3484977392
		{ &Z_Construct_UFunction_USBZCharacterVoiceComponent_Multicast_SaySystemComment_ServerInstigated, "Multicast_SaySystemComment_ServerInstigated" }, // 2174786502
		{ &Z_Construct_UFunction_USBZCharacterVoiceComponent_OnDeath, "OnDeath" }, // 3200497738
		{ &Z_Construct_UFunction_USBZCharacterVoiceComponent_OnStaminaValueChanged, "OnStaminaValueChanged" }, // 1218712526
		{ &Z_Construct_UFunction_USBZCharacterVoiceComponent_OnTakeDamage, "OnTakeDamage" }, // 1817418883
		{ &Z_Construct_UFunction_USBZCharacterVoiceComponent_Say, "Say" }, // 3337623801
		{ &Z_Construct_UFunction_USBZCharacterVoiceComponent_SayCharacterEvent, "SayCharacterEvent" }, // 2707077582
		{ &Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLine, "SayDialogLine" }, // 1201460777
		{ &Z_Construct_UFunction_USBZCharacterVoiceComponent_SayDialogLineByCharacterEvent, "SayDialogLineByCharacterEvent" }, // 271829770
		{ &Z_Construct_UFunction_USBZCharacterVoiceComponent_SayGrunt, "SayGrunt" }, // 2207438277
		{ &Z_Construct_UFunction_USBZCharacterVoiceComponent_SaySystemComment, "SaySystemComment" }, // 413239773
		{ &Z_Construct_UFunction_USBZCharacterVoiceComponent_Server_SaySystemComment, "Server_SaySystemComment" }, // 1875307746
		{ &Z_Construct_UFunction_USBZCharacterVoiceComponent_StopTalking, "StopTalking" }, // 1916495224
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZCharacterVoiceComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceAttachPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVoiceComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceAttachPoint = { "VoiceAttachPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVoiceComponent, VoiceAttachPoint), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceAttachPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceAttachPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceAttachOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVoiceComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceAttachOffset = { "VoiceAttachOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVoiceComponent, VoiceAttachOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceAttachOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceAttachOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceSpacialRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVoiceComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceSpacialRTPC = { "VoiceSpacialRTPC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVoiceComponent, VoiceSpacialRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceSpacialRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceSpacialRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceFilterRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVoiceComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceFilterRTPC = { "VoiceFilterRTPC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVoiceComponent, VoiceFilterRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceFilterRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceFilterRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceFilterRTPCValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVoiceComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceFilterRTPCValue = { "VoiceFilterRTPCValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVoiceComponent, VoiceFilterRTPCValue), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceFilterRTPCValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceFilterRTPCValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_SoundBanks_Inner = { "SoundBanks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_SoundBanks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVoiceComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_SoundBanks = { "SoundBanks", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVoiceComponent, SoundBanks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_SoundBanks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_SoundBanks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_DialogAnimDataCollection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVoiceComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_DialogAnimDataCollection = { "DialogAnimDataCollection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVoiceComponent, DialogAnimDataCollection), Z_Construct_UClass_USBZDialogAnimDataCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_DialogAnimDataCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_DialogAnimDataCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceEventDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVoiceComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceEventDataArray = { "VoiceEventDataArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(VoiceEventDataArray, USBZCharacterVoiceComponent), STRUCT_OFFSET(USBZCharacterVoiceComponent, VoiceEventDataArray), Z_Construct_UScriptStruct_FSBZVoiceEventData, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceEventDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceEventDataArray_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_DefaultSwitches_ValueProp = { "DefaultSwitches", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_DefaultSwitches_Key_KeyProp = { "DefaultSwitches_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_DefaultSwitches_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVoiceComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_DefaultSwitches = { "DefaultSwitches", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVoiceComponent, DefaultSwitches), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_DefaultSwitches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_DefaultSwitches_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RandomDefaultSwitches_Inner = { "RandomDefaultSwitches", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RandomDefaultSwitches_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVoiceComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RandomDefaultSwitches = { "RandomDefaultSwitches", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVoiceComponent, RandomDefaultSwitches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RandomDefaultSwitches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RandomDefaultSwitches_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RandomVoiceSwitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVoiceComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RandomVoiceSwitch = { "RandomVoiceSwitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVoiceComponent, RandomVoiceSwitch), Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RandomVoiceSwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RandomVoiceSwitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_StartFatigueEventName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVoiceComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_StartFatigueEventName = { "StartFatigueEventName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVoiceComponent, StartFatigueEventName), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_StartFatigueEventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_StartFatigueEventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_StopFatigueEventName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVoiceComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_StopFatigueEventName = { "StopFatigueEventName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVoiceComponent, StopFatigueEventName), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_StopFatigueEventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_StopFatigueEventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_FatigueRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVoiceComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_FatigueRTPC = { "FatigueRTPC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVoiceComponent, FatigueRTPC), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_FatigueRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_FatigueRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_CommentAssets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVoiceComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_CommentAssets = { "CommentAssets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVoiceComponent, CommentAssets), Z_Construct_UScriptStruct_FSBZCharacterCommentAssets, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_CommentAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_CommentAssets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_AIAlertnessComments_ValueProp = { "AIAlertnessComments", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZAIAlertnessComment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_AIAlertnessComments_Key_KeyProp = { "AIAlertnessComments_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_AIAlertnessComments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVoiceComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_AIAlertnessComments = { "AIAlertnessComments", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVoiceComponent, AIAlertnessComments), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_AIAlertnessComments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_AIAlertnessComments_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_AIAlertnessDialogRules_ValueProp = { "AIAlertnessDialogRules", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_AIAlertnessDialogRules_Key_KeyProp = { "AIAlertnessDialogRules_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_AIAlertnessDialogRules_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVoiceComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_AIAlertnessDialogRules = { "AIAlertnessDialogRules", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVoiceComponent, AIAlertnessDialogRules), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_AIAlertnessDialogRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_AIAlertnessDialogRules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RemoveLipSyncPrefix_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVoiceComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RemoveLipSyncPrefix = { "RemoveLipSyncPrefix", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVoiceComponent, RemoveLipSyncPrefix), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RemoveLipSyncPrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RemoveLipSyncPrefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RemoveSubtitlePrefix_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVoiceComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RemoveSubtitlePrefix = { "RemoveSubtitlePrefix", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVoiceComponent, RemoveSubtitlePrefix), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RemoveSubtitlePrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RemoveSubtitlePrefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RemoveSubtitleSuffix_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVoiceComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RemoveSubtitleSuffix = { "RemoveSubtitleSuffix", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVoiceComponent, RemoveSubtitleSuffix), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RemoveSubtitleSuffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RemoveSubtitleSuffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_SBZCharacterOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVoiceComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_SBZCharacterOwner = { "SBZCharacterOwner", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVoiceComponent, SBZCharacterOwner), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_SBZCharacterOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_SBZCharacterOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVoiceComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVoiceComponent, AudioComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_PerformsInDialog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterVoiceComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterVoiceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_PerformsInDialog = { "PerformsInDialog", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterVoiceComponent, PerformsInDialog), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_PerformsInDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_PerformsInDialog_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceAttachPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceAttachOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceSpacialRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceFilterRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceFilterRTPCValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_SoundBanks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_SoundBanks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_DialogAnimDataCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_VoiceEventDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_DefaultSwitches_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_DefaultSwitches_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_DefaultSwitches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RandomDefaultSwitches_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RandomDefaultSwitches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RandomVoiceSwitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_StartFatigueEventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_StopFatigueEventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_FatigueRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_CommentAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_AIAlertnessComments_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_AIAlertnessComments_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_AIAlertnessComments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_AIAlertnessDialogRules_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_AIAlertnessDialogRules_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_AIAlertnessDialogRules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RemoveLipSyncPrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RemoveSubtitlePrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_RemoveSubtitleSuffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_SBZCharacterOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::NewProp_PerformsInDialog,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCharacterVoiceComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::ClassParams = {
		&USBZCharacterVoiceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCharacterVoiceComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCharacterVoiceComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCharacterVoiceComponent, 1002015013);
	template<> STARBREEZE_API UClass* StaticClass<USBZCharacterVoiceComponent>()
	{
		return USBZCharacterVoiceComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCharacterVoiceComponent(Z_Construct_UClass_USBZCharacterVoiceComponent, &USBZCharacterVoiceComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCharacterVoiceComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCharacterVoiceComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

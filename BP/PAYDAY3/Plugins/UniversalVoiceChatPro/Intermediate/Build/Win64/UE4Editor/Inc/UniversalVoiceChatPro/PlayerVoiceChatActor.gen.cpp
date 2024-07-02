// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UniversalVoiceChatPro/Public/PlayerVoiceChatActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerVoiceChatActor() {}
// Cross Module References
	UNIVERSALVOICECHATPRO_API UClass* Z_Construct_UClass_APlayerVoiceChatActor_NoRegister();
	UNIVERSALVOICECHATPRO_API UClass* Z_Construct_UClass_APlayerVoiceChatActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UniversalVoiceChatPro();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UNIVERSALVOICECHATPRO_API UClass* Z_Construct_UClass_UMicrophoneSpeakComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APlayerVoiceChatActor::execDelegateEndPlayOwner)
	{
		P_GET_OBJECT(AActor,Z_Param_act);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DelegateEndPlayOwner(Z_Param_act,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execmuteAudio)
	{
		P_GET_UBOOL(Z_Param_isMute);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->muteAudio(Z_Param_isMute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execRepNotifyAttenuationAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RepNotifyAttenuationAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execRepNotifyMicComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RepNotifyMicComp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execRepNotifyVoiceVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RepNotifyVoiceVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execRPCClientAskAddChannel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_channelToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RPCClientAskAddChannel_Implementation(Z_Param_channelToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execRPCClientAskRemoveChannel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_channelToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RPCClientAskRemoveChannel_Implementation(Z_Param_channelToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execRPCClientSetMicrophoneVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RPCClientSetMicrophoneVolume_Implementation(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execRPCServerUpdatePosAudioComp)
	{
		P_GET_STRUCT(FVector,Z_Param_worldPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RPCServerUpdatePosAudioComp_Implementation(Z_Param_worldPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execServerAddChannel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_channelToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerAddChannel(Z_Param_channelToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execServerRemoveChannel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_channelToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRemoveChannel(Z_Param_channelToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execServerSetAllowUseGlobal)
	{
		P_GET_UBOOL(Z_Param__allowUseGlobal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetAllowUseGlobal(Z_Param__allowUseGlobal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execServerSetAllowUseProximity)
	{
		P_GET_UBOOL(Z_Param__allowUseRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetAllowUseProximity(Z_Param__allowUseRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execServerSetAttenuation)
	{
		P_GET_UBOOL(Z_Param_enableAttenuation);
		P_GET_PROPERTY(FStrProperty,Z_Param__pathToAttenuationAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetAttenuation(Z_Param_enableAttenuation,Z_Param__pathToAttenuationAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execServerSetMaxProximityRange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__maxProximityRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetMaxProximityRange(Z_Param__maxProximityRange);
		P_NATIVE_END;
	}
	static FName NAME_APlayerVoiceChatActor_RPCClientAskAddChannel = FName(TEXT("RPCClientAskAddChannel"));
	void APlayerVoiceChatActor::RPCClientAskAddChannel(int32 channelToAdd)
	{
		PlayerVoiceChatActor_eventRPCClientAskAddChannel_Parms Parms;
		Parms.channelToAdd=channelToAdd;
		ProcessEvent(FindFunctionChecked(NAME_APlayerVoiceChatActor_RPCClientAskAddChannel),&Parms);
	}
	static FName NAME_APlayerVoiceChatActor_RPCClientAskRemoveChannel = FName(TEXT("RPCClientAskRemoveChannel"));
	void APlayerVoiceChatActor::RPCClientAskRemoveChannel(int32 channelToRemove)
	{
		PlayerVoiceChatActor_eventRPCClientAskRemoveChannel_Parms Parms;
		Parms.channelToRemove=channelToRemove;
		ProcessEvent(FindFunctionChecked(NAME_APlayerVoiceChatActor_RPCClientAskRemoveChannel),&Parms);
	}
	static FName NAME_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume = FName(TEXT("RPCClientSetMicrophoneVolume"));
	void APlayerVoiceChatActor::RPCClientSetMicrophoneVolume(float volume)
	{
		PlayerVoiceChatActor_eventRPCClientSetMicrophoneVolume_Parms Parms;
		Parms.volume=volume;
		ProcessEvent(FindFunctionChecked(NAME_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume),&Parms);
	}
	static FName NAME_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp = FName(TEXT("RPCServerUpdatePosAudioComp"));
	void APlayerVoiceChatActor::RPCServerUpdatePosAudioComp(FVector worldPos)
	{
		PlayerVoiceChatActor_eventRPCServerUpdatePosAudioComp_Parms Parms;
		Parms.worldPos=worldPos;
		ProcessEvent(FindFunctionChecked(NAME_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp),&Parms);
	}
	void APlayerVoiceChatActor::StaticRegisterNativesAPlayerVoiceChatActor()
	{
		UClass* Class = APlayerVoiceChatActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DelegateEndPlayOwner", &APlayerVoiceChatActor::execDelegateEndPlayOwner },
			{ "muteAudio", &APlayerVoiceChatActor::execmuteAudio },
			{ "RepNotifyAttenuationAsset", &APlayerVoiceChatActor::execRepNotifyAttenuationAsset },
			{ "RepNotifyMicComp", &APlayerVoiceChatActor::execRepNotifyMicComp },
			{ "RepNotifyVoiceVolume", &APlayerVoiceChatActor::execRepNotifyVoiceVolume },
			{ "RPCClientAskAddChannel", &APlayerVoiceChatActor::execRPCClientAskAddChannel },
			{ "RPCClientAskRemoveChannel", &APlayerVoiceChatActor::execRPCClientAskRemoveChannel },
			{ "RPCClientSetMicrophoneVolume", &APlayerVoiceChatActor::execRPCClientSetMicrophoneVolume },
			{ "RPCServerUpdatePosAudioComp", &APlayerVoiceChatActor::execRPCServerUpdatePosAudioComp },
			{ "ServerAddChannel", &APlayerVoiceChatActor::execServerAddChannel },
			{ "ServerRemoveChannel", &APlayerVoiceChatActor::execServerRemoveChannel },
			{ "ServerSetAllowUseGlobal", &APlayerVoiceChatActor::execServerSetAllowUseGlobal },
			{ "ServerSetAllowUseProximity", &APlayerVoiceChatActor::execServerSetAllowUseProximity },
			{ "ServerSetAttenuation", &APlayerVoiceChatActor::execServerSetAttenuation },
			{ "ServerSetMaxProximityRange", &APlayerVoiceChatActor::execServerSetMaxProximityRange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics
	{
		struct PlayerVoiceChatActor_eventDelegateEndPlayOwner_Parms
		{
			AActor* act;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_act;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics::NewProp_act = { "act", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerVoiceChatActor_eventDelegateEndPlayOwner_Parms, act), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerVoiceChatActor_eventDelegateEndPlayOwner_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics::NewProp_act,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "DelegateEndPlayOwner", nullptr, nullptr, sizeof(PlayerVoiceChatActor_eventDelegateEndPlayOwner_Parms), Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics
	{
		struct PlayerVoiceChatActor_eventmuteAudio_Parms
		{
			bool isMute;
		};
		static void NewProp_isMute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isMute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics::NewProp_isMute_SetBit(void* Obj)
	{
		((PlayerVoiceChatActor_eventmuteAudio_Parms*)Obj)->isMute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics::NewProp_isMute = { "isMute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerVoiceChatActor_eventmuteAudio_Parms), &Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics::NewProp_isMute_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics::NewProp_isMute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "muteAudio", nullptr, nullptr, sizeof(PlayerVoiceChatActor_eventmuteAudio_Parms), Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyAttenuationAsset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyAttenuationAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyAttenuationAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "RepNotifyAttenuationAsset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyAttenuationAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyAttenuationAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyAttenuationAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyAttenuationAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyMicComp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyMicComp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyMicComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "RepNotifyMicComp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyMicComp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyMicComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyMicComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyMicComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyVoiceVolume_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyVoiceVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyVoiceVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "RepNotifyVoiceVolume", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyVoiceVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyVoiceVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyVoiceVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyVoiceVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel_Statics::NewProp_channelToAdd = { "channelToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerVoiceChatActor_eventRPCClientAskAddChannel_Parms, channelToAdd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel_Statics::NewProp_channelToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "RPCClientAskAddChannel", nullptr, nullptr, sizeof(PlayerVoiceChatActor_eventRPCClientAskAddChannel_Parms), Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelToRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel_Statics::NewProp_channelToRemove = { "channelToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerVoiceChatActor_eventRPCClientAskRemoveChannel_Parms, channelToRemove), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel_Statics::NewProp_channelToRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "RPCClientAskRemoveChannel", nullptr, nullptr, sizeof(PlayerVoiceChatActor_eventRPCClientAskRemoveChannel_Parms), Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerVoiceChatActor_eventRPCClientSetMicrophoneVolume_Parms, volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::NewProp_volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "RPCClientSetMicrophoneVolume", nullptr, nullptr, sizeof(PlayerVoiceChatActor_eventRPCClientSetMicrophoneVolume_Parms), Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_worldPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::NewProp_worldPos = { "worldPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerVoiceChatActor_eventRPCServerUpdatePosAudioComp_Parms, worldPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::NewProp_worldPos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "RPCServerUpdatePosAudioComp", nullptr, nullptr, sizeof(PlayerVoiceChatActor_eventRPCServerUpdatePosAudioComp_Parms), Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel_Statics
	{
		struct PlayerVoiceChatActor_eventServerAddChannel_Parms
		{
			int32 channelToAdd;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel_Statics::NewProp_channelToAdd = { "channelToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerVoiceChatActor_eventServerAddChannel_Parms, channelToAdd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel_Statics::NewProp_channelToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "ServerAddChannel", nullptr, nullptr, sizeof(PlayerVoiceChatActor_eventServerAddChannel_Parms), Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel_Statics
	{
		struct PlayerVoiceChatActor_eventServerRemoveChannel_Parms
		{
			int32 channelToRemove;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelToRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel_Statics::NewProp_channelToRemove = { "channelToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerVoiceChatActor_eventServerRemoveChannel_Parms, channelToRemove), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel_Statics::NewProp_channelToRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "ServerRemoveChannel", nullptr, nullptr, sizeof(PlayerVoiceChatActor_eventServerRemoveChannel_Parms), Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics
	{
		struct PlayerVoiceChatActor_eventServerSetAllowUseGlobal_Parms
		{
			bool _allowUseGlobal;
		};
		static void NewProp__allowUseGlobal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__allowUseGlobal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics::NewProp__allowUseGlobal_SetBit(void* Obj)
	{
		((PlayerVoiceChatActor_eventServerSetAllowUseGlobal_Parms*)Obj)->_allowUseGlobal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics::NewProp__allowUseGlobal = { "_allowUseGlobal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerVoiceChatActor_eventServerSetAllowUseGlobal_Parms), &Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics::NewProp__allowUseGlobal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics::NewProp__allowUseGlobal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "ServerSetAllowUseGlobal", nullptr, nullptr, sizeof(PlayerVoiceChatActor_eventServerSetAllowUseGlobal_Parms), Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics
	{
		struct PlayerVoiceChatActor_eventServerSetAllowUseProximity_Parms
		{
			bool _allowUseRange;
		};
		static void NewProp__allowUseRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__allowUseRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics::NewProp__allowUseRange_SetBit(void* Obj)
	{
		((PlayerVoiceChatActor_eventServerSetAllowUseProximity_Parms*)Obj)->_allowUseRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics::NewProp__allowUseRange = { "_allowUseRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerVoiceChatActor_eventServerSetAllowUseProximity_Parms), &Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics::NewProp__allowUseRange_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics::NewProp__allowUseRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "ServerSetAllowUseProximity", nullptr, nullptr, sizeof(PlayerVoiceChatActor_eventServerSetAllowUseProximity_Parms), Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics
	{
		struct PlayerVoiceChatActor_eventServerSetAttenuation_Parms
		{
			bool enableAttenuation;
			FString _pathToAttenuationAsset;
		};
		static void NewProp_enableAttenuation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enableAttenuation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pathToAttenuationAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__pathToAttenuationAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::NewProp_enableAttenuation_SetBit(void* Obj)
	{
		((PlayerVoiceChatActor_eventServerSetAttenuation_Parms*)Obj)->enableAttenuation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::NewProp_enableAttenuation = { "enableAttenuation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerVoiceChatActor_eventServerSetAttenuation_Parms), &Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::NewProp_enableAttenuation_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::NewProp__pathToAttenuationAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::NewProp__pathToAttenuationAsset = { "_pathToAttenuationAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerVoiceChatActor_eventServerSetAttenuation_Parms, _pathToAttenuationAsset), METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::NewProp__pathToAttenuationAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::NewProp__pathToAttenuationAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::NewProp_enableAttenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::NewProp__pathToAttenuationAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "ServerSetAttenuation", nullptr, nullptr, sizeof(PlayerVoiceChatActor_eventServerSetAttenuation_Parms), Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange_Statics
	{
		struct PlayerVoiceChatActor_eventServerSetMaxProximityRange_Parms
		{
			float _maxProximityRange;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxProximityRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange_Statics::NewProp__maxProximityRange = { "_maxProximityRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerVoiceChatActor_eventServerSetMaxProximityRange_Parms, _maxProximityRange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange_Statics::NewProp__maxProximityRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "ServerSetMaxProximityRange", nullptr, nullptr, sizeof(PlayerVoiceChatActor_eventServerSetMaxProximityRange_Parms), Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerVoiceChatActor_NoRegister()
	{
		return APlayerVoiceChatActor::StaticClass();
	}
	struct Z_Construct_UClass_APlayerVoiceChatActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootSceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootSceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_microphoneSpeakComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_microphoneSpeakComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ownerPlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ownerPlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_idVoiceChat_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_idVoiceChat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_voiceVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_voiceVolume;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_radioChannelSubscribed_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_radioChannelSubscribed_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_radioChannelSubscribed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pathToAttenuationAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pathToAttenuationAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerPerformAntiCheat_MetaData[];
#endif
		static void NewProp_ServerPerformAntiCheat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ServerPerformAntiCheat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntiCheatAllowUseProximity_MetaData[];
#endif
		static void NewProp_AntiCheatAllowUseProximity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AntiCheatAllowUseProximity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntiCheatAllowUseGlobal_MetaData[];
#endif
		static void NewProp_AntiCheatAllowUseGlobal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AntiCheatAllowUseGlobal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntiCheatMaxProximityRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AntiCheatMaxProximityRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerVoiceChatActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalVoiceChatPro,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerVoiceChatActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner, "DelegateEndPlayOwner" }, // 3073581591
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio, "muteAudio" }, // 2181324909
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyAttenuationAsset, "RepNotifyAttenuationAsset" }, // 776976506
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyMicComp, "RepNotifyMicComp" }, // 26825517
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyVoiceVolume, "RepNotifyVoiceVolume" }, // 4200101562
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel, "RPCClientAskAddChannel" }, // 1754307700
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel, "RPCClientAskRemoveChannel" }, // 714399004
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume, "RPCClientSetMicrophoneVolume" }, // 1831409759
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp, "RPCServerUpdatePosAudioComp" }, // 335129044
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel, "ServerAddChannel" }, // 3033171913
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel, "ServerRemoveChannel" }, // 3762182946
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal, "ServerSetAllowUseGlobal" }, // 1220158990
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity, "ServerSetAllowUseProximity" }, // 2284635667
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation, "ServerSetAttenuation" }, // 1504010682
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange, "ServerSetMaxProximityRange" }, // 286621593
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerVoiceChatActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayerVoiceChatActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_RootSceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerVoiceChatActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_RootSceneComponent = { "RootSceneComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerVoiceChatActor, RootSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_RootSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_RootSceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_microphoneSpeakComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerVoiceChatActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_microphoneSpeakComponent = { "microphoneSpeakComponent", "RepNotifyMicComp", (EPropertyFlags)0x001200010008202d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerVoiceChatActor, microphoneSpeakComponent), Z_Construct_UClass_UMicrophoneSpeakComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_microphoneSpeakComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_microphoneSpeakComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_ownerPlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerVoiceChatActor" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_ownerPlayerState = { "ownerPlayerState", nullptr, (EPropertyFlags)0x0010000000002025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerVoiceChatActor, ownerPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_ownerPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_ownerPlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_idVoiceChat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerVoiceChatActor" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_idVoiceChat = { "idVoiceChat", nullptr, (EPropertyFlags)0x0010000000002025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerVoiceChatActor, idVoiceChat), METADATA_PARAMS(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_idVoiceChat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_idVoiceChat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_voiceVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerVoiceChatActor" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_voiceVolume = { "voiceVolume", "RepNotifyVoiceVolume", (EPropertyFlags)0x0010000100002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerVoiceChatActor, voiceVolume), METADATA_PARAMS(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_voiceVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_voiceVolume_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_radioChannelSubscribed_Inner = { "radioChannelSubscribed", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_radioChannelSubscribed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerVoiceChatActor" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_radioChannelSubscribed = { "radioChannelSubscribed", nullptr, (EPropertyFlags)0x0010000000002025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerVoiceChatActor, radioChannelSubscribed), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_radioChannelSubscribed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_radioChannelSubscribed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_pathToAttenuationAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerVoiceChatActor" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_pathToAttenuationAsset = { "pathToAttenuationAsset", "RepNotifyAttenuationAsset", (EPropertyFlags)0x0010000100002025, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerVoiceChatActor, pathToAttenuationAsset), METADATA_PARAMS(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_pathToAttenuationAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_pathToAttenuationAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_ServerPerformAntiCheat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerVoiceChatActor" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	void Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_ServerPerformAntiCheat_SetBit(void* Obj)
	{
		((APlayerVoiceChatActor*)Obj)->ServerPerformAntiCheat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_ServerPerformAntiCheat = { "ServerPerformAntiCheat", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerVoiceChatActor), &Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_ServerPerformAntiCheat_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_ServerPerformAntiCheat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_ServerPerformAntiCheat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseProximity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerVoiceChatActor" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	void Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseProximity_SetBit(void* Obj)
	{
		((APlayerVoiceChatActor*)Obj)->AntiCheatAllowUseProximity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseProximity = { "AntiCheatAllowUseProximity", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerVoiceChatActor), &Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseProximity_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseProximity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseProximity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseGlobal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerVoiceChatActor" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	void Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseGlobal_SetBit(void* Obj)
	{
		((APlayerVoiceChatActor*)Obj)->AntiCheatAllowUseGlobal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseGlobal = { "AntiCheatAllowUseGlobal", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerVoiceChatActor), &Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseGlobal_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseGlobal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseGlobal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatMaxProximityRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerVoiceChatActor" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatMaxProximityRange = { "AntiCheatMaxProximityRange", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerVoiceChatActor, AntiCheatMaxProximityRange), METADATA_PARAMS(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatMaxProximityRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatMaxProximityRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerVoiceChatActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_RootSceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_microphoneSpeakComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_ownerPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_idVoiceChat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_voiceVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_radioChannelSubscribed_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_radioChannelSubscribed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_pathToAttenuationAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_ServerPerformAntiCheat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseProximity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseGlobal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatMaxProximityRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerVoiceChatActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerVoiceChatActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::ClassParams = {
		&APlayerVoiceChatActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerVoiceChatActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerVoiceChatActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerVoiceChatActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerVoiceChatActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerVoiceChatActor, 3194438104);
	template<> UNIVERSALVOICECHATPRO_API UClass* StaticClass<APlayerVoiceChatActor>()
	{
		return APlayerVoiceChatActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerVoiceChatActor(Z_Construct_UClass_APlayerVoiceChatActor, &APlayerVoiceChatActor::StaticClass, TEXT("/Script/UniversalVoiceChatPro"), TEXT("APlayerVoiceChatActor"), false, nullptr, nullptr, nullptr);

	void APlayerVoiceChatActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_microphoneSpeakComponent(TEXT("microphoneSpeakComponent"));
		static const FName Name_ownerPlayerState(TEXT("ownerPlayerState"));
		static const FName Name_idVoiceChat(TEXT("idVoiceChat"));
		static const FName Name_voiceVolume(TEXT("voiceVolume"));
		static const FName Name_radioChannelSubscribed(TEXT("radioChannelSubscribed"));
		static const FName Name_pathToAttenuationAsset(TEXT("pathToAttenuationAsset"));

		const bool bIsValid = true
			&& Name_microphoneSpeakComponent == ClassReps[(int32)ENetFields_Private::microphoneSpeakComponent].Property->GetFName()
			&& Name_ownerPlayerState == ClassReps[(int32)ENetFields_Private::ownerPlayerState].Property->GetFName()
			&& Name_idVoiceChat == ClassReps[(int32)ENetFields_Private::idVoiceChat].Property->GetFName()
			&& Name_voiceVolume == ClassReps[(int32)ENetFields_Private::voiceVolume].Property->GetFName()
			&& Name_radioChannelSubscribed == ClassReps[(int32)ENetFields_Private::radioChannelSubscribed].Property->GetFName()
			&& Name_pathToAttenuationAsset == ClassReps[(int32)ENetFields_Private::pathToAttenuationAsset].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APlayerVoiceChatActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerVoiceChatActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

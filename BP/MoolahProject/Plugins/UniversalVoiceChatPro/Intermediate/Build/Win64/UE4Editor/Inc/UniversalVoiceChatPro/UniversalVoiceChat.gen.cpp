// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UniversalVoiceChatPro/Public/UniversalVoiceChat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniversalVoiceChat() {}
// Cross Module References
	UNIVERSALVOICECHATPRO_API UClass* Z_Construct_UClass_UUniversalVoiceChat_NoRegister();
	UNIVERSALVOICECHATPRO_API UClass* Z_Construct_UClass_UUniversalVoiceChat();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UniversalVoiceChatPro();
	UNIVERSALVOICECHATPRO_API UClass* Z_Construct_UClass_APlayerVoiceChatActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatAddChannel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_channelToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUniversalVoiceChat::VoiceChatAddChannel(Z_Param_channelToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatAskMicrophonePermission)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UUniversalVoiceChat::VoiceChatAskMicrophonePermission();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatCheckRegisteredToChannel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_channelToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUniversalVoiceChat::VoiceChatCheckRegisteredToChannel(Z_Param_channelToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatGetMyLocalPlayerVoiceChat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerVoiceChatActor**)Z_Param__Result=UUniversalVoiceChat::VoiceChatGetMyLocalPlayerVoiceChat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatHasMicrophonePermission)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUniversalVoiceChat::VoiceChatHasMicrophonePermission();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatInitAudioVoiceChatQuality)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sampleRate);
		P_GET_PROPERTY(FIntProperty,Z_Param__numChannels);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUniversalVoiceChat::VoiceChatInitAudioVoiceChatQuality(Z_Param__sampleRate,Z_Param__numChannels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatLocalIsMutedSomeone)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerState,Z_Param_playerToCheckMute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUniversalVoiceChat::VoiceChatLocalIsMutedSomeone(Z_Param_WorldContextObject,Z_Param_playerToCheckMute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatLocalMuteSomeone)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerState,Z_Param_playerToMute);
		P_GET_UBOOL(Z_Param_shouldMute);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUniversalVoiceChat::VoiceChatLocalMuteSomeone(Z_Param_WorldContextObject,Z_Param_playerToMute,Z_Param_shouldMute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatRemoveChannel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_channelToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUniversalVoiceChat::VoiceChatRemoveChannel(Z_Param_channelToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatSetMicrophoneVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUniversalVoiceChat::VoiceChatSetMicrophoneVolume(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatStartSpeak)
	{
		P_GET_UBOOL(Z_Param__shouldHearMyOwnVoice);
		P_GET_UBOOL(Z_Param_isGlobal);
		P_GET_PROPERTY(FIntProperty,Z_Param_radioChannel);
		P_GET_UBOOL(Z_Param_useProximity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxProximityRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUniversalVoiceChat::VoiceChatStartSpeak(Z_Param__shouldHearMyOwnVoice,Z_Param_isGlobal,Z_Param_radioChannel,Z_Param_useProximity,Z_Param_maxProximityRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatStopSpeak)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUniversalVoiceChat::VoiceChatStopSpeak();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatWasInitAudioVoiceChatQuality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUniversalVoiceChat::VoiceChatWasInitAudioVoiceChatQuality();
		P_NATIVE_END;
	}
	void UUniversalVoiceChat::StaticRegisterNativesUUniversalVoiceChat()
	{
		UClass* Class = UUniversalVoiceChat::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "VoiceChatAddChannel", &UUniversalVoiceChat::execVoiceChatAddChannel },
			{ "VoiceChatAskMicrophonePermission", &UUniversalVoiceChat::execVoiceChatAskMicrophonePermission },
			{ "VoiceChatCheckRegisteredToChannel", &UUniversalVoiceChat::execVoiceChatCheckRegisteredToChannel },
			{ "VoiceChatGetMyLocalPlayerVoiceChat", &UUniversalVoiceChat::execVoiceChatGetMyLocalPlayerVoiceChat },
			{ "VoiceChatHasMicrophonePermission", &UUniversalVoiceChat::execVoiceChatHasMicrophonePermission },
			{ "VoiceChatInitAudioVoiceChatQuality", &UUniversalVoiceChat::execVoiceChatInitAudioVoiceChatQuality },
			{ "VoiceChatLocalIsMutedSomeone", &UUniversalVoiceChat::execVoiceChatLocalIsMutedSomeone },
			{ "VoiceChatLocalMuteSomeone", &UUniversalVoiceChat::execVoiceChatLocalMuteSomeone },
			{ "VoiceChatRemoveChannel", &UUniversalVoiceChat::execVoiceChatRemoveChannel },
			{ "VoiceChatSetMicrophoneVolume", &UUniversalVoiceChat::execVoiceChatSetMicrophoneVolume },
			{ "VoiceChatStartSpeak", &UUniversalVoiceChat::execVoiceChatStartSpeak },
			{ "VoiceChatStopSpeak", &UUniversalVoiceChat::execVoiceChatStopSpeak },
			{ "VoiceChatWasInitAudioVoiceChatQuality", &UUniversalVoiceChat::execVoiceChatWasInitAudioVoiceChatQuality },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics
	{
		struct UniversalVoiceChat_eventVoiceChatAddChannel_Parms
		{
			int32 channelToAdd;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelToAdd;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::NewProp_channelToAdd = { "channelToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatAddChannel_Parms, channelToAdd), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatAddChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatAddChannel_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::NewProp_channelToAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UniversalVoiceChat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatAddChannel", nullptr, nullptr, sizeof(UniversalVoiceChat_eventVoiceChatAddChannel_Parms), Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAskMicrophonePermission_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAskMicrophonePermission_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UniversalVoiceChat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAskMicrophonePermission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatAskMicrophonePermission", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAskMicrophonePermission_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAskMicrophonePermission_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAskMicrophonePermission()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAskMicrophonePermission_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics
	{
		struct UniversalVoiceChat_eventVoiceChatCheckRegisteredToChannel_Parms
		{
			int32 channelToCheck;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::NewProp_channelToCheck = { "channelToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatCheckRegisteredToChannel_Parms, channelToCheck), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatCheckRegisteredToChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatCheckRegisteredToChannel_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::NewProp_channelToCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UniversalVoiceChat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatCheckRegisteredToChannel", nullptr, nullptr, sizeof(UniversalVoiceChat_eventVoiceChatCheckRegisteredToChannel_Parms), Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat_Statics
	{
		struct UniversalVoiceChat_eventVoiceChatGetMyLocalPlayerVoiceChat_Parms
		{
			APlayerVoiceChatActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatGetMyLocalPlayerVoiceChat_Parms, ReturnValue), Z_Construct_UClass_APlayerVoiceChatActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UniversalVoiceChat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatGetMyLocalPlayerVoiceChat", nullptr, nullptr, sizeof(UniversalVoiceChat_eventVoiceChatGetMyLocalPlayerVoiceChat_Parms), Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics
	{
		struct UniversalVoiceChat_eventVoiceChatHasMicrophonePermission_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatHasMicrophonePermission_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatHasMicrophonePermission_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UniversalVoiceChat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatHasMicrophonePermission", nullptr, nullptr, sizeof(UniversalVoiceChat_eventVoiceChatHasMicrophonePermission_Parms), Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics
	{
		struct UniversalVoiceChat_eventVoiceChatInitAudioVoiceChatQuality_Parms
		{
			int32 _sampleRate;
			int32 _numChannels;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sampleRate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__numChannels;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::NewProp__sampleRate = { "_sampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatInitAudioVoiceChatQuality_Parms, _sampleRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::NewProp__numChannels = { "_numChannels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatInitAudioVoiceChatQuality_Parms, _numChannels), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatInitAudioVoiceChatQuality_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatInitAudioVoiceChatQuality_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::NewProp__sampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::NewProp__numChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UniversalVoiceChat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatInitAudioVoiceChatQuality", nullptr, nullptr, sizeof(UniversalVoiceChat_eventVoiceChatInitAudioVoiceChatQuality_Parms), Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics
	{
		struct UniversalVoiceChat_eventVoiceChatLocalIsMutedSomeone_Parms
		{
			const UObject* WorldContextObject;
			APlayerState* playerToCheckMute;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerToCheckMute;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatLocalIsMutedSomeone_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::NewProp_playerToCheckMute = { "playerToCheckMute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatLocalIsMutedSomeone_Parms, playerToCheckMute), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatLocalIsMutedSomeone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatLocalIsMutedSomeone_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::NewProp_playerToCheckMute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UniversalVoiceChat.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatLocalIsMutedSomeone", nullptr, nullptr, sizeof(UniversalVoiceChat_eventVoiceChatLocalIsMutedSomeone_Parms), Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics
	{
		struct UniversalVoiceChat_eventVoiceChatLocalMuteSomeone_Parms
		{
			const UObject* WorldContextObject;
			APlayerState* playerToMute;
			bool shouldMute;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerToMute;
		static void NewProp_shouldMute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shouldMute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatLocalMuteSomeone_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::NewProp_playerToMute = { "playerToMute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatLocalMuteSomeone_Parms, playerToMute), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::NewProp_shouldMute_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatLocalMuteSomeone_Parms*)Obj)->shouldMute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::NewProp_shouldMute = { "shouldMute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatLocalMuteSomeone_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::NewProp_shouldMute_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::NewProp_playerToMute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::NewProp_shouldMute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UniversalVoiceChat.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatLocalMuteSomeone", nullptr, nullptr, sizeof(UniversalVoiceChat_eventVoiceChatLocalMuteSomeone_Parms), Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics
	{
		struct UniversalVoiceChat_eventVoiceChatRemoveChannel_Parms
		{
			int32 channelToRemove;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelToRemove;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::NewProp_channelToRemove = { "channelToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatRemoveChannel_Parms, channelToRemove), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatRemoveChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatRemoveChannel_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::NewProp_channelToRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UniversalVoiceChat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatRemoveChannel", nullptr, nullptr, sizeof(UniversalVoiceChat_eventVoiceChatRemoveChannel_Parms), Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics
	{
		struct UniversalVoiceChat_eventVoiceChatSetMicrophoneVolume_Parms
		{
			float volume;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_volume;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatSetMicrophoneVolume_Parms, volume), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatSetMicrophoneVolume_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatSetMicrophoneVolume_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::NewProp_volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UniversalVoiceChat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatSetMicrophoneVolume", nullptr, nullptr, sizeof(UniversalVoiceChat_eventVoiceChatSetMicrophoneVolume_Parms), Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics
	{
		struct UniversalVoiceChat_eventVoiceChatStartSpeak_Parms
		{
			bool _shouldHearMyOwnVoice;
			bool isGlobal;
			int32 radioChannel;
			bool useProximity;
			float maxProximityRange;
			bool ReturnValue;
		};
		static void NewProp__shouldHearMyOwnVoice_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__shouldHearMyOwnVoice;
		static void NewProp_isGlobal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isGlobal;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_radioChannel;
		static void NewProp_useProximity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useProximity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxProximityRange;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp__shouldHearMyOwnVoice_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatStartSpeak_Parms*)Obj)->_shouldHearMyOwnVoice = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp__shouldHearMyOwnVoice = { "_shouldHearMyOwnVoice", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatStartSpeak_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp__shouldHearMyOwnVoice_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_isGlobal_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatStartSpeak_Parms*)Obj)->isGlobal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_isGlobal = { "isGlobal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatStartSpeak_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_isGlobal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_radioChannel = { "radioChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatStartSpeak_Parms, radioChannel), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_useProximity_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatStartSpeak_Parms*)Obj)->useProximity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_useProximity = { "useProximity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatStartSpeak_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_useProximity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_maxProximityRange = { "maxProximityRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatStartSpeak_Parms, maxProximityRange), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatStartSpeak_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatStartSpeak_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp__shouldHearMyOwnVoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_isGlobal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_radioChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_useProximity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_maxProximityRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UniversalVoiceChat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatStartSpeak", nullptr, nullptr, sizeof(UniversalVoiceChat_eventVoiceChatStartSpeak_Parms), Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics
	{
		struct UniversalVoiceChat_eventVoiceChatStopSpeak_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatStopSpeak_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatStopSpeak_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UniversalVoiceChat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatStopSpeak", nullptr, nullptr, sizeof(UniversalVoiceChat_eventVoiceChatStopSpeak_Parms), Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics
	{
		struct UniversalVoiceChat_eventVoiceChatWasInitAudioVoiceChatQuality_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatWasInitAudioVoiceChatQuality_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatWasInitAudioVoiceChatQuality_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UniversalVoiceChat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatWasInitAudioVoiceChatQuality", nullptr, nullptr, sizeof(UniversalVoiceChat_eventVoiceChatWasInitAudioVoiceChatQuality_Parms), Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUniversalVoiceChat_NoRegister()
	{
		return UUniversalVoiceChat::StaticClass();
	}
	struct Z_Construct_UClass_UUniversalVoiceChat_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUniversalVoiceChat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalVoiceChatPro,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUniversalVoiceChat_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel, "VoiceChatAddChannel" }, // 2503051899
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAskMicrophonePermission, "VoiceChatAskMicrophonePermission" }, // 3423368682
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel, "VoiceChatCheckRegisteredToChannel" }, // 3103578517
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat, "VoiceChatGetMyLocalPlayerVoiceChat" }, // 2850027989
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission, "VoiceChatHasMicrophonePermission" }, // 3581658131
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality, "VoiceChatInitAudioVoiceChatQuality" }, // 1804014709
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone, "VoiceChatLocalIsMutedSomeone" }, // 2121374970
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone, "VoiceChatLocalMuteSomeone" }, // 2350175847
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel, "VoiceChatRemoveChannel" }, // 160899091
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume, "VoiceChatSetMicrophoneVolume" }, // 3800197732
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak, "VoiceChatStartSpeak" }, // 3269180819
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak, "VoiceChatStopSpeak" }, // 351322737
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality, "VoiceChatWasInitAudioVoiceChatQuality" }, // 3606807982
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniversalVoiceChat_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UniversalVoiceChat.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UniversalVoiceChat.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUniversalVoiceChat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUniversalVoiceChat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUniversalVoiceChat_Statics::ClassParams = {
		&UUniversalVoiceChat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUniversalVoiceChat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUniversalVoiceChat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUniversalVoiceChat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUniversalVoiceChat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUniversalVoiceChat, 3623213738);
	template<> UNIVERSALVOICECHATPRO_API UClass* StaticClass<UUniversalVoiceChat>()
	{
		return UUniversalVoiceChat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUniversalVoiceChat(Z_Construct_UClass_UUniversalVoiceChat, &UUniversalVoiceChat::StaticClass, TEXT("/Script/UniversalVoiceChatPro"), TEXT("UUniversalVoiceChat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUniversalVoiceChat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

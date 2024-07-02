// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMiniGameComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMiniGameComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMiniGameComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMiniGameComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3MiniGameWidgetBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMiniGameData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnMiniGameInteraction__DelegateSignature();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZWidgetZOrdering();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAnimatedInteractionInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMiniGameComponent::execActivateMiniGame)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_GET_UBOOL(Z_Param_bIsLocallyControlled);
		P_GET_UBOOL(Z_Param_bIsReplicated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateMiniGame(Z_Param_Character,Z_Param_bIsLocallyControlled,Z_Param_bIsReplicated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMiniGameComponent::execGetSpawnedWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPD3MiniGameWidgetBase**)Z_Param__Result=P_THIS->GetSpawnedWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMiniGameComponent::execMulticast_ActivateMiniGame)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ActivateMiniGame_Implementation(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMiniGameComponent::execMulticast_SetMiniGameData)
	{
		P_GET_OBJECT(USBZMiniGameData,Z_Param_InData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetMiniGameData_Implementation(Z_Param_InData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMiniGameComponent::execOnPlayerStateEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerStateEndPlay(Z_Param_Actor,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMiniGameComponent::execPlaySound)
	{
		P_GET_OBJECT(UAkComponent,Z_Param_AkComponent);
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AudioEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySound(Z_Param_AkComponent,Z_Param_AudioEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMiniGameComponent::execPlaySoundOnNative)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AudioEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySoundOnNative(Z_Param_AudioEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMiniGameComponent::execServerAbortMiniGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerAbortMiniGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMiniGameComponent::execSetAudioPerspective)
	{
		P_GET_OBJECT(UAkComponent,Z_Param_AkComponent);
		P_GET_OBJECT(UAkRtpc,Z_Param_Rtpc);
		P_GET_UBOOL(Z_Param_bIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAudioPerspective(Z_Param_AkComponent,Z_Param_Rtpc,Z_Param_bIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMiniGameComponent::execSetMiniGameData)
	{
		P_GET_OBJECT(USBZMiniGameData,Z_Param_InData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMiniGameData(Z_Param_InData);
		P_NATIVE_END;
	}
	static FName NAME_USBZMiniGameComponent_Multicast_ActivateMiniGame = FName(TEXT("Multicast_ActivateMiniGame"));
	void USBZMiniGameComponent::Multicast_ActivateMiniGame(ASBZCharacter* Character)
	{
		SBZMiniGameComponent_eventMulticast_ActivateMiniGame_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_USBZMiniGameComponent_Multicast_ActivateMiniGame),&Parms);
	}
	static FName NAME_USBZMiniGameComponent_Multicast_SetMiniGameData = FName(TEXT("Multicast_SetMiniGameData"));
	void USBZMiniGameComponent::Multicast_SetMiniGameData(USBZMiniGameData* InData)
	{
		SBZMiniGameComponent_eventMulticast_SetMiniGameData_Parms Parms;
		Parms.InData=InData;
		ProcessEvent(FindFunctionChecked(NAME_USBZMiniGameComponent_Multicast_SetMiniGameData),&Parms);
	}
	void USBZMiniGameComponent::StaticRegisterNativesUSBZMiniGameComponent()
	{
		UClass* Class = USBZMiniGameComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateMiniGame", &USBZMiniGameComponent::execActivateMiniGame },
			{ "GetSpawnedWidget", &USBZMiniGameComponent::execGetSpawnedWidget },
			{ "Multicast_ActivateMiniGame", &USBZMiniGameComponent::execMulticast_ActivateMiniGame },
			{ "Multicast_SetMiniGameData", &USBZMiniGameComponent::execMulticast_SetMiniGameData },
			{ "OnPlayerStateEndPlay", &USBZMiniGameComponent::execOnPlayerStateEndPlay },
			{ "PlaySound", &USBZMiniGameComponent::execPlaySound },
			{ "PlaySoundOnNative", &USBZMiniGameComponent::execPlaySoundOnNative },
			{ "ServerAbortMiniGame", &USBZMiniGameComponent::execServerAbortMiniGame },
			{ "SetAudioPerspective", &USBZMiniGameComponent::execSetAudioPerspective },
			{ "SetMiniGameData", &USBZMiniGameComponent::execSetMiniGameData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMiniGameComponent_ActivateMiniGame_Statics
	{
		struct SBZMiniGameComponent_eventActivateMiniGame_Parms
		{
			ASBZCharacter* Character;
			bool bIsLocallyControlled;
			bool bIsReplicated;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static void NewProp_bIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlled;
		static void NewProp_bIsReplicated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReplicated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMiniGameComponent_ActivateMiniGame_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMiniGameComponent_eventActivateMiniGame_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMiniGameComponent_ActivateMiniGame_Statics::NewProp_bIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZMiniGameComponent_eventActivateMiniGame_Parms*)Obj)->bIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMiniGameComponent_ActivateMiniGame_Statics::NewProp_bIsLocallyControlled = { "bIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMiniGameComponent_eventActivateMiniGame_Parms), &Z_Construct_UFunction_USBZMiniGameComponent_ActivateMiniGame_Statics::NewProp_bIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMiniGameComponent_ActivateMiniGame_Statics::NewProp_bIsReplicated_SetBit(void* Obj)
	{
		((SBZMiniGameComponent_eventActivateMiniGame_Parms*)Obj)->bIsReplicated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMiniGameComponent_ActivateMiniGame_Statics::NewProp_bIsReplicated = { "bIsReplicated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMiniGameComponent_eventActivateMiniGame_Parms), &Z_Construct_UFunction_USBZMiniGameComponent_ActivateMiniGame_Statics::NewProp_bIsReplicated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMiniGameComponent_ActivateMiniGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMiniGameComponent_ActivateMiniGame_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMiniGameComponent_ActivateMiniGame_Statics::NewProp_bIsLocallyControlled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMiniGameComponent_ActivateMiniGame_Statics::NewProp_bIsReplicated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMiniGameComponent_ActivateMiniGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMiniGameComponent_ActivateMiniGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMiniGameComponent, nullptr, "ActivateMiniGame", nullptr, nullptr, sizeof(SBZMiniGameComponent_eventActivateMiniGame_Parms), Z_Construct_UFunction_USBZMiniGameComponent_ActivateMiniGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMiniGameComponent_ActivateMiniGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMiniGameComponent_ActivateMiniGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMiniGameComponent_ActivateMiniGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMiniGameComponent_ActivateMiniGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMiniGameComponent_ActivateMiniGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMiniGameComponent_GetSpawnedWidget_Statics
	{
		struct SBZMiniGameComponent_eventGetSpawnedWidget_Parms
		{
			UPD3MiniGameWidgetBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMiniGameComponent_GetSpawnedWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMiniGameComponent_GetSpawnedWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMiniGameComponent_eventGetSpawnedWidget_Parms, ReturnValue), Z_Construct_UClass_UPD3MiniGameWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMiniGameComponent_GetSpawnedWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMiniGameComponent_GetSpawnedWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMiniGameComponent_GetSpawnedWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMiniGameComponent_GetSpawnedWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMiniGameComponent_GetSpawnedWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMiniGameComponent_GetSpawnedWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMiniGameComponent, nullptr, "GetSpawnedWidget", nullptr, nullptr, sizeof(SBZMiniGameComponent_eventGetSpawnedWidget_Parms), Z_Construct_UFunction_USBZMiniGameComponent_GetSpawnedWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMiniGameComponent_GetSpawnedWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMiniGameComponent_GetSpawnedWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMiniGameComponent_GetSpawnedWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMiniGameComponent_GetSpawnedWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMiniGameComponent_GetSpawnedWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMiniGameComponent_Multicast_ActivateMiniGame_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMiniGameComponent_Multicast_ActivateMiniGame_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMiniGameComponent_eventMulticast_ActivateMiniGame_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMiniGameComponent_Multicast_ActivateMiniGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMiniGameComponent_Multicast_ActivateMiniGame_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMiniGameComponent_Multicast_ActivateMiniGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMiniGameComponent_Multicast_ActivateMiniGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMiniGameComponent, nullptr, "Multicast_ActivateMiniGame", nullptr, nullptr, sizeof(SBZMiniGameComponent_eventMulticast_ActivateMiniGame_Parms), Z_Construct_UFunction_USBZMiniGameComponent_Multicast_ActivateMiniGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMiniGameComponent_Multicast_ActivateMiniGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMiniGameComponent_Multicast_ActivateMiniGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMiniGameComponent_Multicast_ActivateMiniGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMiniGameComponent_Multicast_ActivateMiniGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMiniGameComponent_Multicast_ActivateMiniGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMiniGameComponent_Multicast_SetMiniGameData_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMiniGameComponent_Multicast_SetMiniGameData_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMiniGameComponent_eventMulticast_SetMiniGameData_Parms, InData), Z_Construct_UClass_USBZMiniGameData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMiniGameComponent_Multicast_SetMiniGameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMiniGameComponent_Multicast_SetMiniGameData_Statics::NewProp_InData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMiniGameComponent_Multicast_SetMiniGameData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMiniGameComponent_Multicast_SetMiniGameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMiniGameComponent, nullptr, "Multicast_SetMiniGameData", nullptr, nullptr, sizeof(SBZMiniGameComponent_eventMulticast_SetMiniGameData_Parms), Z_Construct_UFunction_USBZMiniGameComponent_Multicast_SetMiniGameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMiniGameComponent_Multicast_SetMiniGameData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMiniGameComponent_Multicast_SetMiniGameData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMiniGameComponent_Multicast_SetMiniGameData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMiniGameComponent_Multicast_SetMiniGameData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMiniGameComponent_Multicast_SetMiniGameData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMiniGameComponent_OnPlayerStateEndPlay_Statics
	{
		struct SBZMiniGameComponent_eventOnPlayerStateEndPlay_Parms
		{
			AActor* Actor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMiniGameComponent_OnPlayerStateEndPlay_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMiniGameComponent_eventOnPlayerStateEndPlay_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMiniGameComponent_OnPlayerStateEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMiniGameComponent_eventOnPlayerStateEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMiniGameComponent_OnPlayerStateEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMiniGameComponent_OnPlayerStateEndPlay_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMiniGameComponent_OnPlayerStateEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMiniGameComponent_OnPlayerStateEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMiniGameComponent_OnPlayerStateEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMiniGameComponent, nullptr, "OnPlayerStateEndPlay", nullptr, nullptr, sizeof(SBZMiniGameComponent_eventOnPlayerStateEndPlay_Parms), Z_Construct_UFunction_USBZMiniGameComponent_OnPlayerStateEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMiniGameComponent_OnPlayerStateEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMiniGameComponent_OnPlayerStateEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMiniGameComponent_OnPlayerStateEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMiniGameComponent_OnPlayerStateEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMiniGameComponent_OnPlayerStateEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMiniGameComponent_PlaySound_Statics
	{
		struct SBZMiniGameComponent_eventPlaySound_Parms
		{
			UAkComponent* AkComponent;
			UAkAudioEvent* AudioEvent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMiniGameComponent_PlaySound_Statics::NewProp_AkComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMiniGameComponent_PlaySound_Statics::NewProp_AkComponent = { "AkComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMiniGameComponent_eventPlaySound_Parms, AkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMiniGameComponent_PlaySound_Statics::NewProp_AkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMiniGameComponent_PlaySound_Statics::NewProp_AkComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMiniGameComponent_PlaySound_Statics::NewProp_AudioEvent = { "AudioEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMiniGameComponent_eventPlaySound_Parms, AudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMiniGameComponent_PlaySound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMiniGameComponent_PlaySound_Statics::NewProp_AkComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMiniGameComponent_PlaySound_Statics::NewProp_AudioEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMiniGameComponent_PlaySound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMiniGameComponent_PlaySound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMiniGameComponent, nullptr, "PlaySound", nullptr, nullptr, sizeof(SBZMiniGameComponent_eventPlaySound_Parms), Z_Construct_UFunction_USBZMiniGameComponent_PlaySound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMiniGameComponent_PlaySound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMiniGameComponent_PlaySound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMiniGameComponent_PlaySound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMiniGameComponent_PlaySound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMiniGameComponent_PlaySound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMiniGameComponent_PlaySoundOnNative_Statics
	{
		struct SBZMiniGameComponent_eventPlaySoundOnNative_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMiniGameComponent_PlaySoundOnNative_Statics::NewProp_AudioEvent = { "AudioEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMiniGameComponent_eventPlaySoundOnNative_Parms, AudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMiniGameComponent_PlaySoundOnNative_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMiniGameComponent_PlaySoundOnNative_Statics::NewProp_AudioEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMiniGameComponent_PlaySoundOnNative_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMiniGameComponent_PlaySoundOnNative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMiniGameComponent, nullptr, "PlaySoundOnNative", nullptr, nullptr, sizeof(SBZMiniGameComponent_eventPlaySoundOnNative_Parms), Z_Construct_UFunction_USBZMiniGameComponent_PlaySoundOnNative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMiniGameComponent_PlaySoundOnNative_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMiniGameComponent_PlaySoundOnNative_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMiniGameComponent_PlaySoundOnNative_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMiniGameComponent_PlaySoundOnNative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMiniGameComponent_PlaySoundOnNative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMiniGameComponent_ServerAbortMiniGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMiniGameComponent_ServerAbortMiniGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMiniGameComponent_ServerAbortMiniGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMiniGameComponent, nullptr, "ServerAbortMiniGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMiniGameComponent_ServerAbortMiniGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMiniGameComponent_ServerAbortMiniGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMiniGameComponent_ServerAbortMiniGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMiniGameComponent_ServerAbortMiniGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMiniGameComponent_SetAudioPerspective_Statics
	{
		struct SBZMiniGameComponent_eventSetAudioPerspective_Parms
		{
			UAkComponent* AkComponent;
			UAkRtpc* Rtpc;
			bool bIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Rtpc;
		static void NewProp_bIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMiniGameComponent_SetAudioPerspective_Statics::NewProp_AkComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMiniGameComponent_SetAudioPerspective_Statics::NewProp_AkComponent = { "AkComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMiniGameComponent_eventSetAudioPerspective_Parms, AkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMiniGameComponent_SetAudioPerspective_Statics::NewProp_AkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMiniGameComponent_SetAudioPerspective_Statics::NewProp_AkComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMiniGameComponent_SetAudioPerspective_Statics::NewProp_Rtpc = { "Rtpc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMiniGameComponent_eventSetAudioPerspective_Parms, Rtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMiniGameComponent_SetAudioPerspective_Statics::NewProp_bIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZMiniGameComponent_eventSetAudioPerspective_Parms*)Obj)->bIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMiniGameComponent_SetAudioPerspective_Statics::NewProp_bIsLocallyControlled = { "bIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMiniGameComponent_eventSetAudioPerspective_Parms), &Z_Construct_UFunction_USBZMiniGameComponent_SetAudioPerspective_Statics::NewProp_bIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMiniGameComponent_SetAudioPerspective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMiniGameComponent_SetAudioPerspective_Statics::NewProp_AkComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMiniGameComponent_SetAudioPerspective_Statics::NewProp_Rtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMiniGameComponent_SetAudioPerspective_Statics::NewProp_bIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMiniGameComponent_SetAudioPerspective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMiniGameComponent_SetAudioPerspective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMiniGameComponent, nullptr, "SetAudioPerspective", nullptr, nullptr, sizeof(SBZMiniGameComponent_eventSetAudioPerspective_Parms), Z_Construct_UFunction_USBZMiniGameComponent_SetAudioPerspective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMiniGameComponent_SetAudioPerspective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMiniGameComponent_SetAudioPerspective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMiniGameComponent_SetAudioPerspective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMiniGameComponent_SetAudioPerspective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMiniGameComponent_SetAudioPerspective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMiniGameComponent_SetMiniGameData_Statics
	{
		struct SBZMiniGameComponent_eventSetMiniGameData_Parms
		{
			USBZMiniGameData* InData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMiniGameComponent_SetMiniGameData_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMiniGameComponent_eventSetMiniGameData_Parms, InData), Z_Construct_UClass_USBZMiniGameData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMiniGameComponent_SetMiniGameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMiniGameComponent_SetMiniGameData_Statics::NewProp_InData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMiniGameComponent_SetMiniGameData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMiniGameComponent_SetMiniGameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMiniGameComponent, nullptr, "SetMiniGameData", nullptr, nullptr, sizeof(SBZMiniGameComponent_eventSetMiniGameData_Parms), Z_Construct_UFunction_USBZMiniGameComponent_SetMiniGameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMiniGameComponent_SetMiniGameData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMiniGameComponent_SetMiniGameData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMiniGameComponent_SetMiniGameData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMiniGameComponent_SetMiniGameData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMiniGameComponent_SetMiniGameData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMiniGameComponent_NoRegister()
	{
		return USBZMiniGameComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZMiniGameComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMiniGameInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMiniGameInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPreMiniGameInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreMiniGameInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbortedAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbortedAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuccessAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FailedAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitiatedAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitiatedAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InProgressAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InProgressAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenWidgetAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpenWidgetAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseWidgetAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CloseWidgetAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SilenceMinigameAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SilenceMinigameAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbortedAudioRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbortedAudioRtpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessAudioRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuccessAudioRtpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedAudioRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FailedAudioRtpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitiatedAudioRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitiatedAudioRtpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InProgressAudioRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InProgressAudioRtpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnMiniGameOnHackingTool_MetaData[];
#endif
		static void NewProp_bSpawnMiniGameOnHackingTool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnMiniGameOnHackingTool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnMiniGameOnObject_MetaData[];
#endif
		static void NewProp_bSpawnMiniGameOnObject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnMiniGameOnObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WidgetZOrder_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetZOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WidgetZOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackingAmmoCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HackingAmmoCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentControlsReferenceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentControlsReferenceID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractingPlayerStateArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractingPlayerStateArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InteractingPlayerStateArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniGameDifficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MiniGameDifficulty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinningParticipant_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WinningParticipant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveLocallyController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveLocallyController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMiniGameComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMiniGameComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMiniGameComponent_ActivateMiniGame, "ActivateMiniGame" }, // 108151823
		{ &Z_Construct_UFunction_USBZMiniGameComponent_GetSpawnedWidget, "GetSpawnedWidget" }, // 1989233161
		{ &Z_Construct_UFunction_USBZMiniGameComponent_Multicast_ActivateMiniGame, "Multicast_ActivateMiniGame" }, // 105516569
		{ &Z_Construct_UFunction_USBZMiniGameComponent_Multicast_SetMiniGameData, "Multicast_SetMiniGameData" }, // 1534190637
		{ &Z_Construct_UFunction_USBZMiniGameComponent_OnPlayerStateEndPlay, "OnPlayerStateEndPlay" }, // 4242089562
		{ &Z_Construct_UFunction_USBZMiniGameComponent_PlaySound, "PlaySound" }, // 1675111908
		{ &Z_Construct_UFunction_USBZMiniGameComponent_PlaySoundOnNative, "PlaySoundOnNative" }, // 2548026087
		{ &Z_Construct_UFunction_USBZMiniGameComponent_ServerAbortMiniGame, "ServerAbortMiniGame" }, // 1691348122
		{ &Z_Construct_UFunction_USBZMiniGameComponent_SetAudioPerspective, "SetAudioPerspective" }, // 2948674716
		{ &Z_Construct_UFunction_USBZMiniGameComponent_SetMiniGameData, "SetMiniGameData" }, // 1884651808
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZMiniGameComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_OnMiniGameInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_OnMiniGameInteraction = { "OnMiniGameInteraction", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, OnMiniGameInteraction), Z_Construct_UDelegateFunction_Starbreeze_SBZOnMiniGameInteraction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_OnMiniGameInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_OnMiniGameInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_OnPreMiniGameInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_OnPreMiniGameInteraction = { "OnPreMiniGameInteraction", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, OnPreMiniGameInteraction), Z_Construct_UDelegateFunction_Starbreeze_SBZOnMiniGameInteraction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_OnPreMiniGameInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_OnPreMiniGameInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, Data), Z_Construct_UClass_USBZMiniGameData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, AudioComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_AbortedAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_AbortedAudioEvent = { "AbortedAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, AbortedAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_AbortedAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_AbortedAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_SuccessAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_SuccessAudioEvent = { "SuccessAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, SuccessAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_SuccessAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_SuccessAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_FailedAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_FailedAudioEvent = { "FailedAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, FailedAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_FailedAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_FailedAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InitiatedAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InitiatedAudioEvent = { "InitiatedAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, InitiatedAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InitiatedAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InitiatedAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InProgressAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InProgressAudioEvent = { "InProgressAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, InProgressAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InProgressAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InProgressAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_OpenWidgetAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_OpenWidgetAudioEvent = { "OpenWidgetAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, OpenWidgetAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_OpenWidgetAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_OpenWidgetAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_CloseWidgetAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_CloseWidgetAudioEvent = { "CloseWidgetAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, CloseWidgetAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_CloseWidgetAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_CloseWidgetAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_SilenceMinigameAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_SilenceMinigameAudioEvent = { "SilenceMinigameAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, SilenceMinigameAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_SilenceMinigameAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_SilenceMinigameAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_AbortedAudioRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_AbortedAudioRtpc = { "AbortedAudioRtpc", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, AbortedAudioRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_AbortedAudioRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_AbortedAudioRtpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_SuccessAudioRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_SuccessAudioRtpc = { "SuccessAudioRtpc", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, SuccessAudioRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_SuccessAudioRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_SuccessAudioRtpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_FailedAudioRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_FailedAudioRtpc = { "FailedAudioRtpc", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, FailedAudioRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_FailedAudioRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_FailedAudioRtpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InitiatedAudioRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InitiatedAudioRtpc = { "InitiatedAudioRtpc", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, InitiatedAudioRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InitiatedAudioRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InitiatedAudioRtpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InProgressAudioRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InProgressAudioRtpc = { "InProgressAudioRtpc", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, InProgressAudioRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InProgressAudioRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InProgressAudioRtpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_bSpawnMiniGameOnHackingTool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_bSpawnMiniGameOnHackingTool_SetBit(void* Obj)
	{
		((USBZMiniGameComponent*)Obj)->bSpawnMiniGameOnHackingTool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_bSpawnMiniGameOnHackingTool = { "bSpawnMiniGameOnHackingTool", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMiniGameComponent), &Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_bSpawnMiniGameOnHackingTool_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_bSpawnMiniGameOnHackingTool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_bSpawnMiniGameOnHackingTool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_bSpawnMiniGameOnObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_bSpawnMiniGameOnObject_SetBit(void* Obj)
	{
		((USBZMiniGameComponent*)Obj)->bSpawnMiniGameOnObject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_bSpawnMiniGameOnObject = { "bSpawnMiniGameOnObject", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMiniGameComponent), &Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_bSpawnMiniGameOnObject_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_bSpawnMiniGameOnObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_bSpawnMiniGameOnObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_WidgetZOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_WidgetZOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_WidgetZOrder = { "WidgetZOrder", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, WidgetZOrder), Z_Construct_UEnum_Starbreeze_ESBZWidgetZOrdering, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_WidgetZOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_WidgetZOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_HackingAmmoCost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_HackingAmmoCost = { "HackingAmmoCost", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, HackingAmmoCost), METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_HackingAmmoCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_HackingAmmoCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_SpawnedWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_SpawnedWidget = { "SpawnedWidget", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, SpawnedWidget), Z_Construct_UClass_UPD3MiniGameWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_SpawnedWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_SpawnedWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_CurrentControlsReferenceID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_CurrentControlsReferenceID = { "CurrentControlsReferenceID", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, CurrentControlsReferenceID), METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_CurrentControlsReferenceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_CurrentControlsReferenceID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InteractingPlayerStateArray_Inner = { "InteractingPlayerStateArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InteractingPlayerStateArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InteractingPlayerStateArray = { "InteractingPlayerStateArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, InteractingPlayerStateArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InteractingPlayerStateArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InteractingPlayerStateArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_MiniGameDifficulty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_MiniGameDifficulty = { "MiniGameDifficulty", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, MiniGameDifficulty), nullptr, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_MiniGameDifficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_MiniGameDifficulty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_WinningParticipant_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_WinningParticipant = { "WinningParticipant", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, WinningParticipant), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_WinningParticipant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_WinningParticipant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_RootComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_RootComponent = { "RootComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, RootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_RootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_RootComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_ActiveLocallyController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameComponent" },
		{ "ModuleRelativePath", "Public/SBZMiniGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_ActiveLocallyController = { "ActiveLocallyController", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameComponent, ActiveLocallyController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_ActiveLocallyController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_ActiveLocallyController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMiniGameComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_OnMiniGameInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_OnPreMiniGameInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_AbortedAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_SuccessAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_FailedAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InitiatedAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InProgressAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_OpenWidgetAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_CloseWidgetAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_SilenceMinigameAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_AbortedAudioRtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_SuccessAudioRtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_FailedAudioRtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InitiatedAudioRtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InProgressAudioRtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_bSpawnMiniGameOnHackingTool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_bSpawnMiniGameOnObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_WidgetZOrder_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_WidgetZOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_HackingAmmoCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_SpawnedWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_CurrentControlsReferenceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InteractingPlayerStateArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_InteractingPlayerStateArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_MiniGameDifficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_WinningParticipant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_RootComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameComponent_Statics::NewProp_ActiveLocallyController,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZMiniGameComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZAnimatedInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(USBZMiniGameComponent, ISBZAnimatedInteractionInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMiniGameComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMiniGameComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMiniGameComponent_Statics::ClassParams = {
		&USBZMiniGameComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMiniGameComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMiniGameComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMiniGameComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMiniGameComponent, 2610087692);
	template<> STARBREEZE_API UClass* StaticClass<USBZMiniGameComponent>()
	{
		return USBZMiniGameComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMiniGameComponent(Z_Construct_UClass_USBZMiniGameComponent, &USBZMiniGameComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMiniGameComponent"), false, nullptr, nullptr, nullptr);

	void USBZMiniGameComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Data(TEXT("Data"));

		const bool bIsValid = true
			&& Name_Data == ClassReps[(int32)ENetFields_Private::Data].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZMiniGameComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMiniGameComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

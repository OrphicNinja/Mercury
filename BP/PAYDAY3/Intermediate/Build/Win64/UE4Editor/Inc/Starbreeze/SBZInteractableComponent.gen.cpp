// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInteractableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInteractableComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnInteraction__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnInteractableStateChangedDelegate__DelegateSignature();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbilityQuery_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInteractableAudioData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAnimatedInteractionInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZInteractableComponent::execMulticast_SetInteractionEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetInteractionEnabled_Implementation(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInteractableComponent::execOnRep_InteractionEnabled)
	{
		P_GET_UBOOL(Z_Param_bOldInteractionEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_InteractionEnabled(Z_Param_bOldInteractionEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInteractableComponent::execOnSharedKeyItemTagChanged)
	{
		P_GET_STRUCT_REF(FSBZSharedKeyItemTagChangedEvent,Z_Param_Out_SharedKeyItemTagChangedEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSharedKeyItemTagChanged(Z_Param_Out_SharedKeyItemTagChangedEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInteractableComponent::execPlay3DSound)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AudioEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play3DSound(Z_Param_AudioEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInteractableComponent::execSetDefaultsForInstant)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultsForInstant();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInteractableComponent::execSetDefaultsForTimed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultsForTimed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInteractableComponent::execSetInteractionEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractionEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInteractableComponent::execSetLocalEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocalEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInteractableComponent::execStop3DSound)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AudioEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop3DSound(Z_Param_AudioEvent);
		P_NATIVE_END;
	}
	static FName NAME_USBZInteractableComponent_Multicast_SetInteractionEnabled = FName(TEXT("Multicast_SetInteractionEnabled"));
	void USBZInteractableComponent::Multicast_SetInteractionEnabled(bool bEnabled)
	{
		SBZInteractableComponent_eventMulticast_SetInteractionEnabled_Parms Parms;
		Parms.bEnabled=bEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZInteractableComponent_Multicast_SetInteractionEnabled),&Parms);
	}
	void USBZInteractableComponent::StaticRegisterNativesUSBZInteractableComponent()
	{
		UClass* Class = USBZInteractableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetInteractionEnabled", &USBZInteractableComponent::execMulticast_SetInteractionEnabled },
			{ "OnRep_InteractionEnabled", &USBZInteractableComponent::execOnRep_InteractionEnabled },
			{ "OnSharedKeyItemTagChanged", &USBZInteractableComponent::execOnSharedKeyItemTagChanged },
			{ "Play3DSound", &USBZInteractableComponent::execPlay3DSound },
			{ "SetDefaultsForInstant", &USBZInteractableComponent::execSetDefaultsForInstant },
			{ "SetDefaultsForTimed", &USBZInteractableComponent::execSetDefaultsForTimed },
			{ "SetInteractionEnabled", &USBZInteractableComponent::execSetInteractionEnabled },
			{ "SetLocalEnabled", &USBZInteractableComponent::execSetLocalEnabled },
			{ "Stop3DSound", &USBZInteractableComponent::execStop3DSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZInteractableComponent_Multicast_SetInteractionEnabled_Statics
	{
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZInteractableComponent_Multicast_SetInteractionEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZInteractableComponent_eventMulticast_SetInteractionEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZInteractableComponent_Multicast_SetInteractionEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInteractableComponent_eventMulticast_SetInteractionEnabled_Parms), &Z_Construct_UFunction_USBZInteractableComponent_Multicast_SetInteractionEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInteractableComponent_Multicast_SetInteractionEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractableComponent_Multicast_SetInteractionEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractableComponent_Multicast_SetInteractionEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractableComponent_Multicast_SetInteractionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractableComponent, nullptr, "Multicast_SetInteractionEnabled", nullptr, nullptr, sizeof(SBZInteractableComponent_eventMulticast_SetInteractionEnabled_Parms), Z_Construct_UFunction_USBZInteractableComponent_Multicast_SetInteractionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractableComponent_Multicast_SetInteractionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractableComponent_Multicast_SetInteractionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractableComponent_Multicast_SetInteractionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractableComponent_Multicast_SetInteractionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractableComponent_Multicast_SetInteractionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInteractableComponent_OnRep_InteractionEnabled_Statics
	{
		struct SBZInteractableComponent_eventOnRep_InteractionEnabled_Parms
		{
			bool bOldInteractionEnabled;
		};
		static void NewProp_bOldInteractionEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOldInteractionEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZInteractableComponent_OnRep_InteractionEnabled_Statics::NewProp_bOldInteractionEnabled_SetBit(void* Obj)
	{
		((SBZInteractableComponent_eventOnRep_InteractionEnabled_Parms*)Obj)->bOldInteractionEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZInteractableComponent_OnRep_InteractionEnabled_Statics::NewProp_bOldInteractionEnabled = { "bOldInteractionEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInteractableComponent_eventOnRep_InteractionEnabled_Parms), &Z_Construct_UFunction_USBZInteractableComponent_OnRep_InteractionEnabled_Statics::NewProp_bOldInteractionEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInteractableComponent_OnRep_InteractionEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractableComponent_OnRep_InteractionEnabled_Statics::NewProp_bOldInteractionEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractableComponent_OnRep_InteractionEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractableComponent_OnRep_InteractionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractableComponent, nullptr, "OnRep_InteractionEnabled", nullptr, nullptr, sizeof(SBZInteractableComponent_eventOnRep_InteractionEnabled_Parms), Z_Construct_UFunction_USBZInteractableComponent_OnRep_InteractionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractableComponent_OnRep_InteractionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractableComponent_OnRep_InteractionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractableComponent_OnRep_InteractionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractableComponent_OnRep_InteractionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractableComponent_OnRep_InteractionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInteractableComponent_OnSharedKeyItemTagChanged_Statics
	{
		struct SBZInteractableComponent_eventOnSharedKeyItemTagChanged_Parms
		{
			FSBZSharedKeyItemTagChangedEvent SharedKeyItemTagChangedEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedKeyItemTagChangedEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SharedKeyItemTagChangedEventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractableComponent_OnSharedKeyItemTagChanged_Statics::NewProp_SharedKeyItemTagChangedEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZInteractableComponent_OnSharedKeyItemTagChanged_Statics::NewProp_SharedKeyItemTagChangedEventData = { "SharedKeyItemTagChangedEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractableComponent_eventOnSharedKeyItemTagChanged_Parms, SharedKeyItemTagChangedEventData), Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractableComponent_OnSharedKeyItemTagChanged_Statics::NewProp_SharedKeyItemTagChangedEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractableComponent_OnSharedKeyItemTagChanged_Statics::NewProp_SharedKeyItemTagChangedEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInteractableComponent_OnSharedKeyItemTagChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractableComponent_OnSharedKeyItemTagChanged_Statics::NewProp_SharedKeyItemTagChangedEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractableComponent_OnSharedKeyItemTagChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractableComponent_OnSharedKeyItemTagChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractableComponent, nullptr, "OnSharedKeyItemTagChanged", nullptr, nullptr, sizeof(SBZInteractableComponent_eventOnSharedKeyItemTagChanged_Parms), Z_Construct_UFunction_USBZInteractableComponent_OnSharedKeyItemTagChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractableComponent_OnSharedKeyItemTagChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractableComponent_OnSharedKeyItemTagChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractableComponent_OnSharedKeyItemTagChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractableComponent_OnSharedKeyItemTagChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractableComponent_OnSharedKeyItemTagChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInteractableComponent_Play3DSound_Statics
	{
		struct SBZInteractableComponent_eventPlay3DSound_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZInteractableComponent_Play3DSound_Statics::NewProp_AudioEvent = { "AudioEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractableComponent_eventPlay3DSound_Parms, AudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInteractableComponent_Play3DSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractableComponent_Play3DSound_Statics::NewProp_AudioEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractableComponent_Play3DSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractableComponent_Play3DSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractableComponent, nullptr, "Play3DSound", nullptr, nullptr, sizeof(SBZInteractableComponent_eventPlay3DSound_Parms), Z_Construct_UFunction_USBZInteractableComponent_Play3DSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractableComponent_Play3DSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractableComponent_Play3DSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractableComponent_Play3DSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractableComponent_Play3DSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractableComponent_Play3DSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInteractableComponent_SetDefaultsForInstant_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractableComponent_SetDefaultsForInstant_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractableComponent_SetDefaultsForInstant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractableComponent, nullptr, "SetDefaultsForInstant", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractableComponent_SetDefaultsForInstant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractableComponent_SetDefaultsForInstant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractableComponent_SetDefaultsForInstant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractableComponent_SetDefaultsForInstant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInteractableComponent_SetDefaultsForTimed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractableComponent_SetDefaultsForTimed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractableComponent_SetDefaultsForTimed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractableComponent, nullptr, "SetDefaultsForTimed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractableComponent_SetDefaultsForTimed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractableComponent_SetDefaultsForTimed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractableComponent_SetDefaultsForTimed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractableComponent_SetDefaultsForTimed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInteractableComponent_SetInteractionEnabled_Statics
	{
		struct SBZInteractableComponent_eventSetInteractionEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZInteractableComponent_SetInteractionEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZInteractableComponent_eventSetInteractionEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZInteractableComponent_SetInteractionEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInteractableComponent_eventSetInteractionEnabled_Parms), &Z_Construct_UFunction_USBZInteractableComponent_SetInteractionEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInteractableComponent_SetInteractionEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractableComponent_SetInteractionEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractableComponent_SetInteractionEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractableComponent_SetInteractionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractableComponent, nullptr, "SetInteractionEnabled", nullptr, nullptr, sizeof(SBZInteractableComponent_eventSetInteractionEnabled_Parms), Z_Construct_UFunction_USBZInteractableComponent_SetInteractionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractableComponent_SetInteractionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractableComponent_SetInteractionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractableComponent_SetInteractionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractableComponent_SetInteractionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractableComponent_SetInteractionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInteractableComponent_SetLocalEnabled_Statics
	{
		struct SBZInteractableComponent_eventSetLocalEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZInteractableComponent_SetLocalEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZInteractableComponent_eventSetLocalEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZInteractableComponent_SetLocalEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInteractableComponent_eventSetLocalEnabled_Parms), &Z_Construct_UFunction_USBZInteractableComponent_SetLocalEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInteractableComponent_SetLocalEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractableComponent_SetLocalEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractableComponent_SetLocalEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractableComponent_SetLocalEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractableComponent, nullptr, "SetLocalEnabled", nullptr, nullptr, sizeof(SBZInteractableComponent_eventSetLocalEnabled_Parms), Z_Construct_UFunction_USBZInteractableComponent_SetLocalEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractableComponent_SetLocalEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractableComponent_SetLocalEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractableComponent_SetLocalEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractableComponent_SetLocalEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractableComponent_SetLocalEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInteractableComponent_Stop3DSound_Statics
	{
		struct SBZInteractableComponent_eventStop3DSound_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZInteractableComponent_Stop3DSound_Statics::NewProp_AudioEvent = { "AudioEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractableComponent_eventStop3DSound_Parms, AudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInteractableComponent_Stop3DSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractableComponent_Stop3DSound_Statics::NewProp_AudioEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractableComponent_Stop3DSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractableComponent_Stop3DSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractableComponent, nullptr, "Stop3DSound", nullptr, nullptr, sizeof(SBZInteractableComponent_eventStop3DSound_Parms), Z_Construct_UFunction_USBZInteractableComponent_Stop3DSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractableComponent_Stop3DSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractableComponent_Stop3DSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractableComponent_Stop3DSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractableComponent_Stop3DSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractableComponent_Stop3DSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister()
	{
		return USBZInteractableComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZInteractableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStartInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnServerStartInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnServerStartInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEndInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnServerEndInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnServerEndInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPredictedEndInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPredictedEndInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPredictedAbortInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPredictedAbortInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAckCompleteInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAckCompleteInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnServerCompleteInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnServerCompleteInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAckRejectedPredictedInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAckRejectedPredictedInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAckAbortInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAckAbortInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnServerAbortInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnServerAbortInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInteractionEnabledStateChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractionEnabledStateChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopingAkComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoopingAkComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayInteractionQuery_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameplayInteractionQuery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedKeyItemQuery_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SharedKeyItemQuery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactors_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Interactors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictedInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PredictedInteractor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictionTimeoutSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PredictionTimeoutSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextCancelAudioData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NextCancelAudioData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCurrentlyInteracting_MetaData[];
#endif
		static void NewProp_bCurrentlyInteracting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCurrentlyInteracting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInteractionEnabled_MetaData[];
#endif
		static void NewProp_bInteractionEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInteractionEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLocalEnabled_MetaData[];
#endif
		static void NewProp_bLocalEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLocalEnabled;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalizedAnimatedInteractionDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedAnimatedInteractionDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalizedAnimatedInteractionDatas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPredictLocalEnd_MetaData[];
#endif
		static void NewProp_bPredictLocalEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPredictLocalEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSyncInteracting_MetaData[];
#endif
		static void NewProp_bSyncInteracting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSyncInteracting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRepeatable_MetaData[];
#endif
		static void NewProp_bRepeatable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRepeatable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClearInteractorsOnComplete_MetaData[];
#endif
		static void NewProp_bClearInteractorsOnComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearInteractorsOnComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAllowedInCasing_MetaData[];
#endif
		static void NewProp_bIsAllowedInCasing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAllowedInCasing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsIllegal_MetaData[];
#endif
		static void NewProp_bIsIllegal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsIllegal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedKeyItemTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SharedKeyItemTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZInteractableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBaseInteractableComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZInteractableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZInteractableComponent_Multicast_SetInteractionEnabled, "Multicast_SetInteractionEnabled" }, // 2326473538
		{ &Z_Construct_UFunction_USBZInteractableComponent_OnRep_InteractionEnabled, "OnRep_InteractionEnabled" }, // 277015606
		{ &Z_Construct_UFunction_USBZInteractableComponent_OnSharedKeyItemTagChanged, "OnSharedKeyItemTagChanged" }, // 678338649
		{ &Z_Construct_UFunction_USBZInteractableComponent_Play3DSound, "Play3DSound" }, // 2355427854
		{ &Z_Construct_UFunction_USBZInteractableComponent_SetDefaultsForInstant, "SetDefaultsForInstant" }, // 356504060
		{ &Z_Construct_UFunction_USBZInteractableComponent_SetDefaultsForTimed, "SetDefaultsForTimed" }, // 2488142000
		{ &Z_Construct_UFunction_USBZInteractableComponent_SetInteractionEnabled, "SetInteractionEnabled" }, // 3220293813
		{ &Z_Construct_UFunction_USBZInteractableComponent_SetLocalEnabled, "SetLocalEnabled" }, // 2616749934
		{ &Z_Construct_UFunction_USBZInteractableComponent_Stop3DSound, "Stop3DSound" }, // 3317549854
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZInteractableComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnStartInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnStartInteraction = { "OnStartInteraction", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractableComponent, OnStartInteraction), Z_Construct_UDelegateFunction_Starbreeze_SBZOnInteraction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnStartInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnStartInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnServerStartInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnServerStartInteraction = { "OnServerStartInteraction", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractableComponent, OnServerStartInteraction), Z_Construct_UDelegateFunction_Starbreeze_SBZOnInteraction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnServerStartInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnServerStartInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnEndInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnEndInteraction = { "OnEndInteraction", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractableComponent, OnEndInteraction), Z_Construct_UDelegateFunction_Starbreeze_SBZOnInteraction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnEndInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnEndInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnServerEndInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnServerEndInteraction = { "OnServerEndInteraction", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractableComponent, OnServerEndInteraction), Z_Construct_UDelegateFunction_Starbreeze_SBZOnInteraction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnServerEndInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnServerEndInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnPredictedEndInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnPredictedEndInteraction = { "OnPredictedEndInteraction", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractableComponent, OnPredictedEndInteraction), Z_Construct_UDelegateFunction_Starbreeze_SBZOnInteraction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnPredictedEndInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnPredictedEndInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnPredictedAbortInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnPredictedAbortInteraction = { "OnPredictedAbortInteraction", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractableComponent, OnPredictedAbortInteraction), Z_Construct_UDelegateFunction_Starbreeze_SBZOnInteraction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnPredictedAbortInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnPredictedAbortInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnAckCompleteInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnAckCompleteInteraction = { "OnAckCompleteInteraction", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractableComponent, OnAckCompleteInteraction), Z_Construct_UDelegateFunction_Starbreeze_SBZOnInteraction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnAckCompleteInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnAckCompleteInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnServerCompleteInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnServerCompleteInteraction = { "OnServerCompleteInteraction", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractableComponent, OnServerCompleteInteraction), Z_Construct_UDelegateFunction_Starbreeze_SBZOnInteraction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnServerCompleteInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnServerCompleteInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnAckRejectedPredictedInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnAckRejectedPredictedInteraction = { "OnAckRejectedPredictedInteraction", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractableComponent, OnAckRejectedPredictedInteraction), Z_Construct_UDelegateFunction_Starbreeze_SBZOnInteraction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnAckRejectedPredictedInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnAckRejectedPredictedInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnAckAbortInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnAckAbortInteraction = { "OnAckAbortInteraction", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractableComponent, OnAckAbortInteraction), Z_Construct_UDelegateFunction_Starbreeze_SBZOnInteraction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnAckAbortInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnAckAbortInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnServerAbortInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnServerAbortInteraction = { "OnServerAbortInteraction", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractableComponent, OnServerAbortInteraction), Z_Construct_UDelegateFunction_Starbreeze_SBZOnInteraction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnServerAbortInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnServerAbortInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnInteractionEnabledStateChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnInteractionEnabledStateChange = { "OnInteractionEnabledStateChange", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractableComponent, OnInteractionEnabledStateChange), Z_Construct_UDelegateFunction_Starbreeze_SBZOnInteractableStateChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnInteractionEnabledStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnInteractionEnabledStateChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_LoopingAkComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_LoopingAkComponent = { "LoopingAkComponent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractableComponent, LoopingAkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_LoopingAkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_LoopingAkComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_GameplayInteractionQuery_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_GameplayInteractionQuery = { "GameplayInteractionQuery", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractableComponent, GameplayInteractionQuery), Z_Construct_UClass_USBZGameplayAbilityQuery_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_GameplayInteractionQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_GameplayInteractionQuery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_SharedKeyItemQuery_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_SharedKeyItemQuery = { "SharedKeyItemQuery", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractableComponent, SharedKeyItemQuery), Z_Construct_UClass_USBZGameplayAbilityQuery_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_SharedKeyItemQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_SharedKeyItemQuery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_Interactors_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_Interactors_Inner = { "Interactors", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_Interactors_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_Interactors_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_Interactors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_Interactors = { "Interactors", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractableComponent, Interactors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_Interactors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_Interactors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_PredictedInteractor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_PredictedInteractor = { "PredictedInteractor", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractableComponent, PredictedInteractor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_PredictedInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_PredictedInteractor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_PredictionTimeoutSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_PredictionTimeoutSeconds = { "PredictionTimeoutSeconds", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractableComponent, PredictionTimeoutSeconds), METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_PredictionTimeoutSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_PredictionTimeoutSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_NextCancelAudioData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_NextCancelAudioData = { "NextCancelAudioData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractableComponent, NextCancelAudioData), Z_Construct_UScriptStruct_FSBZInteractableAudioData, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_NextCancelAudioData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_NextCancelAudioData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bCurrentlyInteracting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bCurrentlyInteracting_SetBit(void* Obj)
	{
		((USBZInteractableComponent*)Obj)->bCurrentlyInteracting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bCurrentlyInteracting = { "bCurrentlyInteracting", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZInteractableComponent), &Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bCurrentlyInteracting_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bCurrentlyInteracting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bCurrentlyInteracting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bInteractionEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bInteractionEnabled_SetBit(void* Obj)
	{
		((USBZInteractableComponent*)Obj)->bInteractionEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bInteractionEnabled = { "bInteractionEnabled", "OnRep_InteractionEnabled", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZInteractableComponent), &Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bInteractionEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bInteractionEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bInteractionEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bLocalEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bLocalEnabled_SetBit(void* Obj)
	{
		((USBZInteractableComponent*)Obj)->bLocalEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bLocalEnabled = { "bLocalEnabled", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZInteractableComponent), &Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bLocalEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bLocalEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bLocalEnabled_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_LocalizedAnimatedInteractionDatas_Inner = { "LocalizedAnimatedInteractionDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZInteractableLocalizedAnimatedInteractionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_LocalizedAnimatedInteractionDatas_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_LocalizedAnimatedInteractionDatas = { "LocalizedAnimatedInteractionDatas", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractableComponent, LocalizedAnimatedInteractionDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_LocalizedAnimatedInteractionDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_LocalizedAnimatedInteractionDatas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bPredictLocalEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bPredictLocalEnd_SetBit(void* Obj)
	{
		((USBZInteractableComponent*)Obj)->bPredictLocalEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bPredictLocalEnd = { "bPredictLocalEnd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZInteractableComponent), &Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bPredictLocalEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bPredictLocalEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bPredictLocalEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bSyncInteracting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bSyncInteracting_SetBit(void* Obj)
	{
		((USBZInteractableComponent*)Obj)->bSyncInteracting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bSyncInteracting = { "bSyncInteracting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZInteractableComponent), &Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bSyncInteracting_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bSyncInteracting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bSyncInteracting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bRepeatable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bRepeatable_SetBit(void* Obj)
	{
		((USBZInteractableComponent*)Obj)->bRepeatable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bRepeatable = { "bRepeatable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZInteractableComponent), &Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bRepeatable_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bRepeatable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bRepeatable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bClearInteractorsOnComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bClearInteractorsOnComplete_SetBit(void* Obj)
	{
		((USBZInteractableComponent*)Obj)->bClearInteractorsOnComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bClearInteractorsOnComplete = { "bClearInteractorsOnComplete", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZInteractableComponent), &Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bClearInteractorsOnComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bClearInteractorsOnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bClearInteractorsOnComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bIsAllowedInCasing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bIsAllowedInCasing_SetBit(void* Obj)
	{
		((USBZInteractableComponent*)Obj)->bIsAllowedInCasing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bIsAllowedInCasing = { "bIsAllowedInCasing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZInteractableComponent), &Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bIsAllowedInCasing_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bIsAllowedInCasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bIsAllowedInCasing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bIsIllegal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bIsIllegal_SetBit(void* Obj)
	{
		((USBZInteractableComponent*)Obj)->bIsIllegal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bIsIllegal = { "bIsIllegal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZInteractableComponent), &Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bIsIllegal_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bIsIllegal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bIsIllegal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_SharedKeyItemTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_SharedKeyItemTags = { "SharedKeyItemTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractableComponent, SharedKeyItemTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_SharedKeyItemTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_SharedKeyItemTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZInteractableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnStartInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnServerStartInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnEndInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnServerEndInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnPredictedEndInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnPredictedAbortInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnAckCompleteInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnServerCompleteInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnAckRejectedPredictedInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnAckAbortInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnServerAbortInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_OnInteractionEnabledStateChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_LoopingAkComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_GameplayInteractionQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_SharedKeyItemQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_Interactors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_Interactors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_PredictedInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_PredictionTimeoutSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_NextCancelAudioData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bCurrentlyInteracting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bInteractionEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bLocalEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_LocalizedAnimatedInteractionDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_LocalizedAnimatedInteractionDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bPredictLocalEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bSyncInteracting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bRepeatable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bClearInteractorsOnComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bIsAllowedInCasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_bIsIllegal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractableComponent_Statics::NewProp_SharedKeyItemTags,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZInteractableComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZAnimatedInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(USBZInteractableComponent, ISBZAnimatedInteractionInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZInteractableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZInteractableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZInteractableComponent_Statics::ClassParams = {
		&USBZInteractableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZInteractableComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZInteractableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZInteractableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZInteractableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZInteractableComponent, 2757470098);
	template<> STARBREEZE_API UClass* StaticClass<USBZInteractableComponent>()
	{
		return USBZInteractableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZInteractableComponent(Z_Construct_UClass_USBZInteractableComponent, &USBZInteractableComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZInteractableComponent"), false, nullptr, nullptr, nullptr);

	void USBZInteractableComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bInteractionEnabled(TEXT("bInteractionEnabled"));

		const bool bIsValid = true
			&& Name_bInteractionEnabled == ClassReps[(int32)ENetFields_Private::bInteractionEnabled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZInteractableComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZInteractableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

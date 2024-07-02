// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLifeActionTriggerVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLifeActionTriggerVolume() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLifeActionTriggerVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLifeActionTriggerVolume();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionInstance_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionSlot_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZLifeActionStopReason();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActorFilterComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_Order_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionEventDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(ASBZLifeActionTriggerVolume::execOnFilteredActorBeginOverlapping)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Identifier);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentTotalActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFilteredActorBeginOverlapping(Z_Param_Identifier,Z_Param_Actor,Z_Param_CurrentTotalActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLifeActionTriggerVolume::execOnFilteredActorEndOverlapping)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Identifier);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentTotalActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFilteredActorEndOverlapping(Z_Param_Identifier,Z_Param_Actor,Z_Param_CurrentTotalActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLifeActionTriggerVolume::execOnSlotEntered)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_GET_OBJECT(USBZLifeActionInstance,Z_Param_ActionInstance);
		P_GET_OBJECT(USBZLifeActionSlot,Z_Param_ActionSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSlotEntered(Z_Param_Character,Z_Param_ActionInstance,Z_Param_ActionSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLifeActionTriggerVolume::execOnSlotExited)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_GET_OBJECT(USBZLifeActionInstance,Z_Param_ActionInstance);
		P_GET_OBJECT(USBZLifeActionSlot,Z_Param_ActionSlot);
		P_GET_ENUM(ESBZLifeActionStopReason,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSlotExited(Z_Param_Character,Z_Param_ActionInstance,Z_Param_ActionSlot,ESBZLifeActionStopReason(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLifeActionTriggerVolume::execOnSlotExiting)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_GET_OBJECT(USBZLifeActionInstance,Z_Param_ActionInstance);
		P_GET_OBJECT(USBZLifeActionSlot,Z_Param_ActionSlot);
		P_GET_ENUM(ESBZLifeActionStopReason,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSlotExiting(Z_Param_Character,Z_Param_ActionInstance,Z_Param_ActionSlot,ESBZLifeActionStopReason(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLifeActionTriggerVolume::execOnSlotFreed)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_GET_OBJECT(USBZLifeActionInstance,Z_Param_ActionInstance);
		P_GET_OBJECT(USBZLifeActionSlot,Z_Param_ActionSlot);
		P_GET_ENUM(ESBZLifeActionStopReason,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSlotFreed(Z_Param_Character,Z_Param_ActionInstance,Z_Param_ActionSlot,ESBZLifeActionStopReason(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLifeActionTriggerVolume::execOnSlotReady)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_GET_OBJECT(USBZLifeActionInstance,Z_Param_ActionInstance);
		P_GET_OBJECT(USBZLifeActionSlot,Z_Param_ActionSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSlotReady(Z_Param_Character,Z_Param_ActionInstance,Z_Param_ActionSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLifeActionTriggerVolume::execOnSlotReserved)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_GET_OBJECT(USBZLifeActionInstance,Z_Param_ActionInstance);
		P_GET_OBJECT(USBZLifeActionSlot,Z_Param_ActionSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSlotReserved(Z_Param_Character,Z_Param_ActionInstance,Z_Param_ActionSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLifeActionTriggerVolume::execOnSlotStart)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_GET_OBJECT(USBZLifeActionInstance,Z_Param_ActionInstance);
		P_GET_OBJECT(USBZLifeActionSlot,Z_Param_ActionSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSlotStart(Z_Param_Character,Z_Param_ActionInstance,Z_Param_ActionSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLifeActionTriggerVolume::execSetVolumeEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolumeEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	void ASBZLifeActionTriggerVolume::StaticRegisterNativesASBZLifeActionTriggerVolume()
	{
		UClass* Class = ASBZLifeActionTriggerVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnFilteredActorBeginOverlapping", &ASBZLifeActionTriggerVolume::execOnFilteredActorBeginOverlapping },
			{ "OnFilteredActorEndOverlapping", &ASBZLifeActionTriggerVolume::execOnFilteredActorEndOverlapping },
			{ "OnSlotEntered", &ASBZLifeActionTriggerVolume::execOnSlotEntered },
			{ "OnSlotExited", &ASBZLifeActionTriggerVolume::execOnSlotExited },
			{ "OnSlotExiting", &ASBZLifeActionTriggerVolume::execOnSlotExiting },
			{ "OnSlotFreed", &ASBZLifeActionTriggerVolume::execOnSlotFreed },
			{ "OnSlotReady", &ASBZLifeActionTriggerVolume::execOnSlotReady },
			{ "OnSlotReserved", &ASBZLifeActionTriggerVolume::execOnSlotReserved },
			{ "OnSlotStart", &ASBZLifeActionTriggerVolume::execOnSlotStart },
			{ "SetVolumeEnabled", &ASBZLifeActionTriggerVolume::execSetVolumeEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorBeginOverlapping_Statics
	{
		struct SBZLifeActionTriggerVolume_eventOnFilteredActorBeginOverlapping_Parms
		{
			FName Identifier;
			AActor* Actor;
			int32 CurrentTotalActors;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentTotalActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorBeginOverlapping_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnFilteredActorBeginOverlapping_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorBeginOverlapping_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnFilteredActorBeginOverlapping_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorBeginOverlapping_Statics::NewProp_CurrentTotalActors = { "CurrentTotalActors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnFilteredActorBeginOverlapping_Parms, CurrentTotalActors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorBeginOverlapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorBeginOverlapping_Statics::NewProp_Identifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorBeginOverlapping_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorBeginOverlapping_Statics::NewProp_CurrentTotalActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorBeginOverlapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorBeginOverlapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLifeActionTriggerVolume, nullptr, "OnFilteredActorBeginOverlapping", nullptr, nullptr, sizeof(SBZLifeActionTriggerVolume_eventOnFilteredActorBeginOverlapping_Parms), Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorBeginOverlapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorBeginOverlapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorBeginOverlapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorBeginOverlapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorBeginOverlapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorBeginOverlapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorEndOverlapping_Statics
	{
		struct SBZLifeActionTriggerVolume_eventOnFilteredActorEndOverlapping_Parms
		{
			FName Identifier;
			AActor* Actor;
			int32 CurrentTotalActors;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentTotalActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorEndOverlapping_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnFilteredActorEndOverlapping_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorEndOverlapping_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnFilteredActorEndOverlapping_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorEndOverlapping_Statics::NewProp_CurrentTotalActors = { "CurrentTotalActors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnFilteredActorEndOverlapping_Parms, CurrentTotalActors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorEndOverlapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorEndOverlapping_Statics::NewProp_Identifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorEndOverlapping_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorEndOverlapping_Statics::NewProp_CurrentTotalActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorEndOverlapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorEndOverlapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLifeActionTriggerVolume, nullptr, "OnFilteredActorEndOverlapping", nullptr, nullptr, sizeof(SBZLifeActionTriggerVolume_eventOnFilteredActorEndOverlapping_Parms), Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorEndOverlapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorEndOverlapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorEndOverlapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorEndOverlapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorEndOverlapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorEndOverlapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotEntered_Statics
	{
		struct SBZLifeActionTriggerVolume_eventOnSlotEntered_Parms
		{
			ASBZCharacter* Character;
			USBZLifeActionInstance* ActionInstance;
			USBZLifeActionSlot* ActionSlot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotEntered_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnSlotEntered_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotEntered_Statics::NewProp_ActionInstance_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotEntered_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnSlotEntered_Parms, ActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotEntered_Statics::NewProp_ActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotEntered_Statics::NewProp_ActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotEntered_Statics::NewProp_ActionSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotEntered_Statics::NewProp_ActionSlot = { "ActionSlot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnSlotEntered_Parms, ActionSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotEntered_Statics::NewProp_ActionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotEntered_Statics::NewProp_ActionSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotEntered_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotEntered_Statics::NewProp_ActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotEntered_Statics::NewProp_ActionSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLifeActionTriggerVolume, nullptr, "OnSlotEntered", nullptr, nullptr, sizeof(SBZLifeActionTriggerVolume_eventOnSlotEntered_Parms), Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited_Statics
	{
		struct SBZLifeActionTriggerVolume_eventOnSlotExited_Parms
		{
			ASBZCharacter* Character;
			USBZLifeActionInstance* ActionInstance;
			USBZLifeActionSlot* ActionSlot;
			ESBZLifeActionStopReason Result;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnSlotExited_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited_Statics::NewProp_ActionInstance_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnSlotExited_Parms, ActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited_Statics::NewProp_ActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited_Statics::NewProp_ActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited_Statics::NewProp_ActionSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited_Statics::NewProp_ActionSlot = { "ActionSlot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnSlotExited_Parms, ActionSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited_Statics::NewProp_ActionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited_Statics::NewProp_ActionSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnSlotExited_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZLifeActionStopReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited_Statics::NewProp_ActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited_Statics::NewProp_ActionSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLifeActionTriggerVolume, nullptr, "OnSlotExited", nullptr, nullptr, sizeof(SBZLifeActionTriggerVolume_eventOnSlotExited_Parms), Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting_Statics
	{
		struct SBZLifeActionTriggerVolume_eventOnSlotExiting_Parms
		{
			ASBZCharacter* Character;
			USBZLifeActionInstance* ActionInstance;
			USBZLifeActionSlot* ActionSlot;
			ESBZLifeActionStopReason Result;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnSlotExiting_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting_Statics::NewProp_ActionInstance_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnSlotExiting_Parms, ActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting_Statics::NewProp_ActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting_Statics::NewProp_ActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting_Statics::NewProp_ActionSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting_Statics::NewProp_ActionSlot = { "ActionSlot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnSlotExiting_Parms, ActionSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting_Statics::NewProp_ActionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting_Statics::NewProp_ActionSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnSlotExiting_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZLifeActionStopReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting_Statics::NewProp_ActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting_Statics::NewProp_ActionSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLifeActionTriggerVolume, nullptr, "OnSlotExiting", nullptr, nullptr, sizeof(SBZLifeActionTriggerVolume_eventOnSlotExiting_Parms), Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed_Statics
	{
		struct SBZLifeActionTriggerVolume_eventOnSlotFreed_Parms
		{
			ASBZCharacter* Character;
			USBZLifeActionInstance* ActionInstance;
			USBZLifeActionSlot* ActionSlot;
			ESBZLifeActionStopReason Result;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnSlotFreed_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed_Statics::NewProp_ActionInstance_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnSlotFreed_Parms, ActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed_Statics::NewProp_ActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed_Statics::NewProp_ActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed_Statics::NewProp_ActionSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed_Statics::NewProp_ActionSlot = { "ActionSlot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnSlotFreed_Parms, ActionSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed_Statics::NewProp_ActionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed_Statics::NewProp_ActionSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnSlotFreed_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZLifeActionStopReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed_Statics::NewProp_ActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed_Statics::NewProp_ActionSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLifeActionTriggerVolume, nullptr, "OnSlotFreed", nullptr, nullptr, sizeof(SBZLifeActionTriggerVolume_eventOnSlotFreed_Parms), Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReady_Statics
	{
		struct SBZLifeActionTriggerVolume_eventOnSlotReady_Parms
		{
			ASBZCharacter* Character;
			USBZLifeActionInstance* ActionInstance;
			USBZLifeActionSlot* ActionSlot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReady_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnSlotReady_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReady_Statics::NewProp_ActionInstance_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReady_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnSlotReady_Parms, ActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReady_Statics::NewProp_ActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReady_Statics::NewProp_ActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReady_Statics::NewProp_ActionSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReady_Statics::NewProp_ActionSlot = { "ActionSlot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnSlotReady_Parms, ActionSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReady_Statics::NewProp_ActionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReady_Statics::NewProp_ActionSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReady_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReady_Statics::NewProp_ActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReady_Statics::NewProp_ActionSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLifeActionTriggerVolume, nullptr, "OnSlotReady", nullptr, nullptr, sizeof(SBZLifeActionTriggerVolume_eventOnSlotReady_Parms), Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReserved_Statics
	{
		struct SBZLifeActionTriggerVolume_eventOnSlotReserved_Parms
		{
			ASBZCharacter* Character;
			USBZLifeActionInstance* ActionInstance;
			USBZLifeActionSlot* ActionSlot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReserved_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnSlotReserved_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReserved_Statics::NewProp_ActionInstance_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReserved_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnSlotReserved_Parms, ActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReserved_Statics::NewProp_ActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReserved_Statics::NewProp_ActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReserved_Statics::NewProp_ActionSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReserved_Statics::NewProp_ActionSlot = { "ActionSlot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnSlotReserved_Parms, ActionSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReserved_Statics::NewProp_ActionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReserved_Statics::NewProp_ActionSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReserved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReserved_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReserved_Statics::NewProp_ActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReserved_Statics::NewProp_ActionSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReserved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReserved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLifeActionTriggerVolume, nullptr, "OnSlotReserved", nullptr, nullptr, sizeof(SBZLifeActionTriggerVolume_eventOnSlotReserved_Parms), Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReserved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReserved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReserved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReserved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReserved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReserved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotStart_Statics
	{
		struct SBZLifeActionTriggerVolume_eventOnSlotStart_Parms
		{
			ASBZCharacter* Character;
			USBZLifeActionInstance* ActionInstance;
			USBZLifeActionSlot* ActionSlot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotStart_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnSlotStart_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotStart_Statics::NewProp_ActionInstance_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotStart_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnSlotStart_Parms, ActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotStart_Statics::NewProp_ActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotStart_Statics::NewProp_ActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotStart_Statics::NewProp_ActionSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotStart_Statics::NewProp_ActionSlot = { "ActionSlot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionTriggerVolume_eventOnSlotStart_Parms, ActionSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotStart_Statics::NewProp_ActionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotStart_Statics::NewProp_ActionSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotStart_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotStart_Statics::NewProp_ActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotStart_Statics::NewProp_ActionSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLifeActionTriggerVolume, nullptr, "OnSlotStart", nullptr, nullptr, sizeof(SBZLifeActionTriggerVolume_eventOnSlotStart_Parms), Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLifeActionTriggerVolume_SetVolumeEnabled_Statics
	{
		struct SBZLifeActionTriggerVolume_eventSetVolumeEnabled_Parms
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
	void Z_Construct_UFunction_ASBZLifeActionTriggerVolume_SetVolumeEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZLifeActionTriggerVolume_eventSetVolumeEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_SetVolumeEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionTriggerVolume_eventSetVolumeEnabled_Parms), &Z_Construct_UFunction_ASBZLifeActionTriggerVolume_SetVolumeEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLifeActionTriggerVolume_SetVolumeEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLifeActionTriggerVolume_SetVolumeEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLifeActionTriggerVolume_SetVolumeEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLifeActionTriggerVolume_SetVolumeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLifeActionTriggerVolume, nullptr, "SetVolumeEnabled", nullptr, nullptr, sizeof(SBZLifeActionTriggerVolume_eventSetVolumeEnabled_Parms), Z_Construct_UFunction_ASBZLifeActionTriggerVolume_SetVolumeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_SetVolumeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_SetVolumeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLifeActionTriggerVolume_SetVolumeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLifeActionTriggerVolume_SetVolumeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLifeActionTriggerVolume_SetVolumeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZLifeActionTriggerVolume_NoRegister()
	{
		return ASBZLifeActionTriggerVolume::StaticClass();
	}
	struct Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeededTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NeededTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldStartEnabled_MetaData[];
#endif
		static void NewProp_bShouldStartEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldStartEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableOnLifeActionReserved_MetaData[];
#endif
		static void NewProp_bDisableOnLifeActionReserved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableOnLifeActionReserved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableOnLifeActionExiting_MetaData[];
#endif
		static void NewProp_bDisableOnLifeActionExiting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableOnLifeActionExiting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableOnLifeActionComplete_MetaData[];
#endif
		static void NewProp_bDisableOnLifeActionComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableOnLifeActionComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorFilterComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorFilterComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTriggeredByHumanShield_MetaData[];
#endif
		static void NewProp_bTriggeredByHumanShield_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTriggeredByHumanShield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoTrigger_MetaData[];
#endif
		static void NewProp_bAutoTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCharacterSlotReserved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterSlotReserved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCharacterSlotEntered_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterSlotEntered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCharacterSlotReady_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterSlotReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCharacterSlotStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterSlotStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCharacterSlotExiting_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterSlotExiting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCharacterSlotExited_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterSlotExited;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCharacterSlotFreed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterSlotFreed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorBeginOverlapping, "OnFilteredActorBeginOverlapping" }, // 3022217756
		{ &Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnFilteredActorEndOverlapping, "OnFilteredActorEndOverlapping" }, // 3949338875
		{ &Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotEntered, "OnSlotEntered" }, // 2211775882
		{ &Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExited, "OnSlotExited" }, // 2683612599
		{ &Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotExiting, "OnSlotExiting" }, // 2103424707
		{ &Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotFreed, "OnSlotFreed" }, // 1907276270
		{ &Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReady, "OnSlotReady" }, // 3898448179
		{ &Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotReserved, "OnSlotReserved" }, // 2815861920
		{ &Z_Construct_UFunction_ASBZLifeActionTriggerVolume_OnSlotStart, "OnSlotStart" }, // 3959984514
		{ &Z_Construct_UFunction_ASBZLifeActionTriggerVolume_SetVolumeEnabled, "SetVolumeEnabled" }, // 2595790160
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLifeActionTriggerVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_NeededTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_NeededTags = { "NeededTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLifeActionTriggerVolume, NeededTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_NeededTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_NeededTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bShouldStartEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bShouldStartEnabled_SetBit(void* Obj)
	{
		((ASBZLifeActionTriggerVolume*)Obj)->bShouldStartEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bShouldStartEnabled = { "bShouldStartEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZLifeActionTriggerVolume), &Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bShouldStartEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bShouldStartEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bShouldStartEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bDisableOnLifeActionReserved_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bDisableOnLifeActionReserved_SetBit(void* Obj)
	{
		((ASBZLifeActionTriggerVolume*)Obj)->bDisableOnLifeActionReserved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bDisableOnLifeActionReserved = { "bDisableOnLifeActionReserved", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZLifeActionTriggerVolume), &Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bDisableOnLifeActionReserved_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bDisableOnLifeActionReserved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bDisableOnLifeActionReserved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bDisableOnLifeActionExiting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bDisableOnLifeActionExiting_SetBit(void* Obj)
	{
		((ASBZLifeActionTriggerVolume*)Obj)->bDisableOnLifeActionExiting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bDisableOnLifeActionExiting = { "bDisableOnLifeActionExiting", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZLifeActionTriggerVolume), &Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bDisableOnLifeActionExiting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bDisableOnLifeActionExiting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bDisableOnLifeActionExiting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bDisableOnLifeActionComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bDisableOnLifeActionComplete_SetBit(void* Obj)
	{
		((ASBZLifeActionTriggerVolume*)Obj)->bDisableOnLifeActionComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bDisableOnLifeActionComplete = { "bDisableOnLifeActionComplete", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZLifeActionTriggerVolume), &Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bDisableOnLifeActionComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bDisableOnLifeActionComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bDisableOnLifeActionComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_ActorFilterComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionTriggerVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_ActorFilterComponent = { "ActorFilterComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLifeActionTriggerVolume, ActorFilterComponent), Z_Construct_UClass_USBZActorFilterComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_ActorFilterComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_ActorFilterComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bTriggeredByHumanShield_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bTriggeredByHumanShield_SetBit(void* Obj)
	{
		((ASBZLifeActionTriggerVolume*)Obj)->bTriggeredByHumanShield = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bTriggeredByHumanShield = { "bTriggeredByHumanShield", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZLifeActionTriggerVolume), &Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bTriggeredByHumanShield_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bTriggeredByHumanShield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bTriggeredByHumanShield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bAutoTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bAutoTrigger_SetBit(void* Obj)
	{
		((ASBZLifeActionTriggerVolume*)Obj)->bAutoTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bAutoTrigger = { "bAutoTrigger", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZLifeActionTriggerVolume), &Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bAutoTrigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bAutoTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bAutoTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_Action_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionTriggerVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLifeActionTriggerVolume, Action), Z_Construct_UClass_USBZAIAction_Order_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_Action_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotReserved_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotReserved = { "OnCharacterSlotReserved", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLifeActionTriggerVolume, OnCharacterSlotReserved), Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotReserved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotReserved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotEntered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotEntered = { "OnCharacterSlotEntered", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLifeActionTriggerVolume, OnCharacterSlotEntered), Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotEntered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotEntered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotReady_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotReady = { "OnCharacterSlotReady", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLifeActionTriggerVolume, OnCharacterSlotReady), Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotStart = { "OnCharacterSlotStart", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLifeActionTriggerVolume, OnCharacterSlotStart), Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotExiting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotExiting = { "OnCharacterSlotExiting", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLifeActionTriggerVolume, OnCharacterSlotExiting), Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotExiting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotExiting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotExited_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotExited = { "OnCharacterSlotExited", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLifeActionTriggerVolume, OnCharacterSlotExited), Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotExited_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotExited_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotFreed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZLifeActionTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotFreed = { "OnCharacterSlotFreed", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLifeActionTriggerVolume, OnCharacterSlotFreed), Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotFreed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotFreed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_NeededTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bShouldStartEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bDisableOnLifeActionReserved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bDisableOnLifeActionExiting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bDisableOnLifeActionComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_ActorFilterComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bTriggeredByHumanShield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_bAutoTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotReserved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotEntered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotExiting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotExited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::NewProp_OnCharacterSlotFreed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZLifeActionTriggerVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::ClassParams = {
		&ASBZLifeActionTriggerVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZLifeActionTriggerVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZLifeActionTriggerVolume, 3973768018);
	template<> STARBREEZE_API UClass* StaticClass<ASBZLifeActionTriggerVolume>()
	{
		return ASBZLifeActionTriggerVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZLifeActionTriggerVolume(Z_Construct_UClass_ASBZLifeActionTriggerVolume, &ASBZLifeActionTriggerVolume::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZLifeActionTriggerVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZLifeActionTriggerVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

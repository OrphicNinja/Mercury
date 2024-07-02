// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_LifeAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_LifeAction() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_LifeAction_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_LifeAction();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionInstance_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionSlot_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZLifeActionStopReason();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLifeActionRequest();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIOrder_LifeAction::execClearDelegates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearDelegates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIOrder_LifeAction::execOnBlockingSlotFreed)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_GET_OBJECT(USBZLifeActionInstance,Z_Param_ActionInstance);
		P_GET_OBJECT(USBZLifeActionSlot,Z_Param_ActionSlot);
		P_GET_ENUM(ESBZLifeActionStopReason,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBlockingSlotFreed(Z_Param_Character,Z_Param_ActionInstance,Z_Param_ActionSlot,ESBZLifeActionStopReason(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIOrder_LifeAction::execOnCharacterSlotFreed)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_GET_OBJECT(USBZLifeActionInstance,Z_Param_ActionInstance);
		P_GET_OBJECT(USBZLifeActionSlot,Z_Param_ActionSlot);
		P_GET_ENUM(ESBZLifeActionStopReason,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterSlotFreed(Z_Param_Character,Z_Param_ActionInstance,Z_Param_ActionSlot,ESBZLifeActionStopReason(Z_Param_Result));
		P_NATIVE_END;
	}
	void USBZAIOrder_LifeAction::StaticRegisterNativesUSBZAIOrder_LifeAction()
	{
		UClass* Class = USBZAIOrder_LifeAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearDelegates", &USBZAIOrder_LifeAction::execClearDelegates },
			{ "OnBlockingSlotFreed", &USBZAIOrder_LifeAction::execOnBlockingSlotFreed },
			{ "OnCharacterSlotFreed", &USBZAIOrder_LifeAction::execOnCharacterSlotFreed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIOrder_LifeAction_ClearDelegates_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_LifeAction_ClearDelegates_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrder_LifeAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrder_LifeAction_ClearDelegates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrder_LifeAction, nullptr, "ClearDelegates", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_LifeAction_ClearDelegates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_LifeAction_ClearDelegates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrder_LifeAction_ClearDelegates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrder_LifeAction_ClearDelegates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed_Statics
	{
		struct SBZAIOrder_LifeAction_eventOnBlockingSlotFreed_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_LifeAction_eventOnBlockingSlotFreed_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed_Statics::NewProp_ActionInstance_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_LifeAction_eventOnBlockingSlotFreed_Parms, ActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed_Statics::NewProp_ActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed_Statics::NewProp_ActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed_Statics::NewProp_ActionSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed_Statics::NewProp_ActionSlot = { "ActionSlot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_LifeAction_eventOnBlockingSlotFreed_Parms, ActionSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed_Statics::NewProp_ActionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed_Statics::NewProp_ActionSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_LifeAction_eventOnBlockingSlotFreed_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZLifeActionStopReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed_Statics::NewProp_ActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed_Statics::NewProp_ActionSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrder_LifeAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrder_LifeAction, nullptr, "OnBlockingSlotFreed", nullptr, nullptr, sizeof(SBZAIOrder_LifeAction_eventOnBlockingSlotFreed_Parms), Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed_Statics
	{
		struct SBZAIOrder_LifeAction_eventOnCharacterSlotFreed_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_LifeAction_eventOnCharacterSlotFreed_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed_Statics::NewProp_ActionInstance_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_LifeAction_eventOnCharacterSlotFreed_Parms, ActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed_Statics::NewProp_ActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed_Statics::NewProp_ActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed_Statics::NewProp_ActionSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed_Statics::NewProp_ActionSlot = { "ActionSlot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_LifeAction_eventOnCharacterSlotFreed_Parms, ActionSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed_Statics::NewProp_ActionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed_Statics::NewProp_ActionSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_LifeAction_eventOnCharacterSlotFreed_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZLifeActionStopReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed_Statics::NewProp_ActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed_Statics::NewProp_ActionSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrder_LifeAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrder_LifeAction, nullptr, "OnCharacterSlotFreed", nullptr, nullptr, sizeof(SBZAIOrder_LifeAction_eventOnCharacterSlotFreed_Parms), Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIOrder_LifeAction_NoRegister()
	{
		return USBZAIOrder_LifeAction::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_LifeAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompatibleStances_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompatibleStances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedHeistStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AllowedHeistStates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompleteOrderForResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompleteOrderForResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRequestOnlyOnce_MetaData[];
#endif
		static void NewProp_bUseRequestOnlyOnce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRequestOnlyOnce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrantedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldRemovePersistenceAfterLA_MetaData[];
#endif
		static void NewProp_bShouldRemovePersistenceAfterLA_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldRemovePersistenceAfterLA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LAComponentSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LAComponentSelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceSelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotSelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWaitForEquipped_MetaData[];
#endif
		static void NewProp_bWaitForEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWaitForEquipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReservedSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReservedSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeActionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LifeActionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockingSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockingSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIOrder,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIOrder_LifeAction_ClearDelegates, "ClearDelegates" }, // 215161813
		{ &Z_Construct_UFunction_USBZAIOrder_LifeAction_OnBlockingSlotFreed, "OnBlockingSlotFreed" }, // 1915829702
		{ &Z_Construct_UFunction_USBZAIOrder_LifeAction_OnCharacterSlotFreed, "OnCharacterSlotFreed" }, // 2089377325
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_LifeAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_LifeAction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_Request_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_LifeAction" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_LifeAction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_LifeAction, Request), Z_Construct_UScriptStruct_FSBZLifeActionRequest, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_Request_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_CompatibleStances_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_LifeAction" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_LifeAction.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_CompatibleStances = { "CompatibleStances", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_LifeAction, CompatibleStances), METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_CompatibleStances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_CompatibleStances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_AllowedHeistStates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_LifeAction" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_LifeAction.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_AllowedHeistStates = { "AllowedHeistStates", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_LifeAction, AllowedHeistStates), METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_AllowedHeistStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_AllowedHeistStates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_CompleteOrderForResults_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_LifeAction" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_LifeAction.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_CompleteOrderForResults = { "CompleteOrderForResults", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_LifeAction, CompleteOrderForResults), METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_CompleteOrderForResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_CompleteOrderForResults_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_bUseRequestOnlyOnce_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_LifeAction" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_LifeAction.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_bUseRequestOnlyOnce_SetBit(void* Obj)
	{
		((USBZAIOrder_LifeAction*)Obj)->bUseRequestOnlyOnce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_bUseRequestOnlyOnce = { "bUseRequestOnlyOnce", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIOrder_LifeAction), &Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_bUseRequestOnlyOnce_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_bUseRequestOnlyOnce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_bUseRequestOnlyOnce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_GrantedTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_LifeAction" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_LifeAction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_LifeAction, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_GrantedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_GrantedTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_bShouldRemovePersistenceAfterLA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_LifeAction" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_LifeAction.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_bShouldRemovePersistenceAfterLA_SetBit(void* Obj)
	{
		((USBZAIOrder_LifeAction*)Obj)->bShouldRemovePersistenceAfterLA = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_bShouldRemovePersistenceAfterLA = { "bShouldRemovePersistenceAfterLA", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIOrder_LifeAction), &Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_bShouldRemovePersistenceAfterLA_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_bShouldRemovePersistenceAfterLA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_bShouldRemovePersistenceAfterLA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_LAComponentSelector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_LifeAction" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_LifeAction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_LAComponentSelector = { "LAComponentSelector", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_LifeAction, LAComponentSelector), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_LAComponentSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_LAComponentSelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_InstanceSelector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_LifeAction" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_LifeAction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_InstanceSelector = { "InstanceSelector", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_LifeAction, InstanceSelector), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_InstanceSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_InstanceSelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_SlotSelector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_LifeAction" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_LifeAction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_SlotSelector = { "SlotSelector", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_LifeAction, SlotSelector), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_SlotSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_SlotSelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_bWaitForEquipped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_LifeAction" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_LifeAction.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_bWaitForEquipped_SetBit(void* Obj)
	{
		((USBZAIOrder_LifeAction*)Obj)->bWaitForEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_bWaitForEquipped = { "bWaitForEquipped", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIOrder_LifeAction), &Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_bWaitForEquipped_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_bWaitForEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_bWaitForEquipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_ReservedSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_LifeAction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_LifeAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_ReservedSlot = { "ReservedSlot", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_LifeAction, ReservedSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_ReservedSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_ReservedSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_LifeActionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_LifeAction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_LifeAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_LifeActionComponent = { "LifeActionComponent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_LifeAction, LifeActionComponent), Z_Construct_UClass_USBZLifeActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_LifeActionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_LifeActionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_BlockingSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_LifeAction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_LifeAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_BlockingSlot = { "BlockingSlot", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_LifeAction, BlockingSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_BlockingSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_BlockingSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_CompatibleStances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_AllowedHeistStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_CompleteOrderForResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_bUseRequestOnlyOnce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_GrantedTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_bShouldRemovePersistenceAfterLA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_LAComponentSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_InstanceSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_SlotSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_bWaitForEquipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_ReservedSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_LifeActionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::NewProp_BlockingSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_LifeAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::ClassParams = {
		&USBZAIOrder_LifeAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_LifeAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_LifeAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_LifeAction, 107415904);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_LifeAction>()
	{
		return USBZAIOrder_LifeAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_LifeAction(Z_Construct_UClass_USBZAIOrder_LifeAction, &USBZAIOrder_LifeAction::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_LifeAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_LifeAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

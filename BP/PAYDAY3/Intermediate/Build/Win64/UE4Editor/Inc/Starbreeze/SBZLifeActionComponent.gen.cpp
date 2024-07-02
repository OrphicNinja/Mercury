// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLifeActionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLifeActionComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionSlot_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionInstance_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZLifeActionStopReason();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionEventDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_ASkeletalMeshActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZLifeActionComponent::execGetActionForSlot)
	{
		P_GET_OBJECT(USBZLifeActionSlot,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZLifeActionInstance**)Z_Param__Result=P_THIS->GetActionForSlot(Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionComponent::execGetActionWithReservedSlotForCharacter)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZLifeActionInstance**)Z_Param__Result=P_THIS->GetActionWithReservedSlotForCharacter(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionComponent::execGetCharacterInAction)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_LifeActionTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASBZCharacter**)Z_Param__Result=P_THIS->GetCharacterInAction(Z_Param_Out_LifeActionTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionComponent::execGetCharacterInActionSlot)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_LifeActionSlotTag);
		P_GET_OBJECT(USBZLifeActionInstance,Z_Param_LifeActionInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASBZCharacter**)Z_Param__Result=P_THIS->GetCharacterInActionSlot(Z_Param_Out_LifeActionSlotTag,Z_Param_LifeActionInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionComponent::execGetReservedSlotForCharacter)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZLifeActionSlot**)Z_Param__Result=P_THIS->GetReservedSlotForCharacter(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionComponent::execGetSlotTransformForCharacter)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetSlotTransformForCharacter(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionComponent::execIsCharacterPendingAction)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCharacterPendingAction(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionComponent::execIsCharacterPlayingAction)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCharacterPlayingAction(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionComponent::execOnSlotEntered)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_GET_OBJECT(USBZLifeActionInstance,Z_Param_ActionInstance);
		P_GET_OBJECT(USBZLifeActionSlot,Z_Param_ActionSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSlotEntered(Z_Param_Character,Z_Param_ActionInstance,Z_Param_ActionSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionComponent::execOnSlotExited)
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
	DEFINE_FUNCTION(USBZLifeActionComponent::execOnSlotFreed)
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
	DEFINE_FUNCTION(USBZLifeActionComponent::execOnSlotReady)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_GET_OBJECT(USBZLifeActionInstance,Z_Param_ActionInstance);
		P_GET_OBJECT(USBZLifeActionSlot,Z_Param_ActionSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSlotReady(Z_Param_Character,Z_Param_ActionInstance,Z_Param_ActionSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionComponent::execOnSlotReserved)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_GET_OBJECT(USBZLifeActionInstance,Z_Param_ActionInstance);
		P_GET_OBJECT(USBZLifeActionSlot,Z_Param_ActionSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSlotReserved(Z_Param_Character,Z_Param_ActionInstance,Z_Param_ActionSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionComponent::execOnSlotStart)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_GET_OBJECT(USBZLifeActionInstance,Z_Param_ActionInstance);
		P_GET_OBJECT(USBZLifeActionSlot,Z_Param_ActionSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSlotStart(Z_Param_Character,Z_Param_ActionInstance,Z_Param_ActionSlot);
		P_NATIVE_END;
	}
	void USBZLifeActionComponent::StaticRegisterNativesUSBZLifeActionComponent()
	{
		UClass* Class = USBZLifeActionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActionForSlot", &USBZLifeActionComponent::execGetActionForSlot },
			{ "GetActionWithReservedSlotForCharacter", &USBZLifeActionComponent::execGetActionWithReservedSlotForCharacter },
			{ "GetCharacterInAction", &USBZLifeActionComponent::execGetCharacterInAction },
			{ "GetCharacterInActionSlot", &USBZLifeActionComponent::execGetCharacterInActionSlot },
			{ "GetReservedSlotForCharacter", &USBZLifeActionComponent::execGetReservedSlotForCharacter },
			{ "GetSlotTransformForCharacter", &USBZLifeActionComponent::execGetSlotTransformForCharacter },
			{ "IsCharacterPendingAction", &USBZLifeActionComponent::execIsCharacterPendingAction },
			{ "IsCharacterPlayingAction", &USBZLifeActionComponent::execIsCharacterPlayingAction },
			{ "OnSlotEntered", &USBZLifeActionComponent::execOnSlotEntered },
			{ "OnSlotExited", &USBZLifeActionComponent::execOnSlotExited },
			{ "OnSlotFreed", &USBZLifeActionComponent::execOnSlotFreed },
			{ "OnSlotReady", &USBZLifeActionComponent::execOnSlotReady },
			{ "OnSlotReserved", &USBZLifeActionComponent::execOnSlotReserved },
			{ "OnSlotStart", &USBZLifeActionComponent::execOnSlotStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZLifeActionComponent_GetActionForSlot_Statics
	{
		struct SBZLifeActionComponent_eventGetActionForSlot_Parms
		{
			const USBZLifeActionSlot* Slot;
			USBZLifeActionInstance* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slot;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_GetActionForSlot_Statics::NewProp_Slot_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_GetActionForSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventGetActionForSlot_Parms, Slot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_GetActionForSlot_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_GetActionForSlot_Statics::NewProp_Slot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_GetActionForSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_GetActionForSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventGetActionForSlot_Parms, ReturnValue), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_GetActionForSlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_GetActionForSlot_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionComponent_GetActionForSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_GetActionForSlot_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_GetActionForSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_GetActionForSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionComponent_GetActionForSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionComponent, nullptr, "GetActionForSlot", nullptr, nullptr, sizeof(SBZLifeActionComponent_eventGetActionForSlot_Parms), Z_Construct_UFunction_USBZLifeActionComponent_GetActionForSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_GetActionForSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_GetActionForSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_GetActionForSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionComponent_GetActionForSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionComponent_GetActionForSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionComponent_GetActionWithReservedSlotForCharacter_Statics
	{
		struct SBZLifeActionComponent_eventGetActionWithReservedSlotForCharacter_Parms
		{
			const ASBZCharacter* Character;
			USBZLifeActionInstance* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_GetActionWithReservedSlotForCharacter_Statics::NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_GetActionWithReservedSlotForCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventGetActionWithReservedSlotForCharacter_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_GetActionWithReservedSlotForCharacter_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_GetActionWithReservedSlotForCharacter_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_GetActionWithReservedSlotForCharacter_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_GetActionWithReservedSlotForCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventGetActionWithReservedSlotForCharacter_Parms, ReturnValue), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_GetActionWithReservedSlotForCharacter_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_GetActionWithReservedSlotForCharacter_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionComponent_GetActionWithReservedSlotForCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_GetActionWithReservedSlotForCharacter_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_GetActionWithReservedSlotForCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_GetActionWithReservedSlotForCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionComponent_GetActionWithReservedSlotForCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionComponent, nullptr, "GetActionWithReservedSlotForCharacter", nullptr, nullptr, sizeof(SBZLifeActionComponent_eventGetActionWithReservedSlotForCharacter_Parms), Z_Construct_UFunction_USBZLifeActionComponent_GetActionWithReservedSlotForCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_GetActionWithReservedSlotForCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_GetActionWithReservedSlotForCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_GetActionWithReservedSlotForCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionComponent_GetActionWithReservedSlotForCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionComponent_GetActionWithReservedSlotForCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInAction_Statics
	{
		struct SBZLifeActionComponent_eventGetCharacterInAction_Parms
		{
			FGameplayTag LifeActionTag;
			ASBZCharacter* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeActionTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LifeActionTag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInAction_Statics::NewProp_LifeActionTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInAction_Statics::NewProp_LifeActionTag = { "LifeActionTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventGetCharacterInAction_Parms, LifeActionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInAction_Statics::NewProp_LifeActionTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInAction_Statics::NewProp_LifeActionTag_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventGetCharacterInAction_Parms, ReturnValue), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInAction_Statics::NewProp_LifeActionTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionComponent, nullptr, "GetCharacterInAction", nullptr, nullptr, sizeof(SBZLifeActionComponent_eventGetCharacterInAction_Parms), Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInActionSlot_Statics
	{
		struct SBZLifeActionComponent_eventGetCharacterInActionSlot_Parms
		{
			FGameplayTag LifeActionSlotTag;
			const USBZLifeActionInstance* LifeActionInstance;
			ASBZCharacter* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeActionSlotTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LifeActionSlotTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeActionInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LifeActionInstance;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInActionSlot_Statics::NewProp_LifeActionSlotTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInActionSlot_Statics::NewProp_LifeActionSlotTag = { "LifeActionSlotTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventGetCharacterInActionSlot_Parms, LifeActionSlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInActionSlot_Statics::NewProp_LifeActionSlotTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInActionSlot_Statics::NewProp_LifeActionSlotTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInActionSlot_Statics::NewProp_LifeActionInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInActionSlot_Statics::NewProp_LifeActionInstance = { "LifeActionInstance", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventGetCharacterInActionSlot_Parms, LifeActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInActionSlot_Statics::NewProp_LifeActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInActionSlot_Statics::NewProp_LifeActionInstance_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInActionSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventGetCharacterInActionSlot_Parms, ReturnValue), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInActionSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInActionSlot_Statics::NewProp_LifeActionSlotTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInActionSlot_Statics::NewProp_LifeActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInActionSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInActionSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInActionSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionComponent, nullptr, "GetCharacterInActionSlot", nullptr, nullptr, sizeof(SBZLifeActionComponent_eventGetCharacterInActionSlot_Parms), Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInActionSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInActionSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInActionSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInActionSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInActionSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInActionSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionComponent_GetReservedSlotForCharacter_Statics
	{
		struct SBZLifeActionComponent_eventGetReservedSlotForCharacter_Parms
		{
			const ASBZCharacter* Character;
			USBZLifeActionSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_GetReservedSlotForCharacter_Statics::NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_GetReservedSlotForCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventGetReservedSlotForCharacter_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_GetReservedSlotForCharacter_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_GetReservedSlotForCharacter_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_GetReservedSlotForCharacter_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_GetReservedSlotForCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventGetReservedSlotForCharacter_Parms, ReturnValue), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_GetReservedSlotForCharacter_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_GetReservedSlotForCharacter_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionComponent_GetReservedSlotForCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_GetReservedSlotForCharacter_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_GetReservedSlotForCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_GetReservedSlotForCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionComponent_GetReservedSlotForCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionComponent, nullptr, "GetReservedSlotForCharacter", nullptr, nullptr, sizeof(SBZLifeActionComponent_eventGetReservedSlotForCharacter_Parms), Z_Construct_UFunction_USBZLifeActionComponent_GetReservedSlotForCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_GetReservedSlotForCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_GetReservedSlotForCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_GetReservedSlotForCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionComponent_GetReservedSlotForCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionComponent_GetReservedSlotForCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionComponent_GetSlotTransformForCharacter_Statics
	{
		struct SBZLifeActionComponent_eventGetSlotTransformForCharacter_Parms
		{
			const ASBZCharacter* Character;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_GetSlotTransformForCharacter_Statics::NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_GetSlotTransformForCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventGetSlotTransformForCharacter_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_GetSlotTransformForCharacter_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_GetSlotTransformForCharacter_Statics::NewProp_Character_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_GetSlotTransformForCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventGetSlotTransformForCharacter_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionComponent_GetSlotTransformForCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_GetSlotTransformForCharacter_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_GetSlotTransformForCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_GetSlotTransformForCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionComponent_GetSlotTransformForCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionComponent, nullptr, "GetSlotTransformForCharacter", nullptr, nullptr, sizeof(SBZLifeActionComponent_eventGetSlotTransformForCharacter_Parms), Z_Construct_UFunction_USBZLifeActionComponent_GetSlotTransformForCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_GetSlotTransformForCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_GetSlotTransformForCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_GetSlotTransformForCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionComponent_GetSlotTransformForCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionComponent_GetSlotTransformForCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPendingAction_Statics
	{
		struct SBZLifeActionComponent_eventIsCharacterPendingAction_Parms
		{
			const ASBZCharacter* Character;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPendingAction_Statics::NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPendingAction_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventIsCharacterPendingAction_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPendingAction_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPendingAction_Statics::NewProp_Character_MetaData)) };
	void Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPendingAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLifeActionComponent_eventIsCharacterPendingAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPendingAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionComponent_eventIsCharacterPendingAction_Parms), &Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPendingAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPendingAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPendingAction_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPendingAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPendingAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPendingAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionComponent, nullptr, "IsCharacterPendingAction", nullptr, nullptr, sizeof(SBZLifeActionComponent_eventIsCharacterPendingAction_Parms), Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPendingAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPendingAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPendingAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPendingAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPendingAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPendingAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPlayingAction_Statics
	{
		struct SBZLifeActionComponent_eventIsCharacterPlayingAction_Parms
		{
			const ASBZCharacter* Character;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPlayingAction_Statics::NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPlayingAction_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventIsCharacterPlayingAction_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPlayingAction_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPlayingAction_Statics::NewProp_Character_MetaData)) };
	void Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPlayingAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLifeActionComponent_eventIsCharacterPlayingAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPlayingAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionComponent_eventIsCharacterPlayingAction_Parms), &Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPlayingAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPlayingAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPlayingAction_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPlayingAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPlayingAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPlayingAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionComponent, nullptr, "IsCharacterPlayingAction", nullptr, nullptr, sizeof(SBZLifeActionComponent_eventIsCharacterPlayingAction_Parms), Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPlayingAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPlayingAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPlayingAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPlayingAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPlayingAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPlayingAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionComponent_OnSlotEntered_Statics
	{
		struct SBZLifeActionComponent_eventOnSlotEntered_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotEntered_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventOnSlotEntered_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_OnSlotEntered_Statics::NewProp_ActionInstance_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotEntered_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventOnSlotEntered_Parms, ActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotEntered_Statics::NewProp_ActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotEntered_Statics::NewProp_ActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_OnSlotEntered_Statics::NewProp_ActionSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotEntered_Statics::NewProp_ActionSlot = { "ActionSlot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventOnSlotEntered_Parms, ActionSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotEntered_Statics::NewProp_ActionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotEntered_Statics::NewProp_ActionSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionComponent_OnSlotEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_OnSlotEntered_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_OnSlotEntered_Statics::NewProp_ActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_OnSlotEntered_Statics::NewProp_ActionSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_OnSlotEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionComponent, nullptr, "OnSlotEntered", nullptr, nullptr, sizeof(SBZLifeActionComponent_eventOnSlotEntered_Parms), Z_Construct_UFunction_USBZLifeActionComponent_OnSlotEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionComponent_OnSlotEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionComponent_OnSlotEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited_Statics
	{
		struct SBZLifeActionComponent_eventOnSlotExited_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventOnSlotExited_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited_Statics::NewProp_ActionInstance_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventOnSlotExited_Parms, ActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited_Statics::NewProp_ActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited_Statics::NewProp_ActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited_Statics::NewProp_ActionSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited_Statics::NewProp_ActionSlot = { "ActionSlot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventOnSlotExited_Parms, ActionSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited_Statics::NewProp_ActionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited_Statics::NewProp_ActionSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventOnSlotExited_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZLifeActionStopReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited_Statics::NewProp_ActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited_Statics::NewProp_ActionSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionComponent, nullptr, "OnSlotExited", nullptr, nullptr, sizeof(SBZLifeActionComponent_eventOnSlotExited_Parms), Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed_Statics
	{
		struct SBZLifeActionComponent_eventOnSlotFreed_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventOnSlotFreed_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed_Statics::NewProp_ActionInstance_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventOnSlotFreed_Parms, ActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed_Statics::NewProp_ActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed_Statics::NewProp_ActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed_Statics::NewProp_ActionSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed_Statics::NewProp_ActionSlot = { "ActionSlot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventOnSlotFreed_Parms, ActionSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed_Statics::NewProp_ActionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed_Statics::NewProp_ActionSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventOnSlotFreed_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZLifeActionStopReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed_Statics::NewProp_ActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed_Statics::NewProp_ActionSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionComponent, nullptr, "OnSlotFreed", nullptr, nullptr, sizeof(SBZLifeActionComponent_eventOnSlotFreed_Parms), Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReady_Statics
	{
		struct SBZLifeActionComponent_eventOnSlotReady_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReady_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventOnSlotReady_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReady_Statics::NewProp_ActionInstance_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReady_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventOnSlotReady_Parms, ActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReady_Statics::NewProp_ActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReady_Statics::NewProp_ActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReady_Statics::NewProp_ActionSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReady_Statics::NewProp_ActionSlot = { "ActionSlot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventOnSlotReady_Parms, ActionSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReady_Statics::NewProp_ActionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReady_Statics::NewProp_ActionSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReady_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReady_Statics::NewProp_ActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReady_Statics::NewProp_ActionSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionComponent, nullptr, "OnSlotReady", nullptr, nullptr, sizeof(SBZLifeActionComponent_eventOnSlotReady_Parms), Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReserved_Statics
	{
		struct SBZLifeActionComponent_eventOnSlotReserved_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReserved_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventOnSlotReserved_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReserved_Statics::NewProp_ActionInstance_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReserved_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventOnSlotReserved_Parms, ActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReserved_Statics::NewProp_ActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReserved_Statics::NewProp_ActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReserved_Statics::NewProp_ActionSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReserved_Statics::NewProp_ActionSlot = { "ActionSlot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventOnSlotReserved_Parms, ActionSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReserved_Statics::NewProp_ActionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReserved_Statics::NewProp_ActionSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReserved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReserved_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReserved_Statics::NewProp_ActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReserved_Statics::NewProp_ActionSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReserved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReserved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionComponent, nullptr, "OnSlotReserved", nullptr, nullptr, sizeof(SBZLifeActionComponent_eventOnSlotReserved_Parms), Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReserved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReserved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReserved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReserved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReserved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReserved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionComponent_OnSlotStart_Statics
	{
		struct SBZLifeActionComponent_eventOnSlotStart_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotStart_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventOnSlotStart_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_OnSlotStart_Statics::NewProp_ActionInstance_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotStart_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventOnSlotStart_Parms, ActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotStart_Statics::NewProp_ActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotStart_Statics::NewProp_ActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_OnSlotStart_Statics::NewProp_ActionSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotStart_Statics::NewProp_ActionSlot = { "ActionSlot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionComponent_eventOnSlotStart_Parms, ActionSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotStart_Statics::NewProp_ActionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotStart_Statics::NewProp_ActionSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionComponent_OnSlotStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_OnSlotStart_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_OnSlotStart_Statics::NewProp_ActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionComponent_OnSlotStart_Statics::NewProp_ActionSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionComponent_OnSlotStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionComponent_OnSlotStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionComponent, nullptr, "OnSlotStart", nullptr, nullptr, sizeof(SBZLifeActionComponent_eventOnSlotStart_Parms), Z_Construct_UFunction_USBZLifeActionComponent_OnSlotStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionComponent_OnSlotStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionComponent_OnSlotStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionComponent_OnSlotStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZLifeActionComponent_NoRegister()
	{
		return USBZLifeActionComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZLifeActionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCharacterSlotExited_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterSlotExited;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCharacterSlotFreed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterSlotFreed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionInstances_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionInstances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewSkeletals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreviewSkeletals;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLifeActionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZLifeActionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZLifeActionComponent_GetActionForSlot, "GetActionForSlot" }, // 1246735152
		{ &Z_Construct_UFunction_USBZLifeActionComponent_GetActionWithReservedSlotForCharacter, "GetActionWithReservedSlotForCharacter" }, // 443739206
		{ &Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInAction, "GetCharacterInAction" }, // 1657624274
		{ &Z_Construct_UFunction_USBZLifeActionComponent_GetCharacterInActionSlot, "GetCharacterInActionSlot" }, // 1104197508
		{ &Z_Construct_UFunction_USBZLifeActionComponent_GetReservedSlotForCharacter, "GetReservedSlotForCharacter" }, // 3332648629
		{ &Z_Construct_UFunction_USBZLifeActionComponent_GetSlotTransformForCharacter, "GetSlotTransformForCharacter" }, // 2608157031
		{ &Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPendingAction, "IsCharacterPendingAction" }, // 2062801981
		{ &Z_Construct_UFunction_USBZLifeActionComponent_IsCharacterPlayingAction, "IsCharacterPlayingAction" }, // 2813662434
		{ &Z_Construct_UFunction_USBZLifeActionComponent_OnSlotEntered, "OnSlotEntered" }, // 565645170
		{ &Z_Construct_UFunction_USBZLifeActionComponent_OnSlotExited, "OnSlotExited" }, // 2716624931
		{ &Z_Construct_UFunction_USBZLifeActionComponent_OnSlotFreed, "OnSlotFreed" }, // 2480528214
		{ &Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReady, "OnSlotReady" }, // 2498379647
		{ &Z_Construct_UFunction_USBZLifeActionComponent_OnSlotReserved, "OnSlotReserved" }, // 2264955759
		{ &Z_Construct_UFunction_USBZLifeActionComponent_OnSlotStart, "OnSlotStart" }, // 250969101
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZLifeActionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotReserved_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionComponent" },
		{ "ModuleRelativePath", "Public/SBZLifeActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotReserved = { "OnCharacterSlotReserved", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionComponent, OnCharacterSlotReserved), Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotReserved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotReserved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotEntered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionComponent" },
		{ "ModuleRelativePath", "Public/SBZLifeActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotEntered = { "OnCharacterSlotEntered", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionComponent, OnCharacterSlotEntered), Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotEntered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotEntered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotReady_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionComponent" },
		{ "ModuleRelativePath", "Public/SBZLifeActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotReady = { "OnCharacterSlotReady", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionComponent, OnCharacterSlotReady), Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionComponent" },
		{ "ModuleRelativePath", "Public/SBZLifeActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotStart = { "OnCharacterSlotStart", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionComponent, OnCharacterSlotStart), Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotExited_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionComponent" },
		{ "ModuleRelativePath", "Public/SBZLifeActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotExited = { "OnCharacterSlotExited", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionComponent, OnCharacterSlotExited), Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotExited_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotExited_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotFreed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionComponent" },
		{ "ModuleRelativePath", "Public/SBZLifeActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotFreed = { "OnCharacterSlotFreed", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionComponent, OnCharacterSlotFreed), Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotFreed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotFreed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_ActionInstances_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_ActionInstances_Inner = { "ActionInstances", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_ActionInstances_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_ActionInstances_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_ActionInstances_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_ActionInstances = { "ActionInstances", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionComponent, ActionInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_ActionInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_ActionInstances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_PreviewSkeletals_Inner = { "PreviewSkeletals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASkeletalMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_PreviewSkeletals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionComponent" },
		{ "ModuleRelativePath", "Public/SBZLifeActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_PreviewSkeletals = { "PreviewSkeletals", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionComponent, PreviewSkeletals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_PreviewSkeletals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_PreviewSkeletals_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZLifeActionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotReserved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotEntered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotExited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_OnCharacterSlotFreed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_ActionInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_ActionInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_PreviewSkeletals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionComponent_Statics::NewProp_PreviewSkeletals,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLifeActionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLifeActionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLifeActionComponent_Statics::ClassParams = {
		&USBZLifeActionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZLifeActionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLifeActionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLifeActionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLifeActionComponent, 2015249155);
	template<> STARBREEZE_API UClass* StaticClass<USBZLifeActionComponent>()
	{
		return USBZLifeActionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLifeActionComponent(Z_Construct_UClass_USBZLifeActionComponent, &USBZLifeActionComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLifeActionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLifeActionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLifeActionManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLifeActionManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionSlot_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionInstance_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZLifeActionStopReason();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLifeActionRequest();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZLifeActionManager::execEnterActionForCharacter)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EnterActionForCharacter(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionManager::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZLifeActionManager**)Z_Param__Result=USBZLifeActionManager::Get(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionManager::execGetActionSlotForCharacter)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZLifeActionSlot**)Z_Param__Result=P_THIS->GetActionSlotForCharacter(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionManager::execGetActionSlotTransformForCharacter)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetActionSlotTransformForCharacter(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionManager::execGetCharacterForActionSlot)
	{
		P_GET_OBJECT(USBZLifeActionComponent,Z_Param_LifeActionComponent);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_LifeActionSlotTag);
		P_GET_OBJECT(USBZLifeActionInstance,Z_Param_LifeActionInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASBZCharacter**)Z_Param__Result=P_THIS->GetCharacterForActionSlot(Z_Param_LifeActionComponent,Z_Param_Out_LifeActionSlotTag,Z_Param_LifeActionInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionManager::execGetClosestLifeActionMatchingTagAny)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_LifeActionSlotTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZLifeActionSlot**)Z_Param__Result=P_THIS->GetClosestLifeActionMatchingTagAny(Z_Param_Location,Z_Param_Out_LifeActionSlotTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionManager::execGetLifeActionComponentForCharacter)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZLifeActionComponent**)Z_Param__Result=P_THIS->GetLifeActionComponentForCharacter(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionManager::execIsCharacterPendingAction)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCharacterPendingAction(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionManager::execIsCharacterPlayingAction)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCharacterPlayingAction(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionManager::execOnSlotEntered)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_GET_OBJECT(USBZLifeActionInstance,Z_Param_ActionInstance);
		P_GET_OBJECT(USBZLifeActionSlot,Z_Param_ActionSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSlotEntered(Z_Param_Character,Z_Param_ActionInstance,Z_Param_ActionSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionManager::execOnSlotExited)
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
	DEFINE_FUNCTION(USBZLifeActionManager::execOnSlotFreed)
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
	DEFINE_FUNCTION(USBZLifeActionManager::execOnSlotReserved)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_GET_OBJECT(USBZLifeActionInstance,Z_Param_ActionInstance);
		P_GET_OBJECT(USBZLifeActionSlot,Z_Param_ActionSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSlotReserved(Z_Param_Character,Z_Param_ActionInstance,Z_Param_ActionSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionManager::execReserveAction)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_GET_STRUCT_REF(FSBZLifeActionRequest,Z_Param_Out_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZLifeActionSlot**)Z_Param__Result=P_THIS->ReserveAction(Z_Param_Character,Z_Param_Out_Request);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionManager::execSetSlotReadyForCharacter)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSlotReadyForCharacter(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionManager::execStopActionForCharacter)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_GET_OBJECT(USBZLifeActionSlot,Z_Param_Slot);
		P_GET_ENUM(ESBZLifeActionStopReason,Z_Param_StopReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopActionForCharacter(Z_Param_Character,Z_Param_Slot,ESBZLifeActionStopReason(Z_Param_StopReason));
		P_NATIVE_END;
	}
	void USBZLifeActionManager::StaticRegisterNativesUSBZLifeActionManager()
	{
		UClass* Class = USBZLifeActionManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnterActionForCharacter", &USBZLifeActionManager::execEnterActionForCharacter },
			{ "Get", &USBZLifeActionManager::execGet },
			{ "GetActionSlotForCharacter", &USBZLifeActionManager::execGetActionSlotForCharacter },
			{ "GetActionSlotTransformForCharacter", &USBZLifeActionManager::execGetActionSlotTransformForCharacter },
			{ "GetCharacterForActionSlot", &USBZLifeActionManager::execGetCharacterForActionSlot },
			{ "GetClosestLifeActionMatchingTagAny", &USBZLifeActionManager::execGetClosestLifeActionMatchingTagAny },
			{ "GetLifeActionComponentForCharacter", &USBZLifeActionManager::execGetLifeActionComponentForCharacter },
			{ "IsCharacterPendingAction", &USBZLifeActionManager::execIsCharacterPendingAction },
			{ "IsCharacterPlayingAction", &USBZLifeActionManager::execIsCharacterPlayingAction },
			{ "OnSlotEntered", &USBZLifeActionManager::execOnSlotEntered },
			{ "OnSlotExited", &USBZLifeActionManager::execOnSlotExited },
			{ "OnSlotFreed", &USBZLifeActionManager::execOnSlotFreed },
			{ "OnSlotReserved", &USBZLifeActionManager::execOnSlotReserved },
			{ "ReserveAction", &USBZLifeActionManager::execReserveAction },
			{ "SetSlotReadyForCharacter", &USBZLifeActionManager::execSetSlotReadyForCharacter },
			{ "StopActionForCharacter", &USBZLifeActionManager::execStopActionForCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZLifeActionManager_EnterActionForCharacter_Statics
	{
		struct SBZLifeActionManager_eventEnterActionForCharacter_Parms
		{
			ASBZCharacter* Character;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_EnterActionForCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventEnterActionForCharacter_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZLifeActionManager_EnterActionForCharacter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLifeActionManager_eventEnterActionForCharacter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLifeActionManager_EnterActionForCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionManager_eventEnterActionForCharacter_Parms), &Z_Construct_UFunction_USBZLifeActionManager_EnterActionForCharacter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionManager_EnterActionForCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_EnterActionForCharacter_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_EnterActionForCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_EnterActionForCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionManager_EnterActionForCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionManager, nullptr, "EnterActionForCharacter", nullptr, nullptr, sizeof(SBZLifeActionManager_eventEnterActionForCharacter_Parms), Z_Construct_UFunction_USBZLifeActionManager_EnterActionForCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_EnterActionForCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_EnterActionForCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_EnterActionForCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionManager_EnterActionForCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionManager_EnterActionForCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionManager_Get_Statics
	{
		struct SBZLifeActionManager_eventGet_Parms
		{
			const UObject* WorldContextObject;
			USBZLifeActionManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_Get_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_Get_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_Get_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_Get_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_USBZLifeActionManager_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_Get_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_Get_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_Get_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionManager, nullptr, "Get", nullptr, nullptr, sizeof(SBZLifeActionManager_eventGet_Parms), Z_Construct_UFunction_USBZLifeActionManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotForCharacter_Statics
	{
		struct SBZLifeActionManager_eventGetActionSlotForCharacter_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotForCharacter_Statics::NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotForCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventGetActionSlotForCharacter_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotForCharacter_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotForCharacter_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotForCharacter_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotForCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventGetActionSlotForCharacter_Parms, ReturnValue), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotForCharacter_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotForCharacter_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotForCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotForCharacter_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotForCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotForCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotForCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionManager, nullptr, "GetActionSlotForCharacter", nullptr, nullptr, sizeof(SBZLifeActionManager_eventGetActionSlotForCharacter_Parms), Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotForCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotForCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotForCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotForCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotForCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotForCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotTransformForCharacter_Statics
	{
		struct SBZLifeActionManager_eventGetActionSlotTransformForCharacter_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotTransformForCharacter_Statics::NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotTransformForCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventGetActionSlotTransformForCharacter_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotTransformForCharacter_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotTransformForCharacter_Statics::NewProp_Character_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotTransformForCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventGetActionSlotTransformForCharacter_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotTransformForCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotTransformForCharacter_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotTransformForCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotTransformForCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotTransformForCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionManager, nullptr, "GetActionSlotTransformForCharacter", nullptr, nullptr, sizeof(SBZLifeActionManager_eventGetActionSlotTransformForCharacter_Parms), Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotTransformForCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotTransformForCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotTransformForCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotTransformForCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotTransformForCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotTransformForCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics
	{
		struct SBZLifeActionManager_eventGetCharacterForActionSlot_Parms
		{
			const USBZLifeActionComponent* LifeActionComponent;
			FGameplayTag LifeActionSlotTag;
			const USBZLifeActionInstance* LifeActionInstance;
			ASBZCharacter* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeActionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LifeActionComponent;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics::NewProp_LifeActionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics::NewProp_LifeActionComponent = { "LifeActionComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventGetCharacterForActionSlot_Parms, LifeActionComponent), Z_Construct_UClass_USBZLifeActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics::NewProp_LifeActionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics::NewProp_LifeActionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics::NewProp_LifeActionSlotTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics::NewProp_LifeActionSlotTag = { "LifeActionSlotTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventGetCharacterForActionSlot_Parms, LifeActionSlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics::NewProp_LifeActionSlotTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics::NewProp_LifeActionSlotTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics::NewProp_LifeActionInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics::NewProp_LifeActionInstance = { "LifeActionInstance", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventGetCharacterForActionSlot_Parms, LifeActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics::NewProp_LifeActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics::NewProp_LifeActionInstance_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventGetCharacterForActionSlot_Parms, ReturnValue), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics::NewProp_LifeActionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics::NewProp_LifeActionSlotTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics::NewProp_LifeActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionManager, nullptr, "GetCharacterForActionSlot", nullptr, nullptr, sizeof(SBZLifeActionManager_eventGetCharacterForActionSlot_Parms), Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny_Statics
	{
		struct SBZLifeActionManager_eventGetClosestLifeActionMatchingTagAny_Parms
		{
			FVector Location;
			FGameplayTag LifeActionSlotTag;
			USBZLifeActionSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeActionSlotTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LifeActionSlotTag;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventGetClosestLifeActionMatchingTagAny_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny_Statics::NewProp_LifeActionSlotTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny_Statics::NewProp_LifeActionSlotTag = { "LifeActionSlotTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventGetClosestLifeActionMatchingTagAny_Parms, LifeActionSlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny_Statics::NewProp_LifeActionSlotTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny_Statics::NewProp_LifeActionSlotTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventGetClosestLifeActionMatchingTagAny_Parms, ReturnValue), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny_Statics::NewProp_LifeActionSlotTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionManager, nullptr, "GetClosestLifeActionMatchingTagAny", nullptr, nullptr, sizeof(SBZLifeActionManager_eventGetClosestLifeActionMatchingTagAny_Parms), Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionManager_GetLifeActionComponentForCharacter_Statics
	{
		struct SBZLifeActionManager_eventGetLifeActionComponentForCharacter_Parms
		{
			const ASBZCharacter* Character;
			USBZLifeActionComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_GetLifeActionComponentForCharacter_Statics::NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_GetLifeActionComponentForCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventGetLifeActionComponentForCharacter_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_GetLifeActionComponentForCharacter_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_GetLifeActionComponentForCharacter_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_GetLifeActionComponentForCharacter_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_GetLifeActionComponentForCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventGetLifeActionComponentForCharacter_Parms, ReturnValue), Z_Construct_UClass_USBZLifeActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_GetLifeActionComponentForCharacter_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_GetLifeActionComponentForCharacter_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionManager_GetLifeActionComponentForCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_GetLifeActionComponentForCharacter_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_GetLifeActionComponentForCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_GetLifeActionComponentForCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionManager_GetLifeActionComponentForCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionManager, nullptr, "GetLifeActionComponentForCharacter", nullptr, nullptr, sizeof(SBZLifeActionManager_eventGetLifeActionComponentForCharacter_Parms), Z_Construct_UFunction_USBZLifeActionManager_GetLifeActionComponentForCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_GetLifeActionComponentForCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_GetLifeActionComponentForCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_GetLifeActionComponentForCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionManager_GetLifeActionComponentForCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionManager_GetLifeActionComponentForCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPendingAction_Statics
	{
		struct SBZLifeActionManager_eventIsCharacterPendingAction_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPendingAction_Statics::NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPendingAction_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventIsCharacterPendingAction_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPendingAction_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPendingAction_Statics::NewProp_Character_MetaData)) };
	void Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPendingAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLifeActionManager_eventIsCharacterPendingAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPendingAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionManager_eventIsCharacterPendingAction_Parms), &Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPendingAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPendingAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPendingAction_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPendingAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPendingAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPendingAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionManager, nullptr, "IsCharacterPendingAction", nullptr, nullptr, sizeof(SBZLifeActionManager_eventIsCharacterPendingAction_Parms), Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPendingAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPendingAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPendingAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPendingAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPendingAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPendingAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPlayingAction_Statics
	{
		struct SBZLifeActionManager_eventIsCharacterPlayingAction_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPlayingAction_Statics::NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPlayingAction_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventIsCharacterPlayingAction_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPlayingAction_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPlayingAction_Statics::NewProp_Character_MetaData)) };
	void Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPlayingAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLifeActionManager_eventIsCharacterPlayingAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPlayingAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionManager_eventIsCharacterPlayingAction_Parms), &Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPlayingAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPlayingAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPlayingAction_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPlayingAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPlayingAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPlayingAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionManager, nullptr, "IsCharacterPlayingAction", nullptr, nullptr, sizeof(SBZLifeActionManager_eventIsCharacterPlayingAction_Parms), Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPlayingAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPlayingAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPlayingAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPlayingAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPlayingAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPlayingAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionManager_OnSlotEntered_Statics
	{
		struct SBZLifeActionManager_eventOnSlotEntered_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_OnSlotEntered_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventOnSlotEntered_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_OnSlotEntered_Statics::NewProp_ActionInstance_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_OnSlotEntered_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventOnSlotEntered_Parms, ActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_OnSlotEntered_Statics::NewProp_ActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_OnSlotEntered_Statics::NewProp_ActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_OnSlotEntered_Statics::NewProp_ActionSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_OnSlotEntered_Statics::NewProp_ActionSlot = { "ActionSlot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventOnSlotEntered_Parms, ActionSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_OnSlotEntered_Statics::NewProp_ActionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_OnSlotEntered_Statics::NewProp_ActionSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionManager_OnSlotEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_OnSlotEntered_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_OnSlotEntered_Statics::NewProp_ActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_OnSlotEntered_Statics::NewProp_ActionSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_OnSlotEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionManager_OnSlotEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionManager, nullptr, "OnSlotEntered", nullptr, nullptr, sizeof(SBZLifeActionManager_eventOnSlotEntered_Parms), Z_Construct_UFunction_USBZLifeActionManager_OnSlotEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_OnSlotEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_OnSlotEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_OnSlotEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionManager_OnSlotEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionManager_OnSlotEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited_Statics
	{
		struct SBZLifeActionManager_eventOnSlotExited_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventOnSlotExited_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited_Statics::NewProp_ActionInstance_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventOnSlotExited_Parms, ActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited_Statics::NewProp_ActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited_Statics::NewProp_ActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited_Statics::NewProp_ActionSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited_Statics::NewProp_ActionSlot = { "ActionSlot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventOnSlotExited_Parms, ActionSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited_Statics::NewProp_ActionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited_Statics::NewProp_ActionSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventOnSlotExited_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZLifeActionStopReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited_Statics::NewProp_ActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited_Statics::NewProp_ActionSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionManager, nullptr, "OnSlotExited", nullptr, nullptr, sizeof(SBZLifeActionManager_eventOnSlotExited_Parms), Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed_Statics
	{
		struct SBZLifeActionManager_eventOnSlotFreed_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventOnSlotFreed_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed_Statics::NewProp_ActionInstance_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventOnSlotFreed_Parms, ActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed_Statics::NewProp_ActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed_Statics::NewProp_ActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed_Statics::NewProp_ActionSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed_Statics::NewProp_ActionSlot = { "ActionSlot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventOnSlotFreed_Parms, ActionSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed_Statics::NewProp_ActionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed_Statics::NewProp_ActionSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventOnSlotFreed_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZLifeActionStopReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed_Statics::NewProp_ActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed_Statics::NewProp_ActionSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionManager, nullptr, "OnSlotFreed", nullptr, nullptr, sizeof(SBZLifeActionManager_eventOnSlotFreed_Parms), Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionManager_OnSlotReserved_Statics
	{
		struct SBZLifeActionManager_eventOnSlotReserved_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_OnSlotReserved_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventOnSlotReserved_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_OnSlotReserved_Statics::NewProp_ActionInstance_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_OnSlotReserved_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventOnSlotReserved_Parms, ActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_OnSlotReserved_Statics::NewProp_ActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_OnSlotReserved_Statics::NewProp_ActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_OnSlotReserved_Statics::NewProp_ActionSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_OnSlotReserved_Statics::NewProp_ActionSlot = { "ActionSlot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventOnSlotReserved_Parms, ActionSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_OnSlotReserved_Statics::NewProp_ActionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_OnSlotReserved_Statics::NewProp_ActionSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionManager_OnSlotReserved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_OnSlotReserved_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_OnSlotReserved_Statics::NewProp_ActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_OnSlotReserved_Statics::NewProp_ActionSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_OnSlotReserved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionManager_OnSlotReserved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionManager, nullptr, "OnSlotReserved", nullptr, nullptr, sizeof(SBZLifeActionManager_eventOnSlotReserved_Parms), Z_Construct_UFunction_USBZLifeActionManager_OnSlotReserved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_OnSlotReserved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_OnSlotReserved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_OnSlotReserved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionManager_OnSlotReserved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionManager_OnSlotReserved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionManager_ReserveAction_Statics
	{
		struct SBZLifeActionManager_eventReserveAction_Parms
		{
			ASBZCharacter* Character;
			FSBZLifeActionRequest Request;
			USBZLifeActionSlot* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_ReserveAction_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventReserveAction_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_ReserveAction_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLifeActionManager_ReserveAction_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventReserveAction_Parms, Request), Z_Construct_UScriptStruct_FSBZLifeActionRequest, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_ReserveAction_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_ReserveAction_Statics::NewProp_Request_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_ReserveAction_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_ReserveAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventReserveAction_Parms, ReturnValue), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_ReserveAction_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_ReserveAction_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionManager_ReserveAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_ReserveAction_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_ReserveAction_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_ReserveAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_ReserveAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionManager_ReserveAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionManager, nullptr, "ReserveAction", nullptr, nullptr, sizeof(SBZLifeActionManager_eventReserveAction_Parms), Z_Construct_UFunction_USBZLifeActionManager_ReserveAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_ReserveAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_ReserveAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_ReserveAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionManager_ReserveAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionManager_ReserveAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionManager_SetSlotReadyForCharacter_Statics
	{
		struct SBZLifeActionManager_eventSetSlotReadyForCharacter_Parms
		{
			ASBZCharacter* Character;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_SetSlotReadyForCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventSetSlotReadyForCharacter_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZLifeActionManager_SetSlotReadyForCharacter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLifeActionManager_eventSetSlotReadyForCharacter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLifeActionManager_SetSlotReadyForCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionManager_eventSetSlotReadyForCharacter_Parms), &Z_Construct_UFunction_USBZLifeActionManager_SetSlotReadyForCharacter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionManager_SetSlotReadyForCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_SetSlotReadyForCharacter_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_SetSlotReadyForCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_SetSlotReadyForCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionManager_SetSlotReadyForCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionManager, nullptr, "SetSlotReadyForCharacter", nullptr, nullptr, sizeof(SBZLifeActionManager_eventSetSlotReadyForCharacter_Parms), Z_Construct_UFunction_USBZLifeActionManager_SetSlotReadyForCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_SetSlotReadyForCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_SetSlotReadyForCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_SetSlotReadyForCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionManager_SetSlotReadyForCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionManager_SetSlotReadyForCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionManager_StopActionForCharacter_Statics
	{
		struct SBZLifeActionManager_eventStopActionForCharacter_Parms
		{
			ASBZCharacter* Character;
			USBZLifeActionSlot* Slot;
			ESBZLifeActionStopReason StopReason;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StopReason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StopReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_StopActionForCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventStopActionForCharacter_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_StopActionForCharacter_Statics::NewProp_Slot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionManager_StopActionForCharacter_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventStopActionForCharacter_Parms, Slot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_StopActionForCharacter_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_StopActionForCharacter_Statics::NewProp_Slot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZLifeActionManager_StopActionForCharacter_Statics::NewProp_StopReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZLifeActionManager_StopActionForCharacter_Statics::NewProp_StopReason = { "StopReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionManager_eventStopActionForCharacter_Parms, StopReason), Z_Construct_UEnum_Starbreeze_ESBZLifeActionStopReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionManager_StopActionForCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_StopActionForCharacter_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_StopActionForCharacter_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_StopActionForCharacter_Statics::NewProp_StopReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionManager_StopActionForCharacter_Statics::NewProp_StopReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionManager_StopActionForCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionManager_StopActionForCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionManager, nullptr, "StopActionForCharacter", nullptr, nullptr, sizeof(SBZLifeActionManager_eventStopActionForCharacter_Parms), Z_Construct_UFunction_USBZLifeActionManager_StopActionForCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_StopActionForCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionManager_StopActionForCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionManager_StopActionForCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionManager_StopActionForCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionManager_StopActionForCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZLifeActionManager_NoRegister()
	{
		return USBZLifeActionManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZLifeActionManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeActionComponents_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LifeActionComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeActionComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LifeActionComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeActionCharacters_ValueProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LifeActionCharacters_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LifeActionCharacters_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeActionCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LifeActionCharacters;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LoadingMontages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingMontages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoadingMontages;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLifeActionManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZLifeActionManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZLifeActionManager_EnterActionForCharacter, "EnterActionForCharacter" }, // 284418771
		{ &Z_Construct_UFunction_USBZLifeActionManager_Get, "Get" }, // 3049803481
		{ &Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotForCharacter, "GetActionSlotForCharacter" }, // 2263418922
		{ &Z_Construct_UFunction_USBZLifeActionManager_GetActionSlotTransformForCharacter, "GetActionSlotTransformForCharacter" }, // 3756902259
		{ &Z_Construct_UFunction_USBZLifeActionManager_GetCharacterForActionSlot, "GetCharacterForActionSlot" }, // 1437531571
		{ &Z_Construct_UFunction_USBZLifeActionManager_GetClosestLifeActionMatchingTagAny, "GetClosestLifeActionMatchingTagAny" }, // 1841125934
		{ &Z_Construct_UFunction_USBZLifeActionManager_GetLifeActionComponentForCharacter, "GetLifeActionComponentForCharacter" }, // 2845093906
		{ &Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPendingAction, "IsCharacterPendingAction" }, // 3661332536
		{ &Z_Construct_UFunction_USBZLifeActionManager_IsCharacterPlayingAction, "IsCharacterPlayingAction" }, // 1244038717
		{ &Z_Construct_UFunction_USBZLifeActionManager_OnSlotEntered, "OnSlotEntered" }, // 2456194253
		{ &Z_Construct_UFunction_USBZLifeActionManager_OnSlotExited, "OnSlotExited" }, // 555475921
		{ &Z_Construct_UFunction_USBZLifeActionManager_OnSlotFreed, "OnSlotFreed" }, // 532595923
		{ &Z_Construct_UFunction_USBZLifeActionManager_OnSlotReserved, "OnSlotReserved" }, // 2438657219
		{ &Z_Construct_UFunction_USBZLifeActionManager_ReserveAction, "ReserveAction" }, // 1130631187
		{ &Z_Construct_UFunction_USBZLifeActionManager_SetSlotReadyForCharacter, "SetSlotReadyForCharacter" }, // 713372094
		{ &Z_Construct_UFunction_USBZLifeActionManager_StopActionForCharacter, "StopActionForCharacter" }, // 3374556909
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZLifeActionManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LifeActionComponents_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LifeActionComponents_Inner = { "LifeActionComponents", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZLifeActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LifeActionComponents_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LifeActionComponents_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LifeActionComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LifeActionComponents = { "LifeActionComponents", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionManager, LifeActionComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LifeActionComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LifeActionComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LifeActionCharacters_ValueProp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LifeActionCharacters_ValueProp = { "LifeActionCharacters", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZLifeActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LifeActionCharacters_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LifeActionCharacters_ValueProp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LifeActionCharacters_Key_KeyProp = { "LifeActionCharacters_Key", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LifeActionCharacters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LifeActionCharacters = { "LifeActionCharacters", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionManager, LifeActionCharacters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LifeActionCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LifeActionCharacters_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LoadingMontages_Inner = { "LoadingMontages", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LoadingMontages_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionManager" },
		{ "ModuleRelativePath", "Public/SBZLifeActionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LoadingMontages = { "LoadingMontages", nullptr, (EPropertyFlags)0x0024080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionManager, LoadingMontages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LoadingMontages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LoadingMontages_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZLifeActionManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LifeActionComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LifeActionComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LifeActionCharacters_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LifeActionCharacters_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LifeActionCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LoadingMontages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionManager_Statics::NewProp_LoadingMontages,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLifeActionManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLifeActionManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLifeActionManager_Statics::ClassParams = {
		&USBZLifeActionManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZLifeActionManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionManager_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLifeActionManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLifeActionManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLifeActionManager, 4001916502);
	template<> STARBREEZE_API UClass* StaticClass<USBZLifeActionManager>()
	{
		return USBZLifeActionManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLifeActionManager(Z_Construct_UClass_USBZLifeActionManager, &USBZLifeActionManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLifeActionManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLifeActionManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

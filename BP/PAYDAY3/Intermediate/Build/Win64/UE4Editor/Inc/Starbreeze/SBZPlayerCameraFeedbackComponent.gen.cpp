// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerCameraFeedbackComponent.h"
#include "Starbreeze/Public/SBZPlayerCameraManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerCameraFeedbackComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCameraFeedbackComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCameraManager_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(USBZPlayerCameraFeedbackComponent::execAddFeedback)
	{
		P_GET_STRUCT_REF(FSBZLocalPlayerFeedbackParameters,Z_Param_Out_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddFeedback(Z_Param_Out_Parameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerCameraFeedbackComponent::execCooldownTimerDelegate)
	{
		P_GET_OBJECT(UClass,Z_Param_FeedbackClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CooldownTimerDelegate(Z_Param_FeedbackClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerCameraFeedbackComponent::execFadeOutFeedback)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RemoveID);
		P_GET_UBOOL(Z_Param_bIsAutoRemoved);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FadeOutFeedback(Z_Param_RemoveID,Z_Param_bIsAutoRemoved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerCameraFeedbackComponent::execGetLocalCameraFeedbackComponent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZPlayerCameraFeedbackComponent**)Z_Param__Result=USBZPlayerCameraFeedbackComponent::GetLocalCameraFeedbackComponent(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerCameraFeedbackComponent::execOnExitedActionPhase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitedActionPhase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerCameraFeedbackComponent::execRemoveFeedback)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RemoveID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveFeedback(Z_Param_RemoveID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerCameraFeedbackComponent::execSetFeedbackIntensity)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FeedbackID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InIntensity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetFeedbackIntensity(Z_Param_FeedbackID,Z_Param_InIntensity);
		P_NATIVE_END;
	}
	void USBZPlayerCameraFeedbackComponent::StaticRegisterNativesUSBZPlayerCameraFeedbackComponent()
	{
		UClass* Class = USBZPlayerCameraFeedbackComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFeedback", &USBZPlayerCameraFeedbackComponent::execAddFeedback },
			{ "CooldownTimerDelegate", &USBZPlayerCameraFeedbackComponent::execCooldownTimerDelegate },
			{ "FadeOutFeedback", &USBZPlayerCameraFeedbackComponent::execFadeOutFeedback },
			{ "GetLocalCameraFeedbackComponent", &USBZPlayerCameraFeedbackComponent::execGetLocalCameraFeedbackComponent },
			{ "OnExitedActionPhase", &USBZPlayerCameraFeedbackComponent::execOnExitedActionPhase },
			{ "RemoveFeedback", &USBZPlayerCameraFeedbackComponent::execRemoveFeedback },
			{ "SetFeedbackIntensity", &USBZPlayerCameraFeedbackComponent::execSetFeedbackIntensity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_AddFeedback_Statics
	{
		struct SBZPlayerCameraFeedbackComponent_eventAddFeedback_Parms
		{
			FSBZLocalPlayerFeedbackParameters Parameters;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_AddFeedback_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerCameraFeedbackComponent_eventAddFeedback_Parms, Parameters), Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_AddFeedback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerCameraFeedbackComponent_eventAddFeedback_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_AddFeedback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_AddFeedback_Statics::NewProp_Parameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_AddFeedback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_AddFeedback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerCameraFeedbackComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_AddFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerCameraFeedbackComponent, nullptr, "AddFeedback", nullptr, nullptr, sizeof(SBZPlayerCameraFeedbackComponent_eventAddFeedback_Parms), Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_AddFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_AddFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_AddFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_AddFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_AddFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_AddFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_CooldownTimerDelegate_Statics
	{
		struct SBZPlayerCameraFeedbackComponent_eventCooldownTimerDelegate_Parms
		{
			TSubclassOf<USBZLocalPlayerFeedback>  FeedbackClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FeedbackClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_CooldownTimerDelegate_Statics::NewProp_FeedbackClass = { "FeedbackClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerCameraFeedbackComponent_eventCooldownTimerDelegate_Parms, FeedbackClass), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_CooldownTimerDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_CooldownTimerDelegate_Statics::NewProp_FeedbackClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_CooldownTimerDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerCameraFeedbackComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_CooldownTimerDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerCameraFeedbackComponent, nullptr, "CooldownTimerDelegate", nullptr, nullptr, sizeof(SBZPlayerCameraFeedbackComponent_eventCooldownTimerDelegate_Parms), Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_CooldownTimerDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_CooldownTimerDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_CooldownTimerDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_CooldownTimerDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_CooldownTimerDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_CooldownTimerDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_FadeOutFeedback_Statics
	{
		struct SBZPlayerCameraFeedbackComponent_eventFadeOutFeedback_Parms
		{
			int32 RemoveID;
			bool bIsAutoRemoved;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemoveID;
		static void NewProp_bIsAutoRemoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAutoRemoved;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_FadeOutFeedback_Statics::NewProp_RemoveID = { "RemoveID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerCameraFeedbackComponent_eventFadeOutFeedback_Parms, RemoveID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_FadeOutFeedback_Statics::NewProp_bIsAutoRemoved_SetBit(void* Obj)
	{
		((SBZPlayerCameraFeedbackComponent_eventFadeOutFeedback_Parms*)Obj)->bIsAutoRemoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_FadeOutFeedback_Statics::NewProp_bIsAutoRemoved = { "bIsAutoRemoved", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerCameraFeedbackComponent_eventFadeOutFeedback_Parms), &Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_FadeOutFeedback_Statics::NewProp_bIsAutoRemoved_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_FadeOutFeedback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPlayerCameraFeedbackComponent_eventFadeOutFeedback_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_FadeOutFeedback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerCameraFeedbackComponent_eventFadeOutFeedback_Parms), &Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_FadeOutFeedback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_FadeOutFeedback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_FadeOutFeedback_Statics::NewProp_RemoveID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_FadeOutFeedback_Statics::NewProp_bIsAutoRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_FadeOutFeedback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_FadeOutFeedback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerCameraFeedbackComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_FadeOutFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerCameraFeedbackComponent, nullptr, "FadeOutFeedback", nullptr, nullptr, sizeof(SBZPlayerCameraFeedbackComponent_eventFadeOutFeedback_Parms), Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_FadeOutFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_FadeOutFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_FadeOutFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_FadeOutFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_FadeOutFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_FadeOutFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_GetLocalCameraFeedbackComponent_Statics
	{
		struct SBZPlayerCameraFeedbackComponent_eventGetLocalCameraFeedbackComponent_Parms
		{
			UObject* WorldContextObject;
			USBZPlayerCameraFeedbackComponent* ReturnValue;
		};
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_GetLocalCameraFeedbackComponent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerCameraFeedbackComponent_eventGetLocalCameraFeedbackComponent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_GetLocalCameraFeedbackComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_GetLocalCameraFeedbackComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerCameraFeedbackComponent_eventGetLocalCameraFeedbackComponent_Parms, ReturnValue), Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_GetLocalCameraFeedbackComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_GetLocalCameraFeedbackComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_GetLocalCameraFeedbackComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_GetLocalCameraFeedbackComponent_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_GetLocalCameraFeedbackComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_GetLocalCameraFeedbackComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerCameraFeedbackComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_GetLocalCameraFeedbackComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerCameraFeedbackComponent, nullptr, "GetLocalCameraFeedbackComponent", nullptr, nullptr, sizeof(SBZPlayerCameraFeedbackComponent_eventGetLocalCameraFeedbackComponent_Parms), Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_GetLocalCameraFeedbackComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_GetLocalCameraFeedbackComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_GetLocalCameraFeedbackComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_GetLocalCameraFeedbackComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_GetLocalCameraFeedbackComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_GetLocalCameraFeedbackComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_OnExitedActionPhase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_OnExitedActionPhase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerCameraFeedbackComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_OnExitedActionPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerCameraFeedbackComponent, nullptr, "OnExitedActionPhase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_OnExitedActionPhase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_OnExitedActionPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_OnExitedActionPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_OnExitedActionPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_RemoveFeedback_Statics
	{
		struct SBZPlayerCameraFeedbackComponent_eventRemoveFeedback_Parms
		{
			int32 RemoveID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemoveID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_RemoveFeedback_Statics::NewProp_RemoveID = { "RemoveID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerCameraFeedbackComponent_eventRemoveFeedback_Parms, RemoveID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_RemoveFeedback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPlayerCameraFeedbackComponent_eventRemoveFeedback_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_RemoveFeedback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerCameraFeedbackComponent_eventRemoveFeedback_Parms), &Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_RemoveFeedback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_RemoveFeedback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_RemoveFeedback_Statics::NewProp_RemoveID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_RemoveFeedback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_RemoveFeedback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerCameraFeedbackComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_RemoveFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerCameraFeedbackComponent, nullptr, "RemoveFeedback", nullptr, nullptr, sizeof(SBZPlayerCameraFeedbackComponent_eventRemoveFeedback_Parms), Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_RemoveFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_RemoveFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_RemoveFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_RemoveFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_RemoveFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_RemoveFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_SetFeedbackIntensity_Statics
	{
		struct SBZPlayerCameraFeedbackComponent_eventSetFeedbackIntensity_Parms
		{
			int32 FeedbackID;
			float InIntensity;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FeedbackID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InIntensity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_SetFeedbackIntensity_Statics::NewProp_FeedbackID = { "FeedbackID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerCameraFeedbackComponent_eventSetFeedbackIntensity_Parms, FeedbackID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_SetFeedbackIntensity_Statics::NewProp_InIntensity = { "InIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerCameraFeedbackComponent_eventSetFeedbackIntensity_Parms, InIntensity), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_SetFeedbackIntensity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPlayerCameraFeedbackComponent_eventSetFeedbackIntensity_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_SetFeedbackIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerCameraFeedbackComponent_eventSetFeedbackIntensity_Parms), &Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_SetFeedbackIntensity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_SetFeedbackIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_SetFeedbackIntensity_Statics::NewProp_FeedbackID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_SetFeedbackIntensity_Statics::NewProp_InIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_SetFeedbackIntensity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_SetFeedbackIntensity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerCameraFeedbackComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_SetFeedbackIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerCameraFeedbackComponent, nullptr, "SetFeedbackIntensity", nullptr, nullptr, sizeof(SBZPlayerCameraFeedbackComponent_eventSetFeedbackIntensity_Parms), Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_SetFeedbackIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_SetFeedbackIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_SetFeedbackIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_SetFeedbackIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_SetFeedbackIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_SetFeedbackIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_NoRegister()
	{
		return USBZPlayerCameraFeedbackComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentFeedbacks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFeedbacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentFeedbacks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCameraOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCameraOwner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FeedbackFirstPlayCooldowns_ValueProp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FeedbackFirstPlayCooldowns_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeedbackFirstPlayCooldowns_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FeedbackFirstPlayCooldowns;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_AddFeedback, "AddFeedback" }, // 1362266237
		{ &Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_CooldownTimerDelegate, "CooldownTimerDelegate" }, // 1772112892
		{ &Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_FadeOutFeedback, "FadeOutFeedback" }, // 2936603764
		{ &Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_GetLocalCameraFeedbackComponent, "GetLocalCameraFeedbackComponent" }, // 1462246036
		{ &Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_OnExitedActionPhase, "OnExitedActionPhase" }, // 221982235
		{ &Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_RemoveFeedback, "RemoveFeedback" }, // 3489970771
		{ &Z_Construct_UFunction_USBZPlayerCameraFeedbackComponent_SetFeedbackIntensity, "SetFeedbackIntensity" }, // 1308698670
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZPlayerCameraFeedbackComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraFeedbackComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::NewProp_CurrentFeedbacks_Inner = { "CurrentFeedbacks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::NewProp_CurrentFeedbacks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCameraFeedbackComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraFeedbackComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::NewProp_CurrentFeedbacks = { "CurrentFeedbacks", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerCameraFeedbackComponent, CurrentFeedbacks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::NewProp_CurrentFeedbacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::NewProp_CurrentFeedbacks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::NewProp_PlayerCameraOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCameraFeedbackComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraFeedbackComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::NewProp_PlayerCameraOwner = { "PlayerCameraOwner", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerCameraFeedbackComponent, PlayerCameraOwner), Z_Construct_UClass_ASBZPlayerCameraManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::NewProp_PlayerCameraOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::NewProp_PlayerCameraOwner_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::NewProp_FeedbackFirstPlayCooldowns_ValueProp = { "FeedbackFirstPlayCooldowns", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::NewProp_FeedbackFirstPlayCooldowns_Key_KeyProp = { "FeedbackFirstPlayCooldowns_Key", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::NewProp_FeedbackFirstPlayCooldowns_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCameraFeedbackComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraFeedbackComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::NewProp_FeedbackFirstPlayCooldowns = { "FeedbackFirstPlayCooldowns", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerCameraFeedbackComponent, FeedbackFirstPlayCooldowns), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::NewProp_FeedbackFirstPlayCooldowns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::NewProp_FeedbackFirstPlayCooldowns_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::NewProp_CurrentFeedbacks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::NewProp_CurrentFeedbacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::NewProp_PlayerCameraOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::NewProp_FeedbackFirstPlayCooldowns_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::NewProp_FeedbackFirstPlayCooldowns_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::NewProp_FeedbackFirstPlayCooldowns,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerCameraFeedbackComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::ClassParams = {
		&USBZPlayerCameraFeedbackComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerCameraFeedbackComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerCameraFeedbackComponent, 3218472056);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerCameraFeedbackComponent>()
	{
		return USBZPlayerCameraFeedbackComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerCameraFeedbackComponent(Z_Construct_UClass_USBZPlayerCameraFeedbackComponent, &USBZPlayerCameraFeedbackComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerCameraFeedbackComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerCameraFeedbackComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZShoutTargetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZShoutTargetComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZShoutTargetComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZShoutTargetComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZShoutActionType();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPlayerGestureType();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZShoutedAtDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZShoutTargetComponent::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZShoutTargetComponent::execMakeComponentShoutTargetable)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZShoutTargetComponent::MakeComponentShoutTargetable(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZShoutTargetComponent::execMakeComponentsShoutTargetable)
	{
		P_GET_TARRAY(UPrimitiveComponent*,Z_Param_Components);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZShoutTargetComponent::MakeComponentsShoutTargetable(Z_Param_Components);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZShoutTargetComponent::execSetCustomPingMessage)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_InCustomPingMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomPingMessage(Z_Param_InCustomPingMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZShoutTargetComponent::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	void USBZShoutTargetComponent::StaticRegisterNativesUSBZShoutTargetComponent()
	{
		UClass* Class = USBZShoutTargetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsEnabled", &USBZShoutTargetComponent::execIsEnabled },
			{ "MakeComponentShoutTargetable", &USBZShoutTargetComponent::execMakeComponentShoutTargetable },
			{ "MakeComponentsShoutTargetable", &USBZShoutTargetComponent::execMakeComponentsShoutTargetable },
			{ "SetCustomPingMessage", &USBZShoutTargetComponent::execSetCustomPingMessage },
			{ "SetEnabled", &USBZShoutTargetComponent::execSetEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZShoutTargetComponent_IsEnabled_Statics
	{
		struct SBZShoutTargetComponent_eventIsEnabled_Parms
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
	void Z_Construct_UFunction_USBZShoutTargetComponent_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZShoutTargetComponent_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZShoutTargetComponent_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZShoutTargetComponent_eventIsEnabled_Parms), &Z_Construct_UFunction_USBZShoutTargetComponent_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZShoutTargetComponent_IsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZShoutTargetComponent_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZShoutTargetComponent_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZShoutTargetComponent_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZShoutTargetComponent, nullptr, "IsEnabled", nullptr, nullptr, sizeof(SBZShoutTargetComponent_eventIsEnabled_Parms), Z_Construct_UFunction_USBZShoutTargetComponent_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutTargetComponent_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZShoutTargetComponent_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutTargetComponent_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZShoutTargetComponent_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZShoutTargetComponent_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentShoutTargetable_Statics
	{
		struct SBZShoutTargetComponent_eventMakeComponentShoutTargetable_Parms
		{
			UPrimitiveComponent* Component;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentShoutTargetable_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentShoutTargetable_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZShoutTargetComponent_eventMakeComponentShoutTargetable_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentShoutTargetable_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentShoutTargetable_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentShoutTargetable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentShoutTargetable_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentShoutTargetable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentShoutTargetable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZShoutTargetComponent, nullptr, "MakeComponentShoutTargetable", nullptr, nullptr, sizeof(SBZShoutTargetComponent_eventMakeComponentShoutTargetable_Parms), Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentShoutTargetable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentShoutTargetable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentShoutTargetable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentShoutTargetable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentShoutTargetable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentShoutTargetable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentsShoutTargetable_Statics
	{
		struct SBZShoutTargetComponent_eventMakeComponentsShoutTargetable_Parms
		{
			TArray<UPrimitiveComponent*> Components;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Components_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Components;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentsShoutTargetable_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentsShoutTargetable_Statics::NewProp_Components_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentsShoutTargetable_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZShoutTargetComponent_eventMakeComponentsShoutTargetable_Parms, Components), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentsShoutTargetable_Statics::NewProp_Components_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentsShoutTargetable_Statics::NewProp_Components_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentsShoutTargetable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentsShoutTargetable_Statics::NewProp_Components_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentsShoutTargetable_Statics::NewProp_Components,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentsShoutTargetable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentsShoutTargetable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZShoutTargetComponent, nullptr, "MakeComponentsShoutTargetable", nullptr, nullptr, sizeof(SBZShoutTargetComponent_eventMakeComponentsShoutTargetable_Parms), Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentsShoutTargetable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentsShoutTargetable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentsShoutTargetable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentsShoutTargetable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentsShoutTargetable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentsShoutTargetable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZShoutTargetComponent_SetCustomPingMessage_Statics
	{
		struct SBZShoutTargetComponent_eventSetCustomPingMessage_Parms
		{
			FText InCustomPingMessage;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InCustomPingMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZShoutTargetComponent_SetCustomPingMessage_Statics::NewProp_InCustomPingMessage = { "InCustomPingMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZShoutTargetComponent_eventSetCustomPingMessage_Parms, InCustomPingMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZShoutTargetComponent_SetCustomPingMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZShoutTargetComponent_SetCustomPingMessage_Statics::NewProp_InCustomPingMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZShoutTargetComponent_SetCustomPingMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZShoutTargetComponent_SetCustomPingMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZShoutTargetComponent, nullptr, "SetCustomPingMessage", nullptr, nullptr, sizeof(SBZShoutTargetComponent_eventSetCustomPingMessage_Parms), Z_Construct_UFunction_USBZShoutTargetComponent_SetCustomPingMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutTargetComponent_SetCustomPingMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZShoutTargetComponent_SetCustomPingMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutTargetComponent_SetCustomPingMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZShoutTargetComponent_SetCustomPingMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZShoutTargetComponent_SetCustomPingMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZShoutTargetComponent_SetEnabled_Statics
	{
		struct SBZShoutTargetComponent_eventSetEnabled_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZShoutTargetComponent_SetEnabled_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((SBZShoutTargetComponent_eventSetEnabled_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZShoutTargetComponent_SetEnabled_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZShoutTargetComponent_eventSetEnabled_Parms), &Z_Construct_UFunction_USBZShoutTargetComponent_SetEnabled_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZShoutTargetComponent_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZShoutTargetComponent_SetEnabled_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZShoutTargetComponent_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZShoutTargetComponent_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZShoutTargetComponent, nullptr, "SetEnabled", nullptr, nullptr, sizeof(SBZShoutTargetComponent_eventSetEnabled_Parms), Z_Construct_UFunction_USBZShoutTargetComponent_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutTargetComponent_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZShoutTargetComponent_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutTargetComponent_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZShoutTargetComponent_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZShoutTargetComponent_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZShoutTargetComponent_NoRegister()
	{
		return USBZShoutTargetComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZShoutTargetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BasePriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistModPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistModPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDirectHits_MetaData[];
#endif
		static void NewProp_bUseDirectHits_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDirectHits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequiresVisibility_MetaData[];
#endif
		static void NewProp_bRequiresVisibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequiresVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequiresOwnerAliveIfCharacter_MetaData[];
#endif
		static void NewProp_bRequiresOwnerAliveIfCharacter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequiresOwnerAliveIfCharacter;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TargetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomPingMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CustomPingMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomOutline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomOutline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomVoice_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomVoice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetVoice_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetVoice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomGesture_MetaData[];
#endif
		static void NewProp_bUseCustomGesture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomGesture;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomGesture_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomGesture_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CustomGesture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustomDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseBoundsCenter_MetaData[];
#endif
		static void NewProp_bUseBoundsCenter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseBoundsCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAllActorOutlines_MetaData[];
#endif
		static void NewProp_bUseAllActorOutlines_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAllActorOutlines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositionComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutlineComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutlineComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnShoutedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnShoutedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZShoutTargetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZShoutTargetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZShoutTargetComponent_IsEnabled, "IsEnabled" }, // 3872968984
		{ &Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentShoutTargetable, "MakeComponentShoutTargetable" }, // 3575161345
		{ &Z_Construct_UFunction_USBZShoutTargetComponent_MakeComponentsShoutTargetable, "MakeComponentsShoutTargetable" }, // 874535474
		{ &Z_Construct_UFunction_USBZShoutTargetComponent_SetCustomPingMessage, "SetCustomPingMessage" }, // 3590934693
		{ &Z_Construct_UFunction_USBZShoutTargetComponent_SetEnabled, "SetEnabled" }, // 3666099670
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutTargetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZShoutTargetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_BasePriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutTargetComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_BasePriority = { "BasePriority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutTargetComponent, BasePriority), METADATA_PARAMS(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_BasePriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_BasePriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_DistModPriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutTargetComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_DistModPriority = { "DistModPriority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutTargetComponent, DistModPriority), METADATA_PARAMS(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_DistModPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_DistModPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseDirectHits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutTargetComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseDirectHits_SetBit(void* Obj)
	{
		((USBZShoutTargetComponent*)Obj)->bUseDirectHits = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseDirectHits = { "bUseDirectHits", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZShoutTargetComponent), &Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseDirectHits_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseDirectHits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseDirectHits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bRequiresVisibility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutTargetComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bRequiresVisibility_SetBit(void* Obj)
	{
		((USBZShoutTargetComponent*)Obj)->bRequiresVisibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bRequiresVisibility = { "bRequiresVisibility", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZShoutTargetComponent), &Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bRequiresVisibility_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bRequiresVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bRequiresVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bRequiresOwnerAliveIfCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutTargetComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bRequiresOwnerAliveIfCharacter_SetBit(void* Obj)
	{
		((USBZShoutTargetComponent*)Obj)->bRequiresOwnerAliveIfCharacter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bRequiresOwnerAliveIfCharacter = { "bRequiresOwnerAliveIfCharacter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZShoutTargetComponent), &Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bRequiresOwnerAliveIfCharacter_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bRequiresOwnerAliveIfCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bRequiresOwnerAliveIfCharacter_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_Action_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutTargetComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutTargetComponent, Action), Z_Construct_UEnum_Starbreeze_ESBZShoutActionType, METADATA_PARAMS(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_Action_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_TargetName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutTargetComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_TargetName = { "TargetName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutTargetComponent, TargetName), METADATA_PARAMS(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_TargetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_TargetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomPingMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutTargetComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomPingMessage = { "CustomPingMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutTargetComponent, CustomPingMessage), METADATA_PARAMS(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomPingMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomPingMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomOutline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutTargetComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomOutline = { "CustomOutline", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutTargetComponent, CustomOutline), Z_Construct_UClass_USBZOutlineAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomOutline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomOutline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomVoice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutTargetComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomVoice = { "CustomVoice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutTargetComponent, CustomVoice), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomVoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomVoice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_TargetVoice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutTargetComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_TargetVoice = { "TargetVoice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutTargetComponent, TargetVoice), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_TargetVoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_TargetVoice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseCustomGesture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutTargetComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseCustomGesture_SetBit(void* Obj)
	{
		((USBZShoutTargetComponent*)Obj)->bUseCustomGesture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseCustomGesture = { "bUseCustomGesture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZShoutTargetComponent), &Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseCustomGesture_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseCustomGesture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseCustomGesture_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomGesture_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomGesture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutTargetComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomGesture = { "CustomGesture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutTargetComponent, CustomGesture), Z_Construct_UEnum_Starbreeze_ESBZPlayerGestureType, METADATA_PARAMS(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomGesture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomGesture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutTargetComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomDuration = { "CustomDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutTargetComponent, CustomDuration), METADATA_PARAMS(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseBoundsCenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutTargetComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseBoundsCenter_SetBit(void* Obj)
	{
		((USBZShoutTargetComponent*)Obj)->bUseBoundsCenter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseBoundsCenter = { "bUseBoundsCenter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZShoutTargetComponent), &Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseBoundsCenter_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseBoundsCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseBoundsCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseAllActorOutlines_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutTargetComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseAllActorOutlines_SetBit(void* Obj)
	{
		((USBZShoutTargetComponent*)Obj)->bUseAllActorOutlines = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseAllActorOutlines = { "bUseAllActorOutlines", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZShoutTargetComponent), &Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseAllActorOutlines_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseAllActorOutlines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseAllActorOutlines_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_PositionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutTargetComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_PositionComponent = { "PositionComponent", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutTargetComponent, PositionComponent), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_PositionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_PositionComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_OutlineComponents_Inner = { "OutlineComponents", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_OutlineComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutTargetComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_OutlineComponents = { "OutlineComponents", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutTargetComponent, OutlineComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_OutlineComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_OutlineComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_OnShoutedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutTargetComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_OnShoutedAt = { "OnShoutedAt", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutTargetComponent, OnShoutedAt), Z_Construct_UDelegateFunction_Starbreeze_SBZShoutedAtDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_OnShoutedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_OnShoutedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutTargetComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutTargetComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((USBZShoutTargetComponent*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZShoutTargetComponent), &Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZShoutTargetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_BasePriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_DistModPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseDirectHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bRequiresVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bRequiresOwnerAliveIfCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_Action_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_TargetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomPingMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomOutline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomVoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_TargetVoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseCustomGesture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomGesture_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomGesture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_CustomDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseBoundsCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bUseAllActorOutlines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_PositionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_OutlineComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_OutlineComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_OnShoutedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutTargetComponent_Statics::NewProp_bEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZShoutTargetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZShoutTargetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZShoutTargetComponent_Statics::ClassParams = {
		&USBZShoutTargetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZShoutTargetComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutTargetComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZShoutTargetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutTargetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZShoutTargetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZShoutTargetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZShoutTargetComponent, 860540071);
	template<> STARBREEZE_API UClass* StaticClass<USBZShoutTargetComponent>()
	{
		return USBZShoutTargetComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZShoutTargetComponent(Z_Construct_UClass_USBZShoutTargetComponent, &USBZShoutTargetComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZShoutTargetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZShoutTargetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

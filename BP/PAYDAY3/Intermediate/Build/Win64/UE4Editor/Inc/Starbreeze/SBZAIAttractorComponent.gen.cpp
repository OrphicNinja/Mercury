// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIAttractorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIAttractorComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAttractorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAttractorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAttractorDataAsset_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAIAttractorPriority();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAttractorPredicate_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZActionMetaData();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAttractorInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIAttractorComponent::execOnHeistStateChanged)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_OldState);
		P_GET_ENUM(EPD3HeistState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeistStateChanged(EPD3HeistState(Z_Param_OldState),EPD3HeistState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIAttractorComponent::execRegisterWithPerceptionSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterWithPerceptionSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIAttractorComponent::execSetAttractorInstigator)
	{
		P_GET_OBJECT(APawn,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttractorInstigator(Z_Param_Instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIAttractorComponent::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIAttractorComponent::execUnregisterFromPerceptionSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterFromPerceptionSystem();
		P_NATIVE_END;
	}
	void USBZAIAttractorComponent::StaticRegisterNativesUSBZAIAttractorComponent()
	{
		UClass* Class = USBZAIAttractorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHeistStateChanged", &USBZAIAttractorComponent::execOnHeistStateChanged },
			{ "RegisterWithPerceptionSystem", &USBZAIAttractorComponent::execRegisterWithPerceptionSystem },
			{ "SetAttractorInstigator", &USBZAIAttractorComponent::execSetAttractorInstigator },
			{ "SetEnabled", &USBZAIAttractorComponent::execSetEnabled },
			{ "UnregisterFromPerceptionSystem", &USBZAIAttractorComponent::execUnregisterFromPerceptionSystem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIAttractorComponent_OnHeistStateChanged_Statics
	{
		struct SBZAIAttractorComponent_eventOnHeistStateChanged_Parms
		{
			EPD3HeistState OldState;
			EPD3HeistState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIAttractorComponent_OnHeistStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAIAttractorComponent_OnHeistStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAttractorComponent_eventOnHeistStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIAttractorComponent_OnHeistStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAIAttractorComponent_OnHeistStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAttractorComponent_eventOnHeistStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIAttractorComponent_OnHeistStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAttractorComponent_OnHeistStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAttractorComponent_OnHeistStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAttractorComponent_OnHeistStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAttractorComponent_OnHeistStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIAttractorComponent_OnHeistStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIAttractorComponent_OnHeistStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIAttractorComponent, nullptr, "OnHeistStateChanged", nullptr, nullptr, sizeof(SBZAIAttractorComponent_eventOnHeistStateChanged_Parms), Z_Construct_UFunction_USBZAIAttractorComponent_OnHeistStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAttractorComponent_OnHeistStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIAttractorComponent_OnHeistStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAttractorComponent_OnHeistStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIAttractorComponent_OnHeistStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIAttractorComponent_OnHeistStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIAttractorComponent_RegisterWithPerceptionSystem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIAttractorComponent_RegisterWithPerceptionSystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIAttractorComponent_RegisterWithPerceptionSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIAttractorComponent, nullptr, "RegisterWithPerceptionSystem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIAttractorComponent_RegisterWithPerceptionSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAttractorComponent_RegisterWithPerceptionSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIAttractorComponent_RegisterWithPerceptionSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIAttractorComponent_RegisterWithPerceptionSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIAttractorComponent_SetAttractorInstigator_Statics
	{
		struct SBZAIAttractorComponent_eventSetAttractorInstigator_Parms
		{
			APawn* Instigator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIAttractorComponent_SetAttractorInstigator_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAttractorComponent_eventSetAttractorInstigator_Parms, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIAttractorComponent_SetAttractorInstigator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAttractorComponent_SetAttractorInstigator_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIAttractorComponent_SetAttractorInstigator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIAttractorComponent_SetAttractorInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIAttractorComponent, nullptr, "SetAttractorInstigator", nullptr, nullptr, sizeof(SBZAIAttractorComponent_eventSetAttractorInstigator_Parms), Z_Construct_UFunction_USBZAIAttractorComponent_SetAttractorInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAttractorComponent_SetAttractorInstigator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIAttractorComponent_SetAttractorInstigator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAttractorComponent_SetAttractorInstigator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIAttractorComponent_SetAttractorInstigator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIAttractorComponent_SetAttractorInstigator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIAttractorComponent_SetEnabled_Statics
	{
		struct SBZAIAttractorComponent_eventSetEnabled_Parms
		{
			bool bEnabled;
			bool ReturnValue;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZAIAttractorComponent_SetEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZAIAttractorComponent_eventSetEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAIAttractorComponent_SetEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIAttractorComponent_eventSetEnabled_Parms), &Z_Construct_UFunction_USBZAIAttractorComponent_SetEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZAIAttractorComponent_SetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAIAttractorComponent_eventSetEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAIAttractorComponent_SetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIAttractorComponent_eventSetEnabled_Parms), &Z_Construct_UFunction_USBZAIAttractorComponent_SetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIAttractorComponent_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAttractorComponent_SetEnabled_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAttractorComponent_SetEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIAttractorComponent_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIAttractorComponent_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIAttractorComponent, nullptr, "SetEnabled", nullptr, nullptr, sizeof(SBZAIAttractorComponent_eventSetEnabled_Parms), Z_Construct_UFunction_USBZAIAttractorComponent_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAttractorComponent_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIAttractorComponent_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAttractorComponent_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIAttractorComponent_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIAttractorComponent_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIAttractorComponent_UnregisterFromPerceptionSystem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIAttractorComponent_UnregisterFromPerceptionSystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIAttractorComponent_UnregisterFromPerceptionSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIAttractorComponent, nullptr, "UnregisterFromPerceptionSystem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIAttractorComponent_UnregisterFromPerceptionSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAttractorComponent_UnregisterFromPerceptionSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIAttractorComponent_UnregisterFromPerceptionSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIAttractorComponent_UnregisterFromPerceptionSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIAttractorComponent_NoRegister()
	{
		return USBZAIAttractorComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIAttractorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RegisterAsSourceForSenses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisterAsSourceForSenses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RegisterAsSourceForSenses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSense_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultSense;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxHeistStateToBeEnabled_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHeistStateToBeEnabled_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaxHeistStateToBeEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttractorDataAssetDefault_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttractorDataAssetDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttractorDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttractorDataAsset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMaxConcurrentUsers_MetaData[];
#endif
		static void NewProp_bUseMaxConcurrentUsers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMaxConcurrentUsers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxConcurrentUsers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxConcurrentUsers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxUses_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxUses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnComplete_MetaData[];
#endif
		static void NewProp_bDestroyOnComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReusable_MetaData[];
#endif
		static void NewProp_bIsReusable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReusable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttractorPredicate_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AttractorPredicate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttractorPredicates_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttractorPredicates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttractorPredicates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttractorPredicates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StealthAttractorPredicate_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StealthAttractorPredicate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actions_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionMetaData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionMetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionMetaData;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_ActiveUsers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveUsers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveUsers;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_DormantUsers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DormantUsers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DormantUsers;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_CompletedUsers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedUsers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CompletedUsers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IgnoreActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoreActors;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_DormantActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DormantActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DormantActions;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_ActiveActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveActions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttractorInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttractorInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnabledAfteSearch_MetaData[];
#endif
		static void NewProp_bIsEnabledAfteSearch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabledAfteSearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIAttractorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIAttractorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIAttractorComponent_OnHeistStateChanged, "OnHeistStateChanged" }, // 3471860874
		{ &Z_Construct_UFunction_USBZAIAttractorComponent_RegisterWithPerceptionSystem, "RegisterWithPerceptionSystem" }, // 720108115
		{ &Z_Construct_UFunction_USBZAIAttractorComponent_SetAttractorInstigator, "SetAttractorInstigator" }, // 3733747999
		{ &Z_Construct_UFunction_USBZAIAttractorComponent_SetEnabled, "SetEnabled" }, // 3716493926
		{ &Z_Construct_UFunction_USBZAIAttractorComponent_UnregisterFromPerceptionSystem, "UnregisterFromPerceptionSystem" }, // 3999691503
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZAIAttractorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_RegisterAsSourceForSenses_Inner = { "RegisterAsSourceForSenses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_RegisterAsSourceForSenses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_RegisterAsSourceForSenses = { "RegisterAsSourceForSenses", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAttractorComponent, RegisterAsSourceForSenses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_RegisterAsSourceForSenses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_RegisterAsSourceForSenses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_DefaultSense_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_DefaultSense = { "DefaultSense", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAttractorComponent, DefaultSense), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_DefaultSense_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_DefaultSense_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_MaxHeistStateToBeEnabled_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_MaxHeistStateToBeEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_MaxHeistStateToBeEnabled = { "MaxHeistStateToBeEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAttractorComponent, MaxHeistStateToBeEnabled), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_MaxHeistStateToBeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_MaxHeistStateToBeEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorDataAssetDefault_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorDataAssetDefault = { "AttractorDataAssetDefault", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAttractorComponent, AttractorDataAssetDefault), Z_Construct_UClass_USBZAttractorDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorDataAssetDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorDataAssetDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorDataAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorDataAsset = { "AttractorDataAsset", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAttractorComponent, AttractorDataAsset), Z_Construct_UClass_USBZAttractorDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorDataAsset_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAttractorComponent, Priority), Z_Construct_UEnum_Starbreeze_ESBZAIAttractorPriority, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAttractorComponent, Radius), METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bUseMaxConcurrentUsers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bUseMaxConcurrentUsers_SetBit(void* Obj)
	{
		((USBZAIAttractorComponent*)Obj)->bUseMaxConcurrentUsers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bUseMaxConcurrentUsers = { "bUseMaxConcurrentUsers", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIAttractorComponent), &Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bUseMaxConcurrentUsers_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bUseMaxConcurrentUsers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bUseMaxConcurrentUsers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_MaxConcurrentUsers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_MaxConcurrentUsers = { "MaxConcurrentUsers", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAttractorComponent, MaxConcurrentUsers), METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_MaxConcurrentUsers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_MaxConcurrentUsers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_MaxUses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_MaxUses = { "MaxUses", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAttractorComponent, MaxUses), METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_MaxUses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_MaxUses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bDestroyOnComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bDestroyOnComplete_SetBit(void* Obj)
	{
		((USBZAIAttractorComponent*)Obj)->bDestroyOnComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bDestroyOnComplete = { "bDestroyOnComplete", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIAttractorComponent), &Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bDestroyOnComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bDestroyOnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bDestroyOnComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bIsReusable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bIsReusable_SetBit(void* Obj)
	{
		((USBZAIAttractorComponent*)Obj)->bIsReusable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bIsReusable = { "bIsReusable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIAttractorComponent), &Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bIsReusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bIsReusable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bIsReusable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAttractorComponent, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorPredicate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorPredicate = { "AttractorPredicate", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAttractorComponent, AttractorPredicate), Z_Construct_UClass_USBZAttractorPredicate_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorPredicate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorPredicate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorPredicates_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorPredicates_Inner = { "AttractorPredicates", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAttractorPredicate_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorPredicates_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorPredicates_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorPredicates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorPredicates = { "AttractorPredicates", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAttractorComponent, AttractorPredicates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorPredicates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorPredicates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_StealthAttractorPredicate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_StealthAttractorPredicate = { "StealthAttractorPredicate", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAttractorComponent, StealthAttractorPredicate), Z_Construct_UClass_USBZAttractorPredicate_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_StealthAttractorPredicate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_StealthAttractorPredicate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Actions_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAIAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Actions_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Actions_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Actions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAttractorComponent, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Actions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Actions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_ActionMetaData_Inner = { "ActionMetaData", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZActionMetaData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_ActionMetaData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_ActionMetaData = { "ActionMetaData", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAttractorComponent, ActionMetaData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_ActionMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_ActionMetaData_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_ActiveUsers_Inner = { "ActiveUsers", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_ActiveUsers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_ActiveUsers = { "ActiveUsers", nullptr, (EPropertyFlags)0x0024080000002001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAttractorComponent, ActiveUsers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_ActiveUsers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_ActiveUsers_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_DormantUsers_Inner = { "DormantUsers", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_DormantUsers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_DormantUsers = { "DormantUsers", nullptr, (EPropertyFlags)0x0024080000002001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAttractorComponent, DormantUsers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_DormantUsers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_DormantUsers_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_CompletedUsers_Inner = { "CompletedUsers", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_CompletedUsers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_CompletedUsers = { "CompletedUsers", nullptr, (EPropertyFlags)0x0024080000002001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAttractorComponent, CompletedUsers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_CompletedUsers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_CompletedUsers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_IgnoreActors_Inner = { "IgnoreActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_IgnoreActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_IgnoreActors = { "IgnoreActors", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAttractorComponent, IgnoreActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_IgnoreActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_IgnoreActors_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_DormantActions_Inner = { "DormantActions", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAIAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_DormantActions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_DormantActions = { "DormantActions", nullptr, (EPropertyFlags)0x0024080000002001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAttractorComponent, DormantActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_DormantActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_DormantActions_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_ActiveActions_Inner = { "ActiveActions", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAIAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_ActiveActions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_ActiveActions = { "ActiveActions", nullptr, (EPropertyFlags)0x0024080000002001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAttractorComponent, ActiveActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_ActiveActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_ActiveActions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorInstigator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorInstigator = { "AttractorInstigator", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAttractorComponent, AttractorInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorInstigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorInstigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bIsEnabledAfteSearch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bIsEnabledAfteSearch_SetBit(void* Obj)
	{
		((USBZAIAttractorComponent*)Obj)->bIsEnabledAfteSearch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bIsEnabledAfteSearch = { "bIsEnabledAfteSearch", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIAttractorComponent), &Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bIsEnabledAfteSearch_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bIsEnabledAfteSearch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bIsEnabledAfteSearch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorComponent" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((USBZAIAttractorComponent*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIAttractorComponent), &Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bIsEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIAttractorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_RegisterAsSourceForSenses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_RegisterAsSourceForSenses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_DefaultSense,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_MaxHeistStateToBeEnabled_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_MaxHeistStateToBeEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorDataAssetDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorDataAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Priority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bUseMaxConcurrentUsers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_MaxConcurrentUsers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_MaxUses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bDestroyOnComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bIsReusable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorPredicate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorPredicates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorPredicates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_StealthAttractorPredicate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Actions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_Actions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_ActionMetaData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_ActionMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_ActiveUsers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_ActiveUsers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_DormantUsers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_DormantUsers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_CompletedUsers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_CompletedUsers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_IgnoreActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_IgnoreActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_DormantActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_DormantActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_ActiveActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_ActiveActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_AttractorInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bIsEnabledAfteSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAttractorComponent_Statics::NewProp_bIsEnabled,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZAIAttractorInterface_NoRegister, (int32)VTABLE_OFFSET(USBZAIAttractorComponent, ISBZAIAttractorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIAttractorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIAttractorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIAttractorComponent_Statics::ClassParams = {
		&USBZAIAttractorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIAttractorComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIAttractorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIAttractorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIAttractorComponent, 1825339867);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIAttractorComponent>()
	{
		return USBZAIAttractorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIAttractorComponent(Z_Construct_UClass_USBZAIAttractorComponent, &USBZAIAttractorComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIAttractorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIAttractorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

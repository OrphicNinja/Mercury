// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIVisualDetectionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIVisualDetectionComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIVisualDetectionComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIVisualDetectionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVisualDetectionValues();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIVisualDetectionComponent::execHandleOnNewPawn)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnNewPawn(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIVisualDetectionComponent::execOnGameStateChanged)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_OldState);
		P_GET_ENUM(EPD3HeistState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameStateChanged(EPD3HeistState(Z_Param_OldState),EPD3HeistState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIVisualDetectionComponent::execOnHostageStateChanged)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_HostageState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHostageStateChanged(Z_Param_HostageState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIVisualDetectionComponent::execOnLifetimeChanged)
	{
		P_GET_OBJECT(APawn,Z_Param_TargetPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLifetimeChanged(Z_Param_TargetPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIVisualDetectionComponent::execOnPerceptionUpdated)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIVisualDetectionComponent::execOnTargetIllegalAction)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetIllegalAction(Z_Param_Target);
		P_NATIVE_END;
	}
	void USBZAIVisualDetectionComponent::StaticRegisterNativesUSBZAIVisualDetectionComponent()
	{
		UClass* Class = USBZAIVisualDetectionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleOnNewPawn", &USBZAIVisualDetectionComponent::execHandleOnNewPawn },
			{ "OnGameStateChanged", &USBZAIVisualDetectionComponent::execOnGameStateChanged },
			{ "OnHostageStateChanged", &USBZAIVisualDetectionComponent::execOnHostageStateChanged },
			{ "OnLifetimeChanged", &USBZAIVisualDetectionComponent::execOnLifetimeChanged },
			{ "OnPerceptionUpdated", &USBZAIVisualDetectionComponent::execOnPerceptionUpdated },
			{ "OnTargetIllegalAction", &USBZAIVisualDetectionComponent::execOnTargetIllegalAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIVisualDetectionComponent_HandleOnNewPawn_Statics
	{
		struct SBZAIVisualDetectionComponent_eventHandleOnNewPawn_Parms
		{
			APawn* Pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIVisualDetectionComponent_HandleOnNewPawn_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisualDetectionComponent_eventHandleOnNewPawn_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIVisualDetectionComponent_HandleOnNewPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIVisualDetectionComponent_HandleOnNewPawn_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIVisualDetectionComponent_HandleOnNewPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisualDetectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIVisualDetectionComponent_HandleOnNewPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIVisualDetectionComponent, nullptr, "HandleOnNewPawn", nullptr, nullptr, sizeof(SBZAIVisualDetectionComponent_eventHandleOnNewPawn_Parms), Z_Construct_UFunction_USBZAIVisualDetectionComponent_HandleOnNewPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIVisualDetectionComponent_HandleOnNewPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIVisualDetectionComponent_HandleOnNewPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIVisualDetectionComponent_HandleOnNewPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIVisualDetectionComponent_HandleOnNewPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIVisualDetectionComponent_HandleOnNewPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnGameStateChanged_Statics
	{
		struct SBZAIVisualDetectionComponent_eventOnGameStateChanged_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnGameStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnGameStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisualDetectionComponent_eventOnGameStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnGameStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnGameStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisualDetectionComponent_eventOnGameStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnGameStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnGameStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnGameStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnGameStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnGameStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnGameStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisualDetectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnGameStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIVisualDetectionComponent, nullptr, "OnGameStateChanged", nullptr, nullptr, sizeof(SBZAIVisualDetectionComponent_eventOnGameStateChanged_Parms), Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnGameStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnGameStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnGameStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnGameStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnGameStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnGameStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnHostageStateChanged_Statics
	{
		struct SBZAIVisualDetectionComponent_eventOnHostageStateChanged_Parms
		{
			uint8 HostageState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HostageState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnHostageStateChanged_Statics::NewProp_HostageState = { "HostageState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisualDetectionComponent_eventOnHostageStateChanged_Parms, HostageState), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnHostageStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnHostageStateChanged_Statics::NewProp_HostageState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnHostageStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisualDetectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnHostageStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIVisualDetectionComponent, nullptr, "OnHostageStateChanged", nullptr, nullptr, sizeof(SBZAIVisualDetectionComponent_eventOnHostageStateChanged_Parms), Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnHostageStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnHostageStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnHostageStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnHostageStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnHostageStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnHostageStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnLifetimeChanged_Statics
	{
		struct SBZAIVisualDetectionComponent_eventOnLifetimeChanged_Parms
		{
			APawn* TargetPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnLifetimeChanged_Statics::NewProp_TargetPawn = { "TargetPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisualDetectionComponent_eventOnLifetimeChanged_Parms, TargetPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnLifetimeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnLifetimeChanged_Statics::NewProp_TargetPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnLifetimeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisualDetectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnLifetimeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIVisualDetectionComponent, nullptr, "OnLifetimeChanged", nullptr, nullptr, sizeof(SBZAIVisualDetectionComponent_eventOnLifetimeChanged_Parms), Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnLifetimeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnLifetimeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnLifetimeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnLifetimeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnLifetimeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnLifetimeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnPerceptionUpdated_Statics
	{
		struct SBZAIVisualDetectionComponent_eventOnPerceptionUpdated_Parms
		{
			AActor* Actor;
			FAIStimulus Stimulus;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisualDetectionComponent_eventOnPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisualDetectionComponent_eventOnPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnPerceptionUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnPerceptionUpdated_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnPerceptionUpdated_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnPerceptionUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisualDetectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIVisualDetectionComponent, nullptr, "OnPerceptionUpdated", nullptr, nullptr, sizeof(SBZAIVisualDetectionComponent_eventOnPerceptionUpdated_Parms), Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnPerceptionUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnPerceptionUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnPerceptionUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnPerceptionUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnPerceptionUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnTargetIllegalAction_Statics
	{
		struct SBZAIVisualDetectionComponent_eventOnTargetIllegalAction_Parms
		{
			AActor* Target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnTargetIllegalAction_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisualDetectionComponent_eventOnTargetIllegalAction_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnTargetIllegalAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnTargetIllegalAction_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnTargetIllegalAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisualDetectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnTargetIllegalAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIVisualDetectionComponent, nullptr, "OnTargetIllegalAction", nullptr, nullptr, sizeof(SBZAIVisualDetectionComponent_eventOnTargetIllegalAction_Parms), Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnTargetIllegalAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnTargetIllegalAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnTargetIllegalAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnTargetIllegalAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnTargetIllegalAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnTargetIllegalAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIVisualDetectionComponent_NoRegister()
	{
		return USBZAIVisualDetectionComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisionDegradeSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VisionDegradeSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisionDegradeDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VisionDegradeDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightDetectionCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SightDetectionCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePeripheralMultiplierCurve_MetaData[];
#endif
		static void NewProp_bUsePeripheralMultiplierCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePeripheralMultiplierCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeripheralVisionDetectionMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PeripheralVisionDetectionMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMovementAdditiveCurve_MetaData[];
#endif
		static void NewProp_bUseMovementAdditiveCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMovementAdditiveCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementAdditiveSightCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementAdditiveSightCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMarkAsCriminalOnSearch_MetaData[];
#endif
		static void NewProp_bMarkAsCriminalOnSearch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMarkAsCriminalOnSearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldDisplayDetectionBuildup_MetaData[];
#endif
		static void NewProp_bShouldDisplayDetectionBuildup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldDisplayDetectionBuildup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IllegalActionGracePeriod_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IllegalActionGracePeriod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLagCompensation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxLagCompensation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreDisplayTagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IgnoreDisplayTagContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyDetectMovement_MetaData[];
#endif
		static void NewProp_bOnlyDetectMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyDetectMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldPauseDetectionOnCriminal_MetaData[];
#endif
		static void NewProp_bShouldPauseDetectionOnCriminal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldPauseDetectionOnCriminal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnemyDetectionValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyDetectionValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnemyDetectionValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIVisualDetectionComponent_HandleOnNewPawn, "HandleOnNewPawn" }, // 954976163
		{ &Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnGameStateChanged, "OnGameStateChanged" }, // 1839793531
		{ &Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnHostageStateChanged, "OnHostageStateChanged" }, // 1434998621
		{ &Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnLifetimeChanged, "OnLifetimeChanged" }, // 1984049897
		{ &Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnPerceptionUpdated, "OnPerceptionUpdated" }, // 4136195293
		{ &Z_Construct_UFunction_USBZAIVisualDetectionComponent_OnTargetIllegalAction, "OnTargetIllegalAction" }, // 1785804031
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZAIVisualDetectionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIVisualDetectionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_VisionDegradeSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisualDetectionComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisualDetectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_VisionDegradeSpeed = { "VisionDegradeSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIVisualDetectionComponent, VisionDegradeSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_VisionDegradeSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_VisionDegradeSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_VisionDegradeDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisualDetectionComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisualDetectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_VisionDegradeDelay = { "VisionDegradeDelay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIVisualDetectionComponent, VisionDegradeDelay), METADATA_PARAMS(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_VisionDegradeDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_VisionDegradeDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_SightDetectionCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisualDetectionComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisualDetectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_SightDetectionCurve = { "SightDetectionCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIVisualDetectionComponent, SightDetectionCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_SightDetectionCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_SightDetectionCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bUsePeripheralMultiplierCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisualDetectionComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisualDetectionComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bUsePeripheralMultiplierCurve_SetBit(void* Obj)
	{
		((USBZAIVisualDetectionComponent*)Obj)->bUsePeripheralMultiplierCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bUsePeripheralMultiplierCurve = { "bUsePeripheralMultiplierCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIVisualDetectionComponent), &Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bUsePeripheralMultiplierCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bUsePeripheralMultiplierCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bUsePeripheralMultiplierCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_PeripheralVisionDetectionMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisualDetectionComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisualDetectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_PeripheralVisionDetectionMultiplier = { "PeripheralVisionDetectionMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIVisualDetectionComponent, PeripheralVisionDetectionMultiplier), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_PeripheralVisionDetectionMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_PeripheralVisionDetectionMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bUseMovementAdditiveCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisualDetectionComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisualDetectionComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bUseMovementAdditiveCurve_SetBit(void* Obj)
	{
		((USBZAIVisualDetectionComponent*)Obj)->bUseMovementAdditiveCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bUseMovementAdditiveCurve = { "bUseMovementAdditiveCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIVisualDetectionComponent), &Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bUseMovementAdditiveCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bUseMovementAdditiveCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bUseMovementAdditiveCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_MovementAdditiveSightCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisualDetectionComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisualDetectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_MovementAdditiveSightCurve = { "MovementAdditiveSightCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIVisualDetectionComponent, MovementAdditiveSightCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_MovementAdditiveSightCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_MovementAdditiveSightCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bMarkAsCriminalOnSearch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisualDetectionComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisualDetectionComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bMarkAsCriminalOnSearch_SetBit(void* Obj)
	{
		((USBZAIVisualDetectionComponent*)Obj)->bMarkAsCriminalOnSearch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bMarkAsCriminalOnSearch = { "bMarkAsCriminalOnSearch", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIVisualDetectionComponent), &Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bMarkAsCriminalOnSearch_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bMarkAsCriminalOnSearch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bMarkAsCriminalOnSearch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bShouldDisplayDetectionBuildup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisualDetectionComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisualDetectionComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bShouldDisplayDetectionBuildup_SetBit(void* Obj)
	{
		((USBZAIVisualDetectionComponent*)Obj)->bShouldDisplayDetectionBuildup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bShouldDisplayDetectionBuildup = { "bShouldDisplayDetectionBuildup", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIVisualDetectionComponent), &Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bShouldDisplayDetectionBuildup_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bShouldDisplayDetectionBuildup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bShouldDisplayDetectionBuildup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_IllegalActionGracePeriod_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisualDetectionComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisualDetectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_IllegalActionGracePeriod = { "IllegalActionGracePeriod", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIVisualDetectionComponent, IllegalActionGracePeriod), METADATA_PARAMS(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_IllegalActionGracePeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_IllegalActionGracePeriod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_MaxLagCompensation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisualDetectionComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisualDetectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_MaxLagCompensation = { "MaxLagCompensation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIVisualDetectionComponent, MaxLagCompensation), METADATA_PARAMS(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_MaxLagCompensation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_MaxLagCompensation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_IgnoreDisplayTagContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisualDetectionComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisualDetectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_IgnoreDisplayTagContainer = { "IgnoreDisplayTagContainer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIVisualDetectionComponent, IgnoreDisplayTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_IgnoreDisplayTagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_IgnoreDisplayTagContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bOnlyDetectMovement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisualDetectionComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisualDetectionComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bOnlyDetectMovement_SetBit(void* Obj)
	{
		((USBZAIVisualDetectionComponent*)Obj)->bOnlyDetectMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bOnlyDetectMovement = { "bOnlyDetectMovement", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIVisualDetectionComponent), &Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bOnlyDetectMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bOnlyDetectMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bOnlyDetectMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bShouldPauseDetectionOnCriminal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisualDetectionComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisualDetectionComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bShouldPauseDetectionOnCriminal_SetBit(void* Obj)
	{
		((USBZAIVisualDetectionComponent*)Obj)->bShouldPauseDetectionOnCriminal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bShouldPauseDetectionOnCriminal = { "bShouldPauseDetectionOnCriminal", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIVisualDetectionComponent), &Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bShouldPauseDetectionOnCriminal_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bShouldPauseDetectionOnCriminal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bShouldPauseDetectionOnCriminal_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_EnemyDetectionValue_Inner = { "EnemyDetectionValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZVisualDetectionValues, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_EnemyDetectionValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisualDetectionComponent" },
		{ "ModuleRelativePath", "Public/SBZAIVisualDetectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_EnemyDetectionValue = { "EnemyDetectionValue", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIVisualDetectionComponent, EnemyDetectionValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_EnemyDetectionValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_EnemyDetectionValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_VisionDegradeSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_VisionDegradeDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_SightDetectionCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bUsePeripheralMultiplierCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_PeripheralVisionDetectionMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bUseMovementAdditiveCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_MovementAdditiveSightCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bMarkAsCriminalOnSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bShouldDisplayDetectionBuildup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_IllegalActionGracePeriod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_MaxLagCompensation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_IgnoreDisplayTagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bOnlyDetectMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_bShouldPauseDetectionOnCriminal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_EnemyDetectionValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::NewProp_EnemyDetectionValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIVisualDetectionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::ClassParams = {
		&USBZAIVisualDetectionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIVisualDetectionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIVisualDetectionComponent, 297875439);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIVisualDetectionComponent>()
	{
		return USBZAIVisualDetectionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIVisualDetectionComponent(Z_Construct_UClass_USBZAIVisualDetectionComponent, &USBZAIVisualDetectionComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIVisualDetectionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIVisualDetectionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

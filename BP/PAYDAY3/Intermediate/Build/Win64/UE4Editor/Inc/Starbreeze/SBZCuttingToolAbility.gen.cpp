// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCuttingToolAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCuttingToolAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCuttingToolAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCuttingToolAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDisplayCaseState();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGate_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZGateState();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDisplayCase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZInteractableGate_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCuttableComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZCuttingToolAbility::execOnCuttableActorEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_OldAttachParentActor);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCuttableActorEndPlay(Z_Param_OldAttachParentActor,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCuttingToolAbility::execOnDisplayCaseStateChanged)
	{
		P_GET_ENUM(ESBZDisplayCaseState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDisplayCaseStateChanged(ESBZDisplayCaseState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCuttingToolAbility::execOnGateStateChanged)
	{
		P_GET_OBJECT(ASBZGate,Z_Param_Gate);
		P_GET_ENUM(ESBZGateState,Z_Param_OldState);
		P_GET_ENUM(ESBZGateState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGateStateChanged(Z_Param_Gate,ESBZGateState(Z_Param_OldState),ESBZGateState(Z_Param_NewState));
		P_NATIVE_END;
	}
	void USBZCuttingToolAbility::StaticRegisterNativesUSBZCuttingToolAbility()
	{
		UClass* Class = USBZCuttingToolAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCuttableActorEndPlay", &USBZCuttingToolAbility::execOnCuttableActorEndPlay },
			{ "OnDisplayCaseStateChanged", &USBZCuttingToolAbility::execOnDisplayCaseStateChanged },
			{ "OnGateStateChanged", &USBZCuttingToolAbility::execOnGateStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCuttingToolAbility_OnCuttableActorEndPlay_Statics
	{
		struct SBZCuttingToolAbility_eventOnCuttableActorEndPlay_Parms
		{
			AActor* OldAttachParentActor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldAttachParentActor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCuttingToolAbility_OnCuttableActorEndPlay_Statics::NewProp_OldAttachParentActor = { "OldAttachParentActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttingToolAbility_eventOnCuttableActorEndPlay_Parms, OldAttachParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCuttingToolAbility_OnCuttableActorEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttingToolAbility_eventOnCuttableActorEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCuttingToolAbility_OnCuttableActorEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttingToolAbility_OnCuttableActorEndPlay_Statics::NewProp_OldAttachParentActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttingToolAbility_OnCuttableActorEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttingToolAbility_OnCuttableActorEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttingToolAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttingToolAbility_OnCuttableActorEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttingToolAbility, nullptr, "OnCuttableActorEndPlay", nullptr, nullptr, sizeof(SBZCuttingToolAbility_eventOnCuttableActorEndPlay_Parms), Z_Construct_UFunction_USBZCuttingToolAbility_OnCuttableActorEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttingToolAbility_OnCuttableActorEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttingToolAbility_OnCuttableActorEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttingToolAbility_OnCuttableActorEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttingToolAbility_OnCuttableActorEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttingToolAbility_OnCuttableActorEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCuttingToolAbility_OnDisplayCaseStateChanged_Statics
	{
		struct SBZCuttingToolAbility_eventOnDisplayCaseStateChanged_Parms
		{
			ESBZDisplayCaseState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCuttingToolAbility_OnDisplayCaseStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCuttingToolAbility_OnDisplayCaseStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttingToolAbility_eventOnDisplayCaseStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZDisplayCaseState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCuttingToolAbility_OnDisplayCaseStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttingToolAbility_OnDisplayCaseStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttingToolAbility_OnDisplayCaseStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttingToolAbility_OnDisplayCaseStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttingToolAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttingToolAbility_OnDisplayCaseStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttingToolAbility, nullptr, "OnDisplayCaseStateChanged", nullptr, nullptr, sizeof(SBZCuttingToolAbility_eventOnDisplayCaseStateChanged_Parms), Z_Construct_UFunction_USBZCuttingToolAbility_OnDisplayCaseStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttingToolAbility_OnDisplayCaseStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttingToolAbility_OnDisplayCaseStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttingToolAbility_OnDisplayCaseStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttingToolAbility_OnDisplayCaseStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttingToolAbility_OnDisplayCaseStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCuttingToolAbility_OnGateStateChanged_Statics
	{
		struct SBZCuttingToolAbility_eventOnGateStateChanged_Parms
		{
			ASBZGate* Gate;
			ESBZGateState OldState;
			ESBZGateState NewState;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Gate;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCuttingToolAbility_OnGateStateChanged_Statics::NewProp_Gate = { "Gate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttingToolAbility_eventOnGateStateChanged_Parms, Gate), Z_Construct_UClass_ASBZGate_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCuttingToolAbility_OnGateStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCuttingToolAbility_OnGateStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttingToolAbility_eventOnGateStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_ESBZGateState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCuttingToolAbility_OnGateStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCuttingToolAbility_OnGateStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttingToolAbility_eventOnGateStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZGateState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCuttingToolAbility_OnGateStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttingToolAbility_OnGateStateChanged_Statics::NewProp_Gate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttingToolAbility_OnGateStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttingToolAbility_OnGateStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttingToolAbility_OnGateStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttingToolAbility_OnGateStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttingToolAbility_OnGateStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttingToolAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttingToolAbility_OnGateStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttingToolAbility, nullptr, "OnGateStateChanged", nullptr, nullptr, sizeof(SBZCuttingToolAbility_eventOnGateStateChanged_Parms), Z_Construct_UFunction_USBZCuttingToolAbility_OnGateStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttingToolAbility_OnGateStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttingToolAbility_OnGateStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttingToolAbility_OnGateStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttingToolAbility_OnGateStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttingToolAbility_OnGateStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCuttingToolAbility_NoRegister()
	{
		return USBZCuttingToolAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZCuttingToolAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayCase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DisplayCase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableGate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableGate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCuttableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentCuttableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseGenerationInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoiseGenerationInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoiseRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCuttingToolAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCuttingToolAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCuttingToolAbility_OnCuttableActorEndPlay, "OnCuttableActorEndPlay" }, // 3457428180
		{ &Z_Construct_UFunction_USBZCuttingToolAbility_OnDisplayCaseStateChanged, "OnDisplayCaseStateChanged" }, // 3837330819
		{ &Z_Construct_UFunction_USBZCuttingToolAbility_OnGateStateChanged, "OnGateStateChanged" }, // 2466186078
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttingToolAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCuttingToolAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCuttingToolAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_DisplayCase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttingToolAbility" },
		{ "ModuleRelativePath", "Public/SBZCuttingToolAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_DisplayCase = { "DisplayCase", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCuttingToolAbility, DisplayCase), Z_Construct_UClass_ASBZDisplayCase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_DisplayCase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_DisplayCase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_InteractableGate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttingToolAbility" },
		{ "ModuleRelativePath", "Public/SBZCuttingToolAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_InteractableGate = { "InteractableGate", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCuttingToolAbility, InteractableGate), Z_Construct_UClass_ASBZInteractableGate_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_InteractableGate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_InteractableGate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttingToolAbility" },
		{ "ModuleRelativePath", "Public/SBZCuttingToolAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCuttingToolAbility, OwnerCharacter), Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_OwnerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_OwnerCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_CurrentCuttableComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttingToolAbility" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCuttingToolAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_CurrentCuttableComponent = { "CurrentCuttableComponent", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCuttingToolAbility, CurrentCuttableComponent), Z_Construct_UClass_USBZCuttableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_CurrentCuttableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_CurrentCuttableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_NoiseGenerationInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttingToolAbility" },
		{ "ModuleRelativePath", "Public/SBZCuttingToolAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_NoiseGenerationInterval = { "NoiseGenerationInterval", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCuttingToolAbility, NoiseGenerationInterval), METADATA_PARAMS(Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_NoiseGenerationInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_NoiseGenerationInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_NoiseRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttingToolAbility" },
		{ "ModuleRelativePath", "Public/SBZCuttingToolAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_NoiseRange = { "NoiseRange", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCuttingToolAbility, NoiseRange), METADATA_PARAMS(Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_NoiseRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_NoiseRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCuttingToolAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_DisplayCase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_InteractableGate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_OwnerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_CurrentCuttableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_NoiseGenerationInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttingToolAbility_Statics::NewProp_NoiseRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCuttingToolAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCuttingToolAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCuttingToolAbility_Statics::ClassParams = {
		&USBZCuttingToolAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZCuttingToolAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttingToolAbility_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCuttingToolAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttingToolAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCuttingToolAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCuttingToolAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCuttingToolAbility, 1710986980);
	template<> STARBREEZE_API UClass* StaticClass<USBZCuttingToolAbility>()
	{
		return USBZCuttingToolAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCuttingToolAbility(Z_Construct_UClass_USBZCuttingToolAbility, &USBZCuttingToolAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCuttingToolAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCuttingToolAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZModuleActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZModuleActor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZModuleActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZModuleActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZModuleActorState();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCuttableActor_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3MiniGameState();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZModuleActorStateChangedDelegate__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHackingMinigameActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGate_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZModuleActor::execMulticast_SetState)
	{
		P_GET_ENUM(ESBZModuleActorState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetState_Implementation(ESBZModuleActorState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModuleActor::execOnRep_CurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModuleActor::execOnServerCuttingComplete)
	{
		P_GET_OBJECT(ASBZCuttableActor,Z_Param_CuttableActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerCuttingComplete(Z_Param_CuttableActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModuleActor::execOnServerHackingStateChanged)
	{
		P_GET_ENUM(EPD3MiniGameState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerHackingStateChanged(EPD3MiniGameState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModuleActor::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bInEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bInEnabled);
		P_NATIVE_END;
	}
	static FName NAME_ASBZModuleActor_BP_OnStateChanged = FName(TEXT("BP_OnStateChanged"));
	void ASBZModuleActor::BP_OnStateChanged(ESBZModuleActorState NewState, bool bDoCosmetics)
	{
		SBZModuleActor_eventBP_OnStateChanged_Parms Parms;
		Parms.NewState=NewState;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZModuleActor_BP_OnStateChanged),&Parms);
	}
	static FName NAME_ASBZModuleActor_Multicast_SetState = FName(TEXT("Multicast_SetState"));
	void ASBZModuleActor::Multicast_SetState(ESBZModuleActorState NewState)
	{
		SBZModuleActor_eventMulticast_SetState_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZModuleActor_Multicast_SetState),&Parms);
	}
	void ASBZModuleActor::StaticRegisterNativesASBZModuleActor()
	{
		UClass* Class = ASBZModuleActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetState", &ASBZModuleActor::execMulticast_SetState },
			{ "OnRep_CurrentState", &ASBZModuleActor::execOnRep_CurrentState },
			{ "OnServerCuttingComplete", &ASBZModuleActor::execOnServerCuttingComplete },
			{ "OnServerHackingStateChanged", &ASBZModuleActor::execOnServerHackingStateChanged },
			{ "SetEnabled", &ASBZModuleActor::execSetEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZModuleActor_BP_OnStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZModuleActor_BP_OnStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZModuleActor_BP_OnStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModuleActor_eventBP_OnStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZModuleActorState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZModuleActor_BP_OnStateChanged_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZModuleActor_eventBP_OnStateChanged_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZModuleActor_BP_OnStateChanged_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZModuleActor_eventBP_OnStateChanged_Parms), &Z_Construct_UFunction_ASBZModuleActor_BP_OnStateChanged_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModuleActor_BP_OnStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModuleActor_BP_OnStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModuleActor_BP_OnStateChanged_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModuleActor_BP_OnStateChanged_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModuleActor_BP_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModuleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModuleActor_BP_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModuleActor, nullptr, "BP_OnStateChanged", nullptr, nullptr, sizeof(SBZModuleActor_eventBP_OnStateChanged_Parms), Z_Construct_UFunction_ASBZModuleActor_BP_OnStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModuleActor_BP_OnStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModuleActor_BP_OnStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModuleActor_BP_OnStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModuleActor_BP_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModuleActor_BP_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModuleActor_Multicast_SetState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZModuleActor_Multicast_SetState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZModuleActor_Multicast_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModuleActor_eventMulticast_SetState_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZModuleActorState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModuleActor_Multicast_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModuleActor_Multicast_SetState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModuleActor_Multicast_SetState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModuleActor_Multicast_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModuleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModuleActor_Multicast_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModuleActor, nullptr, "Multicast_SetState", nullptr, nullptr, sizeof(SBZModuleActor_eventMulticast_SetState_Parms), Z_Construct_UFunction_ASBZModuleActor_Multicast_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModuleActor_Multicast_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModuleActor_Multicast_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModuleActor_Multicast_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModuleActor_Multicast_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModuleActor_Multicast_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModuleActor_OnRep_CurrentState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModuleActor_OnRep_CurrentState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModuleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModuleActor_OnRep_CurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModuleActor, nullptr, "OnRep_CurrentState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModuleActor_OnRep_CurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModuleActor_OnRep_CurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModuleActor_OnRep_CurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModuleActor_OnRep_CurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModuleActor_OnServerCuttingComplete_Statics
	{
		struct SBZModuleActor_eventOnServerCuttingComplete_Parms
		{
			ASBZCuttableActor* CuttableActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CuttableActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZModuleActor_OnServerCuttingComplete_Statics::NewProp_CuttableActor = { "CuttableActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModuleActor_eventOnServerCuttingComplete_Parms, CuttableActor), Z_Construct_UClass_ASBZCuttableActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModuleActor_OnServerCuttingComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModuleActor_OnServerCuttingComplete_Statics::NewProp_CuttableActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModuleActor_OnServerCuttingComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModuleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModuleActor_OnServerCuttingComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModuleActor, nullptr, "OnServerCuttingComplete", nullptr, nullptr, sizeof(SBZModuleActor_eventOnServerCuttingComplete_Parms), Z_Construct_UFunction_ASBZModuleActor_OnServerCuttingComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModuleActor_OnServerCuttingComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModuleActor_OnServerCuttingComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModuleActor_OnServerCuttingComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModuleActor_OnServerCuttingComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModuleActor_OnServerCuttingComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModuleActor_OnServerHackingStateChanged_Statics
	{
		struct SBZModuleActor_eventOnServerHackingStateChanged_Parms
		{
			EPD3MiniGameState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZModuleActor_OnServerHackingStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZModuleActor_OnServerHackingStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModuleActor_eventOnServerHackingStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3MiniGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModuleActor_OnServerHackingStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModuleActor_OnServerHackingStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModuleActor_OnServerHackingStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModuleActor_OnServerHackingStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModuleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModuleActor_OnServerHackingStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModuleActor, nullptr, "OnServerHackingStateChanged", nullptr, nullptr, sizeof(SBZModuleActor_eventOnServerHackingStateChanged_Parms), Z_Construct_UFunction_ASBZModuleActor_OnServerHackingStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModuleActor_OnServerHackingStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModuleActor_OnServerHackingStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModuleActor_OnServerHackingStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModuleActor_OnServerHackingStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModuleActor_OnServerHackingStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModuleActor_SetEnabled_Statics
	{
		struct SBZModuleActor_eventSetEnabled_Parms
		{
			bool bInEnabled;
		};
		static void NewProp_bInEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZModuleActor_SetEnabled_Statics::NewProp_bInEnabled_SetBit(void* Obj)
	{
		((SBZModuleActor_eventSetEnabled_Parms*)Obj)->bInEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZModuleActor_SetEnabled_Statics::NewProp_bInEnabled = { "bInEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZModuleActor_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZModuleActor_SetEnabled_Statics::NewProp_bInEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModuleActor_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModuleActor_SetEnabled_Statics::NewProp_bInEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModuleActor_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModuleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModuleActor_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModuleActor, nullptr, "SetEnabled", nullptr, nullptr, sizeof(SBZModuleActor_eventSetEnabled_Parms), Z_Construct_UFunction_ASBZModuleActor_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModuleActor_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModuleActor_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModuleActor_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModuleActor_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModuleActor_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZModuleActor_NoRegister()
	{
		return ASBZModuleActor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZModuleActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStateChangedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateChangedDelegate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HackingModules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackingModules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HackingModules;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CuttingModules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CuttingModules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CuttingModules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMustHackAllModules_MetaData[];
#endif
		static void NewProp_bMustHackAllModules_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMustHackAllModules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMustCutAllModules_MetaData[];
#endif
		static void NewProp_bMustCutAllModules_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMustCutAllModules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCuttingModule_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultCuttingModule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultHackingModule_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultHackingModule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectedGate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConnectedGate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZModuleActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZModuleActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZModuleActor_BP_OnStateChanged, "BP_OnStateChanged" }, // 1419679760
		{ &Z_Construct_UFunction_ASBZModuleActor_Multicast_SetState, "Multicast_SetState" }, // 749319528
		{ &Z_Construct_UFunction_ASBZModuleActor_OnRep_CurrentState, "OnRep_CurrentState" }, // 352436434
		{ &Z_Construct_UFunction_ASBZModuleActor_OnServerCuttingComplete, "OnServerCuttingComplete" }, // 256710560
		{ &Z_Construct_UFunction_ASBZModuleActor_OnServerHackingStateChanged, "OnServerHackingStateChanged" }, // 1247067141
		{ &Z_Construct_UFunction_ASBZModuleActor_SetEnabled, "SetEnabled" }, // 3506894500
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModuleActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZModuleActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZModuleActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_OnStateChangedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModuleActor" },
		{ "ModuleRelativePath", "Public/SBZModuleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_OnStateChangedDelegate = { "OnStateChangedDelegate", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZModuleActor, OnStateChangedDelegate), Z_Construct_UDelegateFunction_Starbreeze_SBZModuleActorStateChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_OnStateChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_OnStateChangedDelegate_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_HackingModules_Inner = { "HackingModules", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZHackingMinigameActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_HackingModules_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModuleActor" },
		{ "ModuleRelativePath", "Public/SBZModuleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_HackingModules = { "HackingModules", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZModuleActor, HackingModules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_HackingModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_HackingModules_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_CuttingModules_Inner = { "CuttingModules", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZCuttableActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_CuttingModules_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModuleActor" },
		{ "ModuleRelativePath", "Public/SBZModuleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_CuttingModules = { "CuttingModules", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZModuleActor, CuttingModules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_CuttingModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_CuttingModules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_bMustHackAllModules_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModuleActor" },
		{ "ModuleRelativePath", "Public/SBZModuleActor.h" },
	};
#endif
	void Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_bMustHackAllModules_SetBit(void* Obj)
	{
		((ASBZModuleActor*)Obj)->bMustHackAllModules = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_bMustHackAllModules = { "bMustHackAllModules", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZModuleActor), &Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_bMustHackAllModules_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_bMustHackAllModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_bMustHackAllModules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_bMustCutAllModules_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModuleActor" },
		{ "ModuleRelativePath", "Public/SBZModuleActor.h" },
	};
#endif
	void Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_bMustCutAllModules_SetBit(void* Obj)
	{
		((ASBZModuleActor*)Obj)->bMustCutAllModules = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_bMustCutAllModules = { "bMustCutAllModules", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZModuleActor), &Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_bMustCutAllModules_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_bMustCutAllModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_bMustCutAllModules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_DefaultCuttingModule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModuleActor" },
		{ "ModuleRelativePath", "Public/SBZModuleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_DefaultCuttingModule = { "DefaultCuttingModule", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZModuleActor, DefaultCuttingModule), Z_Construct_UClass_ASBZCuttableActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_DefaultCuttingModule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_DefaultCuttingModule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_DefaultHackingModule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModuleActor" },
		{ "ModuleRelativePath", "Public/SBZModuleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_DefaultHackingModule = { "DefaultHackingModule", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZModuleActor, DefaultHackingModule), Z_Construct_UClass_ASBZHackingMinigameActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_DefaultHackingModule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_DefaultHackingModule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_ConnectedGate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModuleActor" },
		{ "ModuleRelativePath", "Public/SBZModuleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_ConnectedGate = { "ConnectedGate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZModuleActor, ConnectedGate), Z_Construct_UClass_ASBZGate_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_ConnectedGate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_ConnectedGate_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_CurrentState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModuleActor" },
		{ "ModuleRelativePath", "Public/SBZModuleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_CurrentState = { "CurrentState", "OnRep_CurrentState", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZModuleActor, CurrentState), Z_Construct_UEnum_Starbreeze_ESBZModuleActorState, METADATA_PARAMS(Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_CurrentState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZModuleActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_OnStateChangedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_HackingModules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_HackingModules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_CuttingModules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_CuttingModules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_bMustHackAllModules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_bMustCutAllModules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_DefaultCuttingModule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_DefaultHackingModule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_ConnectedGate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_CurrentState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModuleActor_Statics::NewProp_CurrentState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZModuleActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZModuleActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZModuleActor_Statics::ClassParams = {
		&ASBZModuleActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZModuleActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModuleActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZModuleActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModuleActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZModuleActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZModuleActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZModuleActor, 2333230443);
	template<> STARBREEZE_API UClass* StaticClass<ASBZModuleActor>()
	{
		return ASBZModuleActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZModuleActor(Z_Construct_UClass_ASBZModuleActor, &ASBZModuleActor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZModuleActor"), false, nullptr, nullptr, nullptr);

	void ASBZModuleActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentState(TEXT("CurrentState"));

		const bool bIsValid = true
			&& Name_CurrentState == ClassReps[(int32)ENetFields_Private::CurrentState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZModuleActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZModuleActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

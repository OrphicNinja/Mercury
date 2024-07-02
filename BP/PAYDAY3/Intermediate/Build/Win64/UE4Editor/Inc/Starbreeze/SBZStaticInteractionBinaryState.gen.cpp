// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStaticInteractionBinaryState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStaticInteractionBinaryState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZStaticInteractionBinaryState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZStaticInteractionBinaryState();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnInteractionBinaryStateDelegate__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZStaticInteractionBinaryState::execOnAckCompleteInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledInteractor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAckCompleteInteraction(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bIsLocallyControlledInteractor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZStaticInteractionBinaryState::execOnRep_CurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZStaticInteractionBinaryState::execSetInteractionEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractionEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	static FName NAME_ASBZStaticInteractionBinaryState_BP_OnStateChanged = FName(TEXT("BP_OnStateChanged"));
	void ASBZStaticInteractionBinaryState::BP_OnStateChanged(bool bNewState, bool bDoCosmentics)
	{
		SBZStaticInteractionBinaryState_eventBP_OnStateChanged_Parms Parms;
		Parms.bNewState=bNewState ? true : false;
		Parms.bDoCosmentics=bDoCosmentics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZStaticInteractionBinaryState_BP_OnStateChanged),&Parms);
	}
	void ASBZStaticInteractionBinaryState::StaticRegisterNativesASBZStaticInteractionBinaryState()
	{
		UClass* Class = ASBZStaticInteractionBinaryState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAckCompleteInteraction", &ASBZStaticInteractionBinaryState::execOnAckCompleteInteraction },
			{ "OnRep_CurrentState", &ASBZStaticInteractionBinaryState::execOnRep_CurrentState },
			{ "SetInteractionEnabled", &ASBZStaticInteractionBinaryState::execSetInteractionEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZStaticInteractionBinaryState_BP_OnStateChanged_Statics
	{
		static void NewProp_bNewState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewState;
		static void NewProp_bDoCosmentics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmentics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZStaticInteractionBinaryState_BP_OnStateChanged_Statics::NewProp_bNewState_SetBit(void* Obj)
	{
		((SBZStaticInteractionBinaryState_eventBP_OnStateChanged_Parms*)Obj)->bNewState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZStaticInteractionBinaryState_BP_OnStateChanged_Statics::NewProp_bNewState = { "bNewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZStaticInteractionBinaryState_eventBP_OnStateChanged_Parms), &Z_Construct_UFunction_ASBZStaticInteractionBinaryState_BP_OnStateChanged_Statics::NewProp_bNewState_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZStaticInteractionBinaryState_BP_OnStateChanged_Statics::NewProp_bDoCosmentics_SetBit(void* Obj)
	{
		((SBZStaticInteractionBinaryState_eventBP_OnStateChanged_Parms*)Obj)->bDoCosmentics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZStaticInteractionBinaryState_BP_OnStateChanged_Statics::NewProp_bDoCosmentics = { "bDoCosmentics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZStaticInteractionBinaryState_eventBP_OnStateChanged_Parms), &Z_Construct_UFunction_ASBZStaticInteractionBinaryState_BP_OnStateChanged_Statics::NewProp_bDoCosmentics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZStaticInteractionBinaryState_BP_OnStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZStaticInteractionBinaryState_BP_OnStateChanged_Statics::NewProp_bNewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZStaticInteractionBinaryState_BP_OnStateChanged_Statics::NewProp_bDoCosmentics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZStaticInteractionBinaryState_BP_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStaticInteractionBinaryState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZStaticInteractionBinaryState_BP_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZStaticInteractionBinaryState, nullptr, "BP_OnStateChanged", nullptr, nullptr, sizeof(SBZStaticInteractionBinaryState_eventBP_OnStateChanged_Parms), Z_Construct_UFunction_ASBZStaticInteractionBinaryState_BP_OnStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStaticInteractionBinaryState_BP_OnStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZStaticInteractionBinaryState_BP_OnStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStaticInteractionBinaryState_BP_OnStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZStaticInteractionBinaryState_BP_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZStaticInteractionBinaryState_BP_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnAckCompleteInteraction_Statics
	{
		struct SBZStaticInteractionBinaryState_eventOnAckCompleteInteraction_Parms
		{
			USBZBaseInteractableComponent* Interactable;
			USBZInteractorComponent* Interactor;
			bool bIsLocallyControlledInteractor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlledInteractor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnAckCompleteInteraction_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnAckCompleteInteraction_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStaticInteractionBinaryState_eventOnAckCompleteInteraction_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnAckCompleteInteraction_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnAckCompleteInteraction_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnAckCompleteInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnAckCompleteInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStaticInteractionBinaryState_eventOnAckCompleteInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnAckCompleteInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnAckCompleteInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnAckCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj)
	{
		((SBZStaticInteractionBinaryState_eventOnAckCompleteInteraction_Parms*)Obj)->bIsLocallyControlledInteractor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnAckCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor = { "bIsLocallyControlledInteractor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZStaticInteractionBinaryState_eventOnAckCompleteInteraction_Parms), &Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnAckCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnAckCompleteInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnAckCompleteInteraction_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnAckCompleteInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnAckCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnAckCompleteInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStaticInteractionBinaryState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnAckCompleteInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZStaticInteractionBinaryState, nullptr, "OnAckCompleteInteraction", nullptr, nullptr, sizeof(SBZStaticInteractionBinaryState_eventOnAckCompleteInteraction_Parms), Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnAckCompleteInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnAckCompleteInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnAckCompleteInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnAckCompleteInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnAckCompleteInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnAckCompleteInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnRep_CurrentState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnRep_CurrentState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStaticInteractionBinaryState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnRep_CurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZStaticInteractionBinaryState, nullptr, "OnRep_CurrentState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnRep_CurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnRep_CurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnRep_CurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnRep_CurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZStaticInteractionBinaryState_SetInteractionEnabled_Statics
	{
		struct SBZStaticInteractionBinaryState_eventSetInteractionEnabled_Parms
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
	void Z_Construct_UFunction_ASBZStaticInteractionBinaryState_SetInteractionEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZStaticInteractionBinaryState_eventSetInteractionEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZStaticInteractionBinaryState_SetInteractionEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZStaticInteractionBinaryState_eventSetInteractionEnabled_Parms), &Z_Construct_UFunction_ASBZStaticInteractionBinaryState_SetInteractionEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZStaticInteractionBinaryState_SetInteractionEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZStaticInteractionBinaryState_SetInteractionEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZStaticInteractionBinaryState_SetInteractionEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStaticInteractionBinaryState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZStaticInteractionBinaryState_SetInteractionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZStaticInteractionBinaryState, nullptr, "SetInteractionEnabled", nullptr, nullptr, sizeof(SBZStaticInteractionBinaryState_eventSetInteractionEnabled_Parms), Z_Construct_UFunction_ASBZStaticInteractionBinaryState_SetInteractionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStaticInteractionBinaryState_SetInteractionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZStaticInteractionBinaryState_SetInteractionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStaticInteractionBinaryState_SetInteractionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZStaticInteractionBinaryState_SetInteractionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZStaticInteractionBinaryState_SetInteractionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZStaticInteractionBinaryState_NoRegister()
	{
		return ASBZStaticInteractionBinaryState::StaticClass();
	}
	struct Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bState_MetaData[];
#endif
		static void NewProp_bState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZStaticInteractionBinaryState_BP_OnStateChanged, "BP_OnStateChanged" }, // 1261400313
		{ &Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnAckCompleteInteraction, "OnAckCompleteInteraction" }, // 2134404744
		{ &Z_Construct_UFunction_ASBZStaticInteractionBinaryState_OnRep_CurrentState, "OnRep_CurrentState" }, // 3055196500
		{ &Z_Construct_UFunction_ASBZStaticInteractionBinaryState_SetInteractionEnabled, "SetInteractionEnabled" }, // 3103051704
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStaticInteractionBinaryState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStaticInteractionBinaryState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::NewProp_OnStateChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStaticInteractionBinaryState" },
		{ "ModuleRelativePath", "Public/SBZStaticInteractionBinaryState.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::NewProp_OnStateChanged = { "OnStateChanged", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZStaticInteractionBinaryState, OnStateChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZOnInteractionBinaryStateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::NewProp_OnStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::NewProp_OnStateChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::NewProp_InteractableComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStaticInteractionBinaryState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZStaticInteractionBinaryState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::NewProp_InteractableComponent = { "InteractableComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZStaticInteractionBinaryState, InteractableComponent), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::NewProp_InteractableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::NewProp_InteractableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::NewProp_bState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStaticInteractionBinaryState" },
		{ "ModuleRelativePath", "Public/SBZStaticInteractionBinaryState.h" },
	};
#endif
	void Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::NewProp_bState_SetBit(void* Obj)
	{
		((ASBZStaticInteractionBinaryState*)Obj)->bState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::NewProp_bState = { "bState", "OnRep_CurrentState", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZStaticInteractionBinaryState), &Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::NewProp_bState_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::NewProp_bState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::NewProp_bState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::NewProp_OnStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::NewProp_InteractableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::NewProp_bState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZStaticInteractionBinaryState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::ClassParams = {
		&ASBZStaticInteractionBinaryState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZStaticInteractionBinaryState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZStaticInteractionBinaryState, 3516970467);
	template<> STARBREEZE_API UClass* StaticClass<ASBZStaticInteractionBinaryState>()
	{
		return ASBZStaticInteractionBinaryState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZStaticInteractionBinaryState(Z_Construct_UClass_ASBZStaticInteractionBinaryState, &ASBZStaticInteractionBinaryState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZStaticInteractionBinaryState"), false, nullptr, nullptr, nullptr);

	void ASBZStaticInteractionBinaryState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bState(TEXT("bState"));

		const bool bIsValid = true
			&& Name_bState == ClassReps[(int32)ENetFields_Private::bState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZStaticInteractionBinaryState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZStaticInteractionBinaryState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

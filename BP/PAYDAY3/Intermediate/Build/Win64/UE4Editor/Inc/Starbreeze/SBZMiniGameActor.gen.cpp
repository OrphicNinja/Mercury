// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMiniGameActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMiniGameActor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMiniGameActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMiniGameActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3MiniGameState();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnMinigameDoneDelegate__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMiniGameComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZMiniGameActor::execMulticast_OnComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnComplete_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMiniGameActor::execMulticast_SetMiniGameIgnored)
	{
		P_GET_UBOOL(Z_Param_bIgnored);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetMiniGameIgnored_Implementation(Z_Param_bIgnored);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMiniGameActor::execOnAckCompleteInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledInteractor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAckCompleteInteraction(Z_Param_InInteractable,Z_Param_Interactor,Z_Param_bIsLocallyControlledInteractor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMiniGameActor::execOnInteractableStateChanged)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InteractableComponent);
		P_GET_UBOOL(Z_Param_bInNewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteractableStateChanged(Z_Param_InteractableComponent,Z_Param_bInNewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMiniGameActor::execOnMiniGameStateChanged)
	{
		P_GET_ENUM(EPD3MiniGameState,Z_Param_OldState);
		P_GET_ENUM(EPD3MiniGameState,Z_Param_NewState);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMiniGameStateChanged(EPD3MiniGameState(Z_Param_OldState),EPD3MiniGameState(Z_Param_NewState),Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMiniGameActor::execOnRep_IsUnlocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsUnlocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMiniGameActor::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bInEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bInEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMiniGameActor::execSetMiniGameIgnored)
	{
		P_GET_UBOOL(Z_Param_bIgnored);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMiniGameIgnored(Z_Param_bIgnored);
		P_NATIVE_END;
	}
	static FName NAME_ASBZMiniGameActor_BP_OnMiniGameSuccess = FName(TEXT("BP_OnMiniGameSuccess"));
	void ASBZMiniGameActor::BP_OnMiniGameSuccess(bool bDoCosmetics)
	{
		SBZMiniGameActor_eventBP_OnMiniGameSuccess_Parms Parms;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZMiniGameActor_BP_OnMiniGameSuccess),&Parms);
	}
	static FName NAME_ASBZMiniGameActor_Multicast_OnComplete = FName(TEXT("Multicast_OnComplete"));
	void ASBZMiniGameActor::Multicast_OnComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZMiniGameActor_Multicast_OnComplete),NULL);
	}
	static FName NAME_ASBZMiniGameActor_Multicast_SetMiniGameIgnored = FName(TEXT("Multicast_SetMiniGameIgnored"));
	void ASBZMiniGameActor::Multicast_SetMiniGameIgnored(bool bIgnored)
	{
		SBZMiniGameActor_eventMulticast_SetMiniGameIgnored_Parms Parms;
		Parms.bIgnored=bIgnored ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZMiniGameActor_Multicast_SetMiniGameIgnored),&Parms);
	}
	void ASBZMiniGameActor::StaticRegisterNativesASBZMiniGameActor()
	{
		UClass* Class = ASBZMiniGameActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_OnComplete", &ASBZMiniGameActor::execMulticast_OnComplete },
			{ "Multicast_SetMiniGameIgnored", &ASBZMiniGameActor::execMulticast_SetMiniGameIgnored },
			{ "OnAckCompleteInteraction", &ASBZMiniGameActor::execOnAckCompleteInteraction },
			{ "OnInteractableStateChanged", &ASBZMiniGameActor::execOnInteractableStateChanged },
			{ "OnMiniGameStateChanged", &ASBZMiniGameActor::execOnMiniGameStateChanged },
			{ "OnRep_IsUnlocked", &ASBZMiniGameActor::execOnRep_IsUnlocked },
			{ "SetEnabled", &ASBZMiniGameActor::execSetEnabled },
			{ "SetMiniGameIgnored", &ASBZMiniGameActor::execSetMiniGameIgnored },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZMiniGameActor_BP_OnMiniGameSuccess_Statics
	{
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZMiniGameActor_BP_OnMiniGameSuccess_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZMiniGameActor_eventBP_OnMiniGameSuccess_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZMiniGameActor_BP_OnMiniGameSuccess_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMiniGameActor_eventBP_OnMiniGameSuccess_Parms), &Z_Construct_UFunction_ASBZMiniGameActor_BP_OnMiniGameSuccess_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMiniGameActor_BP_OnMiniGameSuccess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMiniGameActor_BP_OnMiniGameSuccess_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMiniGameActor_BP_OnMiniGameSuccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMiniGameActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMiniGameActor_BP_OnMiniGameSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMiniGameActor, nullptr, "BP_OnMiniGameSuccess", nullptr, nullptr, sizeof(SBZMiniGameActor_eventBP_OnMiniGameSuccess_Parms), Z_Construct_UFunction_ASBZMiniGameActor_BP_OnMiniGameSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMiniGameActor_BP_OnMiniGameSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMiniGameActor_BP_OnMiniGameSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMiniGameActor_BP_OnMiniGameSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMiniGameActor_BP_OnMiniGameSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMiniGameActor_BP_OnMiniGameSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMiniGameActor_Multicast_OnComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMiniGameActor_Multicast_OnComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMiniGameActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMiniGameActor_Multicast_OnComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMiniGameActor, nullptr, "Multicast_OnComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMiniGameActor_Multicast_OnComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMiniGameActor_Multicast_OnComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMiniGameActor_Multicast_OnComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMiniGameActor_Multicast_OnComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMiniGameActor_Multicast_SetMiniGameIgnored_Statics
	{
		static void NewProp_bIgnored_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnored;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZMiniGameActor_Multicast_SetMiniGameIgnored_Statics::NewProp_bIgnored_SetBit(void* Obj)
	{
		((SBZMiniGameActor_eventMulticast_SetMiniGameIgnored_Parms*)Obj)->bIgnored = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZMiniGameActor_Multicast_SetMiniGameIgnored_Statics::NewProp_bIgnored = { "bIgnored", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMiniGameActor_eventMulticast_SetMiniGameIgnored_Parms), &Z_Construct_UFunction_ASBZMiniGameActor_Multicast_SetMiniGameIgnored_Statics::NewProp_bIgnored_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMiniGameActor_Multicast_SetMiniGameIgnored_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMiniGameActor_Multicast_SetMiniGameIgnored_Statics::NewProp_bIgnored,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMiniGameActor_Multicast_SetMiniGameIgnored_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMiniGameActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMiniGameActor_Multicast_SetMiniGameIgnored_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMiniGameActor, nullptr, "Multicast_SetMiniGameIgnored", nullptr, nullptr, sizeof(SBZMiniGameActor_eventMulticast_SetMiniGameIgnored_Parms), Z_Construct_UFunction_ASBZMiniGameActor_Multicast_SetMiniGameIgnored_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMiniGameActor_Multicast_SetMiniGameIgnored_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMiniGameActor_Multicast_SetMiniGameIgnored_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMiniGameActor_Multicast_SetMiniGameIgnored_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMiniGameActor_Multicast_SetMiniGameIgnored()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMiniGameActor_Multicast_SetMiniGameIgnored_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMiniGameActor_OnAckCompleteInteraction_Statics
	{
		struct SBZMiniGameActor_eventOnAckCompleteInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* Interactor;
			bool bIsLocallyControlledInteractor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMiniGameActor_OnAckCompleteInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZMiniGameActor_OnAckCompleteInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMiniGameActor_eventOnAckCompleteInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZMiniGameActor_OnAckCompleteInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMiniGameActor_OnAckCompleteInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMiniGameActor_OnAckCompleteInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZMiniGameActor_OnAckCompleteInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMiniGameActor_eventOnAckCompleteInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZMiniGameActor_OnAckCompleteInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMiniGameActor_OnAckCompleteInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZMiniGameActor_OnAckCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj)
	{
		((SBZMiniGameActor_eventOnAckCompleteInteraction_Parms*)Obj)->bIsLocallyControlledInteractor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZMiniGameActor_OnAckCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor = { "bIsLocallyControlledInteractor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMiniGameActor_eventOnAckCompleteInteraction_Parms), &Z_Construct_UFunction_ASBZMiniGameActor_OnAckCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMiniGameActor_OnAckCompleteInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMiniGameActor_OnAckCompleteInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMiniGameActor_OnAckCompleteInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMiniGameActor_OnAckCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMiniGameActor_OnAckCompleteInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMiniGameActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMiniGameActor_OnAckCompleteInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMiniGameActor, nullptr, "OnAckCompleteInteraction", nullptr, nullptr, sizeof(SBZMiniGameActor_eventOnAckCompleteInteraction_Parms), Z_Construct_UFunction_ASBZMiniGameActor_OnAckCompleteInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMiniGameActor_OnAckCompleteInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMiniGameActor_OnAckCompleteInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMiniGameActor_OnAckCompleteInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMiniGameActor_OnAckCompleteInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMiniGameActor_OnAckCompleteInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMiniGameActor_OnInteractableStateChanged_Statics
	{
		struct SBZMiniGameActor_eventOnInteractableStateChanged_Parms
		{
			const USBZBaseInteractableComponent* InteractableComponent;
			bool bInNewState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableComponent;
		static void NewProp_bInNewState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInNewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMiniGameActor_OnInteractableStateChanged_Statics::NewProp_InteractableComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZMiniGameActor_OnInteractableStateChanged_Statics::NewProp_InteractableComponent = { "InteractableComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMiniGameActor_eventOnInteractableStateChanged_Parms, InteractableComponent), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZMiniGameActor_OnInteractableStateChanged_Statics::NewProp_InteractableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMiniGameActor_OnInteractableStateChanged_Statics::NewProp_InteractableComponent_MetaData)) };
	void Z_Construct_UFunction_ASBZMiniGameActor_OnInteractableStateChanged_Statics::NewProp_bInNewState_SetBit(void* Obj)
	{
		((SBZMiniGameActor_eventOnInteractableStateChanged_Parms*)Obj)->bInNewState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZMiniGameActor_OnInteractableStateChanged_Statics::NewProp_bInNewState = { "bInNewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMiniGameActor_eventOnInteractableStateChanged_Parms), &Z_Construct_UFunction_ASBZMiniGameActor_OnInteractableStateChanged_Statics::NewProp_bInNewState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMiniGameActor_OnInteractableStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMiniGameActor_OnInteractableStateChanged_Statics::NewProp_InteractableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMiniGameActor_OnInteractableStateChanged_Statics::NewProp_bInNewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMiniGameActor_OnInteractableStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMiniGameActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMiniGameActor_OnInteractableStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMiniGameActor, nullptr, "OnInteractableStateChanged", nullptr, nullptr, sizeof(SBZMiniGameActor_eventOnInteractableStateChanged_Parms), Z_Construct_UFunction_ASBZMiniGameActor_OnInteractableStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMiniGameActor_OnInteractableStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMiniGameActor_OnInteractableStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMiniGameActor_OnInteractableStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMiniGameActor_OnInteractableStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMiniGameActor_OnInteractableStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMiniGameActor_OnMiniGameStateChanged_Statics
	{
		struct SBZMiniGameActor_eventOnMiniGameStateChanged_Parms
		{
			EPD3MiniGameState OldState;
			EPD3MiniGameState NewState;
			bool bInIsLocallyControlled;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZMiniGameActor_OnMiniGameStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZMiniGameActor_OnMiniGameStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMiniGameActor_eventOnMiniGameStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_EPD3MiniGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZMiniGameActor_OnMiniGameStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZMiniGameActor_OnMiniGameStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMiniGameActor_eventOnMiniGameStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3MiniGameState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZMiniGameActor_OnMiniGameStateChanged_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZMiniGameActor_eventOnMiniGameStateChanged_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZMiniGameActor_OnMiniGameStateChanged_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMiniGameActor_eventOnMiniGameStateChanged_Parms), &Z_Construct_UFunction_ASBZMiniGameActor_OnMiniGameStateChanged_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMiniGameActor_OnMiniGameStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMiniGameActor_OnMiniGameStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMiniGameActor_OnMiniGameStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMiniGameActor_OnMiniGameStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMiniGameActor_OnMiniGameStateChanged_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMiniGameActor_OnMiniGameStateChanged_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMiniGameActor_OnMiniGameStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMiniGameActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMiniGameActor_OnMiniGameStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMiniGameActor, nullptr, "OnMiniGameStateChanged", nullptr, nullptr, sizeof(SBZMiniGameActor_eventOnMiniGameStateChanged_Parms), Z_Construct_UFunction_ASBZMiniGameActor_OnMiniGameStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMiniGameActor_OnMiniGameStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMiniGameActor_OnMiniGameStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMiniGameActor_OnMiniGameStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMiniGameActor_OnMiniGameStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMiniGameActor_OnMiniGameStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMiniGameActor_OnRep_IsUnlocked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMiniGameActor_OnRep_IsUnlocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMiniGameActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMiniGameActor_OnRep_IsUnlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMiniGameActor, nullptr, "OnRep_IsUnlocked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMiniGameActor_OnRep_IsUnlocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMiniGameActor_OnRep_IsUnlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMiniGameActor_OnRep_IsUnlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMiniGameActor_OnRep_IsUnlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMiniGameActor_SetEnabled_Statics
	{
		struct SBZMiniGameActor_eventSetEnabled_Parms
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
	void Z_Construct_UFunction_ASBZMiniGameActor_SetEnabled_Statics::NewProp_bInEnabled_SetBit(void* Obj)
	{
		((SBZMiniGameActor_eventSetEnabled_Parms*)Obj)->bInEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZMiniGameActor_SetEnabled_Statics::NewProp_bInEnabled = { "bInEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMiniGameActor_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZMiniGameActor_SetEnabled_Statics::NewProp_bInEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMiniGameActor_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMiniGameActor_SetEnabled_Statics::NewProp_bInEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMiniGameActor_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMiniGameActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMiniGameActor_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMiniGameActor, nullptr, "SetEnabled", nullptr, nullptr, sizeof(SBZMiniGameActor_eventSetEnabled_Parms), Z_Construct_UFunction_ASBZMiniGameActor_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMiniGameActor_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMiniGameActor_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMiniGameActor_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMiniGameActor_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMiniGameActor_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMiniGameActor_SetMiniGameIgnored_Statics
	{
		struct SBZMiniGameActor_eventSetMiniGameIgnored_Parms
		{
			bool bIgnored;
		};
		static void NewProp_bIgnored_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnored;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZMiniGameActor_SetMiniGameIgnored_Statics::NewProp_bIgnored_SetBit(void* Obj)
	{
		((SBZMiniGameActor_eventSetMiniGameIgnored_Parms*)Obj)->bIgnored = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZMiniGameActor_SetMiniGameIgnored_Statics::NewProp_bIgnored = { "bIgnored", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMiniGameActor_eventSetMiniGameIgnored_Parms), &Z_Construct_UFunction_ASBZMiniGameActor_SetMiniGameIgnored_Statics::NewProp_bIgnored_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMiniGameActor_SetMiniGameIgnored_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMiniGameActor_SetMiniGameIgnored_Statics::NewProp_bIgnored,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMiniGameActor_SetMiniGameIgnored_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMiniGameActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMiniGameActor_SetMiniGameIgnored_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMiniGameActor, nullptr, "SetMiniGameIgnored", nullptr, nullptr, sizeof(SBZMiniGameActor_eventSetMiniGameIgnored_Parms), Z_Construct_UFunction_ASBZMiniGameActor_SetMiniGameIgnored_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMiniGameActor_SetMiniGameIgnored_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMiniGameActor_SetMiniGameIgnored_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMiniGameActor_SetMiniGameIgnored_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMiniGameActor_SetMiniGameIgnored()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMiniGameActor_SetMiniGameIgnored_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZMiniGameActor_NoRegister()
	{
		return ASBZMiniGameActor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZMiniGameActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMiniGameSuccessful_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMiniGameSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUnlocked_MetaData[];
#endif
		static void NewProp_bIsUnlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUnlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMiniGameIgnored_MetaData[];
#endif
		static void NewProp_bIsMiniGameIgnored_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMiniGameIgnored;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniGameComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MiniGameComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutlineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZMiniGameActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZMiniGameActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZMiniGameActor_BP_OnMiniGameSuccess, "BP_OnMiniGameSuccess" }, // 863974764
		{ &Z_Construct_UFunction_ASBZMiniGameActor_Multicast_OnComplete, "Multicast_OnComplete" }, // 1269363394
		{ &Z_Construct_UFunction_ASBZMiniGameActor_Multicast_SetMiniGameIgnored, "Multicast_SetMiniGameIgnored" }, // 3080846113
		{ &Z_Construct_UFunction_ASBZMiniGameActor_OnAckCompleteInteraction, "OnAckCompleteInteraction" }, // 164433651
		{ &Z_Construct_UFunction_ASBZMiniGameActor_OnInteractableStateChanged, "OnInteractableStateChanged" }, // 3925615101
		{ &Z_Construct_UFunction_ASBZMiniGameActor_OnMiniGameStateChanged, "OnMiniGameStateChanged" }, // 3646645539
		{ &Z_Construct_UFunction_ASBZMiniGameActor_OnRep_IsUnlocked, "OnRep_IsUnlocked" }, // 1017974160
		{ &Z_Construct_UFunction_ASBZMiniGameActor_SetEnabled, "SetEnabled" }, // 3117133658
		{ &Z_Construct_UFunction_ASBZMiniGameActor_SetMiniGameIgnored, "SetMiniGameIgnored" }, // 2776870660
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMiniGameActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMiniGameActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMiniGameActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_OnMiniGameSuccessful_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameActor" },
		{ "ModuleRelativePath", "Public/SBZMiniGameActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_OnMiniGameSuccessful = { "OnMiniGameSuccessful", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMiniGameActor, OnMiniGameSuccessful), Z_Construct_UDelegateFunction_Starbreeze_SBZOnMinigameDoneDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_OnMiniGameSuccessful_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_OnMiniGameSuccessful_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_bIsUnlocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameActor" },
		{ "ModuleRelativePath", "Public/SBZMiniGameActor.h" },
	};
#endif
	void Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_bIsUnlocked_SetBit(void* Obj)
	{
		((ASBZMiniGameActor*)Obj)->bIsUnlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_bIsUnlocked = { "bIsUnlocked", "OnRep_IsUnlocked", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZMiniGameActor), &Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_bIsUnlocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_bIsUnlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_bIsUnlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_bIsMiniGameIgnored_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameActor" },
		{ "ModuleRelativePath", "Public/SBZMiniGameActor.h" },
	};
#endif
	void Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_bIsMiniGameIgnored_SetBit(void* Obj)
	{
		((ASBZMiniGameActor*)Obj)->bIsMiniGameIgnored = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_bIsMiniGameIgnored = { "bIsMiniGameIgnored", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZMiniGameActor), &Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_bIsMiniGameIgnored_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_bIsMiniGameIgnored_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_bIsMiniGameIgnored_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_MiniGameComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMiniGameActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_MiniGameComponent = { "MiniGameComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMiniGameActor, MiniGameComponent), Z_Construct_UClass_USBZMiniGameComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_MiniGameComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_MiniGameComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_Interactable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMiniGameActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMiniGameActor, Interactable), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_OutlineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMiniGameActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_OutlineComponent = { "OutlineComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMiniGameActor, OutlineComponent), Z_Construct_UClass_USBZOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_OutlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_OutlineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMiniGameActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMiniGameActor, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_WidgetComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMiniGameActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_WidgetComponent = { "WidgetComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMiniGameActor, WidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_WidgetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_WidgetComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZMiniGameActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_OnMiniGameSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_bIsUnlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_bIsMiniGameIgnored,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_MiniGameComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_OutlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMiniGameActor_Statics::NewProp_WidgetComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZMiniGameActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZMiniGameActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZMiniGameActor_Statics::ClassParams = {
		&ASBZMiniGameActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZMiniGameActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMiniGameActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZMiniGameActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMiniGameActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZMiniGameActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZMiniGameActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZMiniGameActor, 887393892);
	template<> STARBREEZE_API UClass* StaticClass<ASBZMiniGameActor>()
	{
		return ASBZMiniGameActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZMiniGameActor(Z_Construct_UClass_ASBZMiniGameActor, &ASBZMiniGameActor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZMiniGameActor"), false, nullptr, nullptr, nullptr);

	void ASBZMiniGameActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsUnlocked(TEXT("bIsUnlocked"));
		static const FName Name_bIsMiniGameIgnored(TEXT("bIsMiniGameIgnored"));

		const bool bIsValid = true
			&& Name_bIsUnlocked == ClassReps[(int32)ENetFields_Private::bIsUnlocked].Property->GetFName()
			&& Name_bIsMiniGameIgnored == ClassReps[(int32)ENetFields_Private::bIsMiniGameIgnored].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZMiniGameActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZMiniGameActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

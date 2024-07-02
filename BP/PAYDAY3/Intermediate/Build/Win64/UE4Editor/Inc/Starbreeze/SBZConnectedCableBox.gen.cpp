// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZConnectedCableBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZConnectedCableBox() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZConnectedCableBox_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZConnectedCableBox();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnCompleteDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZCableBoxDelegate__DelegateSignature();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZConnectedCableBox::execEnableInteraction)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableInteraction(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZConnectedCableBox::execOnCableInteractionComplete)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCableInteractionComplete(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZConnectedCableBox::execOnDoorInteractionComplete)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDoorInteractionComplete(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZConnectedCableBox::execOnRep_CurrentSequenceIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentSequenceIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZConnectedCableBox::execOnRep_DoorOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DoorOpen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZConnectedCableBox::execOnRep_FailCounter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_FailCounter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZConnectedCableBox::execOnRep_InteractionStates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_InteractionStates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZConnectedCableBox::execSetCorrectColorIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InCorrectColorIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCorrectColorIndex(Z_Param_InCorrectColorIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZConnectedCableBox::execSetCorrectColorSequence)
	{
		P_GET_TARRAY(int32,Z_Param_CorrectSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCorrectColorSequence(Z_Param_CorrectSequence);
		P_NATIVE_END;
	}
	static FName NAME_ASBZConnectedCableBox_BP_FlipSwitch = FName(TEXT("BP_FlipSwitch"));
	void ASBZConnectedCableBox::BP_FlipSwitch(int32 Index, bool bDoCosmetics, bool bReset)
	{
		SBZConnectedCableBox_eventBP_FlipSwitch_Parms Parms;
		Parms.Index=Index;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		Parms.bReset=bReset ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZConnectedCableBox_BP_FlipSwitch),&Parms);
	}
	static FName NAME_ASBZConnectedCableBox_BP_OnComplete = FName(TEXT("BP_OnComplete"));
	void ASBZConnectedCableBox::BP_OnComplete(bool bWasSuccess)
	{
		SBZConnectedCableBox_eventBP_OnComplete_Parms Parms;
		Parms.bWasSuccess=bWasSuccess ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZConnectedCableBox_BP_OnComplete),&Parms);
	}
	static FName NAME_ASBZConnectedCableBox_BP_OpenDoor = FName(TEXT("BP_OpenDoor"));
	void ASBZConnectedCableBox::BP_OpenDoor(bool bDoCosmetics)
	{
		SBZConnectedCableBox_eventBP_OpenDoor_Parms Parms;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZConnectedCableBox_BP_OpenDoor),&Parms);
	}
	static FName NAME_ASBZConnectedCableBox_BP_UpdateFailCounter = FName(TEXT("BP_UpdateFailCounter"));
	void ASBZConnectedCableBox::BP_UpdateFailCounter(int32 NumberOfFails)
	{
		SBZConnectedCableBox_eventBP_UpdateFailCounter_Parms Parms;
		Parms.NumberOfFails=NumberOfFails;
		ProcessEvent(FindFunctionChecked(NAME_ASBZConnectedCableBox_BP_UpdateFailCounter),&Parms);
	}
	static FName NAME_ASBZConnectedCableBox_BP_UpdateInputsMade = FName(TEXT("BP_UpdateInputsMade"));
	void ASBZConnectedCableBox::BP_UpdateInputsMade(int32 InputsMade)
	{
		SBZConnectedCableBox_eventBP_UpdateInputsMade_Parms Parms;
		Parms.InputsMade=InputsMade;
		ProcessEvent(FindFunctionChecked(NAME_ASBZConnectedCableBox_BP_UpdateInputsMade),&Parms);
	}
	static FName NAME_ASBZConnectedCableBox_BP_UpdateModelNumber = FName(TEXT("BP_UpdateModelNumber"));
	void ASBZConnectedCableBox::BP_UpdateModelNumber(FText const& ModelNumberText)
	{
		SBZConnectedCableBox_eventBP_UpdateModelNumber_Parms Parms;
		Parms.ModelNumberText=ModelNumberText;
		ProcessEvent(FindFunctionChecked(NAME_ASBZConnectedCableBox_BP_UpdateModelNumber),&Parms);
	}
	void ASBZConnectedCableBox::StaticRegisterNativesASBZConnectedCableBox()
	{
		UClass* Class = ASBZConnectedCableBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableInteraction", &ASBZConnectedCableBox::execEnableInteraction },
			{ "OnCableInteractionComplete", &ASBZConnectedCableBox::execOnCableInteractionComplete },
			{ "OnDoorInteractionComplete", &ASBZConnectedCableBox::execOnDoorInteractionComplete },
			{ "OnRep_CurrentSequenceIndex", &ASBZConnectedCableBox::execOnRep_CurrentSequenceIndex },
			{ "OnRep_DoorOpen", &ASBZConnectedCableBox::execOnRep_DoorOpen },
			{ "OnRep_FailCounter", &ASBZConnectedCableBox::execOnRep_FailCounter },
			{ "OnRep_InteractionStates", &ASBZConnectedCableBox::execOnRep_InteractionStates },
			{ "SetCorrectColorIndex", &ASBZConnectedCableBox::execSetCorrectColorIndex },
			{ "SetCorrectColorSequence", &ASBZConnectedCableBox::execSetCorrectColorSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZConnectedCableBox_BP_FlipSwitch_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static void NewProp_bReset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZConnectedCableBox_BP_FlipSwitch_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZConnectedCableBox_eventBP_FlipSwitch_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZConnectedCableBox_BP_FlipSwitch_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZConnectedCableBox_eventBP_FlipSwitch_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZConnectedCableBox_BP_FlipSwitch_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZConnectedCableBox_eventBP_FlipSwitch_Parms), &Z_Construct_UFunction_ASBZConnectedCableBox_BP_FlipSwitch_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZConnectedCableBox_BP_FlipSwitch_Statics::NewProp_bReset_SetBit(void* Obj)
	{
		((SBZConnectedCableBox_eventBP_FlipSwitch_Parms*)Obj)->bReset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZConnectedCableBox_BP_FlipSwitch_Statics::NewProp_bReset = { "bReset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZConnectedCableBox_eventBP_FlipSwitch_Parms), &Z_Construct_UFunction_ASBZConnectedCableBox_BP_FlipSwitch_Statics::NewProp_bReset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZConnectedCableBox_BP_FlipSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedCableBox_BP_FlipSwitch_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedCableBox_BP_FlipSwitch_Statics::NewProp_bDoCosmetics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedCableBox_BP_FlipSwitch_Statics::NewProp_bReset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedCableBox_BP_FlipSwitch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedCableBox_BP_FlipSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedCableBox, nullptr, "BP_FlipSwitch", nullptr, nullptr, sizeof(SBZConnectedCableBox_eventBP_FlipSwitch_Parms), Z_Construct_UFunction_ASBZConnectedCableBox_BP_FlipSwitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_BP_FlipSwitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedCableBox_BP_FlipSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_BP_FlipSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedCableBox_BP_FlipSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedCableBox_BP_FlipSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZConnectedCableBox_BP_OnComplete_Statics
	{
		static void NewProp_bWasSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZConnectedCableBox_BP_OnComplete_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((SBZConnectedCableBox_eventBP_OnComplete_Parms*)Obj)->bWasSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZConnectedCableBox_BP_OnComplete_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZConnectedCableBox_eventBP_OnComplete_Parms), &Z_Construct_UFunction_ASBZConnectedCableBox_BP_OnComplete_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZConnectedCableBox_BP_OnComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedCableBox_BP_OnComplete_Statics::NewProp_bWasSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedCableBox_BP_OnComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedCableBox_BP_OnComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedCableBox, nullptr, "BP_OnComplete", nullptr, nullptr, sizeof(SBZConnectedCableBox_eventBP_OnComplete_Parms), Z_Construct_UFunction_ASBZConnectedCableBox_BP_OnComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_BP_OnComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedCableBox_BP_OnComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_BP_OnComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedCableBox_BP_OnComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedCableBox_BP_OnComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZConnectedCableBox_BP_OpenDoor_Statics
	{
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZConnectedCableBox_BP_OpenDoor_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZConnectedCableBox_eventBP_OpenDoor_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZConnectedCableBox_BP_OpenDoor_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZConnectedCableBox_eventBP_OpenDoor_Parms), &Z_Construct_UFunction_ASBZConnectedCableBox_BP_OpenDoor_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZConnectedCableBox_BP_OpenDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedCableBox_BP_OpenDoor_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedCableBox_BP_OpenDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedCableBox_BP_OpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedCableBox, nullptr, "BP_OpenDoor", nullptr, nullptr, sizeof(SBZConnectedCableBox_eventBP_OpenDoor_Parms), Z_Construct_UFunction_ASBZConnectedCableBox_BP_OpenDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_BP_OpenDoor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedCableBox_BP_OpenDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_BP_OpenDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedCableBox_BP_OpenDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedCableBox_BP_OpenDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateFailCounter_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfFails;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateFailCounter_Statics::NewProp_NumberOfFails = { "NumberOfFails", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZConnectedCableBox_eventBP_UpdateFailCounter_Parms, NumberOfFails), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateFailCounter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateFailCounter_Statics::NewProp_NumberOfFails,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateFailCounter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateFailCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedCableBox, nullptr, "BP_UpdateFailCounter", nullptr, nullptr, sizeof(SBZConnectedCableBox_eventBP_UpdateFailCounter_Parms), Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateFailCounter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateFailCounter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateFailCounter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateFailCounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateFailCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateFailCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateInputsMade_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InputsMade;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateInputsMade_Statics::NewProp_InputsMade = { "InputsMade", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZConnectedCableBox_eventBP_UpdateInputsMade_Parms, InputsMade), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateInputsMade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateInputsMade_Statics::NewProp_InputsMade,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateInputsMade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateInputsMade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedCableBox, nullptr, "BP_UpdateInputsMade", nullptr, nullptr, sizeof(SBZConnectedCableBox_eventBP_UpdateInputsMade_Parms), Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateInputsMade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateInputsMade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateInputsMade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateInputsMade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateInputsMade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateInputsMade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateModelNumber_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModelNumberText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ModelNumberText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateModelNumber_Statics::NewProp_ModelNumberText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateModelNumber_Statics::NewProp_ModelNumberText = { "ModelNumberText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZConnectedCableBox_eventBP_UpdateModelNumber_Parms, ModelNumberText), METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateModelNumber_Statics::NewProp_ModelNumberText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateModelNumber_Statics::NewProp_ModelNumberText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateModelNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateModelNumber_Statics::NewProp_ModelNumberText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateModelNumber_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateModelNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedCableBox, nullptr, "BP_UpdateModelNumber", nullptr, nullptr, sizeof(SBZConnectedCableBox_eventBP_UpdateModelNumber_Parms), Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateModelNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateModelNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateModelNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateModelNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateModelNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateModelNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZConnectedCableBox_EnableInteraction_Statics
	{
		struct SBZConnectedCableBox_eventEnableInteraction_Parms
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
	void Z_Construct_UFunction_ASBZConnectedCableBox_EnableInteraction_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZConnectedCableBox_eventEnableInteraction_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZConnectedCableBox_EnableInteraction_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZConnectedCableBox_eventEnableInteraction_Parms), &Z_Construct_UFunction_ASBZConnectedCableBox_EnableInteraction_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZConnectedCableBox_EnableInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedCableBox_EnableInteraction_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedCableBox_EnableInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedCableBox_EnableInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedCableBox, nullptr, "EnableInteraction", nullptr, nullptr, sizeof(SBZConnectedCableBox_eventEnableInteraction_Parms), Z_Construct_UFunction_ASBZConnectedCableBox_EnableInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_EnableInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedCableBox_EnableInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_EnableInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedCableBox_EnableInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedCableBox_EnableInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZConnectedCableBox_OnCableInteractionComplete_Statics
	{
		struct SBZConnectedCableBox_eventOnCableInteractionComplete_Parms
		{
			USBZBaseInteractableComponent* Interactable;
			USBZInteractorComponent* Interactor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedCableBox_OnCableInteractionComplete_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZConnectedCableBox_OnCableInteractionComplete_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZConnectedCableBox_eventOnCableInteractionComplete_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedCableBox_OnCableInteractionComplete_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_OnCableInteractionComplete_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedCableBox_OnCableInteractionComplete_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZConnectedCableBox_OnCableInteractionComplete_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZConnectedCableBox_eventOnCableInteractionComplete_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedCableBox_OnCableInteractionComplete_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_OnCableInteractionComplete_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZConnectedCableBox_OnCableInteractionComplete_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZConnectedCableBox_eventOnCableInteractionComplete_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZConnectedCableBox_OnCableInteractionComplete_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZConnectedCableBox_eventOnCableInteractionComplete_Parms), &Z_Construct_UFunction_ASBZConnectedCableBox_OnCableInteractionComplete_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZConnectedCableBox_OnCableInteractionComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedCableBox_OnCableInteractionComplete_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedCableBox_OnCableInteractionComplete_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedCableBox_OnCableInteractionComplete_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedCableBox_OnCableInteractionComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedCableBox_OnCableInteractionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedCableBox, nullptr, "OnCableInteractionComplete", nullptr, nullptr, sizeof(SBZConnectedCableBox_eventOnCableInteractionComplete_Parms), Z_Construct_UFunction_ASBZConnectedCableBox_OnCableInteractionComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_OnCableInteractionComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedCableBox_OnCableInteractionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_OnCableInteractionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedCableBox_OnCableInteractionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedCableBox_OnCableInteractionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZConnectedCableBox_OnDoorInteractionComplete_Statics
	{
		struct SBZConnectedCableBox_eventOnDoorInteractionComplete_Parms
		{
			USBZBaseInteractableComponent* Interactable;
			USBZInteractorComponent* Interactor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedCableBox_OnDoorInteractionComplete_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZConnectedCableBox_OnDoorInteractionComplete_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZConnectedCableBox_eventOnDoorInteractionComplete_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedCableBox_OnDoorInteractionComplete_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_OnDoorInteractionComplete_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedCableBox_OnDoorInteractionComplete_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZConnectedCableBox_OnDoorInteractionComplete_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZConnectedCableBox_eventOnDoorInteractionComplete_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedCableBox_OnDoorInteractionComplete_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_OnDoorInteractionComplete_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZConnectedCableBox_OnDoorInteractionComplete_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZConnectedCableBox_eventOnDoorInteractionComplete_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZConnectedCableBox_OnDoorInteractionComplete_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZConnectedCableBox_eventOnDoorInteractionComplete_Parms), &Z_Construct_UFunction_ASBZConnectedCableBox_OnDoorInteractionComplete_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZConnectedCableBox_OnDoorInteractionComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedCableBox_OnDoorInteractionComplete_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedCableBox_OnDoorInteractionComplete_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedCableBox_OnDoorInteractionComplete_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedCableBox_OnDoorInteractionComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedCableBox_OnDoorInteractionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedCableBox, nullptr, "OnDoorInteractionComplete", nullptr, nullptr, sizeof(SBZConnectedCableBox_eventOnDoorInteractionComplete_Parms), Z_Construct_UFunction_ASBZConnectedCableBox_OnDoorInteractionComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_OnDoorInteractionComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedCableBox_OnDoorInteractionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_OnDoorInteractionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedCableBox_OnDoorInteractionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedCableBox_OnDoorInteractionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_CurrentSequenceIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_CurrentSequenceIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_CurrentSequenceIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedCableBox, nullptr, "OnRep_CurrentSequenceIndex", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_CurrentSequenceIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_CurrentSequenceIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_CurrentSequenceIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_CurrentSequenceIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_DoorOpen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_DoorOpen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_DoorOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedCableBox, nullptr, "OnRep_DoorOpen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_DoorOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_DoorOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_DoorOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_DoorOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_FailCounter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_FailCounter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_FailCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedCableBox, nullptr, "OnRep_FailCounter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_FailCounter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_FailCounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_FailCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_FailCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_InteractionStates_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_InteractionStates_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_InteractionStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedCableBox, nullptr, "OnRep_InteractionStates", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_InteractionStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_InteractionStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_InteractionStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_InteractionStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorIndex_Statics
	{
		struct SBZConnectedCableBox_eventSetCorrectColorIndex_Parms
		{
			int32 InCorrectColorIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCorrectColorIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InCorrectColorIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorIndex_Statics::NewProp_InCorrectColorIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorIndex_Statics::NewProp_InCorrectColorIndex = { "InCorrectColorIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZConnectedCableBox_eventSetCorrectColorIndex_Parms, InCorrectColorIndex), METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorIndex_Statics::NewProp_InCorrectColorIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorIndex_Statics::NewProp_InCorrectColorIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorIndex_Statics::NewProp_InCorrectColorIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedCableBox, nullptr, "SetCorrectColorIndex", nullptr, nullptr, sizeof(SBZConnectedCableBox_eventSetCorrectColorIndex_Parms), Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorSequence_Statics
	{
		struct SBZConnectedCableBox_eventSetCorrectColorSequence_Parms
		{
			TArray<int32> CorrectSequence;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CorrectSequence_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CorrectSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CorrectSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorSequence_Statics::NewProp_CorrectSequence_Inner = { "CorrectSequence", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorSequence_Statics::NewProp_CorrectSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorSequence_Statics::NewProp_CorrectSequence = { "CorrectSequence", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZConnectedCableBox_eventSetCorrectColorSequence_Parms, CorrectSequence), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorSequence_Statics::NewProp_CorrectSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorSequence_Statics::NewProp_CorrectSequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorSequence_Statics::NewProp_CorrectSequence_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorSequence_Statics::NewProp_CorrectSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedCableBox, nullptr, "SetCorrectColorSequence", nullptr, nullptr, sizeof(SBZConnectedCableBox_eventSetCorrectColorSequence_Parms), Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZConnectedCableBox_NoRegister()
	{
		return ASBZConnectedCableBox::StaticClass();
	}
	struct Z_Construct_UClass_ASBZConnectedCableBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDoorOpened_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDoorOpened;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorInteractableSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DoorInteractableSelector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CableInteractablesSelectors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CableInteractablesSelectors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CableInteractablesSelectors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedChances_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AllowedChances;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentCorrectSequence_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCorrectSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentCorrectSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSequenceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentSequenceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InteractionStates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDoorOpen_MetaData[];
#endif
		static void NewProp_bIsDoorOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDoorOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentModelNumberText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CurrentModelNumberText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CableInteractables_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CableInteractables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CableInteractables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CableInteractables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCorrectColorIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentCorrectColorIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCompleted_MetaData[];
#endif
		static void NewProp_bIsCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FailCounter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZConnectedCableBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZConnectedCableBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZConnectedCableBox_BP_FlipSwitch, "BP_FlipSwitch" }, // 401469065
		{ &Z_Construct_UFunction_ASBZConnectedCableBox_BP_OnComplete, "BP_OnComplete" }, // 2580440742
		{ &Z_Construct_UFunction_ASBZConnectedCableBox_BP_OpenDoor, "BP_OpenDoor" }, // 4146880608
		{ &Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateFailCounter, "BP_UpdateFailCounter" }, // 2280331087
		{ &Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateInputsMade, "BP_UpdateInputsMade" }, // 3695117904
		{ &Z_Construct_UFunction_ASBZConnectedCableBox_BP_UpdateModelNumber, "BP_UpdateModelNumber" }, // 462712208
		{ &Z_Construct_UFunction_ASBZConnectedCableBox_EnableInteraction, "EnableInteraction" }, // 3928290265
		{ &Z_Construct_UFunction_ASBZConnectedCableBox_OnCableInteractionComplete, "OnCableInteractionComplete" }, // 3825398406
		{ &Z_Construct_UFunction_ASBZConnectedCableBox_OnDoorInteractionComplete, "OnDoorInteractionComplete" }, // 2976475397
		{ &Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_CurrentSequenceIndex, "OnRep_CurrentSequenceIndex" }, // 2376121263
		{ &Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_DoorOpen, "OnRep_DoorOpen" }, // 2318557609
		{ &Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_FailCounter, "OnRep_FailCounter" }, // 3949566320
		{ &Z_Construct_UFunction_ASBZConnectedCableBox_OnRep_InteractionStates, "OnRep_InteractionStates" }, // 3572863140
		{ &Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorIndex, "SetCorrectColorIndex" }, // 688847429
		{ &Z_Construct_UFunction_ASBZConnectedCableBox_SetCorrectColorSequence, "SetCorrectColorSequence" }, // 1394351033
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedCableBox_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZConnectedCableBox.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_OnComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedCableBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedCableBox, OnComplete), Z_Construct_UDelegateFunction_Starbreeze_SBZOnCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_OnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_OnComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_OnDoorOpened_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedCableBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_OnDoorOpened = { "OnDoorOpened", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedCableBox, OnDoorOpened), Z_Construct_UDelegateFunction_Starbreeze_SBZCableBoxDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_OnDoorOpened_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_OnDoorOpened_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_DoorInteractableSelector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedCableBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_DoorInteractableSelector = { "DoorInteractableSelector", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedCableBox, DoorInteractableSelector), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_DoorInteractableSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_DoorInteractableSelector_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CableInteractablesSelectors_Inner = { "CableInteractablesSelectors", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CableInteractablesSelectors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedCableBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CableInteractablesSelectors = { "CableInteractablesSelectors", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedCableBox, CableInteractablesSelectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CableInteractablesSelectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CableInteractablesSelectors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_AllowedChances_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedCableBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_AllowedChances = { "AllowedChances", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedCableBox, AllowedChances), METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_AllowedChances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_AllowedChances_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CurrentCorrectSequence_Inner = { "CurrentCorrectSequence", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CurrentCorrectSequence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedCableBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CurrentCorrectSequence = { "CurrentCorrectSequence", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedCableBox, CurrentCorrectSequence), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CurrentCorrectSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CurrentCorrectSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CurrentSequenceIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedCableBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CurrentSequenceIndex = { "CurrentSequenceIndex", "OnRep_CurrentSequenceIndex", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedCableBox, CurrentSequenceIndex), METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CurrentSequenceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CurrentSequenceIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_InteractionStates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedCableBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_InteractionStates = { "InteractionStates", "OnRep_InteractionStates", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedCableBox, InteractionStates), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_InteractionStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_InteractionStates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_bIsDoorOpen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedCableBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	void Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_bIsDoorOpen_SetBit(void* Obj)
	{
		((ASBZConnectedCableBox*)Obj)->bIsDoorOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_bIsDoorOpen = { "bIsDoorOpen", "OnRep_DoorOpen", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZConnectedCableBox), &Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_bIsDoorOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_bIsDoorOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_bIsDoorOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CurrentModelNumberText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedCableBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CurrentModelNumberText = { "CurrentModelNumberText", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedCableBox, CurrentModelNumberText), METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CurrentModelNumberText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CurrentModelNumberText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CableInteractables_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedCableBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CableInteractables_Inner = { "CableInteractables", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CableInteractables_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CableInteractables_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CableInteractables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedCableBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CableInteractables = { "CableInteractables", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedCableBox, CableInteractables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CableInteractables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CableInteractables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_DoorInteractable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedCableBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_DoorInteractable = { "DoorInteractable", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedCableBox, DoorInteractable), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_DoorInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_DoorInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CurrentCorrectColorIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedCableBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CurrentCorrectColorIndex = { "CurrentCorrectColorIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedCableBox, CurrentCorrectColorIndex), METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CurrentCorrectColorIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CurrentCorrectColorIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_bIsCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedCableBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	void Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_bIsCompleted_SetBit(void* Obj)
	{
		((ASBZConnectedCableBox*)Obj)->bIsCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_bIsCompleted = { "bIsCompleted", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZConnectedCableBox), &Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_bIsCompleted_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_bIsCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_bIsCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_FailCounter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedCableBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedCableBox.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_FailCounter = { "FailCounter", "OnRep_FailCounter", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedCableBox, FailCounter), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_FailCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_FailCounter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZConnectedCableBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_OnComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_OnDoorOpened,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_DoorInteractableSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CableInteractablesSelectors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CableInteractablesSelectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_AllowedChances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CurrentCorrectSequence_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CurrentCorrectSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CurrentSequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_InteractionStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_bIsDoorOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CurrentModelNumberText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CableInteractables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CableInteractables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_DoorInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_CurrentCorrectColorIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_bIsCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedCableBox_Statics::NewProp_FailCounter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZConnectedCableBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZConnectedCableBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZConnectedCableBox_Statics::ClassParams = {
		&ASBZConnectedCableBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZConnectedCableBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedCableBox_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedCableBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedCableBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZConnectedCableBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZConnectedCableBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZConnectedCableBox, 1470189706);
	template<> STARBREEZE_API UClass* StaticClass<ASBZConnectedCableBox>()
	{
		return ASBZConnectedCableBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZConnectedCableBox(Z_Construct_UClass_ASBZConnectedCableBox, &ASBZConnectedCableBox::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZConnectedCableBox"), false, nullptr, nullptr, nullptr);

	void ASBZConnectedCableBox::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentSequenceIndex(TEXT("CurrentSequenceIndex"));
		static const FName Name_InteractionStates(TEXT("InteractionStates"));
		static const FName Name_bIsDoorOpen(TEXT("bIsDoorOpen"));
		static const FName Name_bIsCompleted(TEXT("bIsCompleted"));
		static const FName Name_FailCounter(TEXT("FailCounter"));

		const bool bIsValid = true
			&& Name_CurrentSequenceIndex == ClassReps[(int32)ENetFields_Private::CurrentSequenceIndex].Property->GetFName()
			&& Name_InteractionStates == ClassReps[(int32)ENetFields_Private::InteractionStates].Property->GetFName()
			&& Name_bIsDoorOpen == ClassReps[(int32)ENetFields_Private::bIsDoorOpen].Property->GetFName()
			&& Name_bIsCompleted == ClassReps[(int32)ENetFields_Private::bIsCompleted].Property->GetFName()
			&& Name_FailCounter == ClassReps[(int32)ENetFields_Private::FailCounter].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZConnectedCableBox"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZConnectedCableBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

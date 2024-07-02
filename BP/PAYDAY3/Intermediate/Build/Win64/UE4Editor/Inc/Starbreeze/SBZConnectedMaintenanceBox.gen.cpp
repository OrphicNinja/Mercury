// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZConnectedMaintenanceBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZConnectedMaintenanceBox() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZConnectedMaintenanceBox_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZConnectedMaintenanceBox();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMaintenanceBoxState();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZMaintenanceBoxBoolDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZMaintenanceBoxDelegate__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZConnectedCableBox_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZObjective_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSequenceViewerSet();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActionNotificationAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZShoutTargetComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMainteneanceBoxSequence();
// End Cross Module References
	DEFINE_FUNCTION(ASBZConnectedMaintenanceBox::execEnableCutting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableCutting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZConnectedMaintenanceBox::execMulticast_SetNextColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetNextColor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZConnectedMaintenanceBox::execMulticast_SetState)
	{
		P_GET_ENUM(ESBZMaintenanceBoxState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetState_Implementation(ESBZMaintenanceBoxState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZConnectedMaintenanceBox::execOnCableBoxComplete)
	{
		P_GET_UBOOL(Z_Param_bSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCableBoxComplete(Z_Param_bSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZConnectedMaintenanceBox::execOnRep_CompletedCableBoxes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CompletedCableBoxes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZConnectedMaintenanceBox::execOnRep_CurrentState)
	{
		P_GET_ENUM(ESBZMaintenanceBoxState,Z_Param_OldState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentState(ESBZMaintenanceBoxState(Z_Param_OldState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZConnectedMaintenanceBox::execOnServerCompleteInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerCompleteInteraction(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZConnectedMaintenanceBox::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	static FName NAME_ASBZConnectedMaintenanceBox_BP_OnStateChanged = FName(TEXT("BP_OnStateChanged"));
	void ASBZConnectedMaintenanceBox::BP_OnStateChanged(ESBZMaintenanceBoxState NewState)
	{
		SBZConnectedMaintenanceBox_eventBP_OnStateChanged_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZConnectedMaintenanceBox_BP_OnStateChanged),&Parms);
	}
	static FName NAME_ASBZConnectedMaintenanceBox_BP_UpdateColors = FName(TEXT("BP_UpdateColors"));
	void ASBZConnectedMaintenanceBox::BP_UpdateColors(TArray<int32> const& SequenceArray, int32 NumberOfCompleteCables)
	{
		SBZConnectedMaintenanceBox_eventBP_UpdateColors_Parms Parms;
		Parms.SequenceArray=SequenceArray;
		Parms.NumberOfCompleteCables=NumberOfCompleteCables;
		ProcessEvent(FindFunctionChecked(NAME_ASBZConnectedMaintenanceBox_BP_UpdateColors),&Parms);
	}
	static FName NAME_ASBZConnectedMaintenanceBox_BP_UpdateNumberOfConnectedBoxes = FName(TEXT("BP_UpdateNumberOfConnectedBoxes"));
	void ASBZConnectedMaintenanceBox::BP_UpdateNumberOfConnectedBoxes(const int32 NumberOfBoxes)
	{
		SBZConnectedMaintenanceBox_eventBP_UpdateNumberOfConnectedBoxes_Parms Parms;
		Parms.NumberOfBoxes=NumberOfBoxes;
		ProcessEvent(FindFunctionChecked(NAME_ASBZConnectedMaintenanceBox_BP_UpdateNumberOfConnectedBoxes),&Parms);
	}
	static FName NAME_ASBZConnectedMaintenanceBox_Multicast_SetNextColor = FName(TEXT("Multicast_SetNextColor"));
	void ASBZConnectedMaintenanceBox::Multicast_SetNextColor()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZConnectedMaintenanceBox_Multicast_SetNextColor),NULL);
	}
	static FName NAME_ASBZConnectedMaintenanceBox_Multicast_SetState = FName(TEXT("Multicast_SetState"));
	void ASBZConnectedMaintenanceBox::Multicast_SetState(ESBZMaintenanceBoxState NewState)
	{
		SBZConnectedMaintenanceBox_eventMulticast_SetState_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZConnectedMaintenanceBox_Multicast_SetState),&Parms);
	}
	void ASBZConnectedMaintenanceBox::StaticRegisterNativesASBZConnectedMaintenanceBox()
	{
		UClass* Class = ASBZConnectedMaintenanceBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableCutting", &ASBZConnectedMaintenanceBox::execEnableCutting },
			{ "Multicast_SetNextColor", &ASBZConnectedMaintenanceBox::execMulticast_SetNextColor },
			{ "Multicast_SetState", &ASBZConnectedMaintenanceBox::execMulticast_SetState },
			{ "OnCableBoxComplete", &ASBZConnectedMaintenanceBox::execOnCableBoxComplete },
			{ "OnRep_CompletedCableBoxes", &ASBZConnectedMaintenanceBox::execOnRep_CompletedCableBoxes },
			{ "OnRep_CurrentState", &ASBZConnectedMaintenanceBox::execOnRep_CurrentState },
			{ "OnServerCompleteInteraction", &ASBZConnectedMaintenanceBox::execOnServerCompleteInteraction },
			{ "SetEnabled", &ASBZConnectedMaintenanceBox::execSetEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_OnStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_OnStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_OnStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZConnectedMaintenanceBox_eventBP_OnStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZMaintenanceBoxState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_OnStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_OnStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_OnStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedMaintenanceBox, nullptr, "BP_OnStateChanged", nullptr, nullptr, sizeof(SBZConnectedMaintenanceBox_eventBP_OnStateChanged_Parms), Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_OnStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_OnStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_OnStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_OnStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateColors_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SequenceArray;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfCompleteCables;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateColors_Statics::NewProp_SequenceArray_Inner = { "SequenceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateColors_Statics::NewProp_SequenceArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateColors_Statics::NewProp_SequenceArray = { "SequenceArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZConnectedMaintenanceBox_eventBP_UpdateColors_Parms, SequenceArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateColors_Statics::NewProp_SequenceArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateColors_Statics::NewProp_SequenceArray_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateColors_Statics::NewProp_NumberOfCompleteCables = { "NumberOfCompleteCables", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZConnectedMaintenanceBox_eventBP_UpdateColors_Parms, NumberOfCompleteCables), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateColors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateColors_Statics::NewProp_SequenceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateColors_Statics::NewProp_SequenceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateColors_Statics::NewProp_NumberOfCompleteCables,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateColors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedMaintenanceBox, nullptr, "BP_UpdateColors", nullptr, nullptr, sizeof(SBZConnectedMaintenanceBox_eventBP_UpdateColors_Parms), Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateNumberOfConnectedBoxes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfBoxes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfBoxes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateNumberOfConnectedBoxes_Statics::NewProp_NumberOfBoxes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateNumberOfConnectedBoxes_Statics::NewProp_NumberOfBoxes = { "NumberOfBoxes", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZConnectedMaintenanceBox_eventBP_UpdateNumberOfConnectedBoxes_Parms, NumberOfBoxes), METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateNumberOfConnectedBoxes_Statics::NewProp_NumberOfBoxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateNumberOfConnectedBoxes_Statics::NewProp_NumberOfBoxes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateNumberOfConnectedBoxes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateNumberOfConnectedBoxes_Statics::NewProp_NumberOfBoxes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateNumberOfConnectedBoxes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateNumberOfConnectedBoxes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedMaintenanceBox, nullptr, "BP_UpdateNumberOfConnectedBoxes", nullptr, nullptr, sizeof(SBZConnectedMaintenanceBox_eventBP_UpdateNumberOfConnectedBoxes_Parms), Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateNumberOfConnectedBoxes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateNumberOfConnectedBoxes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateNumberOfConnectedBoxes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateNumberOfConnectedBoxes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateNumberOfConnectedBoxes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateNumberOfConnectedBoxes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZConnectedMaintenanceBox_EnableCutting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedMaintenanceBox_EnableCutting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_EnableCutting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedMaintenanceBox, nullptr, "EnableCutting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_EnableCutting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_EnableCutting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedMaintenanceBox_EnableCutting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedMaintenanceBox_EnableCutting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZConnectedMaintenanceBox_Multicast_SetNextColor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedMaintenanceBox_Multicast_SetNextColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_Multicast_SetNextColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedMaintenanceBox, nullptr, "Multicast_SetNextColor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_Multicast_SetNextColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_Multicast_SetNextColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedMaintenanceBox_Multicast_SetNextColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedMaintenanceBox_Multicast_SetNextColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZConnectedMaintenanceBox_Multicast_SetState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_Multicast_SetState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_Multicast_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZConnectedMaintenanceBox_eventMulticast_SetState_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZMaintenanceBoxState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZConnectedMaintenanceBox_Multicast_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedMaintenanceBox_Multicast_SetState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedMaintenanceBox_Multicast_SetState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedMaintenanceBox_Multicast_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_Multicast_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedMaintenanceBox, nullptr, "Multicast_SetState", nullptr, nullptr, sizeof(SBZConnectedMaintenanceBox_eventMulticast_SetState_Parms), Z_Construct_UFunction_ASBZConnectedMaintenanceBox_Multicast_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_Multicast_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_Multicast_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_Multicast_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedMaintenanceBox_Multicast_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedMaintenanceBox_Multicast_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnCableBoxComplete_Statics
	{
		struct SBZConnectedMaintenanceBox_eventOnCableBoxComplete_Parms
		{
			bool bSuccessful;
		};
		static void NewProp_bSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnCableBoxComplete_Statics::NewProp_bSuccessful_SetBit(void* Obj)
	{
		((SBZConnectedMaintenanceBox_eventOnCableBoxComplete_Parms*)Obj)->bSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnCableBoxComplete_Statics::NewProp_bSuccessful = { "bSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZConnectedMaintenanceBox_eventOnCableBoxComplete_Parms), &Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnCableBoxComplete_Statics::NewProp_bSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnCableBoxComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnCableBoxComplete_Statics::NewProp_bSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnCableBoxComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnCableBoxComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedMaintenanceBox, nullptr, "OnCableBoxComplete", nullptr, nullptr, sizeof(SBZConnectedMaintenanceBox_eventOnCableBoxComplete_Parms), Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnCableBoxComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnCableBoxComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnCableBoxComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnCableBoxComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnCableBoxComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnCableBoxComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnRep_CompletedCableBoxes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnRep_CompletedCableBoxes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnRep_CompletedCableBoxes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedMaintenanceBox, nullptr, "OnRep_CompletedCableBoxes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnRep_CompletedCableBoxes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnRep_CompletedCableBoxes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnRep_CompletedCableBoxes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnRep_CompletedCableBoxes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnRep_CurrentState_Statics
	{
		struct SBZConnectedMaintenanceBox_eventOnRep_CurrentState_Parms
		{
			ESBZMaintenanceBoxState OldState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnRep_CurrentState_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnRep_CurrentState_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZConnectedMaintenanceBox_eventOnRep_CurrentState_Parms, OldState), Z_Construct_UEnum_Starbreeze_ESBZMaintenanceBoxState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnRep_CurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnRep_CurrentState_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnRep_CurrentState_Statics::NewProp_OldState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnRep_CurrentState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnRep_CurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedMaintenanceBox, nullptr, "OnRep_CurrentState", nullptr, nullptr, sizeof(SBZConnectedMaintenanceBox_eventOnRep_CurrentState_Parms), Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnRep_CurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnRep_CurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnRep_CurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnRep_CurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnRep_CurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnRep_CurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnServerCompleteInteraction_Statics
	{
		struct SBZConnectedMaintenanceBox_eventOnServerCompleteInteraction_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnServerCompleteInteraction_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnServerCompleteInteraction_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZConnectedMaintenanceBox_eventOnServerCompleteInteraction_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnServerCompleteInteraction_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnServerCompleteInteraction_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnServerCompleteInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnServerCompleteInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZConnectedMaintenanceBox_eventOnServerCompleteInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnServerCompleteInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnServerCompleteInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnServerCompleteInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZConnectedMaintenanceBox_eventOnServerCompleteInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnServerCompleteInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZConnectedMaintenanceBox_eventOnServerCompleteInteraction_Parms), &Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnServerCompleteInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnServerCompleteInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnServerCompleteInteraction_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnServerCompleteInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnServerCompleteInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnServerCompleteInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnServerCompleteInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedMaintenanceBox, nullptr, "OnServerCompleteInteraction", nullptr, nullptr, sizeof(SBZConnectedMaintenanceBox_eventOnServerCompleteInteraction_Parms), Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnServerCompleteInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnServerCompleteInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnServerCompleteInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnServerCompleteInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnServerCompleteInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnServerCompleteInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZConnectedMaintenanceBox_SetEnabled_Statics
	{
		struct SBZConnectedMaintenanceBox_eventSetEnabled_Parms
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
	void Z_Construct_UFunction_ASBZConnectedMaintenanceBox_SetEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZConnectedMaintenanceBox_eventSetEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_SetEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZConnectedMaintenanceBox_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZConnectedMaintenanceBox_SetEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZConnectedMaintenanceBox_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZConnectedMaintenanceBox_SetEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZConnectedMaintenanceBox_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZConnectedMaintenanceBox_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZConnectedMaintenanceBox, nullptr, "SetEnabled", nullptr, nullptr, sizeof(SBZConnectedMaintenanceBox_eventSetEnabled_Parms), Z_Construct_UFunction_ASBZConnectedMaintenanceBox_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZConnectedMaintenanceBox_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZConnectedMaintenanceBox_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZConnectedMaintenanceBox_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZConnectedMaintenanceBox_NoRegister()
	{
		return ASBZConnectedMaintenanceBox::StaticClass();
	}
	struct Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMaintenanceBoxComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaintenanceBoxComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMaintenanceBoxEnabled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaintenanceBoxEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWrongColorFlipped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWrongColorFlipped;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConnectedCableBoxes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectedCableBoxes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConnectedCableBoxes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objective_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentModelNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CurrentModelNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfSequences_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfSequences;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequiresDeactivate_MetaData[];
#endif
		static void NewProp_bRequiresDeactivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequiresDeactivate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SequenceViewerSet_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceViewerSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SequenceViewerSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CableSymbols_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CableSymbols_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CableSymbols;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CableColorTexts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CableColorTexts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CableColorTexts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstNotificationAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstNotificationAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondNotificationAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondNotificationAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutlineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoutTargetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShoutTargetComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CorrectSequenceArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CorrectSequenceArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CorrectSequenceArray;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedCableBoxes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompletedCableBoxes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldUpdateCompletedCount_MetaData[];
#endif
		static void NewProp_bShouldUpdateCompletedCount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldUpdateCompletedCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasTriggeredSearch_MetaData[];
#endif
		static void NewProp_bHasTriggeredSearch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasTriggeredSearch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_OnStateChanged, "BP_OnStateChanged" }, // 2998047107
		{ &Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateColors, "BP_UpdateColors" }, // 1540491586
		{ &Z_Construct_UFunction_ASBZConnectedMaintenanceBox_BP_UpdateNumberOfConnectedBoxes, "BP_UpdateNumberOfConnectedBoxes" }, // 3116618608
		{ &Z_Construct_UFunction_ASBZConnectedMaintenanceBox_EnableCutting, "EnableCutting" }, // 3595736621
		{ &Z_Construct_UFunction_ASBZConnectedMaintenanceBox_Multicast_SetNextColor, "Multicast_SetNextColor" }, // 210985914
		{ &Z_Construct_UFunction_ASBZConnectedMaintenanceBox_Multicast_SetState, "Multicast_SetState" }, // 908922782
		{ &Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnCableBoxComplete, "OnCableBoxComplete" }, // 2905377399
		{ &Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnRep_CompletedCableBoxes, "OnRep_CompletedCableBoxes" }, // 4121228734
		{ &Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnRep_CurrentState, "OnRep_CurrentState" }, // 2500980193
		{ &Z_Construct_UFunction_ASBZConnectedMaintenanceBox_OnServerCompleteInteraction, "OnServerCompleteInteraction" }, // 1483316823
		{ &Z_Construct_UFunction_ASBZConnectedMaintenanceBox_SetEnabled, "SetEnabled" }, // 1325388892
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZConnectedMaintenanceBox.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_OnMaintenanceBoxComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedMaintenanceBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_OnMaintenanceBoxComplete = { "OnMaintenanceBoxComplete", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedMaintenanceBox, OnMaintenanceBoxComplete), Z_Construct_UDelegateFunction_Starbreeze_SBZMaintenanceBoxBoolDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_OnMaintenanceBoxComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_OnMaintenanceBoxComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_OnMaintenanceBoxEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedMaintenanceBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_OnMaintenanceBoxEnabled = { "OnMaintenanceBoxEnabled", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedMaintenanceBox, OnMaintenanceBoxEnabled), Z_Construct_UDelegateFunction_Starbreeze_SBZMaintenanceBoxDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_OnMaintenanceBoxEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_OnMaintenanceBoxEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_OnWrongColorFlipped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedMaintenanceBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_OnWrongColorFlipped = { "OnWrongColorFlipped", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedMaintenanceBox, OnWrongColorFlipped), Z_Construct_UDelegateFunction_Starbreeze_SBZMaintenanceBoxDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_OnWrongColorFlipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_OnWrongColorFlipped_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_ConnectedCableBoxes_Inner = { "ConnectedCableBoxes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZConnectedCableBox_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_ConnectedCableBoxes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedMaintenanceBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_ConnectedCableBoxes = { "ConnectedCableBoxes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedMaintenanceBox, ConnectedCableBoxes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_ConnectedCableBoxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_ConnectedCableBoxes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_Objective_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedMaintenanceBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedMaintenanceBox, Objective), Z_Construct_UClass_ASBZObjective_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_Objective_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_Objective_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CurrentModelNumber_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedMaintenanceBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CurrentModelNumber = { "CurrentModelNumber", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedMaintenanceBox, CurrentModelNumber), METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CurrentModelNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CurrentModelNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_SequenceLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedMaintenanceBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_SequenceLength = { "SequenceLength", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedMaintenanceBox, SequenceLength), METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_SequenceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_SequenceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_NumberOfSequences_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedMaintenanceBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_NumberOfSequences = { "NumberOfSequences", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedMaintenanceBox, NumberOfSequences), METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_NumberOfSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_NumberOfSequences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_bRequiresDeactivate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedMaintenanceBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	void Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_bRequiresDeactivate_SetBit(void* Obj)
	{
		((ASBZConnectedMaintenanceBox*)Obj)->bRequiresDeactivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_bRequiresDeactivate = { "bRequiresDeactivate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZConnectedMaintenanceBox), &Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_bRequiresDeactivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_bRequiresDeactivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_bRequiresDeactivate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_SequenceViewerSet_Inner = { "SequenceViewerSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSequenceViewerSet, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_SequenceViewerSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedMaintenanceBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_SequenceViewerSet = { "SequenceViewerSet", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedMaintenanceBox, SequenceViewerSet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_SequenceViewerSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_SequenceViewerSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_Seed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedMaintenanceBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedMaintenanceBox, Seed), METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_Seed_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CableSymbols_Inner = { "CableSymbols", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CableSymbols_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedMaintenanceBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CableSymbols = { "CableSymbols", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedMaintenanceBox, CableSymbols), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CableSymbols_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CableSymbols_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CableColorTexts_Inner = { "CableColorTexts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CableColorTexts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedMaintenanceBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CableColorTexts = { "CableColorTexts", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedMaintenanceBox, CableColorTexts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CableColorTexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CableColorTexts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_FirstNotificationAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedMaintenanceBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_FirstNotificationAsset = { "FirstNotificationAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedMaintenanceBox, FirstNotificationAsset), Z_Construct_UClass_USBZActionNotificationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_FirstNotificationAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_FirstNotificationAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_SecondNotificationAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedMaintenanceBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_SecondNotificationAsset = { "SecondNotificationAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedMaintenanceBox, SecondNotificationAsset), Z_Construct_UClass_USBZActionNotificationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_SecondNotificationAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_SecondNotificationAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_OutlineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedMaintenanceBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_OutlineComponent = { "OutlineComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedMaintenanceBox, OutlineComponent), Z_Construct_UClass_USBZOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_OutlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_OutlineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_ShoutTargetComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedMaintenanceBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_ShoutTargetComponent = { "ShoutTargetComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedMaintenanceBox, ShoutTargetComponent), Z_Construct_UClass_USBZShoutTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_ShoutTargetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_ShoutTargetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_InteractableComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedMaintenanceBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_InteractableComponent = { "InteractableComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedMaintenanceBox, InteractableComponent), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_InteractableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_InteractableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedMaintenanceBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedMaintenanceBox, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_StaticMesh_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CorrectSequenceArray_Inner = { "CorrectSequenceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZMainteneanceBoxSequence, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CorrectSequenceArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedMaintenanceBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CorrectSequenceArray = { "CorrectSequenceArray", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedMaintenanceBox, CorrectSequenceArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CorrectSequenceArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CorrectSequenceArray_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CurrentState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedMaintenanceBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CurrentState = { "CurrentState", "OnRep_CurrentState", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedMaintenanceBox, CurrentState), Z_Construct_UEnum_Starbreeze_ESBZMaintenanceBoxState, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CurrentState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CompletedCableBoxes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedMaintenanceBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CompletedCableBoxes = { "CompletedCableBoxes", "OnRep_CompletedCableBoxes", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectedMaintenanceBox, CompletedCableBoxes), METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CompletedCableBoxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CompletedCableBoxes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_bShouldUpdateCompletedCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedMaintenanceBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	void Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_bShouldUpdateCompletedCount_SetBit(void* Obj)
	{
		((ASBZConnectedMaintenanceBox*)Obj)->bShouldUpdateCompletedCount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_bShouldUpdateCompletedCount = { "bShouldUpdateCompletedCount", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZConnectedMaintenanceBox), &Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_bShouldUpdateCompletedCount_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_bShouldUpdateCompletedCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_bShouldUpdateCompletedCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_bHasTriggeredSearch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectedMaintenanceBox" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBox.h" },
	};
#endif
	void Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_bHasTriggeredSearch_SetBit(void* Obj)
	{
		((ASBZConnectedMaintenanceBox*)Obj)->bHasTriggeredSearch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_bHasTriggeredSearch = { "bHasTriggeredSearch", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZConnectedMaintenanceBox), &Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_bHasTriggeredSearch_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_bHasTriggeredSearch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_bHasTriggeredSearch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_OnMaintenanceBoxComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_OnMaintenanceBoxEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_OnWrongColorFlipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_ConnectedCableBoxes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_ConnectedCableBoxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_Objective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CurrentModelNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_SequenceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_NumberOfSequences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_bRequiresDeactivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_SequenceViewerSet_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_SequenceViewerSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CableSymbols_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CableSymbols,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CableColorTexts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CableColorTexts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_FirstNotificationAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_SecondNotificationAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_OutlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_ShoutTargetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_InteractableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CorrectSequenceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CorrectSequenceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CurrentState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CurrentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_CompletedCableBoxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_bShouldUpdateCompletedCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::NewProp_bHasTriggeredSearch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZConnectedMaintenanceBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::ClassParams = {
		&ASBZConnectedMaintenanceBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZConnectedMaintenanceBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZConnectedMaintenanceBox, 3185086683);
	template<> STARBREEZE_API UClass* StaticClass<ASBZConnectedMaintenanceBox>()
	{
		return ASBZConnectedMaintenanceBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZConnectedMaintenanceBox(Z_Construct_UClass_ASBZConnectedMaintenanceBox, &ASBZConnectedMaintenanceBox::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZConnectedMaintenanceBox"), false, nullptr, nullptr, nullptr);

	void ASBZConnectedMaintenanceBox::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentState(TEXT("CurrentState"));
		static const FName Name_CompletedCableBoxes(TEXT("CompletedCableBoxes"));

		const bool bIsValid = true
			&& Name_CurrentState == ClassReps[(int32)ENetFields_Private::CurrentState].Property->GetFName()
			&& Name_CompletedCableBoxes == ClassReps[(int32)ENetFields_Private::CompletedCableBoxes].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZConnectedMaintenanceBox"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZConnectedMaintenanceBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

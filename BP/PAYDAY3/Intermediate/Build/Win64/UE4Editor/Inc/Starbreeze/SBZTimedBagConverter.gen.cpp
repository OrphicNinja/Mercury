// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTimedBagConverter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTimedBagConverter() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTimedBagConverter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTimedBagConverter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSingleBagGenerator_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZTimedBagConverterDelegate__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBreakableInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZTimedBagConverter::execOnECMCountChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_OldCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AddedTime);
		P_GET_UBOOL(Z_Param_bInIsSignalScanActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnECMCountChanged(Z_Param_NewCount,Z_Param_OldCount,Z_Param_AddedTime,Z_Param_bInIsSignalScanActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZTimedBagConverter::execOnInteractionEnabledStateChanged)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractableComponent);
		P_GET_UBOOL(Z_Param_bNewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteractionEnabledStateChanged(Z_Param_InInteractableComponent,Z_Param_bNewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZTimedBagConverter::execOnServerBagPickedUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerBagPickedUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZTimedBagConverter::execOnServerCompleteInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractableComponent);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerCompleteInteraction(Z_Param_InInteractableComponent,Z_Param_Interactor,Z_Param_bIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZTimedBagConverter::execSetInteractionEnabled)
	{
		P_GET_UBOOL(Z_Param_bInEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractionEnabled(Z_Param_bInEnabled);
		P_NATIVE_END;
	}
	static FName NAME_ASBZTimedBagConverter_BP_OnBagConverted = FName(TEXT("BP_OnBagConverted"));
	void ASBZTimedBagConverter::BP_OnBagConverted()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZTimedBagConverter_BP_OnBagConverted),NULL);
	}
	static FName NAME_ASBZTimedBagConverter_BP_OnECMJammedChanged = FName(TEXT("BP_OnECMJammedChanged"));
	void ASBZTimedBagConverter::BP_OnECMJammedChanged(bool bIsJammed)
	{
		SBZTimedBagConverter_eventBP_OnECMJammedChanged_Parms Parms;
		Parms.bIsJammed=bIsJammed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZTimedBagConverter_BP_OnECMJammedChanged),&Parms);
	}
	void ASBZTimedBagConverter::StaticRegisterNativesASBZTimedBagConverter()
	{
		UClass* Class = ASBZTimedBagConverter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnECMCountChanged", &ASBZTimedBagConverter::execOnECMCountChanged },
			{ "OnInteractionEnabledStateChanged", &ASBZTimedBagConverter::execOnInteractionEnabledStateChanged },
			{ "OnServerBagPickedUp", &ASBZTimedBagConverter::execOnServerBagPickedUp },
			{ "OnServerCompleteInteraction", &ASBZTimedBagConverter::execOnServerCompleteInteraction },
			{ "SetInteractionEnabled", &ASBZTimedBagConverter::execSetInteractionEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZTimedBagConverter_BP_OnBagConverted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTimedBagConverter_BP_OnBagConverted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTimedBagConverter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTimedBagConverter_BP_OnBagConverted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTimedBagConverter, nullptr, "BP_OnBagConverted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTimedBagConverter_BP_OnBagConverted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTimedBagConverter_BP_OnBagConverted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTimedBagConverter_BP_OnBagConverted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTimedBagConverter_BP_OnBagConverted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTimedBagConverter_BP_OnECMJammedChanged_Statics
	{
		static void NewProp_bIsJammed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsJammed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZTimedBagConverter_BP_OnECMJammedChanged_Statics::NewProp_bIsJammed_SetBit(void* Obj)
	{
		((SBZTimedBagConverter_eventBP_OnECMJammedChanged_Parms*)Obj)->bIsJammed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZTimedBagConverter_BP_OnECMJammedChanged_Statics::NewProp_bIsJammed = { "bIsJammed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZTimedBagConverter_eventBP_OnECMJammedChanged_Parms), &Z_Construct_UFunction_ASBZTimedBagConverter_BP_OnECMJammedChanged_Statics::NewProp_bIsJammed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZTimedBagConverter_BP_OnECMJammedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTimedBagConverter_BP_OnECMJammedChanged_Statics::NewProp_bIsJammed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTimedBagConverter_BP_OnECMJammedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTimedBagConverter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTimedBagConverter_BP_OnECMJammedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTimedBagConverter, nullptr, "BP_OnECMJammedChanged", nullptr, nullptr, sizeof(SBZTimedBagConverter_eventBP_OnECMJammedChanged_Parms), Z_Construct_UFunction_ASBZTimedBagConverter_BP_OnECMJammedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTimedBagConverter_BP_OnECMJammedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTimedBagConverter_BP_OnECMJammedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTimedBagConverter_BP_OnECMJammedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTimedBagConverter_BP_OnECMJammedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTimedBagConverter_BP_OnECMJammedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTimedBagConverter_OnECMCountChanged_Statics
	{
		struct SBZTimedBagConverter_eventOnECMCountChanged_Parms
		{
			int32 NewCount;
			int32 OldCount;
			float AddedTime;
			bool bInIsSignalScanActive;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OldCount;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AddedTime;
		static void NewProp_bInIsSignalScanActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsSignalScanActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZTimedBagConverter_OnECMCountChanged_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTimedBagConverter_eventOnECMCountChanged_Parms, NewCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZTimedBagConverter_OnECMCountChanged_Statics::NewProp_OldCount = { "OldCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTimedBagConverter_eventOnECMCountChanged_Parms, OldCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZTimedBagConverter_OnECMCountChanged_Statics::NewProp_AddedTime = { "AddedTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTimedBagConverter_eventOnECMCountChanged_Parms, AddedTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZTimedBagConverter_OnECMCountChanged_Statics::NewProp_bInIsSignalScanActive_SetBit(void* Obj)
	{
		((SBZTimedBagConverter_eventOnECMCountChanged_Parms*)Obj)->bInIsSignalScanActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZTimedBagConverter_OnECMCountChanged_Statics::NewProp_bInIsSignalScanActive = { "bInIsSignalScanActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZTimedBagConverter_eventOnECMCountChanged_Parms), &Z_Construct_UFunction_ASBZTimedBagConverter_OnECMCountChanged_Statics::NewProp_bInIsSignalScanActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZTimedBagConverter_OnECMCountChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTimedBagConverter_OnECMCountChanged_Statics::NewProp_NewCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTimedBagConverter_OnECMCountChanged_Statics::NewProp_OldCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTimedBagConverter_OnECMCountChanged_Statics::NewProp_AddedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTimedBagConverter_OnECMCountChanged_Statics::NewProp_bInIsSignalScanActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTimedBagConverter_OnECMCountChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTimedBagConverter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTimedBagConverter_OnECMCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTimedBagConverter, nullptr, "OnECMCountChanged", nullptr, nullptr, sizeof(SBZTimedBagConverter_eventOnECMCountChanged_Parms), Z_Construct_UFunction_ASBZTimedBagConverter_OnECMCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTimedBagConverter_OnECMCountChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTimedBagConverter_OnECMCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTimedBagConverter_OnECMCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTimedBagConverter_OnECMCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTimedBagConverter_OnECMCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTimedBagConverter_OnInteractionEnabledStateChanged_Statics
	{
		struct SBZTimedBagConverter_eventOnInteractionEnabledStateChanged_Parms
		{
			const USBZBaseInteractableComponent* InInteractableComponent;
			bool bNewState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractableComponent;
		static void NewProp_bNewState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTimedBagConverter_OnInteractionEnabledStateChanged_Statics::NewProp_InInteractableComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZTimedBagConverter_OnInteractionEnabledStateChanged_Statics::NewProp_InInteractableComponent = { "InInteractableComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTimedBagConverter_eventOnInteractionEnabledStateChanged_Parms, InInteractableComponent), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZTimedBagConverter_OnInteractionEnabledStateChanged_Statics::NewProp_InInteractableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTimedBagConverter_OnInteractionEnabledStateChanged_Statics::NewProp_InInteractableComponent_MetaData)) };
	void Z_Construct_UFunction_ASBZTimedBagConverter_OnInteractionEnabledStateChanged_Statics::NewProp_bNewState_SetBit(void* Obj)
	{
		((SBZTimedBagConverter_eventOnInteractionEnabledStateChanged_Parms*)Obj)->bNewState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZTimedBagConverter_OnInteractionEnabledStateChanged_Statics::NewProp_bNewState = { "bNewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZTimedBagConverter_eventOnInteractionEnabledStateChanged_Parms), &Z_Construct_UFunction_ASBZTimedBagConverter_OnInteractionEnabledStateChanged_Statics::NewProp_bNewState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZTimedBagConverter_OnInteractionEnabledStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTimedBagConverter_OnInteractionEnabledStateChanged_Statics::NewProp_InInteractableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTimedBagConverter_OnInteractionEnabledStateChanged_Statics::NewProp_bNewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTimedBagConverter_OnInteractionEnabledStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTimedBagConverter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTimedBagConverter_OnInteractionEnabledStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTimedBagConverter, nullptr, "OnInteractionEnabledStateChanged", nullptr, nullptr, sizeof(SBZTimedBagConverter_eventOnInteractionEnabledStateChanged_Parms), Z_Construct_UFunction_ASBZTimedBagConverter_OnInteractionEnabledStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTimedBagConverter_OnInteractionEnabledStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTimedBagConverter_OnInteractionEnabledStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTimedBagConverter_OnInteractionEnabledStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTimedBagConverter_OnInteractionEnabledStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTimedBagConverter_OnInteractionEnabledStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTimedBagConverter_OnServerBagPickedUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTimedBagConverter_OnServerBagPickedUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTimedBagConverter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTimedBagConverter_OnServerBagPickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTimedBagConverter, nullptr, "OnServerBagPickedUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTimedBagConverter_OnServerBagPickedUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTimedBagConverter_OnServerBagPickedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTimedBagConverter_OnServerBagPickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTimedBagConverter_OnServerBagPickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTimedBagConverter_OnServerCompleteInteraction_Statics
	{
		struct SBZTimedBagConverter_eventOnServerCompleteInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractableComponent;
			USBZInteractorComponent* Interactor;
			bool bIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTimedBagConverter_OnServerCompleteInteraction_Statics::NewProp_InInteractableComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZTimedBagConverter_OnServerCompleteInteraction_Statics::NewProp_InInteractableComponent = { "InInteractableComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTimedBagConverter_eventOnServerCompleteInteraction_Parms, InInteractableComponent), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZTimedBagConverter_OnServerCompleteInteraction_Statics::NewProp_InInteractableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTimedBagConverter_OnServerCompleteInteraction_Statics::NewProp_InInteractableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTimedBagConverter_OnServerCompleteInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZTimedBagConverter_OnServerCompleteInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTimedBagConverter_eventOnServerCompleteInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZTimedBagConverter_OnServerCompleteInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTimedBagConverter_OnServerCompleteInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZTimedBagConverter_OnServerCompleteInteraction_Statics::NewProp_bIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZTimedBagConverter_eventOnServerCompleteInteraction_Parms*)Obj)->bIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZTimedBagConverter_OnServerCompleteInteraction_Statics::NewProp_bIsLocallyControlled = { "bIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZTimedBagConverter_eventOnServerCompleteInteraction_Parms), &Z_Construct_UFunction_ASBZTimedBagConverter_OnServerCompleteInteraction_Statics::NewProp_bIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZTimedBagConverter_OnServerCompleteInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTimedBagConverter_OnServerCompleteInteraction_Statics::NewProp_InInteractableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTimedBagConverter_OnServerCompleteInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTimedBagConverter_OnServerCompleteInteraction_Statics::NewProp_bIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTimedBagConverter_OnServerCompleteInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTimedBagConverter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTimedBagConverter_OnServerCompleteInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTimedBagConverter, nullptr, "OnServerCompleteInteraction", nullptr, nullptr, sizeof(SBZTimedBagConverter_eventOnServerCompleteInteraction_Parms), Z_Construct_UFunction_ASBZTimedBagConverter_OnServerCompleteInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTimedBagConverter_OnServerCompleteInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTimedBagConverter_OnServerCompleteInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTimedBagConverter_OnServerCompleteInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTimedBagConverter_OnServerCompleteInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTimedBagConverter_OnServerCompleteInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTimedBagConverter_SetInteractionEnabled_Statics
	{
		struct SBZTimedBagConverter_eventSetInteractionEnabled_Parms
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
	void Z_Construct_UFunction_ASBZTimedBagConverter_SetInteractionEnabled_Statics::NewProp_bInEnabled_SetBit(void* Obj)
	{
		((SBZTimedBagConverter_eventSetInteractionEnabled_Parms*)Obj)->bInEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZTimedBagConverter_SetInteractionEnabled_Statics::NewProp_bInEnabled = { "bInEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZTimedBagConverter_eventSetInteractionEnabled_Parms), &Z_Construct_UFunction_ASBZTimedBagConverter_SetInteractionEnabled_Statics::NewProp_bInEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZTimedBagConverter_SetInteractionEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTimedBagConverter_SetInteractionEnabled_Statics::NewProp_bInEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTimedBagConverter_SetInteractionEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTimedBagConverter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTimedBagConverter_SetInteractionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTimedBagConverter, nullptr, "SetInteractionEnabled", nullptr, nullptr, sizeof(SBZTimedBagConverter_eventSetInteractionEnabled_Parms), Z_Construct_UFunction_ASBZTimedBagConverter_SetInteractionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTimedBagConverter_SetInteractionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTimedBagConverter_SetInteractionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTimedBagConverter_SetInteractionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTimedBagConverter_SetInteractionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTimedBagConverter_SetInteractionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZTimedBagConverter_NoRegister()
	{
		return ASBZTimedBagConverter::StaticClass();
	}
	struct Z_Construct_UClass_ASBZTimedBagConverter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedBagGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachedBagGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBagConverterDisabled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBagConverterDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBagConverted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBagConverted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZTimedBagConverter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZTimedBagConverter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZTimedBagConverter_BP_OnBagConverted, "BP_OnBagConverted" }, // 713427259
		{ &Z_Construct_UFunction_ASBZTimedBagConverter_BP_OnECMJammedChanged, "BP_OnECMJammedChanged" }, // 3406628452
		{ &Z_Construct_UFunction_ASBZTimedBagConverter_OnECMCountChanged, "OnECMCountChanged" }, // 1441639988
		{ &Z_Construct_UFunction_ASBZTimedBagConverter_OnInteractionEnabledStateChanged, "OnInteractionEnabledStateChanged" }, // 2202693275
		{ &Z_Construct_UFunction_ASBZTimedBagConverter_OnServerBagPickedUp, "OnServerBagPickedUp" }, // 3815342830
		{ &Z_Construct_UFunction_ASBZTimedBagConverter_OnServerCompleteInteraction, "OnServerCompleteInteraction" }, // 1560518328
		{ &Z_Construct_UFunction_ASBZTimedBagConverter_SetInteractionEnabled, "SetInteractionEnabled" }, // 85046184
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTimedBagConverter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTimedBagConverter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTimedBagConverter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTimedBagConverter_Statics::NewProp_AttachedBagGenerator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTimedBagConverter" },
		{ "ModuleRelativePath", "Public/SBZTimedBagConverter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTimedBagConverter_Statics::NewProp_AttachedBagGenerator = { "AttachedBagGenerator", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTimedBagConverter, AttachedBagGenerator), Z_Construct_UClass_ASBZSingleBagGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTimedBagConverter_Statics::NewProp_AttachedBagGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTimedBagConverter_Statics::NewProp_AttachedBagGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTimedBagConverter_Statics::NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTimedBagConverter" },
		{ "ModuleRelativePath", "Public/SBZTimedBagConverter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZTimedBagConverter_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTimedBagConverter, Duration), METADATA_PARAMS(Z_Construct_UClass_ASBZTimedBagConverter_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTimedBagConverter_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTimedBagConverter_Statics::NewProp_InteractableComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTimedBagConverter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZTimedBagConverter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTimedBagConverter_Statics::NewProp_InteractableComponent = { "InteractableComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTimedBagConverter, InteractableComponent), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTimedBagConverter_Statics::NewProp_InteractableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTimedBagConverter_Statics::NewProp_InteractableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTimedBagConverter_Statics::NewProp_OnBagConverterDisabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTimedBagConverter" },
		{ "ModuleRelativePath", "Public/SBZTimedBagConverter.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZTimedBagConverter_Statics::NewProp_OnBagConverterDisabled = { "OnBagConverterDisabled", nullptr, (EPropertyFlags)0x0020280010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTimedBagConverter, OnBagConverterDisabled), Z_Construct_UDelegateFunction_Starbreeze_SBZTimedBagConverterDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZTimedBagConverter_Statics::NewProp_OnBagConverterDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTimedBagConverter_Statics::NewProp_OnBagConverterDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTimedBagConverter_Statics::NewProp_OnBagConverted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTimedBagConverter" },
		{ "ModuleRelativePath", "Public/SBZTimedBagConverter.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZTimedBagConverter_Statics::NewProp_OnBagConverted = { "OnBagConverted", nullptr, (EPropertyFlags)0x0020280010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTimedBagConverter, OnBagConverted), Z_Construct_UDelegateFunction_Starbreeze_SBZTimedBagConverterDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZTimedBagConverter_Statics::NewProp_OnBagConverted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTimedBagConverter_Statics::NewProp_OnBagConverted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZTimedBagConverter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTimedBagConverter_Statics::NewProp_AttachedBagGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTimedBagConverter_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTimedBagConverter_Statics::NewProp_InteractableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTimedBagConverter_Statics::NewProp_OnBagConverterDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTimedBagConverter_Statics::NewProp_OnBagConverted,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZTimedBagConverter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZBreakableInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZTimedBagConverter, ISBZBreakableInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZTimedBagConverter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZTimedBagConverter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZTimedBagConverter_Statics::ClassParams = {
		&ASBZTimedBagConverter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZTimedBagConverter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTimedBagConverter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZTimedBagConverter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTimedBagConverter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZTimedBagConverter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZTimedBagConverter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZTimedBagConverter, 1716145021);
	template<> STARBREEZE_API UClass* StaticClass<ASBZTimedBagConverter>()
	{
		return ASBZTimedBagConverter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZTimedBagConverter(Z_Construct_UClass_ASBZTimedBagConverter, &ASBZTimedBagConverter::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZTimedBagConverter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZTimedBagConverter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

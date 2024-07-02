// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSingleBagGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSingleBagGenerator() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSingleBagGenerator_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSingleBagGenerator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZBagPickedUp__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBagType_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBagHandle();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBreakableInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZSingleBagGenerator::execChangeToSecondaryType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeToSecondaryType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSingleBagGenerator::execHandleInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Comp);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleInteraction(Z_Param_Comp,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSingleBagGenerator::execHandleInteractionEnabledStateChanged)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InteractableComponent);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleInteractionEnabledStateChanged(Z_Param_InteractableComponent,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSingleBagGenerator::execMulticast_ChangeToSecondaryType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ChangeToSecondaryType_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSingleBagGenerator::execOnRep_ShouldUseSecondaryType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ShouldUseSecondaryType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSingleBagGenerator::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSingleBagGenerator::execSetInteractionEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractionEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	static FName NAME_ASBZSingleBagGenerator_BP_OnChangedToSecondaryType = FName(TEXT("BP_OnChangedToSecondaryType"));
	void ASBZSingleBagGenerator::BP_OnChangedToSecondaryType(bool bDoCosmetics)
	{
		SBZSingleBagGenerator_eventBP_OnChangedToSecondaryType_Parms Parms;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSingleBagGenerator_BP_OnChangedToSecondaryType),&Parms);
	}
	static FName NAME_ASBZSingleBagGenerator_Multicast_ChangeToSecondaryType = FName(TEXT("Multicast_ChangeToSecondaryType"));
	void ASBZSingleBagGenerator::Multicast_ChangeToSecondaryType()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZSingleBagGenerator_Multicast_ChangeToSecondaryType),NULL);
	}
	void ASBZSingleBagGenerator::StaticRegisterNativesASBZSingleBagGenerator()
	{
		UClass* Class = ASBZSingleBagGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeToSecondaryType", &ASBZSingleBagGenerator::execChangeToSecondaryType },
			{ "HandleInteraction", &ASBZSingleBagGenerator::execHandleInteraction },
			{ "HandleInteractionEnabledStateChanged", &ASBZSingleBagGenerator::execHandleInteractionEnabledStateChanged },
			{ "Multicast_ChangeToSecondaryType", &ASBZSingleBagGenerator::execMulticast_ChangeToSecondaryType },
			{ "OnRep_ShouldUseSecondaryType", &ASBZSingleBagGenerator::execOnRep_ShouldUseSecondaryType },
			{ "SetEnabled", &ASBZSingleBagGenerator::execSetEnabled },
			{ "SetInteractionEnabled", &ASBZSingleBagGenerator::execSetInteractionEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZSingleBagGenerator_BP_OnChangedToSecondaryType_Statics
	{
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZSingleBagGenerator_BP_OnChangedToSecondaryType_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZSingleBagGenerator_eventBP_OnChangedToSecondaryType_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSingleBagGenerator_BP_OnChangedToSecondaryType_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSingleBagGenerator_eventBP_OnChangedToSecondaryType_Parms), &Z_Construct_UFunction_ASBZSingleBagGenerator_BP_OnChangedToSecondaryType_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSingleBagGenerator_BP_OnChangedToSecondaryType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSingleBagGenerator_BP_OnChangedToSecondaryType_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSingleBagGenerator_BP_OnChangedToSecondaryType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSingleBagGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSingleBagGenerator_BP_OnChangedToSecondaryType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSingleBagGenerator, nullptr, "BP_OnChangedToSecondaryType", nullptr, nullptr, sizeof(SBZSingleBagGenerator_eventBP_OnChangedToSecondaryType_Parms), Z_Construct_UFunction_ASBZSingleBagGenerator_BP_OnChangedToSecondaryType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSingleBagGenerator_BP_OnChangedToSecondaryType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSingleBagGenerator_BP_OnChangedToSecondaryType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSingleBagGenerator_BP_OnChangedToSecondaryType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSingleBagGenerator_BP_OnChangedToSecondaryType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSingleBagGenerator_BP_OnChangedToSecondaryType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSingleBagGenerator_ChangeToSecondaryType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSingleBagGenerator_ChangeToSecondaryType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSingleBagGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSingleBagGenerator_ChangeToSecondaryType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSingleBagGenerator, nullptr, "ChangeToSecondaryType", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSingleBagGenerator_ChangeToSecondaryType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSingleBagGenerator_ChangeToSecondaryType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSingleBagGenerator_ChangeToSecondaryType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSingleBagGenerator_ChangeToSecondaryType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteraction_Statics
	{
		struct SBZSingleBagGenerator_eventHandleInteraction_Parms
		{
			USBZBaseInteractableComponent* Comp;
			USBZInteractorComponent* Interactor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Comp;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteraction_Statics::NewProp_Comp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteraction_Statics::NewProp_Comp = { "Comp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSingleBagGenerator_eventHandleInteraction_Parms, Comp), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteraction_Statics::NewProp_Comp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteraction_Statics::NewProp_Comp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSingleBagGenerator_eventHandleInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZSingleBagGenerator_eventHandleInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSingleBagGenerator_eventHandleInteraction_Parms), &Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteraction_Statics::NewProp_Comp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSingleBagGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSingleBagGenerator, nullptr, "HandleInteraction", nullptr, nullptr, sizeof(SBZSingleBagGenerator_eventHandleInteraction_Parms), Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteractionEnabledStateChanged_Statics
	{
		struct SBZSingleBagGenerator_eventHandleInteractionEnabledStateChanged_Parms
		{
			const USBZBaseInteractableComponent* InteractableComponent;
			bool bEnabled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableComponent;
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteractionEnabledStateChanged_Statics::NewProp_InteractableComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteractionEnabledStateChanged_Statics::NewProp_InteractableComponent = { "InteractableComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSingleBagGenerator_eventHandleInteractionEnabledStateChanged_Parms, InteractableComponent), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteractionEnabledStateChanged_Statics::NewProp_InteractableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteractionEnabledStateChanged_Statics::NewProp_InteractableComponent_MetaData)) };
	void Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteractionEnabledStateChanged_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZSingleBagGenerator_eventHandleInteractionEnabledStateChanged_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteractionEnabledStateChanged_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSingleBagGenerator_eventHandleInteractionEnabledStateChanged_Parms), &Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteractionEnabledStateChanged_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteractionEnabledStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteractionEnabledStateChanged_Statics::NewProp_InteractableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteractionEnabledStateChanged_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteractionEnabledStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSingleBagGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteractionEnabledStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSingleBagGenerator, nullptr, "HandleInteractionEnabledStateChanged", nullptr, nullptr, sizeof(SBZSingleBagGenerator_eventHandleInteractionEnabledStateChanged_Parms), Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteractionEnabledStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteractionEnabledStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteractionEnabledStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteractionEnabledStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteractionEnabledStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteractionEnabledStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSingleBagGenerator_Multicast_ChangeToSecondaryType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSingleBagGenerator_Multicast_ChangeToSecondaryType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSingleBagGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSingleBagGenerator_Multicast_ChangeToSecondaryType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSingleBagGenerator, nullptr, "Multicast_ChangeToSecondaryType", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSingleBagGenerator_Multicast_ChangeToSecondaryType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSingleBagGenerator_Multicast_ChangeToSecondaryType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSingleBagGenerator_Multicast_ChangeToSecondaryType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSingleBagGenerator_Multicast_ChangeToSecondaryType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSingleBagGenerator_OnRep_ShouldUseSecondaryType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSingleBagGenerator_OnRep_ShouldUseSecondaryType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSingleBagGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSingleBagGenerator_OnRep_ShouldUseSecondaryType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSingleBagGenerator, nullptr, "OnRep_ShouldUseSecondaryType", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSingleBagGenerator_OnRep_ShouldUseSecondaryType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSingleBagGenerator_OnRep_ShouldUseSecondaryType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSingleBagGenerator_OnRep_ShouldUseSecondaryType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSingleBagGenerator_OnRep_ShouldUseSecondaryType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSingleBagGenerator_SetEnabled_Statics
	{
		struct SBZSingleBagGenerator_eventSetEnabled_Parms
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
	void Z_Construct_UFunction_ASBZSingleBagGenerator_SetEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZSingleBagGenerator_eventSetEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSingleBagGenerator_SetEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSingleBagGenerator_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZSingleBagGenerator_SetEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSingleBagGenerator_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSingleBagGenerator_SetEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSingleBagGenerator_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSingleBagGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSingleBagGenerator_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSingleBagGenerator, nullptr, "SetEnabled", nullptr, nullptr, sizeof(SBZSingleBagGenerator_eventSetEnabled_Parms), Z_Construct_UFunction_ASBZSingleBagGenerator_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSingleBagGenerator_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSingleBagGenerator_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSingleBagGenerator_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSingleBagGenerator_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSingleBagGenerator_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSingleBagGenerator_SetInteractionEnabled_Statics
	{
		struct SBZSingleBagGenerator_eventSetInteractionEnabled_Parms
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
	void Z_Construct_UFunction_ASBZSingleBagGenerator_SetInteractionEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZSingleBagGenerator_eventSetInteractionEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSingleBagGenerator_SetInteractionEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSingleBagGenerator_eventSetInteractionEnabled_Parms), &Z_Construct_UFunction_ASBZSingleBagGenerator_SetInteractionEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSingleBagGenerator_SetInteractionEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSingleBagGenerator_SetInteractionEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSingleBagGenerator_SetInteractionEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSingleBagGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSingleBagGenerator_SetInteractionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSingleBagGenerator, nullptr, "SetInteractionEnabled", nullptr, nullptr, sizeof(SBZSingleBagGenerator_eventSetInteractionEnabled_Parms), Z_Construct_UFunction_ASBZSingleBagGenerator_SetInteractionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSingleBagGenerator_SetInteractionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSingleBagGenerator_SetInteractionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSingleBagGenerator_SetInteractionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSingleBagGenerator_SetInteractionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSingleBagGenerator_SetInteractionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZSingleBagGenerator_NoRegister()
	{
		return ASBZSingleBagGenerator::StaticClass();
	}
	struct Z_Construct_UClass_ASBZSingleBagGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnServerBagPickedUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnServerBagPickedUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryBagType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondaryBagType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BagHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSecondaryTypeUsed_MetaData[];
#endif
		static void NewProp_bIsSecondaryTypeUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSecondaryTypeUsed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZSingleBagGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZSingleBagGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZSingleBagGenerator_BP_OnChangedToSecondaryType, "BP_OnChangedToSecondaryType" }, // 3890972361
		{ &Z_Construct_UFunction_ASBZSingleBagGenerator_ChangeToSecondaryType, "ChangeToSecondaryType" }, // 4123861163
		{ &Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteraction, "HandleInteraction" }, // 3468236899
		{ &Z_Construct_UFunction_ASBZSingleBagGenerator_HandleInteractionEnabledStateChanged, "HandleInteractionEnabledStateChanged" }, // 1267105847
		{ &Z_Construct_UFunction_ASBZSingleBagGenerator_Multicast_ChangeToSecondaryType, "Multicast_ChangeToSecondaryType" }, // 1871445237
		{ &Z_Construct_UFunction_ASBZSingleBagGenerator_OnRep_ShouldUseSecondaryType, "OnRep_ShouldUseSecondaryType" }, // 2230721775
		{ &Z_Construct_UFunction_ASBZSingleBagGenerator_SetEnabled, "SetEnabled" }, // 4146838369
		{ &Z_Construct_UFunction_ASBZSingleBagGenerator_SetInteractionEnabled, "SetInteractionEnabled" }, // 3097410345
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSingleBagGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSingleBagGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSingleBagGenerator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_OnServerBagPickedUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSingleBagGenerator" },
		{ "ModuleRelativePath", "Public/SBZSingleBagGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_OnServerBagPickedUp = { "OnServerBagPickedUp", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSingleBagGenerator, OnServerBagPickedUp), Z_Construct_UDelegateFunction_Starbreeze_SBZBagPickedUp__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_OnServerBagPickedUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_OnServerBagPickedUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_BagType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSingleBagGenerator" },
		{ "ModuleRelativePath", "Public/SBZSingleBagGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_BagType = { "BagType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSingleBagGenerator, BagType), Z_Construct_UClass_USBZBagType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_BagType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_BagType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_SecondaryBagType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSingleBagGenerator" },
		{ "ModuleRelativePath", "Public/SBZSingleBagGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_SecondaryBagType = { "SecondaryBagType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSingleBagGenerator, SecondaryBagType), Z_Construct_UClass_USBZBagType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_SecondaryBagType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_SecondaryBagType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_BagHandle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSingleBagGenerator" },
		{ "ModuleRelativePath", "Public/SBZSingleBagGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_BagHandle = { "BagHandle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSingleBagGenerator, BagHandle), Z_Construct_UScriptStruct_FSBZBagHandle, METADATA_PARAMS(Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_BagHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_BagHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_Interactable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSingleBagGenerator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSingleBagGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSingleBagGenerator, Interactable), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_Outline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSingleBagGenerator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSingleBagGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_Outline = { "Outline", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSingleBagGenerator, Outline), Z_Construct_UClass_USBZOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_Outline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_Outline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_bIsSecondaryTypeUsed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSingleBagGenerator" },
		{ "ModuleRelativePath", "Public/SBZSingleBagGenerator.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_bIsSecondaryTypeUsed_SetBit(void* Obj)
	{
		((ASBZSingleBagGenerator*)Obj)->bIsSecondaryTypeUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_bIsSecondaryTypeUsed = { "bIsSecondaryTypeUsed", "OnRep_ShouldUseSecondaryType", (EPropertyFlags)0x0010000100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZSingleBagGenerator), &Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_bIsSecondaryTypeUsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_bIsSecondaryTypeUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_bIsSecondaryTypeUsed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZSingleBagGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_OnServerBagPickedUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_BagType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_SecondaryBagType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_BagHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_Outline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSingleBagGenerator_Statics::NewProp_bIsSecondaryTypeUsed,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZSingleBagGenerator_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZBreakableInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZSingleBagGenerator, ISBZBreakableInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZSingleBagGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZSingleBagGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZSingleBagGenerator_Statics::ClassParams = {
		&ASBZSingleBagGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZSingleBagGenerator_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSingleBagGenerator_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZSingleBagGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSingleBagGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZSingleBagGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZSingleBagGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZSingleBagGenerator, 1579793285);
	template<> STARBREEZE_API UClass* StaticClass<ASBZSingleBagGenerator>()
	{
		return ASBZSingleBagGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZSingleBagGenerator(Z_Construct_UClass_ASBZSingleBagGenerator, &ASBZSingleBagGenerator::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZSingleBagGenerator"), false, nullptr, nullptr, nullptr);

	void ASBZSingleBagGenerator::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsSecondaryTypeUsed(TEXT("bIsSecondaryTypeUsed"));

		const bool bIsValid = true
			&& Name_bIsSecondaryTypeUsed == ClassReps[(int32)ENetFields_Private::bIsSecondaryTypeUsed].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZSingleBagGenerator"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZSingleBagGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

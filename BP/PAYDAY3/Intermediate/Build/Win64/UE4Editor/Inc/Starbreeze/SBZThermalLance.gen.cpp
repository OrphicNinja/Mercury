// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZThermalLance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZThermalLance() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZThermalLance_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZThermalLance();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBagTriggerVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBagItem_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBagHandle();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZBreachingEquipmentDelegate__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBagType_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZThermalLance::execOnAckAddedCanister)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAckAddedCanister(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThermalLance::execOnAckRemovedCanister)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAckRemovedCanister(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThermalLance::execOnBagEntered)
	{
		P_GET_OBJECT(ASBZBagTriggerVolume,Z_Param_Volume);
		P_GET_OBJECT(ASBZBagItem,Z_Param_BagItem);
		P_GET_STRUCT(FSBZBagHandle,Z_Param_BagHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBagEntered(Z_Param_Volume,Z_Param_BagItem,Z_Param_BagHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThermalLance::execOnBoltingComplete)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBoltingComplete(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThermalLance::execOnDisassembled)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDisassembled(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThermalLance::execOnIgnitionComplete)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIgnitionComplete(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThermalLance::execOnInteractStateChanged)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteractStateChanged(Z_Param_Interactable,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThermalLance::execOnRanOutOfFuel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRanOutOfFuel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThermalLance::execOnRefuelingReached)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRefuelingReached();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThermalLance::execOnServerAddedCanister)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerAddedCanister(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThermalLance::execOnServerRemovedCanister)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerRemovedCanister(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	static FName NAME_ASBZThermalLance_BP_OnBolted = FName(TEXT("BP_OnBolted"));
	void ASBZThermalLance::BP_OnBolted(int32 Amount, int32 BoltIndex)
	{
		SBZThermalLance_eventBP_OnBolted_Parms Parms;
		Parms.Amount=Amount;
		Parms.BoltIndex=BoltIndex;
		ProcessEvent(FindFunctionChecked(NAME_ASBZThermalLance_BP_OnBolted),&Parms);
	}
	void ASBZThermalLance::StaticRegisterNativesASBZThermalLance()
	{
		UClass* Class = ASBZThermalLance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAckAddedCanister", &ASBZThermalLance::execOnAckAddedCanister },
			{ "OnAckRemovedCanister", &ASBZThermalLance::execOnAckRemovedCanister },
			{ "OnBagEntered", &ASBZThermalLance::execOnBagEntered },
			{ "OnBoltingComplete", &ASBZThermalLance::execOnBoltingComplete },
			{ "OnDisassembled", &ASBZThermalLance::execOnDisassembled },
			{ "OnIgnitionComplete", &ASBZThermalLance::execOnIgnitionComplete },
			{ "OnInteractStateChanged", &ASBZThermalLance::execOnInteractStateChanged },
			{ "OnRanOutOfFuel", &ASBZThermalLance::execOnRanOutOfFuel },
			{ "OnRefuelingReached", &ASBZThermalLance::execOnRefuelingReached },
			{ "OnServerAddedCanister", &ASBZThermalLance::execOnServerAddedCanister },
			{ "OnServerRemovedCanister", &ASBZThermalLance::execOnServerRemovedCanister },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZThermalLance_BP_OnBolted_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoltIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZThermalLance_BP_OnBolted_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermalLance_eventBP_OnBolted_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZThermalLance_BP_OnBolted_Statics::NewProp_BoltIndex = { "BoltIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermalLance_eventBP_OnBolted_Parms, BoltIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThermalLance_BP_OnBolted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_BP_OnBolted_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_BP_OnBolted_Statics::NewProp_BoltIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_BP_OnBolted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermalLance_BP_OnBolted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermalLance, nullptr, "BP_OnBolted", nullptr, nullptr, sizeof(SBZThermalLance_eventBP_OnBolted_Parms), Z_Construct_UFunction_ASBZThermalLance_BP_OnBolted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_BP_OnBolted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_BP_OnBolted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_BP_OnBolted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermalLance_BP_OnBolted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermalLance_BP_OnBolted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThermalLance_OnAckAddedCanister_Statics
	{
		struct SBZThermalLance_eventOnAckAddedCanister_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnAckAddedCanister_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnAckAddedCanister_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermalLance_eventOnAckAddedCanister_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnAckAddedCanister_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnAckAddedCanister_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnAckAddedCanister_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnAckAddedCanister_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermalLance_eventOnAckAddedCanister_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnAckAddedCanister_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnAckAddedCanister_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZThermalLance_OnAckAddedCanister_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZThermalLance_eventOnAckAddedCanister_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnAckAddedCanister_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZThermalLance_eventOnAckAddedCanister_Parms), &Z_Construct_UFunction_ASBZThermalLance_OnAckAddedCanister_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThermalLance_OnAckAddedCanister_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnAckAddedCanister_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnAckAddedCanister_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnAckAddedCanister_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnAckAddedCanister_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermalLance_OnAckAddedCanister_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermalLance, nullptr, "OnAckAddedCanister", nullptr, nullptr, sizeof(SBZThermalLance_eventOnAckAddedCanister_Parms), Z_Construct_UFunction_ASBZThermalLance_OnAckAddedCanister_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnAckAddedCanister_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnAckAddedCanister_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnAckAddedCanister_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermalLance_OnAckAddedCanister()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermalLance_OnAckAddedCanister_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThermalLance_OnAckRemovedCanister_Statics
	{
		struct SBZThermalLance_eventOnAckRemovedCanister_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnAckRemovedCanister_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnAckRemovedCanister_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermalLance_eventOnAckRemovedCanister_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnAckRemovedCanister_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnAckRemovedCanister_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnAckRemovedCanister_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnAckRemovedCanister_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermalLance_eventOnAckRemovedCanister_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnAckRemovedCanister_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnAckRemovedCanister_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZThermalLance_OnAckRemovedCanister_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZThermalLance_eventOnAckRemovedCanister_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnAckRemovedCanister_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZThermalLance_eventOnAckRemovedCanister_Parms), &Z_Construct_UFunction_ASBZThermalLance_OnAckRemovedCanister_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThermalLance_OnAckRemovedCanister_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnAckRemovedCanister_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnAckRemovedCanister_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnAckRemovedCanister_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnAckRemovedCanister_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermalLance_OnAckRemovedCanister_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermalLance, nullptr, "OnAckRemovedCanister", nullptr, nullptr, sizeof(SBZThermalLance_eventOnAckRemovedCanister_Parms), Z_Construct_UFunction_ASBZThermalLance_OnAckRemovedCanister_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnAckRemovedCanister_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnAckRemovedCanister_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnAckRemovedCanister_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermalLance_OnAckRemovedCanister()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermalLance_OnAckRemovedCanister_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThermalLance_OnBagEntered_Statics
	{
		struct SBZThermalLance_eventOnBagEntered_Parms
		{
			ASBZBagTriggerVolume* Volume;
			ASBZBagItem* BagItem;
			FSBZBagHandle BagHandle;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagItem;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BagHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnBagEntered_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermalLance_eventOnBagEntered_Parms, Volume), Z_Construct_UClass_ASBZBagTriggerVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnBagEntered_Statics::NewProp_BagItem = { "BagItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermalLance_eventOnBagEntered_Parms, BagItem), Z_Construct_UClass_ASBZBagItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnBagEntered_Statics::NewProp_BagHandle = { "BagHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermalLance_eventOnBagEntered_Parms, BagHandle), Z_Construct_UScriptStruct_FSBZBagHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThermalLance_OnBagEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnBagEntered_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnBagEntered_Statics::NewProp_BagItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnBagEntered_Statics::NewProp_BagHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnBagEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermalLance_OnBagEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermalLance, nullptr, "OnBagEntered", nullptr, nullptr, sizeof(SBZThermalLance_eventOnBagEntered_Parms), Z_Construct_UFunction_ASBZThermalLance_OnBagEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnBagEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnBagEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnBagEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermalLance_OnBagEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermalLance_OnBagEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThermalLance_OnBoltingComplete_Statics
	{
		struct SBZThermalLance_eventOnBoltingComplete_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnBoltingComplete_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnBoltingComplete_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermalLance_eventOnBoltingComplete_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnBoltingComplete_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnBoltingComplete_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnBoltingComplete_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnBoltingComplete_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermalLance_eventOnBoltingComplete_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnBoltingComplete_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnBoltingComplete_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZThermalLance_OnBoltingComplete_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZThermalLance_eventOnBoltingComplete_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnBoltingComplete_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZThermalLance_eventOnBoltingComplete_Parms), &Z_Construct_UFunction_ASBZThermalLance_OnBoltingComplete_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThermalLance_OnBoltingComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnBoltingComplete_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnBoltingComplete_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnBoltingComplete_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnBoltingComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermalLance_OnBoltingComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermalLance, nullptr, "OnBoltingComplete", nullptr, nullptr, sizeof(SBZThermalLance_eventOnBoltingComplete_Parms), Z_Construct_UFunction_ASBZThermalLance_OnBoltingComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnBoltingComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnBoltingComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnBoltingComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermalLance_OnBoltingComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermalLance_OnBoltingComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThermalLance_OnDisassembled_Statics
	{
		struct SBZThermalLance_eventOnDisassembled_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnDisassembled_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnDisassembled_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermalLance_eventOnDisassembled_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnDisassembled_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnDisassembled_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnDisassembled_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnDisassembled_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermalLance_eventOnDisassembled_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnDisassembled_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnDisassembled_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZThermalLance_OnDisassembled_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZThermalLance_eventOnDisassembled_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnDisassembled_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZThermalLance_eventOnDisassembled_Parms), &Z_Construct_UFunction_ASBZThermalLance_OnDisassembled_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThermalLance_OnDisassembled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnDisassembled_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnDisassembled_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnDisassembled_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnDisassembled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermalLance_OnDisassembled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermalLance, nullptr, "OnDisassembled", nullptr, nullptr, sizeof(SBZThermalLance_eventOnDisassembled_Parms), Z_Construct_UFunction_ASBZThermalLance_OnDisassembled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnDisassembled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnDisassembled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnDisassembled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermalLance_OnDisassembled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermalLance_OnDisassembled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThermalLance_OnIgnitionComplete_Statics
	{
		struct SBZThermalLance_eventOnIgnitionComplete_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnIgnitionComplete_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnIgnitionComplete_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermalLance_eventOnIgnitionComplete_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnIgnitionComplete_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnIgnitionComplete_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnIgnitionComplete_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnIgnitionComplete_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermalLance_eventOnIgnitionComplete_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnIgnitionComplete_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnIgnitionComplete_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZThermalLance_OnIgnitionComplete_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZThermalLance_eventOnIgnitionComplete_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnIgnitionComplete_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZThermalLance_eventOnIgnitionComplete_Parms), &Z_Construct_UFunction_ASBZThermalLance_OnIgnitionComplete_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThermalLance_OnIgnitionComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnIgnitionComplete_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnIgnitionComplete_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnIgnitionComplete_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnIgnitionComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermalLance_OnIgnitionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermalLance, nullptr, "OnIgnitionComplete", nullptr, nullptr, sizeof(SBZThermalLance_eventOnIgnitionComplete_Parms), Z_Construct_UFunction_ASBZThermalLance_OnIgnitionComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnIgnitionComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnIgnitionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnIgnitionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermalLance_OnIgnitionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermalLance_OnIgnitionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThermalLance_OnInteractStateChanged_Statics
	{
		struct SBZThermalLance_eventOnInteractStateChanged_Parms
		{
			const USBZBaseInteractableComponent* Interactable;
			bool bEnabled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnInteractStateChanged_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnInteractStateChanged_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermalLance_eventOnInteractStateChanged_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnInteractStateChanged_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnInteractStateChanged_Statics::NewProp_Interactable_MetaData)) };
	void Z_Construct_UFunction_ASBZThermalLance_OnInteractStateChanged_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZThermalLance_eventOnInteractStateChanged_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnInteractStateChanged_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZThermalLance_eventOnInteractStateChanged_Parms), &Z_Construct_UFunction_ASBZThermalLance_OnInteractStateChanged_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThermalLance_OnInteractStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnInteractStateChanged_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnInteractStateChanged_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnInteractStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermalLance_OnInteractStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermalLance, nullptr, "OnInteractStateChanged", nullptr, nullptr, sizeof(SBZThermalLance_eventOnInteractStateChanged_Parms), Z_Construct_UFunction_ASBZThermalLance_OnInteractStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnInteractStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnInteractStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnInteractStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermalLance_OnInteractStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermalLance_OnInteractStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThermalLance_OnRanOutOfFuel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnRanOutOfFuel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermalLance_OnRanOutOfFuel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermalLance, nullptr, "OnRanOutOfFuel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnRanOutOfFuel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnRanOutOfFuel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermalLance_OnRanOutOfFuel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermalLance_OnRanOutOfFuel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThermalLance_OnRefuelingReached_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnRefuelingReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermalLance_OnRefuelingReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermalLance, nullptr, "OnRefuelingReached", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnRefuelingReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnRefuelingReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermalLance_OnRefuelingReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermalLance_OnRefuelingReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThermalLance_OnServerAddedCanister_Statics
	{
		struct SBZThermalLance_eventOnServerAddedCanister_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnServerAddedCanister_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnServerAddedCanister_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermalLance_eventOnServerAddedCanister_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnServerAddedCanister_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnServerAddedCanister_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnServerAddedCanister_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnServerAddedCanister_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermalLance_eventOnServerAddedCanister_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnServerAddedCanister_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnServerAddedCanister_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZThermalLance_OnServerAddedCanister_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZThermalLance_eventOnServerAddedCanister_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnServerAddedCanister_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZThermalLance_eventOnServerAddedCanister_Parms), &Z_Construct_UFunction_ASBZThermalLance_OnServerAddedCanister_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThermalLance_OnServerAddedCanister_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnServerAddedCanister_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnServerAddedCanister_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnServerAddedCanister_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnServerAddedCanister_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermalLance_OnServerAddedCanister_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermalLance, nullptr, "OnServerAddedCanister", nullptr, nullptr, sizeof(SBZThermalLance_eventOnServerAddedCanister_Parms), Z_Construct_UFunction_ASBZThermalLance_OnServerAddedCanister_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnServerAddedCanister_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnServerAddedCanister_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnServerAddedCanister_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermalLance_OnServerAddedCanister()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermalLance_OnServerAddedCanister_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThermalLance_OnServerRemovedCanister_Statics
	{
		struct SBZThermalLance_eventOnServerRemovedCanister_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnServerRemovedCanister_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnServerRemovedCanister_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermalLance_eventOnServerRemovedCanister_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnServerRemovedCanister_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnServerRemovedCanister_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnServerRemovedCanister_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnServerRemovedCanister_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermalLance_eventOnServerRemovedCanister_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnServerRemovedCanister_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnServerRemovedCanister_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZThermalLance_OnServerRemovedCanister_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZThermalLance_eventOnServerRemovedCanister_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZThermalLance_OnServerRemovedCanister_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZThermalLance_eventOnServerRemovedCanister_Parms), &Z_Construct_UFunction_ASBZThermalLance_OnServerRemovedCanister_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThermalLance_OnServerRemovedCanister_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnServerRemovedCanister_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnServerRemovedCanister_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermalLance_OnServerRemovedCanister_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermalLance_OnServerRemovedCanister_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermalLance_OnServerRemovedCanister_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermalLance, nullptr, "OnServerRemovedCanister", nullptr, nullptr, sizeof(SBZThermalLance_eventOnServerRemovedCanister_Parms), Z_Construct_UFunction_ASBZThermalLance_OnServerRemovedCanister_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnServerRemovedCanister_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermalLance_OnServerRemovedCanister_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermalLance_OnServerRemovedCanister_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermalLance_OnServerRemovedCanister()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermalLance_OnServerRemovedCanister_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZThermalLance_NoRegister()
	{
		return ASBZThermalLance::StaticClass();
	}
	struct Z_Construct_UClass_ASBZThermalLance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBolted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBolted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDisassemblyNeeded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDisassemblyNeeded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnitionInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IgnitionInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveCanisterInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemoveCanisterInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddCanisterInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AddCanisterInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisassembleInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DisassembleInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoltingInteractions_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoltingInteractions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoltingInteractions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoltingInteractions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoltingInteractionWaypointLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoltingInteractionWaypointLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DissassemblyWaypointLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DissassemblyWaypointLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedsDisassemblyWhenFinished_MetaData[];
#endif
		static void NewProp_bNeedsDisassemblyWhenFinished_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedsDisassemblyWhenFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldSpawnBagsWhenCompleted_MetaData[];
#endif
		static void NewProp_bShouldSpawnBagsWhenCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldSpawnBagsWhenCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagTriggerVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagTriggerVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredBagType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RequiredBagType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisassembleInteractionWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisassembleInteractionWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetSelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoltedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoltedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveCannisterEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemoveCannisterEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddCannisterEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AddCannisterEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZThermalLance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZThermalLance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZThermalLance_BP_OnBolted, "BP_OnBolted" }, // 3578312009
		{ &Z_Construct_UFunction_ASBZThermalLance_OnAckAddedCanister, "OnAckAddedCanister" }, // 1185671418
		{ &Z_Construct_UFunction_ASBZThermalLance_OnAckRemovedCanister, "OnAckRemovedCanister" }, // 925165263
		{ &Z_Construct_UFunction_ASBZThermalLance_OnBagEntered, "OnBagEntered" }, // 145900717
		{ &Z_Construct_UFunction_ASBZThermalLance_OnBoltingComplete, "OnBoltingComplete" }, // 3580970295
		{ &Z_Construct_UFunction_ASBZThermalLance_OnDisassembled, "OnDisassembled" }, // 2662575130
		{ &Z_Construct_UFunction_ASBZThermalLance_OnIgnitionComplete, "OnIgnitionComplete" }, // 2136493775
		{ &Z_Construct_UFunction_ASBZThermalLance_OnInteractStateChanged, "OnInteractStateChanged" }, // 1251989646
		{ &Z_Construct_UFunction_ASBZThermalLance_OnRanOutOfFuel, "OnRanOutOfFuel" }, // 3837574052
		{ &Z_Construct_UFunction_ASBZThermalLance_OnRefuelingReached, "OnRefuelingReached" }, // 2517701309
		{ &Z_Construct_UFunction_ASBZThermalLance_OnServerAddedCanister, "OnServerAddedCanister" }, // 3010313818
		{ &Z_Construct_UFunction_ASBZThermalLance_OnServerRemovedCanister, "OnServerRemovedCanister" }, // 1339514408
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermalLance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZThermalLance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_OnBolted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermalLance" },
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_OnBolted = { "OnBolted", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermalLance, OnBolted), Z_Construct_UDelegateFunction_Starbreeze_SBZBreachingEquipmentDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_OnBolted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_OnBolted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_OnDisassemblyNeeded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermalLance" },
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_OnDisassemblyNeeded = { "OnDisassemblyNeeded", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermalLance, OnDisassemblyNeeded), Z_Construct_UDelegateFunction_Starbreeze_SBZBreachingEquipmentDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_OnDisassemblyNeeded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_OnDisassemblyNeeded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_IgnitionInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermalLance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_IgnitionInteraction = { "IgnitionInteraction", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermalLance, IgnitionInteraction), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_IgnitionInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_IgnitionInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_RemoveCanisterInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermalLance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_RemoveCanisterInteraction = { "RemoveCanisterInteraction", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermalLance, RemoveCanisterInteraction), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_RemoveCanisterInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_RemoveCanisterInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_AddCanisterInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermalLance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_AddCanisterInteraction = { "AddCanisterInteraction", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermalLance, AddCanisterInteraction), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_AddCanisterInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_AddCanisterInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_DisassembleInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermalLance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_DisassembleInteraction = { "DisassembleInteraction", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermalLance, DisassembleInteraction), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_DisassembleInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_DisassembleInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_BoltingInteractions_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermalLance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_BoltingInteractions_Inner = { "BoltingInteractions", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_BoltingInteractions_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_BoltingInteractions_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_BoltingInteractions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermalLance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_BoltingInteractions = { "BoltingInteractions", nullptr, (EPropertyFlags)0x004000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermalLance, BoltingInteractions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_BoltingInteractions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_BoltingInteractions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_BoltingInteractionWaypointLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermalLance" },
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_BoltingInteractionWaypointLocation = { "BoltingInteractionWaypointLocation", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermalLance, BoltingInteractionWaypointLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_BoltingInteractionWaypointLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_BoltingInteractionWaypointLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_DissassemblyWaypointLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermalLance" },
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_DissassemblyWaypointLocation = { "DissassemblyWaypointLocation", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermalLance, DissassemblyWaypointLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_DissassemblyWaypointLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_DissassemblyWaypointLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_bNeedsDisassemblyWhenFinished_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermalLance" },
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	void Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_bNeedsDisassemblyWhenFinished_SetBit(void* Obj)
	{
		((ASBZThermalLance*)Obj)->bNeedsDisassemblyWhenFinished = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_bNeedsDisassemblyWhenFinished = { "bNeedsDisassemblyWhenFinished", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZThermalLance), &Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_bNeedsDisassemblyWhenFinished_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_bNeedsDisassemblyWhenFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_bNeedsDisassemblyWhenFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_bShouldSpawnBagsWhenCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermalLance" },
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	void Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_bShouldSpawnBagsWhenCompleted_SetBit(void* Obj)
	{
		((ASBZThermalLance*)Obj)->bShouldSpawnBagsWhenCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_bShouldSpawnBagsWhenCompleted = { "bShouldSpawnBagsWhenCompleted", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZThermalLance), &Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_bShouldSpawnBagsWhenCompleted_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_bShouldSpawnBagsWhenCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_bShouldSpawnBagsWhenCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_BagTriggerVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermalLance" },
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_BagTriggerVolume = { "BagTriggerVolume", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermalLance, BagTriggerVolume), Z_Construct_UClass_ASBZBagTriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_BagTriggerVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_BagTriggerVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_RequiredBagType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermalLance" },
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_RequiredBagType = { "RequiredBagType", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermalLance, RequiredBagType), Z_Construct_UClass_USBZBagType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_RequiredBagType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_RequiredBagType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_DisassembleInteractionWaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermalLance" },
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_DisassembleInteractionWaitTime = { "DisassembleInteractionWaitTime", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermalLance, DisassembleInteractionWaitTime), METADATA_PARAMS(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_DisassembleInteractionWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_DisassembleInteractionWaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_WidgetSelector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermalLance" },
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_WidgetSelector = { "WidgetSelector", nullptr, (EPropertyFlags)0x0040008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermalLance, WidgetSelector), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_WidgetSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_WidgetSelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_BoltedEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermalLance" },
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_BoltedEvent = { "BoltedEvent", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermalLance, BoltedEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_BoltedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_BoltedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_RemoveCannisterEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermalLance" },
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_RemoveCannisterEvent = { "RemoveCannisterEvent", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermalLance, RemoveCannisterEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_RemoveCannisterEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_RemoveCannisterEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_AddCannisterEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermalLance" },
		{ "ModuleRelativePath", "Public/SBZThermalLance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_AddCannisterEvent = { "AddCannisterEvent", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermalLance, AddCannisterEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_AddCannisterEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_AddCannisterEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZThermalLance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_OnBolted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_OnDisassemblyNeeded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_IgnitionInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_RemoveCanisterInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_AddCanisterInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_DisassembleInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_BoltingInteractions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_BoltingInteractions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_BoltingInteractionWaypointLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_DissassemblyWaypointLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_bNeedsDisassemblyWhenFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_bShouldSpawnBagsWhenCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_BagTriggerVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_RequiredBagType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_DisassembleInteractionWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_WidgetSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_BoltedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_RemoveCannisterEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermalLance_Statics::NewProp_AddCannisterEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZThermalLance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZThermalLance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZThermalLance_Statics::ClassParams = {
		&ASBZThermalLance::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZThermalLance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermalLance_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZThermalLance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermalLance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZThermalLance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZThermalLance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZThermalLance, 669317868);
	template<> STARBREEZE_API UClass* StaticClass<ASBZThermalLance>()
	{
		return ASBZThermalLance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZThermalLance(Z_Construct_UClass_ASBZThermalLance, &ASBZThermalLance::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZThermalLance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZThermalLance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

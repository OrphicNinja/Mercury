// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDrill.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDrill() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDrill_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDrill();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDrillState();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZDrillComplete__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZDrill::execJamDrill)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->JamDrill();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrill::execMulticast_StartDrill)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndServerTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StartDrill_Implementation(Z_Param_EndServerTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrill::execMulticast_StopDrill)
	{
		P_GET_ENUM(ESBZDrillState,Z_Param_StopState);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeLeftDrill);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StopDrill_Implementation(ESBZDrillState(Z_Param_StopState),Z_Param_TimeLeftDrill);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrill::execOnStateChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateChanged_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrill::execOnUnjamInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnjamInteraction(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrill::execStartDrill)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartDrill();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrill::execTEMP_SetShowOutline)
	{
		P_GET_UBOOL(Z_Param_bShow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TEMP_SetShowOutline(Z_Param_bShow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrill::execUnjamDrill)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnjamDrill();
		P_NATIVE_END;
	}
	static FName NAME_ASBZDrill_Multicast_StartDrill = FName(TEXT("Multicast_StartDrill"));
	void ASBZDrill::Multicast_StartDrill(float EndServerTime)
	{
		SBZDrill_eventMulticast_StartDrill_Parms Parms;
		Parms.EndServerTime=EndServerTime;
		ProcessEvent(FindFunctionChecked(NAME_ASBZDrill_Multicast_StartDrill),&Parms);
	}
	static FName NAME_ASBZDrill_Multicast_StopDrill = FName(TEXT("Multicast_StopDrill"));
	void ASBZDrill::Multicast_StopDrill(ESBZDrillState StopState, float TimeLeftDrill)
	{
		SBZDrill_eventMulticast_StopDrill_Parms Parms;
		Parms.StopState=StopState;
		Parms.TimeLeftDrill=TimeLeftDrill;
		ProcessEvent(FindFunctionChecked(NAME_ASBZDrill_Multicast_StopDrill),&Parms);
	}
	static FName NAME_ASBZDrill_OnStateChanged = FName(TEXT("OnStateChanged"));
	void ASBZDrill::OnStateChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZDrill_OnStateChanged),NULL);
	}
	void ASBZDrill::StaticRegisterNativesASBZDrill()
	{
		UClass* Class = ASBZDrill::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "JamDrill", &ASBZDrill::execJamDrill },
			{ "Multicast_StartDrill", &ASBZDrill::execMulticast_StartDrill },
			{ "Multicast_StopDrill", &ASBZDrill::execMulticast_StopDrill },
			{ "OnStateChanged", &ASBZDrill::execOnStateChanged },
			{ "OnUnjamInteraction", &ASBZDrill::execOnUnjamInteraction },
			{ "StartDrill", &ASBZDrill::execStartDrill },
			{ "TEMP_SetShowOutline", &ASBZDrill::execTEMP_SetShowOutline },
			{ "UnjamDrill", &ASBZDrill::execUnjamDrill },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZDrill_JamDrill_Statics
	{
		struct SBZDrill_eventJamDrill_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZDrill_JamDrill_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZDrill_eventJamDrill_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDrill_JamDrill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDrill_eventJamDrill_Parms), &Z_Construct_UFunction_ASBZDrill_JamDrill_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrill_JamDrill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrill_JamDrill_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrill_JamDrill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrill_JamDrill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrill, nullptr, "JamDrill", nullptr, nullptr, sizeof(SBZDrill_eventJamDrill_Parms), Z_Construct_UFunction_ASBZDrill_JamDrill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrill_JamDrill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrill_JamDrill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrill_JamDrill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrill_JamDrill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrill_JamDrill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrill_Multicast_StartDrill_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndServerTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZDrill_Multicast_StartDrill_Statics::NewProp_EndServerTime = { "EndServerTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrill_eventMulticast_StartDrill_Parms, EndServerTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrill_Multicast_StartDrill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrill_Multicast_StartDrill_Statics::NewProp_EndServerTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrill_Multicast_StartDrill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrill_Multicast_StartDrill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrill, nullptr, "Multicast_StartDrill", nullptr, nullptr, sizeof(SBZDrill_eventMulticast_StartDrill_Parms), Z_Construct_UFunction_ASBZDrill_Multicast_StartDrill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrill_Multicast_StartDrill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrill_Multicast_StartDrill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrill_Multicast_StartDrill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrill_Multicast_StartDrill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrill_Multicast_StartDrill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrill_Multicast_StopDrill_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StopState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StopState;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeLeftDrill;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZDrill_Multicast_StopDrill_Statics::NewProp_StopState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZDrill_Multicast_StopDrill_Statics::NewProp_StopState = { "StopState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrill_eventMulticast_StopDrill_Parms, StopState), Z_Construct_UEnum_Starbreeze_ESBZDrillState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZDrill_Multicast_StopDrill_Statics::NewProp_TimeLeftDrill = { "TimeLeftDrill", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrill_eventMulticast_StopDrill_Parms, TimeLeftDrill), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrill_Multicast_StopDrill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrill_Multicast_StopDrill_Statics::NewProp_StopState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrill_Multicast_StopDrill_Statics::NewProp_StopState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrill_Multicast_StopDrill_Statics::NewProp_TimeLeftDrill,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrill_Multicast_StopDrill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrill_Multicast_StopDrill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrill, nullptr, "Multicast_StopDrill", nullptr, nullptr, sizeof(SBZDrill_eventMulticast_StopDrill_Parms), Z_Construct_UFunction_ASBZDrill_Multicast_StopDrill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrill_Multicast_StopDrill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrill_Multicast_StopDrill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrill_Multicast_StopDrill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrill_Multicast_StopDrill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrill_Multicast_StopDrill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrill_OnStateChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrill_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrill_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrill, nullptr, "OnStateChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrill_OnStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrill_OnStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrill_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrill_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrill_OnUnjamInteraction_Statics
	{
		struct SBZDrill_eventOnUnjamInteraction_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrill_OnUnjamInteraction_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZDrill_OnUnjamInteraction_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrill_eventOnUnjamInteraction_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrill_OnUnjamInteraction_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrill_OnUnjamInteraction_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrill_OnUnjamInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZDrill_OnUnjamInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrill_eventOnUnjamInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrill_OnUnjamInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrill_OnUnjamInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZDrill_OnUnjamInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZDrill_eventOnUnjamInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDrill_OnUnjamInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDrill_eventOnUnjamInteraction_Parms), &Z_Construct_UFunction_ASBZDrill_OnUnjamInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrill_OnUnjamInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrill_OnUnjamInteraction_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrill_OnUnjamInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrill_OnUnjamInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrill_OnUnjamInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrill_OnUnjamInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrill, nullptr, "OnUnjamInteraction", nullptr, nullptr, sizeof(SBZDrill_eventOnUnjamInteraction_Parms), Z_Construct_UFunction_ASBZDrill_OnUnjamInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrill_OnUnjamInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrill_OnUnjamInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrill_OnUnjamInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrill_OnUnjamInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrill_OnUnjamInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrill_StartDrill_Statics
	{
		struct SBZDrill_eventStartDrill_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZDrill_StartDrill_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZDrill_eventStartDrill_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDrill_StartDrill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDrill_eventStartDrill_Parms), &Z_Construct_UFunction_ASBZDrill_StartDrill_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrill_StartDrill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrill_StartDrill_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrill_StartDrill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrill_StartDrill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrill, nullptr, "StartDrill", nullptr, nullptr, sizeof(SBZDrill_eventStartDrill_Parms), Z_Construct_UFunction_ASBZDrill_StartDrill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrill_StartDrill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrill_StartDrill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrill_StartDrill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrill_StartDrill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrill_StartDrill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrill_TEMP_SetShowOutline_Statics
	{
		struct SBZDrill_eventTEMP_SetShowOutline_Parms
		{
			bool bShow;
		};
		static void NewProp_bShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZDrill_TEMP_SetShowOutline_Statics::NewProp_bShow_SetBit(void* Obj)
	{
		((SBZDrill_eventTEMP_SetShowOutline_Parms*)Obj)->bShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDrill_TEMP_SetShowOutline_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDrill_eventTEMP_SetShowOutline_Parms), &Z_Construct_UFunction_ASBZDrill_TEMP_SetShowOutline_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrill_TEMP_SetShowOutline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrill_TEMP_SetShowOutline_Statics::NewProp_bShow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrill_TEMP_SetShowOutline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrill_TEMP_SetShowOutline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrill, nullptr, "TEMP_SetShowOutline", nullptr, nullptr, sizeof(SBZDrill_eventTEMP_SetShowOutline_Parms), Z_Construct_UFunction_ASBZDrill_TEMP_SetShowOutline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrill_TEMP_SetShowOutline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrill_TEMP_SetShowOutline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrill_TEMP_SetShowOutline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrill_TEMP_SetShowOutline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrill_TEMP_SetShowOutline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrill_UnjamDrill_Statics
	{
		struct SBZDrill_eventUnjamDrill_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZDrill_UnjamDrill_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZDrill_eventUnjamDrill_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDrill_UnjamDrill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDrill_eventUnjamDrill_Parms), &Z_Construct_UFunction_ASBZDrill_UnjamDrill_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrill_UnjamDrill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrill_UnjamDrill_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrill_UnjamDrill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrill_UnjamDrill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrill, nullptr, "UnjamDrill", nullptr, nullptr, sizeof(SBZDrill_eventUnjamDrill_Parms), Z_Construct_UFunction_ASBZDrill_UnjamDrill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrill_UnjamDrill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrill_UnjamDrill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrill_UnjamDrill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrill_UnjamDrill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrill_UnjamDrill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZDrill_NoRegister()
	{
		return ASBZDrill::StaticClass();
	}
	struct Z_Construct_UClass_ASBZDrill_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDrillCompleteServer_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDrillCompleteServer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnjamInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnjamInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutlineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutlineAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZDrill_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZDrill_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZDrill_JamDrill, "JamDrill" }, // 961907859
		{ &Z_Construct_UFunction_ASBZDrill_Multicast_StartDrill, "Multicast_StartDrill" }, // 1778956506
		{ &Z_Construct_UFunction_ASBZDrill_Multicast_StopDrill, "Multicast_StopDrill" }, // 3049704059
		{ &Z_Construct_UFunction_ASBZDrill_OnStateChanged, "OnStateChanged" }, // 2978134070
		{ &Z_Construct_UFunction_ASBZDrill_OnUnjamInteraction, "OnUnjamInteraction" }, // 3159786805
		{ &Z_Construct_UFunction_ASBZDrill_StartDrill, "StartDrill" }, // 891721686
		{ &Z_Construct_UFunction_ASBZDrill_TEMP_SetShowOutline, "TEMP_SetShowOutline" }, // 3851542292
		{ &Z_Construct_UFunction_ASBZDrill_UnjamDrill, "UnjamDrill" }, // 516917850
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrill_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDrill.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDrill.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrill_Statics::NewProp_OnDrillCompleteServer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrill" },
		{ "ModuleRelativePath", "Public/SBZDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZDrill_Statics::NewProp_OnDrillCompleteServer = { "OnDrillCompleteServer", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDrill, OnDrillCompleteServer), Z_Construct_UDelegateFunction_Starbreeze_SBZDrillComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZDrill_Statics::NewProp_OnDrillCompleteServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrill_Statics::NewProp_OnDrillCompleteServer_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZDrill_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrill_Statics::NewProp_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrill" },
		{ "ModuleRelativePath", "Public/SBZDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZDrill_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDrill, State), Z_Construct_UEnum_Starbreeze_ESBZDrillState, METADATA_PARAMS(Z_Construct_UClass_ASBZDrill_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrill_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrill_Statics::NewProp_EndTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrill" },
		{ "ModuleRelativePath", "Public/SBZDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZDrill_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDrill, EndTime), METADATA_PARAMS(Z_Construct_UClass_ASBZDrill_Statics::NewProp_EndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrill_Statics::NewProp_EndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrill_Statics::NewProp_TimeLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrill" },
		{ "ModuleRelativePath", "Public/SBZDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZDrill_Statics::NewProp_TimeLeft = { "TimeLeft", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDrill, TimeLeft), METADATA_PARAMS(Z_Construct_UClass_ASBZDrill_Statics::NewProp_TimeLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrill_Statics::NewProp_TimeLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrill_Statics::NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrill" },
		{ "ModuleRelativePath", "Public/SBZDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZDrill_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDrill, Duration), METADATA_PARAMS(Z_Construct_UClass_ASBZDrill_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrill_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrill_Statics::NewProp_UnjamInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrill" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZDrill_Statics::NewProp_UnjamInteraction = { "UnjamInteraction", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDrill, UnjamInteraction), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZDrill_Statics::NewProp_UnjamInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrill_Statics::NewProp_UnjamInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrill_Statics::NewProp_WidgetComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrill" },
		{ "ModuleRelativePath", "Public/SBZDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZDrill_Statics::NewProp_WidgetComponent = { "WidgetComponent", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDrill, WidgetComponent), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_ASBZDrill_Statics::NewProp_WidgetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrill_Statics::NewProp_WidgetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrill_Statics::NewProp_OutlineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrill" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZDrill_Statics::NewProp_OutlineComponent = { "OutlineComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDrill, OutlineComponent), Z_Construct_UClass_USBZOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZDrill_Statics::NewProp_OutlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrill_Statics::NewProp_OutlineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrill_Statics::NewProp_OutlineAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrill" },
		{ "ModuleRelativePath", "Public/SBZDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZDrill_Statics::NewProp_OutlineAsset = { "OutlineAsset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDrill, OutlineAsset), Z_Construct_UClass_USBZOutlineAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZDrill_Statics::NewProp_OutlineAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrill_Statics::NewProp_OutlineAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZDrill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrill_Statics::NewProp_OnDrillCompleteServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrill_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrill_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrill_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrill_Statics::NewProp_TimeLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrill_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrill_Statics::NewProp_UnjamInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrill_Statics::NewProp_WidgetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrill_Statics::NewProp_OutlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrill_Statics::NewProp_OutlineAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZDrill_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZDrill>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZDrill_Statics::ClassParams = {
		&ASBZDrill::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZDrill_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrill_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZDrill_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrill_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZDrill()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZDrill_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZDrill, 1793920905);
	template<> STARBREEZE_API UClass* StaticClass<ASBZDrill>()
	{
		return ASBZDrill::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZDrill(Z_Construct_UClass_ASBZDrill, &ASBZDrill::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZDrill"), false, nullptr, nullptr, nullptr);

	void ASBZDrill::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_State(TEXT("State"));
		static const FName Name_EndTime(TEXT("EndTime"));
		static const FName Name_TimeLeft(TEXT("TimeLeft"));

		const bool bIsValid = true
			&& Name_State == ClassReps[(int32)ENetFields_Private::State].Property->GetFName()
			&& Name_EndTime == ClassReps[(int32)ENetFields_Private::EndTime].Property->GetFName()
			&& Name_TimeLeft == ClassReps[(int32)ENetFields_Private::TimeLeft].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZDrill"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZDrill);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

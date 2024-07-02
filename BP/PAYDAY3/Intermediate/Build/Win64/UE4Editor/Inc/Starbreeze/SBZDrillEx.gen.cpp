// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDrillEx.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDrillEx() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDrillEx_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDrillEx();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDrillMaterial_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDrillRepData();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDrillState();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZDrillCompleteEx__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAttractorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIActionInteractableInterface_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISightTargetInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAttractorInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZDrillEx::execSetAttractorInstigator)
	{
		P_GET_OBJECT(APawn,Z_Param_NewInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttractorInstigator(Z_Param_NewInstigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrillEx::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrillEx::execAdjustSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrillEx::execGetCurrentMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZDrillMaterial**)Z_Param__Result=P_THIS->GetCurrentMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrillEx::execGetHeat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHeat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrillEx::execGetHeatPerSec)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHeatPerSec();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrillEx::execGetProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrillEx::execGetProgressPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetProgressPercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrillEx::execGetProgressPerSec)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetProgressPerSec();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrillEx::execGetTimeLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrillEx::execIsFastSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFastSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrillEx::execJamDrill)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->JamDrill();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrillEx::execNeedsAdjusting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NeedsAdjusting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrillEx::execOnAdjustSpeedInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAdjustSpeedInteraction(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrillEx::execOnFixTransitionInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFixTransitionInteraction(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrillEx::execOnRep_Data)
	{
		P_GET_STRUCT_REF(FSBZDrillRepData,Z_Param_Out_Old);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Data(Z_Param_Out_Old);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrillEx::execOnToggleOnOffInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnToggleOnOffInteraction(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrillEx::execOnUnjamInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnjamInteraction(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrillEx::execStartDrill)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartDrill();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrillEx::execTEMP_SetShowOutline)
	{
		P_GET_UBOOL(Z_Param_bShow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TEMP_SetShowOutline(Z_Param_bShow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrillEx::execToggleOnOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleOnOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrillEx::execTurnOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TurnOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDrillEx::execUnjamDrill)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnjamDrill();
		P_NATIVE_END;
	}
	static FName NAME_ASBZDrillEx_OnMaterialChanged = FName(TEXT("OnMaterialChanged"));
	void ASBZDrillEx::OnMaterialChanged(USBZDrillMaterial* Material)
	{
		SBZDrillEx_eventOnMaterialChanged_Parms Parms;
		Parms.Material=Material;
		ProcessEvent(FindFunctionChecked(NAME_ASBZDrillEx_OnMaterialChanged),&Parms);
	}
	static FName NAME_ASBZDrillEx_OnSpeedUpdate = FName(TEXT("OnSpeedUpdate"));
	void ASBZDrillEx::OnSpeedUpdate(float ProgressRate, float HeatRate)
	{
		SBZDrillEx_eventOnSpeedUpdate_Parms Parms;
		Parms.ProgressRate=ProgressRate;
		Parms.HeatRate=HeatRate;
		ProcessEvent(FindFunctionChecked(NAME_ASBZDrillEx_OnSpeedUpdate),&Parms);
	}
	static FName NAME_ASBZDrillEx_OnStateChanged = FName(TEXT("OnStateChanged"));
	void ASBZDrillEx::OnStateChanged(ESBZDrillState State)
	{
		SBZDrillEx_eventOnStateChanged_Parms Parms;
		Parms.State=State;
		ProcessEvent(FindFunctionChecked(NAME_ASBZDrillEx_OnStateChanged),&Parms);
	}
	void ASBZDrillEx::StaticRegisterNativesASBZDrillEx()
	{
		UClass* Class = ASBZDrillEx::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustSpeed", &ASBZDrillEx::execAdjustSpeed },
			{ "GetCurrentMaterial", &ASBZDrillEx::execGetCurrentMaterial },
			{ "GetHeat", &ASBZDrillEx::execGetHeat },
			{ "GetHeatPerSec", &ASBZDrillEx::execGetHeatPerSec },
			{ "GetProgress", &ASBZDrillEx::execGetProgress },
			{ "GetProgressPercent", &ASBZDrillEx::execGetProgressPercent },
			{ "GetProgressPerSec", &ASBZDrillEx::execGetProgressPerSec },
			{ "GetTimeLeft", &ASBZDrillEx::execGetTimeLeft },
			{ "IsFastSpeed", &ASBZDrillEx::execIsFastSpeed },
			{ "JamDrill", &ASBZDrillEx::execJamDrill },
			{ "NeedsAdjusting", &ASBZDrillEx::execNeedsAdjusting },
			{ "OnAdjustSpeedInteraction", &ASBZDrillEx::execOnAdjustSpeedInteraction },
			{ "OnFixTransitionInteraction", &ASBZDrillEx::execOnFixTransitionInteraction },
			{ "OnRep_Data", &ASBZDrillEx::execOnRep_Data },
			{ "OnToggleOnOffInteraction", &ASBZDrillEx::execOnToggleOnOffInteraction },
			{ "OnUnjamInteraction", &ASBZDrillEx::execOnUnjamInteraction },
			{ "SetAttractorInstigator", &ASBZDrillEx::execSetAttractorInstigator },
			{ "SetEnabled", &ASBZDrillEx::execSetEnabled },
			{ "StartDrill", &ASBZDrillEx::execStartDrill },
			{ "TEMP_SetShowOutline", &ASBZDrillEx::execTEMP_SetShowOutline },
			{ "ToggleOnOff", &ASBZDrillEx::execToggleOnOff },
			{ "TurnOff", &ASBZDrillEx::execTurnOff },
			{ "UnjamDrill", &ASBZDrillEx::execUnjamDrill },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZDrillEx_AdjustSpeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_AdjustSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_AdjustSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "AdjustSpeed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_AdjustSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_AdjustSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_AdjustSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_AdjustSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrillEx_GetCurrentMaterial_Statics
	{
		struct SBZDrillEx_eventGetCurrentMaterial_Parms
		{
			USBZDrillMaterial* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZDrillEx_GetCurrentMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrillEx_eventGetCurrentMaterial_Parms, ReturnValue), Z_Construct_UClass_USBZDrillMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrillEx_GetCurrentMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_GetCurrentMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_GetCurrentMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_GetCurrentMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "GetCurrentMaterial", nullptr, nullptr, sizeof(SBZDrillEx_eventGetCurrentMaterial_Parms), Z_Construct_UFunction_ASBZDrillEx_GetCurrentMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_GetCurrentMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_GetCurrentMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_GetCurrentMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_GetCurrentMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_GetCurrentMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrillEx_GetHeat_Statics
	{
		struct SBZDrillEx_eventGetHeat_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZDrillEx_GetHeat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrillEx_eventGetHeat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrillEx_GetHeat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_GetHeat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_GetHeat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_GetHeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "GetHeat", nullptr, nullptr, sizeof(SBZDrillEx_eventGetHeat_Parms), Z_Construct_UFunction_ASBZDrillEx_GetHeat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_GetHeat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_GetHeat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_GetHeat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_GetHeat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_GetHeat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrillEx_GetHeatPerSec_Statics
	{
		struct SBZDrillEx_eventGetHeatPerSec_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZDrillEx_GetHeatPerSec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrillEx_eventGetHeatPerSec_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrillEx_GetHeatPerSec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_GetHeatPerSec_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_GetHeatPerSec_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_GetHeatPerSec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "GetHeatPerSec", nullptr, nullptr, sizeof(SBZDrillEx_eventGetHeatPerSec_Parms), Z_Construct_UFunction_ASBZDrillEx_GetHeatPerSec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_GetHeatPerSec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_GetHeatPerSec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_GetHeatPerSec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_GetHeatPerSec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_GetHeatPerSec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrillEx_GetProgress_Statics
	{
		struct SBZDrillEx_eventGetProgress_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZDrillEx_GetProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrillEx_eventGetProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrillEx_GetProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_GetProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_GetProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_GetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "GetProgress", nullptr, nullptr, sizeof(SBZDrillEx_eventGetProgress_Parms), Z_Construct_UFunction_ASBZDrillEx_GetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_GetProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_GetProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_GetProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_GetProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_GetProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrillEx_GetProgressPercent_Statics
	{
		struct SBZDrillEx_eventGetProgressPercent_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZDrillEx_GetProgressPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrillEx_eventGetProgressPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrillEx_GetProgressPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_GetProgressPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_GetProgressPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_GetProgressPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "GetProgressPercent", nullptr, nullptr, sizeof(SBZDrillEx_eventGetProgressPercent_Parms), Z_Construct_UFunction_ASBZDrillEx_GetProgressPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_GetProgressPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_GetProgressPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_GetProgressPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_GetProgressPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_GetProgressPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrillEx_GetProgressPerSec_Statics
	{
		struct SBZDrillEx_eventGetProgressPerSec_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZDrillEx_GetProgressPerSec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrillEx_eventGetProgressPerSec_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrillEx_GetProgressPerSec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_GetProgressPerSec_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_GetProgressPerSec_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_GetProgressPerSec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "GetProgressPerSec", nullptr, nullptr, sizeof(SBZDrillEx_eventGetProgressPerSec_Parms), Z_Construct_UFunction_ASBZDrillEx_GetProgressPerSec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_GetProgressPerSec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_GetProgressPerSec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_GetProgressPerSec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_GetProgressPerSec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_GetProgressPerSec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrillEx_GetTimeLeft_Statics
	{
		struct SBZDrillEx_eventGetTimeLeft_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZDrillEx_GetTimeLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrillEx_eventGetTimeLeft_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrillEx_GetTimeLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_GetTimeLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_GetTimeLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_GetTimeLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "GetTimeLeft", nullptr, nullptr, sizeof(SBZDrillEx_eventGetTimeLeft_Parms), Z_Construct_UFunction_ASBZDrillEx_GetTimeLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_GetTimeLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_GetTimeLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_GetTimeLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_GetTimeLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_GetTimeLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrillEx_IsFastSpeed_Statics
	{
		struct SBZDrillEx_eventIsFastSpeed_Parms
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
	void Z_Construct_UFunction_ASBZDrillEx_IsFastSpeed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZDrillEx_eventIsFastSpeed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDrillEx_IsFastSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDrillEx_eventIsFastSpeed_Parms), &Z_Construct_UFunction_ASBZDrillEx_IsFastSpeed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrillEx_IsFastSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_IsFastSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_IsFastSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_IsFastSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "IsFastSpeed", nullptr, nullptr, sizeof(SBZDrillEx_eventIsFastSpeed_Parms), Z_Construct_UFunction_ASBZDrillEx_IsFastSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_IsFastSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_IsFastSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_IsFastSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_IsFastSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_IsFastSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrillEx_JamDrill_Statics
	{
		struct SBZDrillEx_eventJamDrill_Parms
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
	void Z_Construct_UFunction_ASBZDrillEx_JamDrill_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZDrillEx_eventJamDrill_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDrillEx_JamDrill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDrillEx_eventJamDrill_Parms), &Z_Construct_UFunction_ASBZDrillEx_JamDrill_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrillEx_JamDrill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_JamDrill_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_JamDrill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_JamDrill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "JamDrill", nullptr, nullptr, sizeof(SBZDrillEx_eventJamDrill_Parms), Z_Construct_UFunction_ASBZDrillEx_JamDrill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_JamDrill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_JamDrill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_JamDrill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_JamDrill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_JamDrill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrillEx_NeedsAdjusting_Statics
	{
		struct SBZDrillEx_eventNeedsAdjusting_Parms
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
	void Z_Construct_UFunction_ASBZDrillEx_NeedsAdjusting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZDrillEx_eventNeedsAdjusting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDrillEx_NeedsAdjusting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDrillEx_eventNeedsAdjusting_Parms), &Z_Construct_UFunction_ASBZDrillEx_NeedsAdjusting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrillEx_NeedsAdjusting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_NeedsAdjusting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_NeedsAdjusting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_NeedsAdjusting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "NeedsAdjusting", nullptr, nullptr, sizeof(SBZDrillEx_eventNeedsAdjusting_Parms), Z_Construct_UFunction_ASBZDrillEx_NeedsAdjusting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_NeedsAdjusting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_NeedsAdjusting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_NeedsAdjusting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_NeedsAdjusting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_NeedsAdjusting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrillEx_OnAdjustSpeedInteraction_Statics
	{
		struct SBZDrillEx_eventOnAdjustSpeedInteraction_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_OnAdjustSpeedInteraction_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZDrillEx_OnAdjustSpeedInteraction_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrillEx_eventOnAdjustSpeedInteraction_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_OnAdjustSpeedInteraction_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_OnAdjustSpeedInteraction_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_OnAdjustSpeedInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZDrillEx_OnAdjustSpeedInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrillEx_eventOnAdjustSpeedInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_OnAdjustSpeedInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_OnAdjustSpeedInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZDrillEx_OnAdjustSpeedInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZDrillEx_eventOnAdjustSpeedInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDrillEx_OnAdjustSpeedInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDrillEx_eventOnAdjustSpeedInteraction_Parms), &Z_Construct_UFunction_ASBZDrillEx_OnAdjustSpeedInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrillEx_OnAdjustSpeedInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_OnAdjustSpeedInteraction_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_OnAdjustSpeedInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_OnAdjustSpeedInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_OnAdjustSpeedInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_OnAdjustSpeedInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "OnAdjustSpeedInteraction", nullptr, nullptr, sizeof(SBZDrillEx_eventOnAdjustSpeedInteraction_Parms), Z_Construct_UFunction_ASBZDrillEx_OnAdjustSpeedInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_OnAdjustSpeedInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_OnAdjustSpeedInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_OnAdjustSpeedInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_OnAdjustSpeedInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_OnAdjustSpeedInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrillEx_OnFixTransitionInteraction_Statics
	{
		struct SBZDrillEx_eventOnFixTransitionInteraction_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_OnFixTransitionInteraction_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZDrillEx_OnFixTransitionInteraction_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrillEx_eventOnFixTransitionInteraction_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_OnFixTransitionInteraction_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_OnFixTransitionInteraction_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_OnFixTransitionInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZDrillEx_OnFixTransitionInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrillEx_eventOnFixTransitionInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_OnFixTransitionInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_OnFixTransitionInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZDrillEx_OnFixTransitionInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZDrillEx_eventOnFixTransitionInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDrillEx_OnFixTransitionInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDrillEx_eventOnFixTransitionInteraction_Parms), &Z_Construct_UFunction_ASBZDrillEx_OnFixTransitionInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrillEx_OnFixTransitionInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_OnFixTransitionInteraction_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_OnFixTransitionInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_OnFixTransitionInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_OnFixTransitionInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_OnFixTransitionInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "OnFixTransitionInteraction", nullptr, nullptr, sizeof(SBZDrillEx_eventOnFixTransitionInteraction_Parms), Z_Construct_UFunction_ASBZDrillEx_OnFixTransitionInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_OnFixTransitionInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_OnFixTransitionInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_OnFixTransitionInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_OnFixTransitionInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_OnFixTransitionInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrillEx_OnMaterialChanged_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZDrillEx_OnMaterialChanged_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrillEx_eventOnMaterialChanged_Parms, Material), Z_Construct_UClass_USBZDrillMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrillEx_OnMaterialChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_OnMaterialChanged_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_OnMaterialChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_OnMaterialChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "OnMaterialChanged", nullptr, nullptr, sizeof(SBZDrillEx_eventOnMaterialChanged_Parms), Z_Construct_UFunction_ASBZDrillEx_OnMaterialChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_OnMaterialChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_OnMaterialChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_OnMaterialChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_OnMaterialChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_OnMaterialChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrillEx_OnRep_Data_Statics
	{
		struct SBZDrillEx_eventOnRep_Data_Parms
		{
			FSBZDrillRepData Old;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Old;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZDrillEx_OnRep_Data_Statics::NewProp_Old = { "Old", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrillEx_eventOnRep_Data_Parms, Old), Z_Construct_UScriptStruct_FSBZDrillRepData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrillEx_OnRep_Data_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_OnRep_Data_Statics::NewProp_Old,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_OnRep_Data_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_OnRep_Data_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "OnRep_Data", nullptr, nullptr, sizeof(SBZDrillEx_eventOnRep_Data_Parms), Z_Construct_UFunction_ASBZDrillEx_OnRep_Data_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_OnRep_Data_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_OnRep_Data_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_OnRep_Data_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_OnRep_Data()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_OnRep_Data_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrillEx_OnSpeedUpdate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProgressRate;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeatRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZDrillEx_OnSpeedUpdate_Statics::NewProp_ProgressRate = { "ProgressRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrillEx_eventOnSpeedUpdate_Parms, ProgressRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZDrillEx_OnSpeedUpdate_Statics::NewProp_HeatRate = { "HeatRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrillEx_eventOnSpeedUpdate_Parms, HeatRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrillEx_OnSpeedUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_OnSpeedUpdate_Statics::NewProp_ProgressRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_OnSpeedUpdate_Statics::NewProp_HeatRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_OnSpeedUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_OnSpeedUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "OnSpeedUpdate", nullptr, nullptr, sizeof(SBZDrillEx_eventOnSpeedUpdate_Parms), Z_Construct_UFunction_ASBZDrillEx_OnSpeedUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_OnSpeedUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_OnSpeedUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_OnSpeedUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_OnSpeedUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_OnSpeedUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrillEx_OnStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZDrillEx_OnStateChanged_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZDrillEx_OnStateChanged_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrillEx_eventOnStateChanged_Parms, State), Z_Construct_UEnum_Starbreeze_ESBZDrillState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrillEx_OnStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_OnStateChanged_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_OnStateChanged_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "OnStateChanged", nullptr, nullptr, sizeof(SBZDrillEx_eventOnStateChanged_Parms), Z_Construct_UFunction_ASBZDrillEx_OnStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_OnStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_OnStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_OnStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrillEx_OnToggleOnOffInteraction_Statics
	{
		struct SBZDrillEx_eventOnToggleOnOffInteraction_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_OnToggleOnOffInteraction_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZDrillEx_OnToggleOnOffInteraction_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrillEx_eventOnToggleOnOffInteraction_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_OnToggleOnOffInteraction_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_OnToggleOnOffInteraction_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_OnToggleOnOffInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZDrillEx_OnToggleOnOffInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrillEx_eventOnToggleOnOffInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_OnToggleOnOffInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_OnToggleOnOffInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZDrillEx_OnToggleOnOffInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZDrillEx_eventOnToggleOnOffInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDrillEx_OnToggleOnOffInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDrillEx_eventOnToggleOnOffInteraction_Parms), &Z_Construct_UFunction_ASBZDrillEx_OnToggleOnOffInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrillEx_OnToggleOnOffInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_OnToggleOnOffInteraction_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_OnToggleOnOffInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_OnToggleOnOffInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_OnToggleOnOffInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_OnToggleOnOffInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "OnToggleOnOffInteraction", nullptr, nullptr, sizeof(SBZDrillEx_eventOnToggleOnOffInteraction_Parms), Z_Construct_UFunction_ASBZDrillEx_OnToggleOnOffInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_OnToggleOnOffInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_OnToggleOnOffInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_OnToggleOnOffInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_OnToggleOnOffInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_OnToggleOnOffInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrillEx_OnUnjamInteraction_Statics
	{
		struct SBZDrillEx_eventOnUnjamInteraction_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_OnUnjamInteraction_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZDrillEx_OnUnjamInteraction_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrillEx_eventOnUnjamInteraction_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_OnUnjamInteraction_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_OnUnjamInteraction_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_OnUnjamInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZDrillEx_OnUnjamInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrillEx_eventOnUnjamInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_OnUnjamInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_OnUnjamInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZDrillEx_OnUnjamInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZDrillEx_eventOnUnjamInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDrillEx_OnUnjamInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDrillEx_eventOnUnjamInteraction_Parms), &Z_Construct_UFunction_ASBZDrillEx_OnUnjamInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrillEx_OnUnjamInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_OnUnjamInteraction_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_OnUnjamInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_OnUnjamInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_OnUnjamInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_OnUnjamInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "OnUnjamInteraction", nullptr, nullptr, sizeof(SBZDrillEx_eventOnUnjamInteraction_Parms), Z_Construct_UFunction_ASBZDrillEx_OnUnjamInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_OnUnjamInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_OnUnjamInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_OnUnjamInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_OnUnjamInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_OnUnjamInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrillEx_SetAttractorInstigator_Statics
	{
		struct SBZDrillEx_eventSetAttractorInstigator_Parms
		{
			APawn* NewInstigator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZDrillEx_SetAttractorInstigator_Statics::NewProp_NewInstigator = { "NewInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrillEx_eventSetAttractorInstigator_Parms, NewInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrillEx_SetAttractorInstigator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_SetAttractorInstigator_Statics::NewProp_NewInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_SetAttractorInstigator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_SetAttractorInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "SetAttractorInstigator", nullptr, nullptr, sizeof(SBZDrillEx_eventSetAttractorInstigator_Parms), Z_Construct_UFunction_ASBZDrillEx_SetAttractorInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_SetAttractorInstigator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_SetAttractorInstigator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_SetAttractorInstigator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_SetAttractorInstigator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_SetAttractorInstigator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrillEx_SetEnabled_Statics
	{
		struct SBZDrillEx_eventSetEnabled_Parms
		{
			bool bEnabled;
			bool ReturnValue;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZDrillEx_SetEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZDrillEx_eventSetEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDrillEx_SetEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDrillEx_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZDrillEx_SetEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZDrillEx_SetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZDrillEx_eventSetEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDrillEx_SetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDrillEx_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZDrillEx_SetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrillEx_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_SetEnabled_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_SetEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Fix for true pure virtual functions not being implemented\n" },
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
		{ "ToolTip", "Fix for true pure virtual functions not being implemented" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "SetEnabled", nullptr, nullptr, sizeof(SBZDrillEx_eventSetEnabled_Parms), Z_Construct_UFunction_ASBZDrillEx_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrillEx_StartDrill_Statics
	{
		struct SBZDrillEx_eventStartDrill_Parms
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
	void Z_Construct_UFunction_ASBZDrillEx_StartDrill_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZDrillEx_eventStartDrill_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDrillEx_StartDrill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDrillEx_eventStartDrill_Parms), &Z_Construct_UFunction_ASBZDrillEx_StartDrill_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrillEx_StartDrill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_StartDrill_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_StartDrill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_StartDrill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "StartDrill", nullptr, nullptr, sizeof(SBZDrillEx_eventStartDrill_Parms), Z_Construct_UFunction_ASBZDrillEx_StartDrill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_StartDrill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_StartDrill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_StartDrill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_StartDrill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_StartDrill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrillEx_TEMP_SetShowOutline_Statics
	{
		struct SBZDrillEx_eventTEMP_SetShowOutline_Parms
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
	void Z_Construct_UFunction_ASBZDrillEx_TEMP_SetShowOutline_Statics::NewProp_bShow_SetBit(void* Obj)
	{
		((SBZDrillEx_eventTEMP_SetShowOutline_Parms*)Obj)->bShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDrillEx_TEMP_SetShowOutline_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDrillEx_eventTEMP_SetShowOutline_Parms), &Z_Construct_UFunction_ASBZDrillEx_TEMP_SetShowOutline_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrillEx_TEMP_SetShowOutline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_TEMP_SetShowOutline_Statics::NewProp_bShow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_TEMP_SetShowOutline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_TEMP_SetShowOutline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "TEMP_SetShowOutline", nullptr, nullptr, sizeof(SBZDrillEx_eventTEMP_SetShowOutline_Parms), Z_Construct_UFunction_ASBZDrillEx_TEMP_SetShowOutline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_TEMP_SetShowOutline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_TEMP_SetShowOutline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_TEMP_SetShowOutline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_TEMP_SetShowOutline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_TEMP_SetShowOutline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrillEx_ToggleOnOff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_ToggleOnOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_ToggleOnOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "ToggleOnOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_ToggleOnOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_ToggleOnOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_ToggleOnOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_ToggleOnOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrillEx_TurnOff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_TurnOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_TurnOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "TurnOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_TurnOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_TurnOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_TurnOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_TurnOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDrillEx_UnjamDrill_Statics
	{
		struct SBZDrillEx_eventUnjamDrill_Parms
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
	void Z_Construct_UFunction_ASBZDrillEx_UnjamDrill_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZDrillEx_eventUnjamDrill_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDrillEx_UnjamDrill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDrillEx_eventUnjamDrill_Parms), &Z_Construct_UFunction_ASBZDrillEx_UnjamDrill_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDrillEx_UnjamDrill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDrillEx_UnjamDrill_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDrillEx_UnjamDrill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDrillEx_UnjamDrill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDrillEx, nullptr, "UnjamDrill", nullptr, nullptr, sizeof(SBZDrillEx_eventUnjamDrill_Parms), Z_Construct_UFunction_ASBZDrillEx_UnjamDrill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_UnjamDrill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDrillEx_UnjamDrill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDrillEx_UnjamDrill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDrillEx_UnjamDrill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDrillEx_UnjamDrill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZDrillEx_NoRegister()
	{
		return ASBZDrillEx::StaticClass();
	}
	struct Z_Construct_UClass_ASBZDrillEx_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionProgressMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransitionProgressMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionHeatAddition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransitionHeatAddition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownPerSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownPerSec;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomMaterial_MetaData[];
#endif
		static void NewProp_bRandomMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnjamInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnjamInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixTransitionInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FixTransitionInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustSpeedInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdjustSpeedInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggleOnOffInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToggleOnOffInteraction;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttractorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttractorComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZDrillEx_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZDrillEx_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZDrillEx_AdjustSpeed, "AdjustSpeed" }, // 781576098
		{ &Z_Construct_UFunction_ASBZDrillEx_GetCurrentMaterial, "GetCurrentMaterial" }, // 2017558763
		{ &Z_Construct_UFunction_ASBZDrillEx_GetHeat, "GetHeat" }, // 499076382
		{ &Z_Construct_UFunction_ASBZDrillEx_GetHeatPerSec, "GetHeatPerSec" }, // 980038292
		{ &Z_Construct_UFunction_ASBZDrillEx_GetProgress, "GetProgress" }, // 3953574065
		{ &Z_Construct_UFunction_ASBZDrillEx_GetProgressPercent, "GetProgressPercent" }, // 484674847
		{ &Z_Construct_UFunction_ASBZDrillEx_GetProgressPerSec, "GetProgressPerSec" }, // 1628189596
		{ &Z_Construct_UFunction_ASBZDrillEx_GetTimeLeft, "GetTimeLeft" }, // 1275877713
		{ &Z_Construct_UFunction_ASBZDrillEx_IsFastSpeed, "IsFastSpeed" }, // 2415473692
		{ &Z_Construct_UFunction_ASBZDrillEx_JamDrill, "JamDrill" }, // 1054295300
		{ &Z_Construct_UFunction_ASBZDrillEx_NeedsAdjusting, "NeedsAdjusting" }, // 3017187710
		{ &Z_Construct_UFunction_ASBZDrillEx_OnAdjustSpeedInteraction, "OnAdjustSpeedInteraction" }, // 1883590841
		{ &Z_Construct_UFunction_ASBZDrillEx_OnFixTransitionInteraction, "OnFixTransitionInteraction" }, // 13775096
		{ &Z_Construct_UFunction_ASBZDrillEx_OnMaterialChanged, "OnMaterialChanged" }, // 1171211397
		{ &Z_Construct_UFunction_ASBZDrillEx_OnRep_Data, "OnRep_Data" }, // 2638421823
		{ &Z_Construct_UFunction_ASBZDrillEx_OnSpeedUpdate, "OnSpeedUpdate" }, // 849747640
		{ &Z_Construct_UFunction_ASBZDrillEx_OnStateChanged, "OnStateChanged" }, // 1820239537
		{ &Z_Construct_UFunction_ASBZDrillEx_OnToggleOnOffInteraction, "OnToggleOnOffInteraction" }, // 1476655786
		{ &Z_Construct_UFunction_ASBZDrillEx_OnUnjamInteraction, "OnUnjamInteraction" }, // 81323415
		{ &Z_Construct_UFunction_ASBZDrillEx_SetAttractorInstigator, "SetAttractorInstigator" }, // 2117119163
		{ &Z_Construct_UFunction_ASBZDrillEx_SetEnabled, "SetEnabled" }, // 2805231605
		{ &Z_Construct_UFunction_ASBZDrillEx_StartDrill, "StartDrill" }, // 3699991886
		{ &Z_Construct_UFunction_ASBZDrillEx_TEMP_SetShowOutline, "TEMP_SetShowOutline" }, // 1900843727
		{ &Z_Construct_UFunction_ASBZDrillEx_ToggleOnOff, "ToggleOnOff" }, // 1436646955
		{ &Z_Construct_UFunction_ASBZDrillEx_TurnOff, "TurnOff" }, // 3902193485
		{ &Z_Construct_UFunction_ASBZDrillEx_UnjamDrill, "UnjamDrill" }, // 2352610693
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrillEx_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDrillEx.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_OnDrillCompleteServer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillEx" },
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_OnDrillCompleteServer = { "OnDrillCompleteServer", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDrillEx, OnDrillCompleteServer), Z_Construct_UDelegateFunction_Starbreeze_SBZDrillCompleteEx__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_OnDrillCompleteServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_OnDrillCompleteServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillEx" },
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDrillEx, Duration), METADATA_PARAMS(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_TransitionProgressMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillEx" },
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_TransitionProgressMultiplier = { "TransitionProgressMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDrillEx, TransitionProgressMultiplier), METADATA_PARAMS(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_TransitionProgressMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_TransitionProgressMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_TransitionHeatAddition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillEx" },
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_TransitionHeatAddition = { "TransitionHeatAddition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDrillEx, TransitionHeatAddition), METADATA_PARAMS(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_TransitionHeatAddition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_TransitionHeatAddition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillEx" },
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_Data = { "Data", "OnRep_Data", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDrillEx, Data), Z_Construct_UScriptStruct_FSBZDrillRepData, METADATA_PARAMS(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_CooldownPerSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillEx" },
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_CooldownPerSec = { "CooldownPerSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDrillEx, CooldownPerSec), METADATA_PARAMS(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_CooldownPerSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_CooldownPerSec_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZDrillMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_Materials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillEx" },
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDrillEx, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_Materials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_bRandomMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillEx" },
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	void Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_bRandomMaterial_SetBit(void* Obj)
	{
		((ASBZDrillEx*)Obj)->bRandomMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_bRandomMaterial = { "bRandomMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZDrillEx), &Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_bRandomMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_bRandomMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_bRandomMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_UnjamInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillEx" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_UnjamInteraction = { "UnjamInteraction", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDrillEx, UnjamInteraction), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_UnjamInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_UnjamInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_FixTransitionInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillEx" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_FixTransitionInteraction = { "FixTransitionInteraction", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDrillEx, FixTransitionInteraction), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_FixTransitionInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_FixTransitionInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_AdjustSpeedInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillEx" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_AdjustSpeedInteraction = { "AdjustSpeedInteraction", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDrillEx, AdjustSpeedInteraction), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_AdjustSpeedInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_AdjustSpeedInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_ToggleOnOffInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillEx" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_ToggleOnOffInteraction = { "ToggleOnOffInteraction", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDrillEx, ToggleOnOffInteraction), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_ToggleOnOffInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_ToggleOnOffInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_WidgetComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillEx" },
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_WidgetComponent = { "WidgetComponent", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDrillEx, WidgetComponent), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_WidgetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_WidgetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_OutlineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillEx" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_OutlineComponent = { "OutlineComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDrillEx, OutlineComponent), Z_Construct_UClass_USBZOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_OutlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_OutlineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_OutlineAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillEx" },
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_OutlineAsset = { "OutlineAsset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDrillEx, OutlineAsset), Z_Construct_UClass_USBZOutlineAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_OutlineAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_OutlineAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_AttractorComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillEx" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZDrillEx.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_AttractorComponent = { "AttractorComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDrillEx, AttractorComponent), Z_Construct_UClass_USBZAIAttractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_AttractorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_AttractorComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZDrillEx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_OnDrillCompleteServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_TransitionProgressMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_TransitionHeatAddition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_CooldownPerSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_Materials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_bRandomMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_UnjamInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_FixTransitionInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_AdjustSpeedInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_ToggleOnOffInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_WidgetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_OutlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_OutlineAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDrillEx_Statics::NewProp_AttractorComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZDrillEx_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZAIActionInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZDrillEx, ISBZAIActionInteractableInterface), false },
			{ Z_Construct_UClass_UAISightTargetInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZDrillEx, IAISightTargetInterface), false },
			{ Z_Construct_UClass_USBZAIAttractorInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZDrillEx, ISBZAIAttractorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZDrillEx_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZDrillEx>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZDrillEx_Statics::ClassParams = {
		&ASBZDrillEx::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZDrillEx_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrillEx_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZDrillEx_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDrillEx_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZDrillEx()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZDrillEx_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZDrillEx, 2857533914);
	template<> STARBREEZE_API UClass* StaticClass<ASBZDrillEx>()
	{
		return ASBZDrillEx::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZDrillEx(Z_Construct_UClass_ASBZDrillEx, &ASBZDrillEx::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZDrillEx"), false, nullptr, nullptr, nullptr);

	void ASBZDrillEx::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Data(TEXT("Data"));

		const bool bIsValid = true
			&& Name_Data == ClassReps[(int32)ENetFields_Private::Data].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZDrillEx"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZDrillEx);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3GameIntensityAnalyzer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3GameIntensityAnalyzer() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3GameIntensityAnalyzer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3GameIntensityAnalyzer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UMG_API UClass* Z_Construct_UClass_URetainerBox_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBagHandle();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkStateValue_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSwitchValue_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogDataAsset_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPD3GameIntensityAnalyzer::execAddGlitchEffectSourceActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Range);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddGlitchEffectSourceActor(Z_Param_Actor,Z_Param_Range);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3GameIntensityAnalyzer::execAddGlitchRetainerBox)
	{
		P_GET_OBJECT(URetainerBox,Z_Param_RetainerBox);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddGlitchRetainerBox(Z_Param_RetainerBox);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3GameIntensityAnalyzer::execGetGameIntensityAnalyzer)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPD3GameIntensityAnalyzer**)Z_Param__Result=UPD3GameIntensityAnalyzer::GetGameIntensityAnalyzer(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3GameIntensityAnalyzer::execHandleBagSecured)
	{
		P_GET_STRUCT_REF(FSBZBagHandle,Z_Param_Out_BagHandle);
		P_GET_PROPERTY(FIntProperty,Z_Param_SecuredCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_TotalLeftToSecure);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleBagSecured(Z_Param_Out_BagHandle,Z_Param_SecuredCount,Z_Param_TotalLeftToSecure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3GameIntensityAnalyzer::execHandleGameStateChanged)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_OldState);
		P_GET_ENUM(EPD3HeistState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleGameStateChanged(EPD3HeistState(Z_Param_OldState),EPD3HeistState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3GameIntensityAnalyzer::execHandleProgressionIndexChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleProgressionIndexChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3GameIntensityAnalyzer::execHandleSuspenseValueChanged)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSuspenseValueChanged(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3GameIntensityAnalyzer::execOnExitedActionPhase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitedActionPhase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3GameIntensityAnalyzer::execRemoveGlitchEffectSourceActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveGlitchEffectSourceActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	void UPD3GameIntensityAnalyzer::StaticRegisterNativesUPD3GameIntensityAnalyzer()
	{
		UClass* Class = UPD3GameIntensityAnalyzer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGlitchEffectSourceActor", &UPD3GameIntensityAnalyzer::execAddGlitchEffectSourceActor },
			{ "AddGlitchRetainerBox", &UPD3GameIntensityAnalyzer::execAddGlitchRetainerBox },
			{ "GetGameIntensityAnalyzer", &UPD3GameIntensityAnalyzer::execGetGameIntensityAnalyzer },
			{ "HandleBagSecured", &UPD3GameIntensityAnalyzer::execHandleBagSecured },
			{ "HandleGameStateChanged", &UPD3GameIntensityAnalyzer::execHandleGameStateChanged },
			{ "HandleProgressionIndexChanged", &UPD3GameIntensityAnalyzer::execHandleProgressionIndexChanged },
			{ "HandleSuspenseValueChanged", &UPD3GameIntensityAnalyzer::execHandleSuspenseValueChanged },
			{ "OnExitedActionPhase", &UPD3GameIntensityAnalyzer::execOnExitedActionPhase },
			{ "RemoveGlitchEffectSourceActor", &UPD3GameIntensityAnalyzer::execRemoveGlitchEffectSourceActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchEffectSourceActor_Statics
	{
		struct PD3GameIntensityAnalyzer_eventAddGlitchEffectSourceActor_Parms
		{
			AActor* Actor;
			float Range;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Range;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchEffectSourceActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3GameIntensityAnalyzer_eventAddGlitchEffectSourceActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchEffectSourceActor_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3GameIntensityAnalyzer_eventAddGlitchEffectSourceActor_Parms, Range), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchEffectSourceActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchEffectSourceActor_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchEffectSourceActor_Statics::NewProp_Range,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchEffectSourceActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchEffectSourceActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3GameIntensityAnalyzer, nullptr, "AddGlitchEffectSourceActor", nullptr, nullptr, sizeof(PD3GameIntensityAnalyzer_eventAddGlitchEffectSourceActor_Parms), Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchEffectSourceActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchEffectSourceActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchEffectSourceActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchEffectSourceActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchEffectSourceActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchEffectSourceActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchRetainerBox_Statics
	{
		struct PD3GameIntensityAnalyzer_eventAddGlitchRetainerBox_Parms
		{
			URetainerBox* RetainerBox;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetainerBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RetainerBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchRetainerBox_Statics::NewProp_RetainerBox_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchRetainerBox_Statics::NewProp_RetainerBox = { "RetainerBox", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3GameIntensityAnalyzer_eventAddGlitchRetainerBox_Parms, RetainerBox), Z_Construct_UClass_URetainerBox_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchRetainerBox_Statics::NewProp_RetainerBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchRetainerBox_Statics::NewProp_RetainerBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchRetainerBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchRetainerBox_Statics::NewProp_RetainerBox,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchRetainerBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchRetainerBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3GameIntensityAnalyzer, nullptr, "AddGlitchRetainerBox", nullptr, nullptr, sizeof(PD3GameIntensityAnalyzer_eventAddGlitchRetainerBox_Parms), Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchRetainerBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchRetainerBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchRetainerBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchRetainerBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchRetainerBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchRetainerBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3GameIntensityAnalyzer_GetGameIntensityAnalyzer_Statics
	{
		struct PD3GameIntensityAnalyzer_eventGetGameIntensityAnalyzer_Parms
		{
			UObject* WorldContextObject;
			UPD3GameIntensityAnalyzer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3GameIntensityAnalyzer_GetGameIntensityAnalyzer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3GameIntensityAnalyzer_eventGetGameIntensityAnalyzer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3GameIntensityAnalyzer_GetGameIntensityAnalyzer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3GameIntensityAnalyzer_GetGameIntensityAnalyzer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3GameIntensityAnalyzer_eventGetGameIntensityAnalyzer_Parms, ReturnValue), Z_Construct_UClass_UPD3GameIntensityAnalyzer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_GetGameIntensityAnalyzer_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_GetGameIntensityAnalyzer_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3GameIntensityAnalyzer_GetGameIntensityAnalyzer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3GameIntensityAnalyzer_GetGameIntensityAnalyzer_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3GameIntensityAnalyzer_GetGameIntensityAnalyzer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3GameIntensityAnalyzer_GetGameIntensityAnalyzer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3GameIntensityAnalyzer_GetGameIntensityAnalyzer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3GameIntensityAnalyzer, nullptr, "GetGameIntensityAnalyzer", nullptr, nullptr, sizeof(PD3GameIntensityAnalyzer_eventGetGameIntensityAnalyzer_Parms), Z_Construct_UFunction_UPD3GameIntensityAnalyzer_GetGameIntensityAnalyzer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_GetGameIntensityAnalyzer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_GetGameIntensityAnalyzer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_GetGameIntensityAnalyzer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3GameIntensityAnalyzer_GetGameIntensityAnalyzer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3GameIntensityAnalyzer_GetGameIntensityAnalyzer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleBagSecured_Statics
	{
		struct PD3GameIntensityAnalyzer_eventHandleBagSecured_Parms
		{
			FSBZBagHandle BagHandle;
			int32 SecuredCount;
			int32 TotalLeftToSecure;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BagHandle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecuredCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalLeftToSecure;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleBagSecured_Statics::NewProp_BagHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleBagSecured_Statics::NewProp_BagHandle = { "BagHandle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3GameIntensityAnalyzer_eventHandleBagSecured_Parms, BagHandle), Z_Construct_UScriptStruct_FSBZBagHandle, METADATA_PARAMS(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleBagSecured_Statics::NewProp_BagHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleBagSecured_Statics::NewProp_BagHandle_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleBagSecured_Statics::NewProp_SecuredCount = { "SecuredCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3GameIntensityAnalyzer_eventHandleBagSecured_Parms, SecuredCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleBagSecured_Statics::NewProp_TotalLeftToSecure = { "TotalLeftToSecure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3GameIntensityAnalyzer_eventHandleBagSecured_Parms, TotalLeftToSecure), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleBagSecured_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleBagSecured_Statics::NewProp_BagHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleBagSecured_Statics::NewProp_SecuredCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleBagSecured_Statics::NewProp_TotalLeftToSecure,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleBagSecured_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleBagSecured_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3GameIntensityAnalyzer, nullptr, "HandleBagSecured", nullptr, nullptr, sizeof(PD3GameIntensityAnalyzer_eventHandleBagSecured_Parms), Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleBagSecured_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleBagSecured_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleBagSecured_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleBagSecured_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleBagSecured()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleBagSecured_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleGameStateChanged_Statics
	{
		struct PD3GameIntensityAnalyzer_eventHandleGameStateChanged_Parms
		{
			EPD3HeistState OldState;
			EPD3HeistState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleGameStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleGameStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3GameIntensityAnalyzer_eventHandleGameStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleGameStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleGameStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3GameIntensityAnalyzer_eventHandleGameStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleGameStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleGameStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleGameStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleGameStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleGameStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleGameStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleGameStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3GameIntensityAnalyzer, nullptr, "HandleGameStateChanged", nullptr, nullptr, sizeof(PD3GameIntensityAnalyzer_eventHandleGameStateChanged_Parms), Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleGameStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleGameStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleGameStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleGameStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleGameStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleGameStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleProgressionIndexChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleProgressionIndexChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleProgressionIndexChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3GameIntensityAnalyzer, nullptr, "HandleProgressionIndexChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleProgressionIndexChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleProgressionIndexChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleProgressionIndexChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleProgressionIndexChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleSuspenseValueChanged_Statics
	{
		struct PD3GameIntensityAnalyzer_eventHandleSuspenseValueChanged_Parms
		{
			uint8 NewValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleSuspenseValueChanged_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3GameIntensityAnalyzer_eventHandleSuspenseValueChanged_Parms, NewValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleSuspenseValueChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleSuspenseValueChanged_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleSuspenseValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleSuspenseValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3GameIntensityAnalyzer, nullptr, "HandleSuspenseValueChanged", nullptr, nullptr, sizeof(PD3GameIntensityAnalyzer_eventHandleSuspenseValueChanged_Parms), Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleSuspenseValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleSuspenseValueChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleSuspenseValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleSuspenseValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleSuspenseValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleSuspenseValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3GameIntensityAnalyzer_OnExitedActionPhase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3GameIntensityAnalyzer_OnExitedActionPhase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3GameIntensityAnalyzer_OnExitedActionPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3GameIntensityAnalyzer, nullptr, "OnExitedActionPhase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_OnExitedActionPhase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_OnExitedActionPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3GameIntensityAnalyzer_OnExitedActionPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3GameIntensityAnalyzer_OnExitedActionPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3GameIntensityAnalyzer_RemoveGlitchEffectSourceActor_Statics
	{
		struct PD3GameIntensityAnalyzer_eventRemoveGlitchEffectSourceActor_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3GameIntensityAnalyzer_RemoveGlitchEffectSourceActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3GameIntensityAnalyzer_eventRemoveGlitchEffectSourceActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3GameIntensityAnalyzer_RemoveGlitchEffectSourceActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3GameIntensityAnalyzer_RemoveGlitchEffectSourceActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3GameIntensityAnalyzer_RemoveGlitchEffectSourceActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3GameIntensityAnalyzer_RemoveGlitchEffectSourceActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3GameIntensityAnalyzer, nullptr, "RemoveGlitchEffectSourceActor", nullptr, nullptr, sizeof(PD3GameIntensityAnalyzer_eventRemoveGlitchEffectSourceActor_Parms), Z_Construct_UFunction_UPD3GameIntensityAnalyzer_RemoveGlitchEffectSourceActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_RemoveGlitchEffectSourceActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_RemoveGlitchEffectSourceActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3GameIntensityAnalyzer_RemoveGlitchEffectSourceActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3GameIntensityAnalyzer_RemoveGlitchEffectSourceActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3GameIntensityAnalyzer_RemoveGlitchEffectSourceActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3GameIntensityAnalyzer_NoRegister()
	{
		return UPD3GameIntensityAnalyzer::StaticClass();
	}
	struct Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SystemStates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MusicSwitches_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MusicSwitches;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuspenseSwitches_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspenseSwitches_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SuspenseSwitches;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnticipationDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnticipationDialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssaultDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssaultDialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlDialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointOfNoReturnDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointOfNoReturnDialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointOfNoReturnReminderDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointOfNoReturnReminderDialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointOfNoReturnReminderDelaySeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointOfNoReturnReminderDelaySeconds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThreatDialog_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThreatDialog_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThreatDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ThreatDialog;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SquadDialog_ValueProp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SquadDialog_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SquadDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SquadDialog;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecuredBagDialogArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecuredBagDialogArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SecuredBagDialogArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecuredBagLeftDialogArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecuredBagLeftDialogArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SecuredBagLeftDialogArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDGlitchMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDGlitchMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlitchTickInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlitchTickInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlitchStrengthModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlitchStrengthModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlitchMinimumDotModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlitchMinimumDotModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlitchStrengthParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GlitchStrengthParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlitchTextureParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GlitchTextureParameterName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlitchEffectSourceMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlitchEffectSourceMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlitchEffectSourceMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GlitchEffectSourceMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlitchRetainerBoxArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlitchRetainerBoxArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlitchRetainerBoxArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GlitchRetainerBoxArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDGlitchDynamicMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDGlitchDynamicMaterialInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchEffectSourceActor, "AddGlitchEffectSourceActor" }, // 3251042856
		{ &Z_Construct_UFunction_UPD3GameIntensityAnalyzer_AddGlitchRetainerBox, "AddGlitchRetainerBox" }, // 3290284769
		{ &Z_Construct_UFunction_UPD3GameIntensityAnalyzer_GetGameIntensityAnalyzer, "GetGameIntensityAnalyzer" }, // 816250740
		{ &Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleBagSecured, "HandleBagSecured" }, // 1154105720
		{ &Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleGameStateChanged, "HandleGameStateChanged" }, // 693600315
		{ &Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleProgressionIndexChanged, "HandleProgressionIndexChanged" }, // 3868491804
		{ &Z_Construct_UFunction_UPD3GameIntensityAnalyzer_HandleSuspenseValueChanged, "HandleSuspenseValueChanged" }, // 3320153356
		{ &Z_Construct_UFunction_UPD3GameIntensityAnalyzer_OnExitedActionPhase, "OnExitedActionPhase" }, // 2553645270
		{ &Z_Construct_UFunction_UPD3GameIntensityAnalyzer_RemoveGlitchEffectSourceActor, "RemoveGlitchEffectSourceActor" }, // 1132672529
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3GameIntensityAnalyzer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SystemStates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3GameIntensityAnalyzer" },
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SystemStates = { "SystemStates", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(SystemStates, UPD3GameIntensityAnalyzer), STRUCT_OFFSET(UPD3GameIntensityAnalyzer, SystemStates), Z_Construct_UClass_UAkStateValue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SystemStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SystemStates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_MusicSwitches_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3GameIntensityAnalyzer" },
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_MusicSwitches = { "MusicSwitches", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(MusicSwitches, UPD3GameIntensityAnalyzer), STRUCT_OFFSET(UPD3GameIntensityAnalyzer, MusicSwitches), Z_Construct_UClass_UAkSwitchValue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_MusicSwitches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_MusicSwitches_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SuspenseSwitches_Inner = { "SuspenseSwitches", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkSwitchValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SuspenseSwitches_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3GameIntensityAnalyzer" },
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SuspenseSwitches = { "SuspenseSwitches", nullptr, (EPropertyFlags)0x0040000000000045, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3GameIntensityAnalyzer, SuspenseSwitches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SuspenseSwitches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SuspenseSwitches_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_AnticipationDialog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3GameIntensityAnalyzer" },
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_AnticipationDialog = { "AnticipationDialog", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3GameIntensityAnalyzer, AnticipationDialog), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_AnticipationDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_AnticipationDialog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_AssaultDialog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3GameIntensityAnalyzer" },
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_AssaultDialog = { "AssaultDialog", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3GameIntensityAnalyzer, AssaultDialog), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_AssaultDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_AssaultDialog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_ControlDialog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3GameIntensityAnalyzer" },
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_ControlDialog = { "ControlDialog", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3GameIntensityAnalyzer, ControlDialog), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_ControlDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_ControlDialog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_PointOfNoReturnDialog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3GameIntensityAnalyzer" },
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_PointOfNoReturnDialog = { "PointOfNoReturnDialog", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3GameIntensityAnalyzer, PointOfNoReturnDialog), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_PointOfNoReturnDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_PointOfNoReturnDialog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_PointOfNoReturnReminderDialog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3GameIntensityAnalyzer" },
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_PointOfNoReturnReminderDialog = { "PointOfNoReturnReminderDialog", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3GameIntensityAnalyzer, PointOfNoReturnReminderDialog), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_PointOfNoReturnReminderDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_PointOfNoReturnReminderDialog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_PointOfNoReturnReminderDelaySeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3GameIntensityAnalyzer" },
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_PointOfNoReturnReminderDelaySeconds = { "PointOfNoReturnReminderDelaySeconds", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3GameIntensityAnalyzer, PointOfNoReturnReminderDelaySeconds), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_PointOfNoReturnReminderDelaySeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_PointOfNoReturnReminderDelaySeconds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_ThreatDialog_ValueProp = { "ThreatDialog", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_ThreatDialog_Key_KeyProp = { "ThreatDialog_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_ThreatDialog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3GameIntensityAnalyzer" },
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_ThreatDialog = { "ThreatDialog", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3GameIntensityAnalyzer, ThreatDialog), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_ThreatDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_ThreatDialog_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SquadDialog_ValueProp = { "SquadDialog", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SquadDialog_Key_KeyProp = { "SquadDialog_Key", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAIOrder_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SquadDialog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3GameIntensityAnalyzer" },
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SquadDialog = { "SquadDialog", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3GameIntensityAnalyzer, SquadDialog), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SquadDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SquadDialog_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SecuredBagDialogArray_Inner = { "SecuredBagDialogArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SecuredBagDialogArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3GameIntensityAnalyzer" },
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SecuredBagDialogArray = { "SecuredBagDialogArray", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3GameIntensityAnalyzer, SecuredBagDialogArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SecuredBagDialogArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SecuredBagDialogArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SecuredBagLeftDialogArray_Inner = { "SecuredBagLeftDialogArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SecuredBagLeftDialogArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3GameIntensityAnalyzer" },
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SecuredBagLeftDialogArray = { "SecuredBagLeftDialogArray", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3GameIntensityAnalyzer, SecuredBagLeftDialogArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SecuredBagLeftDialogArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SecuredBagLeftDialogArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_HUDGlitchMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3GameIntensityAnalyzer" },
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_HUDGlitchMaterial = { "HUDGlitchMaterial", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3GameIntensityAnalyzer, HUDGlitchMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_HUDGlitchMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_HUDGlitchMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchTickInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3GameIntensityAnalyzer" },
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchTickInterval = { "GlitchTickInterval", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3GameIntensityAnalyzer, GlitchTickInterval), METADATA_PARAMS(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchTickInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchTickInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchStrengthModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3GameIntensityAnalyzer" },
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchStrengthModifier = { "GlitchStrengthModifier", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3GameIntensityAnalyzer, GlitchStrengthModifier), METADATA_PARAMS(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchStrengthModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchStrengthModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchMinimumDotModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3GameIntensityAnalyzer" },
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchMinimumDotModifier = { "GlitchMinimumDotModifier", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3GameIntensityAnalyzer, GlitchMinimumDotModifier), METADATA_PARAMS(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchMinimumDotModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchMinimumDotModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchStrengthParameterName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3GameIntensityAnalyzer" },
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchStrengthParameterName = { "GlitchStrengthParameterName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3GameIntensityAnalyzer, GlitchStrengthParameterName), METADATA_PARAMS(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchStrengthParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchStrengthParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchTextureParameterName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3GameIntensityAnalyzer" },
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchTextureParameterName = { "GlitchTextureParameterName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3GameIntensityAnalyzer, GlitchTextureParameterName), METADATA_PARAMS(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchTextureParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchTextureParameterName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchEffectSourceMap_ValueProp = { "GlitchEffectSourceMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchEffectSourceMap_Key_KeyProp = { "GlitchEffectSourceMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchEffectSourceMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3GameIntensityAnalyzer" },
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchEffectSourceMap = { "GlitchEffectSourceMap", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3GameIntensityAnalyzer, GlitchEffectSourceMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchEffectSourceMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchEffectSourceMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchRetainerBoxArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3GameIntensityAnalyzer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchRetainerBoxArray_Inner = { "GlitchRetainerBoxArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URetainerBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchRetainerBoxArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchRetainerBoxArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchRetainerBoxArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3GameIntensityAnalyzer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchRetainerBoxArray = { "GlitchRetainerBoxArray", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3GameIntensityAnalyzer, GlitchRetainerBoxArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchRetainerBoxArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchRetainerBoxArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_HUDGlitchDynamicMaterialInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3GameIntensityAnalyzer" },
		{ "ModuleRelativePath", "Public/PD3GameIntensityAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_HUDGlitchDynamicMaterialInstance = { "HUDGlitchDynamicMaterialInstance", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3GameIntensityAnalyzer, HUDGlitchDynamicMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_HUDGlitchDynamicMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_HUDGlitchDynamicMaterialInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SystemStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_MusicSwitches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SuspenseSwitches_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SuspenseSwitches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_AnticipationDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_AssaultDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_ControlDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_PointOfNoReturnDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_PointOfNoReturnReminderDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_PointOfNoReturnReminderDelaySeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_ThreatDialog_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_ThreatDialog_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_ThreatDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SquadDialog_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SquadDialog_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SquadDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SecuredBagDialogArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SecuredBagDialogArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SecuredBagLeftDialogArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_SecuredBagLeftDialogArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_HUDGlitchMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchTickInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchStrengthModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchMinimumDotModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchStrengthParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchTextureParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchEffectSourceMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchEffectSourceMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchEffectSourceMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchRetainerBoxArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_GlitchRetainerBoxArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::NewProp_HUDGlitchDynamicMaterialInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3GameIntensityAnalyzer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::ClassParams = {
		&UPD3GameIntensityAnalyzer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3GameIntensityAnalyzer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3GameIntensityAnalyzer, 824876659);
	template<> STARBREEZE_API UClass* StaticClass<UPD3GameIntensityAnalyzer>()
	{
		return UPD3GameIntensityAnalyzer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3GameIntensityAnalyzer(Z_Construct_UClass_UPD3GameIntensityAnalyzer, &UPD3GameIntensityAnalyzer::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3GameIntensityAnalyzer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3GameIntensityAnalyzer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

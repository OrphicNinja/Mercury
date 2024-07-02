// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReplayBaseWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReplayBaseWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReplayBaseWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReplayBaseWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZReplayInfo();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZReplayPlayerController_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZReplayEventInfo();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameInstance_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReplayFilePlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZReplayBaseWidget::execCycleNextCameraView)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CycleNextCameraView();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZReplayBaseWidget::execCycleNextPlayerView)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CycleNextPlayerView();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZReplayBaseWidget::execDecreaseReplaySpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecreaseReplaySpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZReplayBaseWidget::execGetElapsedTimeSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetElapsedTimeSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZReplayBaseWidget::execGetReplayLengthSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetReplayLengthSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZReplayBaseWidget::execIncreaseReplaySpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseReplaySpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZReplayBaseWidget::execIsPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZReplayBaseWidget::execOnReplayStarted)
	{
		P_GET_STRUCT(FSBZReplayInfo,Z_Param_InReplayInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReplayStarted(Z_Param_InReplayInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZReplayBaseWidget::execOnReplayStopped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReplayStopped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZReplayBaseWidget::execOnReplayTimerUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReplayTimerUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZReplayBaseWidget::execPauseReplay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PauseReplay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZReplayBaseWidget::execQuit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Quit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZReplayBaseWidget::execResumeReplay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ResumeReplay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZReplayBaseWidget::execScrubBackward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScrubBackward();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZReplayBaseWidget::execScrubForward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScrubForward();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZReplayBaseWidget::execSetElapasedTimeSeconds)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ElapsedTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetElapasedTimeSeconds(Z_Param_ElapsedTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZReplayBaseWidget::execStartReplay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartReplay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZReplayBaseWidget::execStopReplay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StopReplay();
		P_NATIVE_END;
	}
	static FName NAME_USBZReplayBaseWidget_OnReplayStart = FName(TEXT("OnReplayStart"));
	void USBZReplayBaseWidget::OnReplayStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZReplayBaseWidget_OnReplayStart),NULL);
	}
	static FName NAME_USBZReplayBaseWidget_OnReplayUpdate = FName(TEXT("OnReplayUpdate"));
	void USBZReplayBaseWidget::OnReplayUpdate(const FString& ReplayLength, const FString& ReplayElapased, float ReplayElapsedPercent)
	{
		SBZReplayBaseWidget_eventOnReplayUpdate_Parms Parms;
		Parms.ReplayLength=ReplayLength;
		Parms.ReplayElapased=ReplayElapased;
		Parms.ReplayElapsedPercent=ReplayElapsedPercent;
		ProcessEvent(FindFunctionChecked(NAME_USBZReplayBaseWidget_OnReplayUpdate),&Parms);
	}
	void USBZReplayBaseWidget::StaticRegisterNativesUSBZReplayBaseWidget()
	{
		UClass* Class = USBZReplayBaseWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CycleNextCameraView", &USBZReplayBaseWidget::execCycleNextCameraView },
			{ "CycleNextPlayerView", &USBZReplayBaseWidget::execCycleNextPlayerView },
			{ "DecreaseReplaySpeed", &USBZReplayBaseWidget::execDecreaseReplaySpeed },
			{ "GetElapsedTimeSeconds", &USBZReplayBaseWidget::execGetElapsedTimeSeconds },
			{ "GetReplayLengthSeconds", &USBZReplayBaseWidget::execGetReplayLengthSeconds },
			{ "IncreaseReplaySpeed", &USBZReplayBaseWidget::execIncreaseReplaySpeed },
			{ "IsPaused", &USBZReplayBaseWidget::execIsPaused },
			{ "OnReplayStarted", &USBZReplayBaseWidget::execOnReplayStarted },
			{ "OnReplayStopped", &USBZReplayBaseWidget::execOnReplayStopped },
			{ "OnReplayTimerUpdate", &USBZReplayBaseWidget::execOnReplayTimerUpdate },
			{ "PauseReplay", &USBZReplayBaseWidget::execPauseReplay },
			{ "Quit", &USBZReplayBaseWidget::execQuit },
			{ "ResumeReplay", &USBZReplayBaseWidget::execResumeReplay },
			{ "ScrubBackward", &USBZReplayBaseWidget::execScrubBackward },
			{ "ScrubForward", &USBZReplayBaseWidget::execScrubForward },
			{ "SetElapasedTimeSeconds", &USBZReplayBaseWidget::execSetElapasedTimeSeconds },
			{ "StartReplay", &USBZReplayBaseWidget::execStartReplay },
			{ "StopReplay", &USBZReplayBaseWidget::execStopReplay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZReplayBaseWidget_CycleNextCameraView_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayBaseWidget_CycleNextCameraView_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplayBaseWidget_CycleNextCameraView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplayBaseWidget, nullptr, "CycleNextCameraView", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayBaseWidget_CycleNextCameraView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_CycleNextCameraView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplayBaseWidget_CycleNextCameraView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplayBaseWidget_CycleNextCameraView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReplayBaseWidget_CycleNextPlayerView_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayBaseWidget_CycleNextPlayerView_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplayBaseWidget_CycleNextPlayerView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplayBaseWidget, nullptr, "CycleNextPlayerView", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayBaseWidget_CycleNextPlayerView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_CycleNextPlayerView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplayBaseWidget_CycleNextPlayerView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplayBaseWidget_CycleNextPlayerView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReplayBaseWidget_DecreaseReplaySpeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayBaseWidget_DecreaseReplaySpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplayBaseWidget_DecreaseReplaySpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplayBaseWidget, nullptr, "DecreaseReplaySpeed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayBaseWidget_DecreaseReplaySpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_DecreaseReplaySpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplayBaseWidget_DecreaseReplaySpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplayBaseWidget_DecreaseReplaySpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReplayBaseWidget_GetElapsedTimeSeconds_Statics
	{
		struct SBZReplayBaseWidget_eventGetElapsedTimeSeconds_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZReplayBaseWidget_GetElapsedTimeSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZReplayBaseWidget_eventGetElapsedTimeSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZReplayBaseWidget_GetElapsedTimeSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZReplayBaseWidget_GetElapsedTimeSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayBaseWidget_GetElapsedTimeSeconds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplayBaseWidget_GetElapsedTimeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplayBaseWidget, nullptr, "GetElapsedTimeSeconds", nullptr, nullptr, sizeof(SBZReplayBaseWidget_eventGetElapsedTimeSeconds_Parms), Z_Construct_UFunction_USBZReplayBaseWidget_GetElapsedTimeSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_GetElapsedTimeSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayBaseWidget_GetElapsedTimeSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_GetElapsedTimeSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplayBaseWidget_GetElapsedTimeSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplayBaseWidget_GetElapsedTimeSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReplayBaseWidget_GetReplayLengthSeconds_Statics
	{
		struct SBZReplayBaseWidget_eventGetReplayLengthSeconds_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZReplayBaseWidget_GetReplayLengthSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZReplayBaseWidget_eventGetReplayLengthSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZReplayBaseWidget_GetReplayLengthSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZReplayBaseWidget_GetReplayLengthSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayBaseWidget_GetReplayLengthSeconds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplayBaseWidget_GetReplayLengthSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplayBaseWidget, nullptr, "GetReplayLengthSeconds", nullptr, nullptr, sizeof(SBZReplayBaseWidget_eventGetReplayLengthSeconds_Parms), Z_Construct_UFunction_USBZReplayBaseWidget_GetReplayLengthSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_GetReplayLengthSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayBaseWidget_GetReplayLengthSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_GetReplayLengthSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplayBaseWidget_GetReplayLengthSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplayBaseWidget_GetReplayLengthSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReplayBaseWidget_IncreaseReplaySpeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayBaseWidget_IncreaseReplaySpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplayBaseWidget_IncreaseReplaySpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplayBaseWidget, nullptr, "IncreaseReplaySpeed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayBaseWidget_IncreaseReplaySpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_IncreaseReplaySpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplayBaseWidget_IncreaseReplaySpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplayBaseWidget_IncreaseReplaySpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReplayBaseWidget_IsPaused_Statics
	{
		struct SBZReplayBaseWidget_eventIsPaused_Parms
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
	void Z_Construct_UFunction_USBZReplayBaseWidget_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZReplayBaseWidget_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZReplayBaseWidget_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZReplayBaseWidget_eventIsPaused_Parms), &Z_Construct_UFunction_USBZReplayBaseWidget_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZReplayBaseWidget_IsPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZReplayBaseWidget_IsPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayBaseWidget_IsPaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplayBaseWidget_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplayBaseWidget, nullptr, "IsPaused", nullptr, nullptr, sizeof(SBZReplayBaseWidget_eventIsPaused_Parms), Z_Construct_UFunction_USBZReplayBaseWidget_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_IsPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayBaseWidget_IsPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_IsPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplayBaseWidget_IsPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplayBaseWidget_IsPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplayBaseWidget, nullptr, "OnReplayStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStarted_Statics
	{
		struct SBZReplayBaseWidget_eventOnReplayStarted_Parms
		{
			FSBZReplayInfo InReplayInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InReplayInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStarted_Statics::NewProp_InReplayInfo = { "InReplayInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZReplayBaseWidget_eventOnReplayStarted_Parms, InReplayInfo), Z_Construct_UScriptStruct_FSBZReplayInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStarted_Statics::NewProp_InReplayInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplayBaseWidget, nullptr, "OnReplayStarted", nullptr, nullptr, sizeof(SBZReplayBaseWidget_eventOnReplayStarted_Parms), Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStopped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStopped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplayBaseWidget, nullptr, "OnReplayStopped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStopped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStopped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayTimerUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayTimerUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayTimerUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplayBaseWidget, nullptr, "OnReplayTimerUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayTimerUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayTimerUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayTimerUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayTimerUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplayLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayElapased_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplayElapased;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReplayElapsedPercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayUpdate_Statics::NewProp_ReplayLength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayUpdate_Statics::NewProp_ReplayLength = { "ReplayLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZReplayBaseWidget_eventOnReplayUpdate_Parms, ReplayLength), METADATA_PARAMS(Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayUpdate_Statics::NewProp_ReplayLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayUpdate_Statics::NewProp_ReplayLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayUpdate_Statics::NewProp_ReplayElapased_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayUpdate_Statics::NewProp_ReplayElapased = { "ReplayElapased", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZReplayBaseWidget_eventOnReplayUpdate_Parms, ReplayElapased), METADATA_PARAMS(Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayUpdate_Statics::NewProp_ReplayElapased_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayUpdate_Statics::NewProp_ReplayElapased_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayUpdate_Statics::NewProp_ReplayElapsedPercent = { "ReplayElapsedPercent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZReplayBaseWidget_eventOnReplayUpdate_Parms, ReplayElapsedPercent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayUpdate_Statics::NewProp_ReplayLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayUpdate_Statics::NewProp_ReplayElapased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayUpdate_Statics::NewProp_ReplayElapsedPercent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplayBaseWidget, nullptr, "OnReplayUpdate", nullptr, nullptr, sizeof(SBZReplayBaseWidget_eventOnReplayUpdate_Parms), Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReplayBaseWidget_PauseReplay_Statics
	{
		struct SBZReplayBaseWidget_eventPauseReplay_Parms
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
	void Z_Construct_UFunction_USBZReplayBaseWidget_PauseReplay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZReplayBaseWidget_eventPauseReplay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZReplayBaseWidget_PauseReplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZReplayBaseWidget_eventPauseReplay_Parms), &Z_Construct_UFunction_USBZReplayBaseWidget_PauseReplay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZReplayBaseWidget_PauseReplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZReplayBaseWidget_PauseReplay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayBaseWidget_PauseReplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplayBaseWidget_PauseReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplayBaseWidget, nullptr, "PauseReplay", nullptr, nullptr, sizeof(SBZReplayBaseWidget_eventPauseReplay_Parms), Z_Construct_UFunction_USBZReplayBaseWidget_PauseReplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_PauseReplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayBaseWidget_PauseReplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_PauseReplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplayBaseWidget_PauseReplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplayBaseWidget_PauseReplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReplayBaseWidget_Quit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayBaseWidget_Quit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplayBaseWidget_Quit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplayBaseWidget, nullptr, "Quit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayBaseWidget_Quit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_Quit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplayBaseWidget_Quit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplayBaseWidget_Quit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReplayBaseWidget_ResumeReplay_Statics
	{
		struct SBZReplayBaseWidget_eventResumeReplay_Parms
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
	void Z_Construct_UFunction_USBZReplayBaseWidget_ResumeReplay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZReplayBaseWidget_eventResumeReplay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZReplayBaseWidget_ResumeReplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZReplayBaseWidget_eventResumeReplay_Parms), &Z_Construct_UFunction_USBZReplayBaseWidget_ResumeReplay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZReplayBaseWidget_ResumeReplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZReplayBaseWidget_ResumeReplay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayBaseWidget_ResumeReplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplayBaseWidget_ResumeReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplayBaseWidget, nullptr, "ResumeReplay", nullptr, nullptr, sizeof(SBZReplayBaseWidget_eventResumeReplay_Parms), Z_Construct_UFunction_USBZReplayBaseWidget_ResumeReplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_ResumeReplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayBaseWidget_ResumeReplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_ResumeReplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplayBaseWidget_ResumeReplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplayBaseWidget_ResumeReplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReplayBaseWidget_ScrubBackward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayBaseWidget_ScrubBackward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplayBaseWidget_ScrubBackward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplayBaseWidget, nullptr, "ScrubBackward", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayBaseWidget_ScrubBackward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_ScrubBackward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplayBaseWidget_ScrubBackward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplayBaseWidget_ScrubBackward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReplayBaseWidget_ScrubForward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayBaseWidget_ScrubForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplayBaseWidget_ScrubForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplayBaseWidget, nullptr, "ScrubForward", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayBaseWidget_ScrubForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_ScrubForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplayBaseWidget_ScrubForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplayBaseWidget_ScrubForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReplayBaseWidget_SetElapasedTimeSeconds_Statics
	{
		struct SBZReplayBaseWidget_eventSetElapasedTimeSeconds_Parms
		{
			float ElapsedTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZReplayBaseWidget_SetElapasedTimeSeconds_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZReplayBaseWidget_eventSetElapasedTimeSeconds_Parms, ElapsedTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZReplayBaseWidget_SetElapasedTimeSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZReplayBaseWidget_SetElapasedTimeSeconds_Statics::NewProp_ElapsedTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayBaseWidget_SetElapasedTimeSeconds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplayBaseWidget_SetElapasedTimeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplayBaseWidget, nullptr, "SetElapasedTimeSeconds", nullptr, nullptr, sizeof(SBZReplayBaseWidget_eventSetElapasedTimeSeconds_Parms), Z_Construct_UFunction_USBZReplayBaseWidget_SetElapasedTimeSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_SetElapasedTimeSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayBaseWidget_SetElapasedTimeSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_SetElapasedTimeSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplayBaseWidget_SetElapasedTimeSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplayBaseWidget_SetElapasedTimeSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReplayBaseWidget_StartReplay_Statics
	{
		struct SBZReplayBaseWidget_eventStartReplay_Parms
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
	void Z_Construct_UFunction_USBZReplayBaseWidget_StartReplay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZReplayBaseWidget_eventStartReplay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZReplayBaseWidget_StartReplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZReplayBaseWidget_eventStartReplay_Parms), &Z_Construct_UFunction_USBZReplayBaseWidget_StartReplay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZReplayBaseWidget_StartReplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZReplayBaseWidget_StartReplay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayBaseWidget_StartReplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplayBaseWidget_StartReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplayBaseWidget, nullptr, "StartReplay", nullptr, nullptr, sizeof(SBZReplayBaseWidget_eventStartReplay_Parms), Z_Construct_UFunction_USBZReplayBaseWidget_StartReplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_StartReplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayBaseWidget_StartReplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_StartReplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplayBaseWidget_StartReplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplayBaseWidget_StartReplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReplayBaseWidget_StopReplay_Statics
	{
		struct SBZReplayBaseWidget_eventStopReplay_Parms
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
	void Z_Construct_UFunction_USBZReplayBaseWidget_StopReplay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZReplayBaseWidget_eventStopReplay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZReplayBaseWidget_StopReplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZReplayBaseWidget_eventStopReplay_Parms), &Z_Construct_UFunction_USBZReplayBaseWidget_StopReplay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZReplayBaseWidget_StopReplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZReplayBaseWidget_StopReplay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayBaseWidget_StopReplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplayBaseWidget_StopReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplayBaseWidget, nullptr, "StopReplay", nullptr, nullptr, sizeof(SBZReplayBaseWidget_eventStopReplay_Parms), Z_Construct_UFunction_USBZReplayBaseWidget_StopReplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_StopReplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayBaseWidget_StopReplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayBaseWidget_StopReplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplayBaseWidget_StopReplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplayBaseWidget_StopReplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZReplayBaseWidget_NoRegister()
	{
		return USBZReplayBaseWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZReplayBaseWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplaySpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReplaySpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplayInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplayEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReplayEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayFilePlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplayFilePlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZReplayBaseWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZReplayBaseWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZReplayBaseWidget_CycleNextCameraView, "CycleNextCameraView" }, // 1764808944
		{ &Z_Construct_UFunction_USBZReplayBaseWidget_CycleNextPlayerView, "CycleNextPlayerView" }, // 1849772411
		{ &Z_Construct_UFunction_USBZReplayBaseWidget_DecreaseReplaySpeed, "DecreaseReplaySpeed" }, // 4096393504
		{ &Z_Construct_UFunction_USBZReplayBaseWidget_GetElapsedTimeSeconds, "GetElapsedTimeSeconds" }, // 2469074108
		{ &Z_Construct_UFunction_USBZReplayBaseWidget_GetReplayLengthSeconds, "GetReplayLengthSeconds" }, // 268328803
		{ &Z_Construct_UFunction_USBZReplayBaseWidget_IncreaseReplaySpeed, "IncreaseReplaySpeed" }, // 1721848066
		{ &Z_Construct_UFunction_USBZReplayBaseWidget_IsPaused, "IsPaused" }, // 1821338166
		{ &Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStart, "OnReplayStart" }, // 413743484
		{ &Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStarted, "OnReplayStarted" }, // 2318504712
		{ &Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayStopped, "OnReplayStopped" }, // 1799530787
		{ &Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayTimerUpdate, "OnReplayTimerUpdate" }, // 40280938
		{ &Z_Construct_UFunction_USBZReplayBaseWidget_OnReplayUpdate, "OnReplayUpdate" }, // 644062467
		{ &Z_Construct_UFunction_USBZReplayBaseWidget_PauseReplay, "PauseReplay" }, // 1423084415
		{ &Z_Construct_UFunction_USBZReplayBaseWidget_Quit, "Quit" }, // 595176815
		{ &Z_Construct_UFunction_USBZReplayBaseWidget_ResumeReplay, "ResumeReplay" }, // 817045347
		{ &Z_Construct_UFunction_USBZReplayBaseWidget_ScrubBackward, "ScrubBackward" }, // 291220912
		{ &Z_Construct_UFunction_USBZReplayBaseWidget_ScrubForward, "ScrubForward" }, // 2903798382
		{ &Z_Construct_UFunction_USBZReplayBaseWidget_SetElapasedTimeSeconds, "SetElapasedTimeSeconds" }, // 4248915020
		{ &Z_Construct_UFunction_USBZReplayBaseWidget_StartReplay, "StartReplay" }, // 3637088834
		{ &Z_Construct_UFunction_USBZReplayBaseWidget_StopReplay, "StopReplay" }, // 2026343441
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplayBaseWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZReplayBaseWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_PlayerController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReplayBaseWidget, PlayerController), Z_Construct_UClass_ASBZReplayPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_ReplaySpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_ReplaySpeed = { "ReplaySpeed", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReplayBaseWidget, ReplaySpeed), METADATA_PARAMS(Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_ReplaySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_ReplaySpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_ReplayInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_ReplayInfo = { "ReplayInfo", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReplayBaseWidget, ReplayInfo), Z_Construct_UScriptStruct_FSBZReplayInfo, METADATA_PARAMS(Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_ReplayInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_ReplayInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_ReplayEvents_Inner = { "ReplayEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZReplayEventInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_ReplayEvents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_ReplayEvents = { "ReplayEvents", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReplayBaseWidget, ReplayEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_ReplayEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_ReplayEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_GameInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReplayBaseWidget, GameInstance), Z_Construct_UClass_USBZGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_GameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_GameInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_ReplayFilePlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZReplayBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_ReplayFilePlayer = { "ReplayFilePlayer", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReplayBaseWidget, ReplayFilePlayer), Z_Construct_UClass_USBZReplayFilePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_ReplayFilePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_ReplayFilePlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZReplayBaseWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_ReplaySpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_ReplayInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_ReplayEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_ReplayEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_GameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplayBaseWidget_Statics::NewProp_ReplayFilePlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZReplayBaseWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZReplayBaseWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZReplayBaseWidget_Statics::ClassParams = {
		&USBZReplayBaseWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZReplayBaseWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplayBaseWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZReplayBaseWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplayBaseWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZReplayBaseWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZReplayBaseWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZReplayBaseWidget, 3098114016);
	template<> STARBREEZE_API UClass* StaticClass<USBZReplayBaseWidget>()
	{
		return USBZReplayBaseWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZReplayBaseWidget(Z_Construct_UClass_USBZReplayBaseWidget, &USBZReplayBaseWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZReplayBaseWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZReplayBaseWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZUIStatics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZUIStatics() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUIStatics_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUIStatics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHUDNotificationData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUIManager_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZWidgetZOrdering();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZUIStatics::execClampText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxCharacters);
		P_GET_UBOOL(Z_Param_bAddElipses);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=USBZUIStatics::ClampText(Z_Param_Out_InText,Z_Param_MaxCharacters,Z_Param_bAddElipses);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIStatics::execDisplayHUDNotification)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSBZHUDNotificationData,Z_Param_Out_HUDNotification);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZUIStatics::DisplayHUDNotification(Z_Param_WorldContextObject,Z_Param_Out_HUDNotification);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIStatics::execFormatIntToText)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_IntToConvert);
		P_GET_PROPERTY(FIntProperty,Z_Param_Integral);
		P_GET_PROPERTY(FIntProperty,Z_Param_Precision);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=USBZUIStatics::FormatIntToText(Z_Param_IntToConvert,Z_Param_Integral,Z_Param_Precision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIStatics::execFormatIntToTimerText)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_IntToConvert);
		P_GET_UBOOL(Z_Param_bAlwaysDisplayHours);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=USBZUIStatics::FormatIntToTimerText(Z_Param_IntToConvert,Z_Param_bAlwaysDisplayHours);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIStatics::execGetCurrentProgressionSaveGameVersion)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZUIStatics::GetCurrentProgressionSaveGameVersion(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIStatics::execGetGlobalColor)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_ColorName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=USBZUIStatics::GetGlobalColor(Z_Param_WorldContextObject,Z_Param_ColorName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIStatics::execGetGlobalFont)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_FontName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSlateFontInfo*)Z_Param__Result=USBZUIStatics::GetGlobalFont(Z_Param_WorldContextObject,Z_Param_FontName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIStatics::execGetMapName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USBZUIStatics::GetMapName(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIStatics::execGetMaxDifficultyCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=USBZUIStatics::GetMaxDifficultyCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIStatics::execGetUIManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZUIManager**)Z_Param__Result=USBZUIStatics::GetUIManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIStatics::execGetWidgetZOrderValue)
	{
		P_GET_ENUM(ESBZWidgetZOrdering,Z_Param_ZOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZUIStatics::GetWidgetZOrderValue(ESBZWidgetZOrdering(Z_Param_ZOrder));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIStatics::execIsInputTypeController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZUIStatics::IsInputTypeController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIStatics::execIsWidgetActuallyVisible)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZUIStatics::IsWidgetActuallyVisible(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIStatics::execLogUiVerbose)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LogText);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZUIStatics::LogUiVerbose(Z_Param_LogText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIStatics::execPlay2DSound)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AudioEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZUIStatics::Play2DSound(Z_Param_WorldContextObject,Z_Param_AudioEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIStatics::execPrintSubtitle)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_StringToPrint);
		P_GET_STRUCT(FLinearColor,Z_Param_Colour);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZUIStatics::PrintSubtitle(Z_Param_WorldContextObject,Z_Param_StringToPrint,Z_Param_Colour,Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIStatics::execSetUIInCinematicMode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZUIStatics::SetUIInCinematicMode(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIStatics::execSetUIInDefaultMode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZUIStatics::SetUIInDefaultMode(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIStatics::execShowDebugObjective)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InTextToPrint);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZUIStatics::ShowDebugObjective(Z_Param_WorldContextObject,Z_Param_Out_InTextToPrint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIStatics::execStop2DSound)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SoundID);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZUIStatics::Stop2DSound(Z_Param_Out_SoundID);
		P_NATIVE_END;
	}
	void USBZUIStatics::StaticRegisterNativesUSBZUIStatics()
	{
		UClass* Class = USBZUIStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClampText", &USBZUIStatics::execClampText },
			{ "DisplayHUDNotification", &USBZUIStatics::execDisplayHUDNotification },
			{ "FormatIntToText", &USBZUIStatics::execFormatIntToText },
			{ "FormatIntToTimerText", &USBZUIStatics::execFormatIntToTimerText },
			{ "GetCurrentProgressionSaveGameVersion", &USBZUIStatics::execGetCurrentProgressionSaveGameVersion },
			{ "GetGlobalColor", &USBZUIStatics::execGetGlobalColor },
			{ "GetGlobalFont", &USBZUIStatics::execGetGlobalFont },
			{ "GetMapName", &USBZUIStatics::execGetMapName },
			{ "GetMaxDifficultyCount", &USBZUIStatics::execGetMaxDifficultyCount },
			{ "GetUIManager", &USBZUIStatics::execGetUIManager },
			{ "GetWidgetZOrderValue", &USBZUIStatics::execGetWidgetZOrderValue },
			{ "IsInputTypeController", &USBZUIStatics::execIsInputTypeController },
			{ "IsWidgetActuallyVisible", &USBZUIStatics::execIsWidgetActuallyVisible },
			{ "LogUiVerbose", &USBZUIStatics::execLogUiVerbose },
			{ "Play2DSound", &USBZUIStatics::execPlay2DSound },
			{ "PrintSubtitle", &USBZUIStatics::execPrintSubtitle },
			{ "SetUIInCinematicMode", &USBZUIStatics::execSetUIInCinematicMode },
			{ "SetUIInDefaultMode", &USBZUIStatics::execSetUIInDefaultMode },
			{ "ShowDebugObjective", &USBZUIStatics::execShowDebugObjective },
			{ "Stop2DSound", &USBZUIStatics::execStop2DSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZUIStatics_ClampText_Statics
	{
		struct SBZUIStatics_eventClampText_Parms
		{
			FText InText;
			int32 MaxCharacters;
			bool bAddElipses;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCharacters;
		static void NewProp_bAddElipses_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddElipses;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_ClampText_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZUIStatics_ClampText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventClampText_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_ClampText_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_ClampText_Statics::NewProp_InText_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZUIStatics_ClampText_Statics::NewProp_MaxCharacters = { "MaxCharacters", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventClampText_Parms, MaxCharacters), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZUIStatics_ClampText_Statics::NewProp_bAddElipses_SetBit(void* Obj)
	{
		((SBZUIStatics_eventClampText_Parms*)Obj)->bAddElipses = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZUIStatics_ClampText_Statics::NewProp_bAddElipses = { "bAddElipses", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZUIStatics_eventClampText_Parms), &Z_Construct_UFunction_USBZUIStatics_ClampText_Statics::NewProp_bAddElipses_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZUIStatics_ClampText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventClampText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIStatics_ClampText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_ClampText_Statics::NewProp_InText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_ClampText_Statics::NewProp_MaxCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_ClampText_Statics::NewProp_bAddElipses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_ClampText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_ClampText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIStatics_ClampText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIStatics, nullptr, "ClampText", nullptr, nullptr, sizeof(SBZUIStatics_eventClampText_Parms), Z_Construct_UFunction_USBZUIStatics_ClampText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_ClampText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_ClampText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_ClampText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIStatics_ClampText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIStatics_ClampText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIStatics_DisplayHUDNotification_Statics
	{
		struct SBZUIStatics_eventDisplayHUDNotification_Parms
		{
			const UObject* WorldContextObject;
			FSBZHUDNotificationData HUDNotification;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDNotification_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HUDNotification;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_DisplayHUDNotification_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIStatics_DisplayHUDNotification_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventDisplayHUDNotification_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_DisplayHUDNotification_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_DisplayHUDNotification_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_DisplayHUDNotification_Statics::NewProp_HUDNotification_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIStatics_DisplayHUDNotification_Statics::NewProp_HUDNotification = { "HUDNotification", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventDisplayHUDNotification_Parms, HUDNotification), Z_Construct_UScriptStruct_FSBZHUDNotificationData, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_DisplayHUDNotification_Statics::NewProp_HUDNotification_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_DisplayHUDNotification_Statics::NewProp_HUDNotification_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIStatics_DisplayHUDNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_DisplayHUDNotification_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_DisplayHUDNotification_Statics::NewProp_HUDNotification,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_DisplayHUDNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIStatics_DisplayHUDNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIStatics, nullptr, "DisplayHUDNotification", nullptr, nullptr, sizeof(SBZUIStatics_eventDisplayHUDNotification_Parms), Z_Construct_UFunction_USBZUIStatics_DisplayHUDNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_DisplayHUDNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_DisplayHUDNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_DisplayHUDNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIStatics_DisplayHUDNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIStatics_DisplayHUDNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIStatics_FormatIntToText_Statics
	{
		struct SBZUIStatics_eventFormatIntToText_Parms
		{
			int32 IntToConvert;
			int32 Integral;
			int32 Precision;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntToConvert;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Integral;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Precision;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZUIStatics_FormatIntToText_Statics::NewProp_IntToConvert = { "IntToConvert", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventFormatIntToText_Parms, IntToConvert), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZUIStatics_FormatIntToText_Statics::NewProp_Integral = { "Integral", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventFormatIntToText_Parms, Integral), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZUIStatics_FormatIntToText_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventFormatIntToText_Parms, Precision), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZUIStatics_FormatIntToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventFormatIntToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIStatics_FormatIntToText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_FormatIntToText_Statics::NewProp_IntToConvert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_FormatIntToText_Statics::NewProp_Integral,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_FormatIntToText_Statics::NewProp_Precision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_FormatIntToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_FormatIntToText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIStatics_FormatIntToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIStatics, nullptr, "FormatIntToText", nullptr, nullptr, sizeof(SBZUIStatics_eventFormatIntToText_Parms), Z_Construct_UFunction_USBZUIStatics_FormatIntToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_FormatIntToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_FormatIntToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_FormatIntToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIStatics_FormatIntToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIStatics_FormatIntToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIStatics_FormatIntToTimerText_Statics
	{
		struct SBZUIStatics_eventFormatIntToTimerText_Parms
		{
			int32 IntToConvert;
			bool bAlwaysDisplayHours;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntToConvert;
		static void NewProp_bAlwaysDisplayHours_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysDisplayHours;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZUIStatics_FormatIntToTimerText_Statics::NewProp_IntToConvert = { "IntToConvert", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventFormatIntToTimerText_Parms, IntToConvert), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZUIStatics_FormatIntToTimerText_Statics::NewProp_bAlwaysDisplayHours_SetBit(void* Obj)
	{
		((SBZUIStatics_eventFormatIntToTimerText_Parms*)Obj)->bAlwaysDisplayHours = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZUIStatics_FormatIntToTimerText_Statics::NewProp_bAlwaysDisplayHours = { "bAlwaysDisplayHours", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZUIStatics_eventFormatIntToTimerText_Parms), &Z_Construct_UFunction_USBZUIStatics_FormatIntToTimerText_Statics::NewProp_bAlwaysDisplayHours_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZUIStatics_FormatIntToTimerText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventFormatIntToTimerText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIStatics_FormatIntToTimerText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_FormatIntToTimerText_Statics::NewProp_IntToConvert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_FormatIntToTimerText_Statics::NewProp_bAlwaysDisplayHours,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_FormatIntToTimerText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_FormatIntToTimerText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIStatics_FormatIntToTimerText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIStatics, nullptr, "FormatIntToTimerText", nullptr, nullptr, sizeof(SBZUIStatics_eventFormatIntToTimerText_Parms), Z_Construct_UFunction_USBZUIStatics_FormatIntToTimerText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_FormatIntToTimerText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_FormatIntToTimerText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_FormatIntToTimerText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIStatics_FormatIntToTimerText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIStatics_FormatIntToTimerText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIStatics_GetCurrentProgressionSaveGameVersion_Statics
	{
		struct SBZUIStatics_eventGetCurrentProgressionSaveGameVersion_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_GetCurrentProgressionSaveGameVersion_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIStatics_GetCurrentProgressionSaveGameVersion_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventGetCurrentProgressionSaveGameVersion_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_GetCurrentProgressionSaveGameVersion_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_GetCurrentProgressionSaveGameVersion_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZUIStatics_GetCurrentProgressionSaveGameVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventGetCurrentProgressionSaveGameVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIStatics_GetCurrentProgressionSaveGameVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_GetCurrentProgressionSaveGameVersion_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_GetCurrentProgressionSaveGameVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_GetCurrentProgressionSaveGameVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIStatics_GetCurrentProgressionSaveGameVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIStatics, nullptr, "GetCurrentProgressionSaveGameVersion", nullptr, nullptr, sizeof(SBZUIStatics_eventGetCurrentProgressionSaveGameVersion_Parms), Z_Construct_UFunction_USBZUIStatics_GetCurrentProgressionSaveGameVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_GetCurrentProgressionSaveGameVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_GetCurrentProgressionSaveGameVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_GetCurrentProgressionSaveGameVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIStatics_GetCurrentProgressionSaveGameVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIStatics_GetCurrentProgressionSaveGameVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIStatics_GetGlobalColor_Statics
	{
		struct SBZUIStatics_eventGetGlobalColor_Parms
		{
			UObject* WorldContextObject;
			FName ColorName;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ColorName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIStatics_GetGlobalColor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventGetGlobalColor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZUIStatics_GetGlobalColor_Statics::NewProp_ColorName = { "ColorName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventGetGlobalColor_Parms, ColorName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIStatics_GetGlobalColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventGetGlobalColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIStatics_GetGlobalColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_GetGlobalColor_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_GetGlobalColor_Statics::NewProp_ColorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_GetGlobalColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_GetGlobalColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIStatics_GetGlobalColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIStatics, nullptr, "GetGlobalColor", nullptr, nullptr, sizeof(SBZUIStatics_eventGetGlobalColor_Parms), Z_Construct_UFunction_USBZUIStatics_GetGlobalColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_GetGlobalColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_GetGlobalColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_GetGlobalColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIStatics_GetGlobalColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIStatics_GetGlobalColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIStatics_GetGlobalFont_Statics
	{
		struct SBZUIStatics_eventGetGlobalFont_Parms
		{
			UObject* WorldContextObject;
			FName FontName;
			FSlateFontInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FontName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIStatics_GetGlobalFont_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventGetGlobalFont_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZUIStatics_GetGlobalFont_Statics::NewProp_FontName = { "FontName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventGetGlobalFont_Parms, FontName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIStatics_GetGlobalFont_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventGetGlobalFont_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIStatics_GetGlobalFont_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_GetGlobalFont_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_GetGlobalFont_Statics::NewProp_FontName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_GetGlobalFont_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_GetGlobalFont_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIStatics_GetGlobalFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIStatics, nullptr, "GetGlobalFont", nullptr, nullptr, sizeof(SBZUIStatics_eventGetGlobalFont_Parms), Z_Construct_UFunction_USBZUIStatics_GetGlobalFont_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_GetGlobalFont_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_GetGlobalFont_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_GetGlobalFont_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIStatics_GetGlobalFont()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIStatics_GetGlobalFont_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIStatics_GetMapName_Statics
	{
		struct SBZUIStatics_eventGetMapName_Parms
		{
			const UObject* WorldContextObject;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_GetMapName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIStatics_GetMapName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventGetMapName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_GetMapName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_GetMapName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZUIStatics_GetMapName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventGetMapName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIStatics_GetMapName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_GetMapName_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_GetMapName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_GetMapName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIStatics_GetMapName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIStatics, nullptr, "GetMapName", nullptr, nullptr, sizeof(SBZUIStatics_eventGetMapName_Parms), Z_Construct_UFunction_USBZUIStatics_GetMapName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_GetMapName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_GetMapName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_GetMapName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIStatics_GetMapName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIStatics_GetMapName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIStatics_GetMaxDifficultyCount_Statics
	{
		struct SBZUIStatics_eventGetMaxDifficultyCount_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZUIStatics_GetMaxDifficultyCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventGetMaxDifficultyCount_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIStatics_GetMaxDifficultyCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_GetMaxDifficultyCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_GetMaxDifficultyCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIStatics_GetMaxDifficultyCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIStatics, nullptr, "GetMaxDifficultyCount", nullptr, nullptr, sizeof(SBZUIStatics_eventGetMaxDifficultyCount_Parms), Z_Construct_UFunction_USBZUIStatics_GetMaxDifficultyCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_GetMaxDifficultyCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_GetMaxDifficultyCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_GetMaxDifficultyCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIStatics_GetMaxDifficultyCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIStatics_GetMaxDifficultyCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIStatics_GetUIManager_Statics
	{
		struct SBZUIStatics_eventGetUIManager_Parms
		{
			const UObject* WorldContextObject;
			USBZUIManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_GetUIManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIStatics_GetUIManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventGetUIManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_GetUIManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_GetUIManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIStatics_GetUIManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventGetUIManager_Parms, ReturnValue), Z_Construct_UClass_USBZUIManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIStatics_GetUIManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_GetUIManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_GetUIManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_GetUIManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIStatics_GetUIManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIStatics, nullptr, "GetUIManager", nullptr, nullptr, sizeof(SBZUIStatics_eventGetUIManager_Parms), Z_Construct_UFunction_USBZUIStatics_GetUIManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_GetUIManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_GetUIManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_GetUIManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIStatics_GetUIManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIStatics_GetUIManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIStatics_GetWidgetZOrderValue_Statics
	{
		struct SBZUIStatics_eventGetWidgetZOrderValue_Parms
		{
			ESBZWidgetZOrdering ZOrder;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ZOrder_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ZOrder;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZUIStatics_GetWidgetZOrderValue_Statics::NewProp_ZOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZUIStatics_GetWidgetZOrderValue_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventGetWidgetZOrderValue_Parms, ZOrder), Z_Construct_UEnum_Starbreeze_ESBZWidgetZOrdering, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZUIStatics_GetWidgetZOrderValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventGetWidgetZOrderValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIStatics_GetWidgetZOrderValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_GetWidgetZOrderValue_Statics::NewProp_ZOrder_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_GetWidgetZOrderValue_Statics::NewProp_ZOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_GetWidgetZOrderValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_GetWidgetZOrderValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIStatics_GetWidgetZOrderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIStatics, nullptr, "GetWidgetZOrderValue", nullptr, nullptr, sizeof(SBZUIStatics_eventGetWidgetZOrderValue_Parms), Z_Construct_UFunction_USBZUIStatics_GetWidgetZOrderValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_GetWidgetZOrderValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_GetWidgetZOrderValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_GetWidgetZOrderValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIStatics_GetWidgetZOrderValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIStatics_GetWidgetZOrderValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIStatics_IsInputTypeController_Statics
	{
		struct SBZUIStatics_eventIsInputTypeController_Parms
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
	void Z_Construct_UFunction_USBZUIStatics_IsInputTypeController_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZUIStatics_eventIsInputTypeController_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZUIStatics_IsInputTypeController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZUIStatics_eventIsInputTypeController_Parms), &Z_Construct_UFunction_USBZUIStatics_IsInputTypeController_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIStatics_IsInputTypeController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_IsInputTypeController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_IsInputTypeController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIStatics_IsInputTypeController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIStatics, nullptr, "IsInputTypeController", nullptr, nullptr, sizeof(SBZUIStatics_eventIsInputTypeController_Parms), Z_Construct_UFunction_USBZUIStatics_IsInputTypeController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_IsInputTypeController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_IsInputTypeController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_IsInputTypeController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIStatics_IsInputTypeController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIStatics_IsInputTypeController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIStatics_IsWidgetActuallyVisible_Statics
	{
		struct SBZUIStatics_eventIsWidgetActuallyVisible_Parms
		{
			UWidget* Widget;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_IsWidgetActuallyVisible_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIStatics_IsWidgetActuallyVisible_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventIsWidgetActuallyVisible_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_IsWidgetActuallyVisible_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_IsWidgetActuallyVisible_Statics::NewProp_Widget_MetaData)) };
	void Z_Construct_UFunction_USBZUIStatics_IsWidgetActuallyVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZUIStatics_eventIsWidgetActuallyVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZUIStatics_IsWidgetActuallyVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZUIStatics_eventIsWidgetActuallyVisible_Parms), &Z_Construct_UFunction_USBZUIStatics_IsWidgetActuallyVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIStatics_IsWidgetActuallyVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_IsWidgetActuallyVisible_Statics::NewProp_Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_IsWidgetActuallyVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_IsWidgetActuallyVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIStatics_IsWidgetActuallyVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIStatics, nullptr, "IsWidgetActuallyVisible", nullptr, nullptr, sizeof(SBZUIStatics_eventIsWidgetActuallyVisible_Parms), Z_Construct_UFunction_USBZUIStatics_IsWidgetActuallyVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_IsWidgetActuallyVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_IsWidgetActuallyVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_IsWidgetActuallyVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIStatics_IsWidgetActuallyVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIStatics_IsWidgetActuallyVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIStatics_LogUiVerbose_Statics
	{
		struct SBZUIStatics_eventLogUiVerbose_Parms
		{
			FString LogText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LogText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_LogUiVerbose_Statics::NewProp_LogText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZUIStatics_LogUiVerbose_Statics::NewProp_LogText = { "LogText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventLogUiVerbose_Parms, LogText), METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_LogUiVerbose_Statics::NewProp_LogText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_LogUiVerbose_Statics::NewProp_LogText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIStatics_LogUiVerbose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_LogUiVerbose_Statics::NewProp_LogText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_LogUiVerbose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIStatics_LogUiVerbose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIStatics, nullptr, "LogUiVerbose", nullptr, nullptr, sizeof(SBZUIStatics_eventLogUiVerbose_Parms), Z_Construct_UFunction_USBZUIStatics_LogUiVerbose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_LogUiVerbose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_LogUiVerbose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_LogUiVerbose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIStatics_LogUiVerbose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIStatics_LogUiVerbose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIStatics_Play2DSound_Statics
	{
		struct SBZUIStatics_eventPlay2DSound_Parms
		{
			const UObject* WorldContextObject;
			const UAkAudioEvent* AudioEvent;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioEvent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_Play2DSound_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIStatics_Play2DSound_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventPlay2DSound_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_Play2DSound_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_Play2DSound_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_Play2DSound_Statics::NewProp_AudioEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIStatics_Play2DSound_Statics::NewProp_AudioEvent = { "AudioEvent", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventPlay2DSound_Parms, AudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_Play2DSound_Statics::NewProp_AudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_Play2DSound_Statics::NewProp_AudioEvent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZUIStatics_Play2DSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventPlay2DSound_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIStatics_Play2DSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_Play2DSound_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_Play2DSound_Statics::NewProp_AudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_Play2DSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_Play2DSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIStatics_Play2DSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIStatics, nullptr, "Play2DSound", nullptr, nullptr, sizeof(SBZUIStatics_eventPlay2DSound_Parms), Z_Construct_UFunction_USBZUIStatics_Play2DSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_Play2DSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_Play2DSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_Play2DSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIStatics_Play2DSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIStatics_Play2DSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIStatics_PrintSubtitle_Statics
	{
		struct SBZUIStatics_eventPrintSubtitle_Parms
		{
			const UObject* WorldContextObject;
			FString StringToPrint;
			FLinearColor Colour;
			float TimeToDisplay;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringToPrint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringToPrint;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Colour;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_PrintSubtitle_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIStatics_PrintSubtitle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventPrintSubtitle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_PrintSubtitle_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_PrintSubtitle_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_PrintSubtitle_Statics::NewProp_StringToPrint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZUIStatics_PrintSubtitle_Statics::NewProp_StringToPrint = { "StringToPrint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventPrintSubtitle_Parms, StringToPrint), METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_PrintSubtitle_Statics::NewProp_StringToPrint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_PrintSubtitle_Statics::NewProp_StringToPrint_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIStatics_PrintSubtitle_Statics::NewProp_Colour = { "Colour", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventPrintSubtitle_Parms, Colour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZUIStatics_PrintSubtitle_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventPrintSubtitle_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIStatics_PrintSubtitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_PrintSubtitle_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_PrintSubtitle_Statics::NewProp_StringToPrint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_PrintSubtitle_Statics::NewProp_Colour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_PrintSubtitle_Statics::NewProp_TimeToDisplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_PrintSubtitle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIStatics_PrintSubtitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIStatics, nullptr, "PrintSubtitle", nullptr, nullptr, sizeof(SBZUIStatics_eventPrintSubtitle_Parms), Z_Construct_UFunction_USBZUIStatics_PrintSubtitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_PrintSubtitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_PrintSubtitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_PrintSubtitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIStatics_PrintSubtitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIStatics_PrintSubtitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIStatics_SetUIInCinematicMode_Statics
	{
		struct SBZUIStatics_eventSetUIInCinematicMode_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_SetUIInCinematicMode_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIStatics_SetUIInCinematicMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventSetUIInCinematicMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_SetUIInCinematicMode_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_SetUIInCinematicMode_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIStatics_SetUIInCinematicMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_SetUIInCinematicMode_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_SetUIInCinematicMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIStatics_SetUIInCinematicMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIStatics, nullptr, "SetUIInCinematicMode", nullptr, nullptr, sizeof(SBZUIStatics_eventSetUIInCinematicMode_Parms), Z_Construct_UFunction_USBZUIStatics_SetUIInCinematicMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_SetUIInCinematicMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_SetUIInCinematicMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_SetUIInCinematicMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIStatics_SetUIInCinematicMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIStatics_SetUIInCinematicMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIStatics_SetUIInDefaultMode_Statics
	{
		struct SBZUIStatics_eventSetUIInDefaultMode_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_SetUIInDefaultMode_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIStatics_SetUIInDefaultMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventSetUIInDefaultMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_SetUIInDefaultMode_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_SetUIInDefaultMode_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIStatics_SetUIInDefaultMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_SetUIInDefaultMode_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_SetUIInDefaultMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIStatics_SetUIInDefaultMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIStatics, nullptr, "SetUIInDefaultMode", nullptr, nullptr, sizeof(SBZUIStatics_eventSetUIInDefaultMode_Parms), Z_Construct_UFunction_USBZUIStatics_SetUIInDefaultMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_SetUIInDefaultMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_SetUIInDefaultMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_SetUIInDefaultMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIStatics_SetUIInDefaultMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIStatics_SetUIInDefaultMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIStatics_ShowDebugObjective_Statics
	{
		struct SBZUIStatics_eventShowDebugObjective_Parms
		{
			const UObject* WorldContextObject;
			FText InTextToPrint;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTextToPrint_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InTextToPrint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_ShowDebugObjective_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIStatics_ShowDebugObjective_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventShowDebugObjective_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_ShowDebugObjective_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_ShowDebugObjective_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_ShowDebugObjective_Statics::NewProp_InTextToPrint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZUIStatics_ShowDebugObjective_Statics::NewProp_InTextToPrint = { "InTextToPrint", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventShowDebugObjective_Parms, InTextToPrint), METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_ShowDebugObjective_Statics::NewProp_InTextToPrint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_ShowDebugObjective_Statics::NewProp_InTextToPrint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIStatics_ShowDebugObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_ShowDebugObjective_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_ShowDebugObjective_Statics::NewProp_InTextToPrint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_ShowDebugObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIStatics_ShowDebugObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIStatics, nullptr, "ShowDebugObjective", nullptr, nullptr, sizeof(SBZUIStatics_eventShowDebugObjective_Parms), Z_Construct_UFunction_USBZUIStatics_ShowDebugObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_ShowDebugObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_ShowDebugObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_ShowDebugObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIStatics_ShowDebugObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIStatics_ShowDebugObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIStatics_Stop2DSound_Statics
	{
		struct SBZUIStatics_eventStop2DSound_Parms
		{
			int32 SoundID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SoundID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZUIStatics_Stop2DSound_Statics::NewProp_SoundID = { "SoundID", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIStatics_eventStop2DSound_Parms, SoundID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIStatics_Stop2DSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIStatics_Stop2DSound_Statics::NewProp_SoundID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIStatics_Stop2DSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIStatics_Stop2DSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIStatics, nullptr, "Stop2DSound", nullptr, nullptr, sizeof(SBZUIStatics_eventStop2DSound_Parms), Z_Construct_UFunction_USBZUIStatics_Stop2DSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_Stop2DSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIStatics_Stop2DSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIStatics_Stop2DSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIStatics_Stop2DSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIStatics_Stop2DSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZUIStatics_NoRegister()
	{
		return USBZUIStatics::StaticClass();
	}
	struct Z_Construct_UClass_USBZUIStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZUIStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZUIStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZUIStatics_ClampText, "ClampText" }, // 1646687132
		{ &Z_Construct_UFunction_USBZUIStatics_DisplayHUDNotification, "DisplayHUDNotification" }, // 191043702
		{ &Z_Construct_UFunction_USBZUIStatics_FormatIntToText, "FormatIntToText" }, // 4256539938
		{ &Z_Construct_UFunction_USBZUIStatics_FormatIntToTimerText, "FormatIntToTimerText" }, // 1351756391
		{ &Z_Construct_UFunction_USBZUIStatics_GetCurrentProgressionSaveGameVersion, "GetCurrentProgressionSaveGameVersion" }, // 3628545465
		{ &Z_Construct_UFunction_USBZUIStatics_GetGlobalColor, "GetGlobalColor" }, // 2235510495
		{ &Z_Construct_UFunction_USBZUIStatics_GetGlobalFont, "GetGlobalFont" }, // 1042757023
		{ &Z_Construct_UFunction_USBZUIStatics_GetMapName, "GetMapName" }, // 1124113157
		{ &Z_Construct_UFunction_USBZUIStatics_GetMaxDifficultyCount, "GetMaxDifficultyCount" }, // 3888988053
		{ &Z_Construct_UFunction_USBZUIStatics_GetUIManager, "GetUIManager" }, // 4286762746
		{ &Z_Construct_UFunction_USBZUIStatics_GetWidgetZOrderValue, "GetWidgetZOrderValue" }, // 3355600708
		{ &Z_Construct_UFunction_USBZUIStatics_IsInputTypeController, "IsInputTypeController" }, // 3348654172
		{ &Z_Construct_UFunction_USBZUIStatics_IsWidgetActuallyVisible, "IsWidgetActuallyVisible" }, // 1167704016
		{ &Z_Construct_UFunction_USBZUIStatics_LogUiVerbose, "LogUiVerbose" }, // 3040247007
		{ &Z_Construct_UFunction_USBZUIStatics_Play2DSound, "Play2DSound" }, // 985375380
		{ &Z_Construct_UFunction_USBZUIStatics_PrintSubtitle, "PrintSubtitle" }, // 204529294
		{ &Z_Construct_UFunction_USBZUIStatics_SetUIInCinematicMode, "SetUIInCinematicMode" }, // 184785076
		{ &Z_Construct_UFunction_USBZUIStatics_SetUIInDefaultMode, "SetUIInDefaultMode" }, // 8097552
		{ &Z_Construct_UFunction_USBZUIStatics_ShowDebugObjective, "ShowDebugObjective" }, // 2983389463
		{ &Z_Construct_UFunction_USBZUIStatics_Stop2DSound, "Stop2DSound" }, // 310329088
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIStatics_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZUIStatics.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZUIStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZUIStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZUIStatics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZUIStatics_Statics::ClassParams = {
		&USBZUIStatics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZUIStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZUIStatics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZUIStatics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZUIStatics, 3066654756);
	template<> STARBREEZE_API UClass* StaticClass<USBZUIStatics>()
	{
		return USBZUIStatics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZUIStatics(Z_Construct_UClass_USBZUIStatics, &USBZUIStatics::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZUIStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZUIStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFullscreenVideoWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFullscreenVideoWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFullscreenVideoWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFullscreenVideoWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnFullscreenVideoActiveChangedDelegate__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMediaPlayer_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZButtonControlsReference();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZFullscreenVideoWidget::execClose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Close();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZFullscreenVideoWidget::execOnControlReferencePressed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnControlReferencePressed(Z_Param_ActionName);
		P_NATIVE_END;
	}
	static FName NAME_USBZFullscreenVideoWidget_BP_OnControlReferencePressed = FName(TEXT("BP_OnControlReferencePressed"));
	void USBZFullscreenVideoWidget::BP_OnControlReferencePressed(FName const& ActionName)
	{
		SBZFullscreenVideoWidget_eventBP_OnControlReferencePressed_Parms Parms;
		Parms.ActionName=ActionName;
		ProcessEvent(FindFunctionChecked(NAME_USBZFullscreenVideoWidget_BP_OnControlReferencePressed),&Parms);
	}
	void USBZFullscreenVideoWidget::StaticRegisterNativesUSBZFullscreenVideoWidget()
	{
		UClass* Class = USBZFullscreenVideoWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Close", &USBZFullscreenVideoWidget::execClose },
			{ "OnControlReferencePressed", &USBZFullscreenVideoWidget::execOnControlReferencePressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZFullscreenVideoWidget_BP_OnControlReferencePressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFullscreenVideoWidget_BP_OnControlReferencePressed_Statics::NewProp_ActionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZFullscreenVideoWidget_BP_OnControlReferencePressed_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFullscreenVideoWidget_eventBP_OnControlReferencePressed_Parms, ActionName), METADATA_PARAMS(Z_Construct_UFunction_USBZFullscreenVideoWidget_BP_OnControlReferencePressed_Statics::NewProp_ActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFullscreenVideoWidget_BP_OnControlReferencePressed_Statics::NewProp_ActionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZFullscreenVideoWidget_BP_OnControlReferencePressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFullscreenVideoWidget_BP_OnControlReferencePressed_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFullscreenVideoWidget_BP_OnControlReferencePressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFullscreenVideoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZFullscreenVideoWidget_BP_OnControlReferencePressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZFullscreenVideoWidget, nullptr, "BP_OnControlReferencePressed", nullptr, nullptr, sizeof(SBZFullscreenVideoWidget_eventBP_OnControlReferencePressed_Parms), Z_Construct_UFunction_USBZFullscreenVideoWidget_BP_OnControlReferencePressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFullscreenVideoWidget_BP_OnControlReferencePressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZFullscreenVideoWidget_BP_OnControlReferencePressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFullscreenVideoWidget_BP_OnControlReferencePressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZFullscreenVideoWidget_BP_OnControlReferencePressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZFullscreenVideoWidget_BP_OnControlReferencePressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZFullscreenVideoWidget_Close_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFullscreenVideoWidget_Close_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFullscreenVideoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZFullscreenVideoWidget_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZFullscreenVideoWidget, nullptr, "Close", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZFullscreenVideoWidget_Close_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFullscreenVideoWidget_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZFullscreenVideoWidget_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZFullscreenVideoWidget_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZFullscreenVideoWidget_OnControlReferencePressed_Statics
	{
		struct SBZFullscreenVideoWidget_eventOnControlReferencePressed_Parms
		{
			FName ActionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZFullscreenVideoWidget_OnControlReferencePressed_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFullscreenVideoWidget_eventOnControlReferencePressed_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZFullscreenVideoWidget_OnControlReferencePressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFullscreenVideoWidget_OnControlReferencePressed_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFullscreenVideoWidget_OnControlReferencePressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFullscreenVideoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZFullscreenVideoWidget_OnControlReferencePressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZFullscreenVideoWidget, nullptr, "OnControlReferencePressed", nullptr, nullptr, sizeof(SBZFullscreenVideoWidget_eventOnControlReferencePressed_Parms), Z_Construct_UFunction_USBZFullscreenVideoWidget_OnControlReferencePressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFullscreenVideoWidget_OnControlReferencePressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZFullscreenVideoWidget_OnControlReferencePressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFullscreenVideoWidget_OnControlReferencePressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZFullscreenVideoWidget_OnControlReferencePressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZFullscreenVideoWidget_OnControlReferencePressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZFullscreenVideoWidget_NoRegister()
	{
		return USBZFullscreenVideoWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZFullscreenVideoWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActiveChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActiveChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VideoImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VideoPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayControlsReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayControlsReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseControlsReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PauseControlsReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowInputDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShowInputDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZOderChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ZOderChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_SubtitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_SubtitleText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZFullscreenVideoWidget_BP_OnControlReferencePressed, "BP_OnControlReferencePressed" }, // 439035931
		{ &Z_Construct_UFunction_USBZFullscreenVideoWidget_Close, "Close" }, // 1167195295
		{ &Z_Construct_UFunction_USBZFullscreenVideoWidget_OnControlReferencePressed, "OnControlReferencePressed" }, // 3323706630
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZFullscreenVideoWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZFullscreenVideoWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_OnActiveChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFullscreenVideoWidget" },
		{ "ModuleRelativePath", "Public/SBZFullscreenVideoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_OnActiveChanged = { "OnActiveChanged", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFullscreenVideoWidget, OnActiveChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZOnFullscreenVideoActiveChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_OnActiveChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_OnActiveChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_VideoImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFullscreenVideoWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZFullscreenVideoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_VideoImage = { "VideoImage", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFullscreenVideoWidget, VideoImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_VideoImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_VideoImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_VideoPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFullscreenVideoWidget" },
		{ "ModuleRelativePath", "Public/SBZFullscreenVideoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_VideoPlayer = { "VideoPlayer", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFullscreenVideoWidget, VideoPlayer), Z_Construct_UClass_UBinkMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_VideoPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_VideoPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_PlayControlsReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFullscreenVideoWidget" },
		{ "ModuleRelativePath", "Public/SBZFullscreenVideoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_PlayControlsReference = { "PlayControlsReference", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFullscreenVideoWidget, PlayControlsReference), Z_Construct_UScriptStruct_FSBZButtonControlsReference, METADATA_PARAMS(Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_PlayControlsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_PlayControlsReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_PauseControlsReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFullscreenVideoWidget" },
		{ "ModuleRelativePath", "Public/SBZFullscreenVideoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_PauseControlsReference = { "PauseControlsReference", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFullscreenVideoWidget, PauseControlsReference), Z_Construct_UScriptStruct_FSBZButtonControlsReference, METADATA_PARAMS(Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_PauseControlsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_PauseControlsReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_ShowInputDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFullscreenVideoWidget" },
		{ "ModuleRelativePath", "Public/SBZFullscreenVideoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_ShowInputDuration = { "ShowInputDuration", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFullscreenVideoWidget, ShowInputDuration), METADATA_PARAMS(Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_ShowInputDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_ShowInputDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_ZOderChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFullscreenVideoWidget" },
		{ "ModuleRelativePath", "Public/SBZFullscreenVideoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_ZOderChange = { "ZOderChange", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFullscreenVideoWidget, ZOderChange), METADATA_PARAMS(Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_ZOderChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_ZOderChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_Text_SubtitleText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFullscreenVideoWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZFullscreenVideoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_Text_SubtitleText = { "Text_SubtitleText", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFullscreenVideoWidget, Text_SubtitleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_Text_SubtitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_Text_SubtitleText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_OnActiveChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_VideoImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_VideoPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_PlayControlsReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_PauseControlsReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_ShowInputDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_ZOderChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::NewProp_Text_SubtitleText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZFullscreenVideoWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::ClassParams = {
		&USBZFullscreenVideoWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZFullscreenVideoWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZFullscreenVideoWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZFullscreenVideoWidget, 3989438883);
	template<> STARBREEZE_API UClass* StaticClass<USBZFullscreenVideoWidget>()
	{
		return USBZFullscreenVideoWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZFullscreenVideoWidget(Z_Construct_UClass_USBZFullscreenVideoWidget, &USBZFullscreenVideoWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZFullscreenVideoWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZFullscreenVideoWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

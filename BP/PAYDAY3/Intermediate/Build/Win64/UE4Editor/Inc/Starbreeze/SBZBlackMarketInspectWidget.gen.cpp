// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBlackMarketInspectWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBlackMarketInspectWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketInspectWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketInspectWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGloveData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZBlackMarketInspectWidget::execSetGlovesOnMannequin)
	{
		P_GET_OBJECT(USBZGloveData,Z_Param_GloveData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGlovesOnMannequin(Z_Param_GloveData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBlackMarketInspectWidget::execSetInspectCamera)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_CameraName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInspectCamera(Z_Param_CameraName);
		P_NATIVE_END;
	}
	static FName NAME_USBZBlackMarketInspectWidget_CanInspectItem = FName(TEXT("CanInspectItem"));
	bool USBZBlackMarketInspectWidget::CanInspectItem(USBZInventoryBaseData* InInspectData)
	{
		SBZBlackMarketInspectWidget_eventCanInspectItem_Parms Parms;
		Parms.InInspectData=InInspectData;
		ProcessEvent(FindFunctionChecked(NAME_USBZBlackMarketInspectWidget_CanInspectItem),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USBZBlackMarketInspectWidget_OnCustomizationActorLoadingChanged = FName(TEXT("OnCustomizationActorLoadingChanged"));
	void USBZBlackMarketInspectWidget::OnCustomizationActorLoadingChanged(bool bIsLoading)
	{
		SBZBlackMarketInspectWidget_eventOnCustomizationActorLoadingChanged_Parms Parms;
		Parms.bIsLoading=bIsLoading ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZBlackMarketInspectWidget_OnCustomizationActorLoadingChanged),&Parms);
	}
	void USBZBlackMarketInspectWidget::StaticRegisterNativesUSBZBlackMarketInspectWidget()
	{
		UClass* Class = USBZBlackMarketInspectWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetGlovesOnMannequin", &USBZBlackMarketInspectWidget::execSetGlovesOnMannequin },
			{ "SetInspectCamera", &USBZBlackMarketInspectWidget::execSetInspectCamera },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZBlackMarketInspectWidget_CanInspectItem_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInspectData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBlackMarketInspectWidget_CanInspectItem_Statics::NewProp_InInspectData = { "InInspectData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketInspectWidget_eventCanInspectItem_Parms, InInspectData), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZBlackMarketInspectWidget_CanInspectItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZBlackMarketInspectWidget_eventCanInspectItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBlackMarketInspectWidget_CanInspectItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBlackMarketInspectWidget_eventCanInspectItem_Parms), &Z_Construct_UFunction_USBZBlackMarketInspectWidget_CanInspectItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketInspectWidget_CanInspectItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketInspectWidget_CanInspectItem_Statics::NewProp_InInspectData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketInspectWidget_CanInspectItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketInspectWidget_CanInspectItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketInspectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketInspectWidget_CanInspectItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketInspectWidget, nullptr, "CanInspectItem", nullptr, nullptr, sizeof(SBZBlackMarketInspectWidget_eventCanInspectItem_Parms), Z_Construct_UFunction_USBZBlackMarketInspectWidget_CanInspectItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketInspectWidget_CanInspectItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketInspectWidget_CanInspectItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketInspectWidget_CanInspectItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketInspectWidget_CanInspectItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketInspectWidget_CanInspectItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketInspectWidget_OnCustomizationActorLoadingChanged_Statics
	{
		static void NewProp_bIsLoading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLoading;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZBlackMarketInspectWidget_OnCustomizationActorLoadingChanged_Statics::NewProp_bIsLoading_SetBit(void* Obj)
	{
		((SBZBlackMarketInspectWidget_eventOnCustomizationActorLoadingChanged_Parms*)Obj)->bIsLoading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBlackMarketInspectWidget_OnCustomizationActorLoadingChanged_Statics::NewProp_bIsLoading = { "bIsLoading", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBlackMarketInspectWidget_eventOnCustomizationActorLoadingChanged_Parms), &Z_Construct_UFunction_USBZBlackMarketInspectWidget_OnCustomizationActorLoadingChanged_Statics::NewProp_bIsLoading_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketInspectWidget_OnCustomizationActorLoadingChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketInspectWidget_OnCustomizationActorLoadingChanged_Statics::NewProp_bIsLoading,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketInspectWidget_OnCustomizationActorLoadingChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketInspectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketInspectWidget_OnCustomizationActorLoadingChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketInspectWidget, nullptr, "OnCustomizationActorLoadingChanged", nullptr, nullptr, sizeof(SBZBlackMarketInspectWidget_eventOnCustomizationActorLoadingChanged_Parms), Z_Construct_UFunction_USBZBlackMarketInspectWidget_OnCustomizationActorLoadingChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketInspectWidget_OnCustomizationActorLoadingChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketInspectWidget_OnCustomizationActorLoadingChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketInspectWidget_OnCustomizationActorLoadingChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketInspectWidget_OnCustomizationActorLoadingChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketInspectWidget_OnCustomizationActorLoadingChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetGlovesOnMannequin_Statics
	{
		struct SBZBlackMarketInspectWidget_eventSetGlovesOnMannequin_Parms
		{
			const USBZGloveData* GloveData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GloveData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetGlovesOnMannequin_Statics::NewProp_GloveData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetGlovesOnMannequin_Statics::NewProp_GloveData = { "GloveData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketInspectWidget_eventSetGlovesOnMannequin_Parms, GloveData), Z_Construct_UClass_USBZGloveData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetGlovesOnMannequin_Statics::NewProp_GloveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetGlovesOnMannequin_Statics::NewProp_GloveData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetGlovesOnMannequin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetGlovesOnMannequin_Statics::NewProp_GloveData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetGlovesOnMannequin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketInspectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetGlovesOnMannequin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketInspectWidget, nullptr, "SetGlovesOnMannequin", nullptr, nullptr, sizeof(SBZBlackMarketInspectWidget_eventSetGlovesOnMannequin_Parms), Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetGlovesOnMannequin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetGlovesOnMannequin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetGlovesOnMannequin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetGlovesOnMannequin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetGlovesOnMannequin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetGlovesOnMannequin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetInspectCamera_Statics
	{
		struct SBZBlackMarketInspectWidget_eventSetInspectCamera_Parms
		{
			FName CameraName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CameraName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetInspectCamera_Statics::NewProp_CameraName = { "CameraName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketInspectWidget_eventSetInspectCamera_Parms, CameraName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetInspectCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetInspectCamera_Statics::NewProp_CameraName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetInspectCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketInspectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetInspectCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketInspectWidget, nullptr, "SetInspectCamera", nullptr, nullptr, sizeof(SBZBlackMarketInspectWidget_eventSetInspectCamera_Parms), Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetInspectCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetInspectCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetInspectCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetInspectCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetInspectCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetInspectCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZBlackMarketInspectWidget_NoRegister()
	{
		return USBZBlackMarketInspectWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInspectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentInspectData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCameraName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurrentCameraName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomSpeedRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomSpeedRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomInputAxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ZoomInputAxisName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomCameraRotationInputAxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ZoomCameraRotationInputAxisName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisDeadZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisDeadZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InspectCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InspectCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutEquippedGloveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadoutEquippedGloveData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxZoomCameraPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxZoomCameraPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinZoomCameraPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinZoomCameraPitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZBlackMarketInspectWidget_CanInspectItem, "CanInspectItem" }, // 4169510295
		{ &Z_Construct_UFunction_USBZBlackMarketInspectWidget_OnCustomizationActorLoadingChanged, "OnCustomizationActorLoadingChanged" }, // 2183144161
		{ &Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetGlovesOnMannequin, "SetGlovesOnMannequin" }, // 4154672449
		{ &Z_Construct_UFunction_USBZBlackMarketInspectWidget_SetInspectCamera, "SetInspectCamera" }, // 2091206737
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBlackMarketInspectWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketInspectWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_CurrentInspectData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketInspectWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketInspectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_CurrentInspectData = { "CurrentInspectData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketInspectWidget, CurrentInspectData), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_CurrentInspectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_CurrentInspectData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_CurrentCameraName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketInspectWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketInspectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_CurrentCameraName = { "CurrentCameraName", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketInspectWidget, CurrentCameraName), METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_CurrentCameraName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_CurrentCameraName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_ZoomSpeedRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketInspectWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketInspectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_ZoomSpeedRatio = { "ZoomSpeedRatio", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketInspectWidget, ZoomSpeedRatio), METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_ZoomSpeedRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_ZoomSpeedRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_ZoomMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketInspectWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketInspectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_ZoomMax = { "ZoomMax", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketInspectWidget, ZoomMax), METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_ZoomMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_ZoomMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_ZoomMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketInspectWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketInspectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_ZoomMin = { "ZoomMin", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketInspectWidget, ZoomMin), METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_ZoomMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_ZoomMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_ZoomInputAxisName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketInspectWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketInspectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_ZoomInputAxisName = { "ZoomInputAxisName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketInspectWidget, ZoomInputAxisName), METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_ZoomInputAxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_ZoomInputAxisName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_ZoomCameraRotationInputAxisName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketInspectWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketInspectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_ZoomCameraRotationInputAxisName = { "ZoomCameraRotationInputAxisName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketInspectWidget, ZoomCameraRotationInputAxisName), METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_ZoomCameraRotationInputAxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_ZoomCameraRotationInputAxisName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_AxisDeadZone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketInspectWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketInspectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_AxisDeadZone = { "AxisDeadZone", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketInspectWidget, AxisDeadZone), METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_AxisDeadZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_AxisDeadZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_InspectCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketInspectWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketInspectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_InspectCamera = { "InspectCamera", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketInspectWidget, InspectCamera), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_InspectCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_InspectCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_LoadoutEquippedGloveData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketInspectWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketInspectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_LoadoutEquippedGloveData = { "LoadoutEquippedGloveData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketInspectWidget, LoadoutEquippedGloveData), Z_Construct_UClass_USBZGloveData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_LoadoutEquippedGloveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_LoadoutEquippedGloveData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_MaxZoomCameraPitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketInspectWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketInspectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_MaxZoomCameraPitch = { "MaxZoomCameraPitch", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketInspectWidget, MaxZoomCameraPitch), METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_MaxZoomCameraPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_MaxZoomCameraPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_MinZoomCameraPitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketInspectWidget" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketInspectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_MinZoomCameraPitch = { "MinZoomCameraPitch", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketInspectWidget, MinZoomCameraPitch), METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_MinZoomCameraPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_MinZoomCameraPitch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_CurrentInspectData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_CurrentCameraName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_ZoomSpeedRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_ZoomMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_ZoomMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_ZoomInputAxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_ZoomCameraRotationInputAxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_AxisDeadZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_InspectCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_LoadoutEquippedGloveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_MaxZoomCameraPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::NewProp_MinZoomCameraPitch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBlackMarketInspectWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::ClassParams = {
		&USBZBlackMarketInspectWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBlackMarketInspectWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBlackMarketInspectWidget, 3873886886);
	template<> STARBREEZE_API UClass* StaticClass<USBZBlackMarketInspectWidget>()
	{
		return USBZBlackMarketInspectWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBlackMarketInspectWidget(Z_Construct_UClass_USBZBlackMarketInspectWidget, &USBZBlackMarketInspectWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBlackMarketInspectWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBlackMarketInspectWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

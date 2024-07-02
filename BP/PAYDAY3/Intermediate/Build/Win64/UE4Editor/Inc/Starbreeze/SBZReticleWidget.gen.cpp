// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReticleWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReticleWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReticleWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReticleWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStatePawnWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCrosshairSettings();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRangedWeapon_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponSpreadData_NoRegister();
// End Cross Module References
	static FName NAME_USBZReticleWidget_OnCrossHairScaleChanged = FName(TEXT("OnCrossHairScaleChanged"));
	void USBZReticleWidget::OnCrossHairScaleChanged(float CurrentSpread)
	{
		SBZReticleWidget_eventOnCrossHairScaleChanged_Parms Parms;
		Parms.CurrentSpread=CurrentSpread;
		ProcessEvent(FindFunctionChecked(NAME_USBZReticleWidget_OnCrossHairScaleChanged),&Parms);
	}
	static FName NAME_USBZReticleWidget_OnCrosshairSettingsChanged = FName(TEXT("OnCrosshairSettingsChanged"));
	void USBZReticleWidget::OnCrosshairSettingsChanged(FSBZCrosshairSettings const& CrosshairSettings)
	{
		SBZReticleWidget_eventOnCrosshairSettingsChanged_Parms Parms;
		Parms.CrosshairSettings=CrosshairSettings;
		ProcessEvent(FindFunctionChecked(NAME_USBZReticleWidget_OnCrosshairSettingsChanged),&Parms);
	}
	static FName NAME_USBZReticleWidget_OnCrossHairVisibilityChanged = FName(TEXT("OnCrossHairVisibilityChanged"));
	void USBZReticleWidget::OnCrossHairVisibilityChanged(bool bIsVisible)
	{
		SBZReticleWidget_eventOnCrossHairVisibilityChanged_Parms Parms;
		Parms.bIsVisible=bIsVisible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZReticleWidget_OnCrossHairVisibilityChanged),&Parms);
	}
	void USBZReticleWidget::StaticRegisterNativesUSBZReticleWidget()
	{
	}
	struct Z_Construct_UFunction_USBZReticleWidget_OnCrossHairScaleChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentSpread;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZReticleWidget_OnCrossHairScaleChanged_Statics::NewProp_CurrentSpread = { "CurrentSpread", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZReticleWidget_eventOnCrossHairScaleChanged_Parms, CurrentSpread), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZReticleWidget_OnCrossHairScaleChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZReticleWidget_OnCrossHairScaleChanged_Statics::NewProp_CurrentSpread,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReticleWidget_OnCrossHairScaleChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReticleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReticleWidget_OnCrossHairScaleChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReticleWidget, nullptr, "OnCrossHairScaleChanged", nullptr, nullptr, sizeof(SBZReticleWidget_eventOnCrossHairScaleChanged_Parms), Z_Construct_UFunction_USBZReticleWidget_OnCrossHairScaleChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReticleWidget_OnCrossHairScaleChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReticleWidget_OnCrossHairScaleChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReticleWidget_OnCrossHairScaleChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReticleWidget_OnCrossHairScaleChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReticleWidget_OnCrossHairScaleChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReticleWidget_OnCrosshairSettingsChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrosshairSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReticleWidget_OnCrosshairSettingsChanged_Statics::NewProp_CrosshairSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZReticleWidget_OnCrosshairSettingsChanged_Statics::NewProp_CrosshairSettings = { "CrosshairSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZReticleWidget_eventOnCrosshairSettingsChanged_Parms, CrosshairSettings), Z_Construct_UScriptStruct_FSBZCrosshairSettings, METADATA_PARAMS(Z_Construct_UFunction_USBZReticleWidget_OnCrosshairSettingsChanged_Statics::NewProp_CrosshairSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReticleWidget_OnCrosshairSettingsChanged_Statics::NewProp_CrosshairSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZReticleWidget_OnCrosshairSettingsChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZReticleWidget_OnCrosshairSettingsChanged_Statics::NewProp_CrosshairSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReticleWidget_OnCrosshairSettingsChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReticleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReticleWidget_OnCrosshairSettingsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReticleWidget, nullptr, "OnCrosshairSettingsChanged", nullptr, nullptr, sizeof(SBZReticleWidget_eventOnCrosshairSettingsChanged_Parms), Z_Construct_UFunction_USBZReticleWidget_OnCrosshairSettingsChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReticleWidget_OnCrosshairSettingsChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReticleWidget_OnCrosshairSettingsChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReticleWidget_OnCrosshairSettingsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReticleWidget_OnCrosshairSettingsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReticleWidget_OnCrosshairSettingsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReticleWidget_OnCrossHairVisibilityChanged_Statics
	{
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZReticleWidget_OnCrossHairVisibilityChanged_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((SBZReticleWidget_eventOnCrossHairVisibilityChanged_Parms*)Obj)->bIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZReticleWidget_OnCrossHairVisibilityChanged_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZReticleWidget_eventOnCrossHairVisibilityChanged_Parms), &Z_Construct_UFunction_USBZReticleWidget_OnCrossHairVisibilityChanged_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZReticleWidget_OnCrossHairVisibilityChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZReticleWidget_OnCrossHairVisibilityChanged_Statics::NewProp_bIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReticleWidget_OnCrossHairVisibilityChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReticleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReticleWidget_OnCrossHairVisibilityChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReticleWidget, nullptr, "OnCrossHairVisibilityChanged", nullptr, nullptr, sizeof(SBZReticleWidget_eventOnCrossHairVisibilityChanged_Parms), Z_Construct_UFunction_USBZReticleWidget_OnCrossHairVisibilityChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReticleWidget_OnCrossHairVisibilityChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReticleWidget_OnCrossHairVisibilityChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReticleWidget_OnCrossHairVisibilityChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReticleWidget_OnCrossHairVisibilityChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReticleWidget_OnCrossHairVisibilityChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZReticleWidget_NoRegister()
	{
		return USBZReticleWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZReticleWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressionCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpreadMod_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpreadMod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentEquippableIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentEquippableIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpreadAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpreadAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpreadData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpreadData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZReticleWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerStatePawnWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZReticleWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZReticleWidget_OnCrossHairScaleChanged, "OnCrossHairScaleChanged" }, // 2273559264
		{ &Z_Construct_UFunction_USBZReticleWidget_OnCrosshairSettingsChanged, "OnCrosshairSettingsChanged" }, // 2493272987
		{ &Z_Construct_UFunction_USBZReticleWidget_OnCrossHairVisibilityChanged, "OnCrossHairVisibilityChanged" }, // 676407392
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReticleWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZReticleWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZReticleWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_ProgressionCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReticleWidget" },
		{ "ModuleRelativePath", "Public/SBZReticleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_ProgressionCurve = { "ProgressionCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReticleWidget, ProgressionCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_ProgressionCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_ProgressionCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_SpreadMod_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReticleWidget" },
		{ "ModuleRelativePath", "Public/SBZReticleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_SpreadMod = { "SpreadMod", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReticleWidget, SpreadMod), METADATA_PARAMS(Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_SpreadMod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_SpreadMod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_CurrentEquippableIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReticleWidget" },
		{ "ModuleRelativePath", "Public/SBZReticleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_CurrentEquippableIndex = { "CurrentEquippableIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReticleWidget, CurrentEquippableIndex), METADATA_PARAMS(Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_CurrentEquippableIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_CurrentEquippableIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_MaxSpreadAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReticleWidget" },
		{ "ModuleRelativePath", "Public/SBZReticleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_MaxSpreadAngle = { "MaxSpreadAngle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReticleWidget, MaxSpreadAngle), METADATA_PARAMS(Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_MaxSpreadAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_MaxSpreadAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReticleWidget" },
		{ "ModuleRelativePath", "Public/SBZReticleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReticleWidget, CurrentWeapon), Z_Construct_UClass_ASBZRangedWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_CurrentWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_CurrentWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_SpreadData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReticleWidget" },
		{ "ModuleRelativePath", "Public/SBZReticleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_SpreadData = { "SpreadData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReticleWidget, SpreadData), Z_Construct_UClass_USBZWeaponSpreadData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_SpreadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_SpreadData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_CurrentScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReticleWidget" },
		{ "ModuleRelativePath", "Public/SBZReticleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_CurrentScale = { "CurrentScale", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReticleWidget, CurrentScale), METADATA_PARAMS(Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_CurrentScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_CurrentScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZReticleWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_ProgressionCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_SpreadMod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_CurrentEquippableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_MaxSpreadAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_CurrentWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_SpreadData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReticleWidget_Statics::NewProp_CurrentScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZReticleWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZReticleWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZReticleWidget_Statics::ClassParams = {
		&USBZReticleWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZReticleWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZReticleWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZReticleWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReticleWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZReticleWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZReticleWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZReticleWidget, 3926398294);
	template<> STARBREEZE_API UClass* StaticClass<USBZReticleWidget>()
	{
		return USBZReticleWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZReticleWidget(Z_Construct_UClass_USBZReticleWidget, &USBZReticleWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZReticleWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZReticleWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

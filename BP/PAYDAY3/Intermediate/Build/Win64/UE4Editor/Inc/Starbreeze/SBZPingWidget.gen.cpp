// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPingWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPingWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPingWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPingWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPingQuality();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
// End Cross Module References
	static FName NAME_USBZPingWidget_OnPingQualityChanged = FName(TEXT("OnPingQualityChanged"));
	void USBZPingWidget::OnPingQualityChanged(const EPingQuality PingQuality)
	{
		SBZPingWidget_eventOnPingQualityChanged_Parms Parms;
		Parms.PingQuality=PingQuality;
		ProcessEvent(FindFunctionChecked(NAME_USBZPingWidget_OnPingQualityChanged),&Parms);
	}
	static FName NAME_USBZPingWidget_OnPingValueChanged = FName(TEXT("OnPingValueChanged"));
	void USBZPingWidget::OnPingValueChanged(const int32 PingValue)
	{
		SBZPingWidget_eventOnPingValueChanged_Parms Parms;
		Parms.PingValue=PingValue;
		ProcessEvent(FindFunctionChecked(NAME_USBZPingWidget_OnPingValueChanged),&Parms);
	}
	void USBZPingWidget::StaticRegisterNativesUSBZPingWidget()
	{
	}
	struct Z_Construct_UFunction_USBZPingWidget_OnPingQualityChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PingQuality_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PingQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PingQuality;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZPingWidget_OnPingQualityChanged_Statics::NewProp_PingQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPingWidget_OnPingQualityChanged_Statics::NewProp_PingQuality_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZPingWidget_OnPingQualityChanged_Statics::NewProp_PingQuality = { "PingQuality", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPingWidget_eventOnPingQualityChanged_Parms, PingQuality), Z_Construct_UEnum_Starbreeze_EPingQuality, METADATA_PARAMS(Z_Construct_UFunction_USBZPingWidget_OnPingQualityChanged_Statics::NewProp_PingQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPingWidget_OnPingQualityChanged_Statics::NewProp_PingQuality_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPingWidget_OnPingQualityChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPingWidget_OnPingQualityChanged_Statics::NewProp_PingQuality_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPingWidget_OnPingQualityChanged_Statics::NewProp_PingQuality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPingWidget_OnPingQualityChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPingWidget_OnPingQualityChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPingWidget, nullptr, "OnPingQualityChanged", nullptr, nullptr, sizeof(SBZPingWidget_eventOnPingQualityChanged_Parms), Z_Construct_UFunction_USBZPingWidget_OnPingQualityChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPingWidget_OnPingQualityChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPingWidget_OnPingQualityChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPingWidget_OnPingQualityChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPingWidget_OnPingQualityChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPingWidget_OnPingQualityChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPingWidget_OnPingValueChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PingValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PingValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPingWidget_OnPingValueChanged_Statics::NewProp_PingValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZPingWidget_OnPingValueChanged_Statics::NewProp_PingValue = { "PingValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPingWidget_eventOnPingValueChanged_Parms, PingValue), METADATA_PARAMS(Z_Construct_UFunction_USBZPingWidget_OnPingValueChanged_Statics::NewProp_PingValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPingWidget_OnPingValueChanged_Statics::NewProp_PingValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPingWidget_OnPingValueChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPingWidget_OnPingValueChanged_Statics::NewProp_PingValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPingWidget_OnPingValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPingWidget_OnPingValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPingWidget, nullptr, "OnPingValueChanged", nullptr, nullptr, sizeof(SBZPingWidget_eventOnPingValueChanged_Parms), Z_Construct_UFunction_USBZPingWidget_OnPingValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPingWidget_OnPingValueChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPingWidget_OnPingValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPingWidget_OnPingValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPingWidget_OnPingValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPingWidget_OnPingValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPingWidget_NoRegister()
	{
		return USBZPingWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZPingWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenUpdates_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenUpdates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HighThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CriticalThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CriticalThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPingAllowed_MetaData[];
#endif
		static void NewProp_bIsPingAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPingAllowed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPingWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPingWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPingWidget_OnPingQualityChanged, "OnPingQualityChanged" }, // 3020308324
		{ &Z_Construct_UFunction_USBZPingWidget_OnPingValueChanged, "OnPingValueChanged" }, // 760773050
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPingWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPingWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPingWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPingWidget_Statics::NewProp_TimeBetweenUpdates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPingWidget" },
		{ "ModuleRelativePath", "Public/SBZPingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPingWidget_Statics::NewProp_TimeBetweenUpdates = { "TimeBetweenUpdates", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPingWidget, TimeBetweenUpdates), METADATA_PARAMS(Z_Construct_UClass_USBZPingWidget_Statics::NewProp_TimeBetweenUpdates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPingWidget_Statics::NewProp_TimeBetweenUpdates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPingWidget_Statics::NewProp_HighThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPingWidget" },
		{ "ModuleRelativePath", "Public/SBZPingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZPingWidget_Statics::NewProp_HighThreshold = { "HighThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPingWidget, HighThreshold), METADATA_PARAMS(Z_Construct_UClass_USBZPingWidget_Statics::NewProp_HighThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPingWidget_Statics::NewProp_HighThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPingWidget_Statics::NewProp_CriticalThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPingWidget" },
		{ "ModuleRelativePath", "Public/SBZPingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZPingWidget_Statics::NewProp_CriticalThreshold = { "CriticalThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPingWidget, CriticalThreshold), METADATA_PARAMS(Z_Construct_UClass_USBZPingWidget_Statics::NewProp_CriticalThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPingWidget_Statics::NewProp_CriticalThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPingWidget_Statics::NewProp_PlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPingWidget" },
		{ "ModuleRelativePath", "Public/SBZPingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPingWidget_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPingWidget, PlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPingWidget_Statics::NewProp_PlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPingWidget_Statics::NewProp_PlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPingWidget_Statics::NewProp_bIsPingAllowed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPingWidget" },
		{ "ModuleRelativePath", "Public/SBZPingWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZPingWidget_Statics::NewProp_bIsPingAllowed_SetBit(void* Obj)
	{
		((USBZPingWidget*)Obj)->bIsPingAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZPingWidget_Statics::NewProp_bIsPingAllowed = { "bIsPingAllowed", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZPingWidget), &Z_Construct_UClass_USBZPingWidget_Statics::NewProp_bIsPingAllowed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZPingWidget_Statics::NewProp_bIsPingAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPingWidget_Statics::NewProp_bIsPingAllowed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPingWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPingWidget_Statics::NewProp_TimeBetweenUpdates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPingWidget_Statics::NewProp_HighThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPingWidget_Statics::NewProp_CriticalThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPingWidget_Statics::NewProp_PlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPingWidget_Statics::NewProp_bIsPingAllowed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPingWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPingWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPingWidget_Statics::ClassParams = {
		&USBZPingWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZPingWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPingWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPingWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPingWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPingWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPingWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPingWidget, 444403085);
	template<> STARBREEZE_API UClass* StaticClass<USBZPingWidget>()
	{
		return USBZPingWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPingWidget(Z_Construct_UClass_USBZPingWidget, &USBZPingWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPingWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPingWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

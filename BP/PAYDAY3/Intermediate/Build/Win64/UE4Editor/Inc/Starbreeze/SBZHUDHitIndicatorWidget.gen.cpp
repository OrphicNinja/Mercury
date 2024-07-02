// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHUDHitIndicatorWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHUDHitIndicatorWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHUDHitIndicatorWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHUDHitIndicatorWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDamageEvent();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHitIndicatorSettings();
// End Cross Module References
	DEFINE_FUNCTION(USBZHUDHitIndicatorWidget::execPostOnTakenDamageEvent)
	{
		P_GET_STRUCT_REF(FSBZDamageEvent,Z_Param_Out_DamageEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostOnTakenDamageEvent(Z_Param_Out_DamageEventData);
		P_NATIVE_END;
	}
	void USBZHUDHitIndicatorWidget::StaticRegisterNativesUSBZHUDHitIndicatorWidget()
	{
		UClass* Class = USBZHUDHitIndicatorWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PostOnTakenDamageEvent", &USBZHUDHitIndicatorWidget::execPostOnTakenDamageEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZHUDHitIndicatorWidget_PostOnTakenDamageEvent_Statics
	{
		struct SBZHUDHitIndicatorWidget_eventPostOnTakenDamageEvent_Parms
		{
			FSBZDamageEvent DamageEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageEventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDHitIndicatorWidget_PostOnTakenDamageEvent_Statics::NewProp_DamageEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZHUDHitIndicatorWidget_PostOnTakenDamageEvent_Statics::NewProp_DamageEventData = { "DamageEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHUDHitIndicatorWidget_eventPostOnTakenDamageEvent_Parms, DamageEventData), Z_Construct_UScriptStruct_FSBZDamageEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDHitIndicatorWidget_PostOnTakenDamageEvent_Statics::NewProp_DamageEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDHitIndicatorWidget_PostOnTakenDamageEvent_Statics::NewProp_DamageEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHUDHitIndicatorWidget_PostOnTakenDamageEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHUDHitIndicatorWidget_PostOnTakenDamageEvent_Statics::NewProp_DamageEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDHitIndicatorWidget_PostOnTakenDamageEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHUDHitIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHUDHitIndicatorWidget_PostOnTakenDamageEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHUDHitIndicatorWidget, nullptr, "PostOnTakenDamageEvent", nullptr, nullptr, sizeof(SBZHUDHitIndicatorWidget_eventPostOnTakenDamageEvent_Parms), Z_Construct_UFunction_USBZHUDHitIndicatorWidget_PostOnTakenDamageEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDHitIndicatorWidget_PostOnTakenDamageEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDHitIndicatorWidget_PostOnTakenDamageEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDHitIndicatorWidget_PostOnTakenDamageEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHUDHitIndicatorWidget_PostOnTakenDamageEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHUDHitIndicatorWidget_PostOnTakenDamageEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZHUDHitIndicatorWidget_NoRegister()
	{
		return USBZHUDHitIndicatorWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_HitIndicator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image_HitIndicator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyHitAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyHitAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CriticalHitAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CriticalHitAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyKilledAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyKilledAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyCriticalKilledAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyCriticalKilledAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoDamageAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoDamageAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorHitAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArmorHitAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorPenetrationAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArmorPenetrationAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorBreakAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArmorBreakAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitIndicatorSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitIndicatorSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZHUDHitIndicatorWidget_PostOnTakenDamageEvent, "PostOnTakenDamageEvent" }, // 1326092090
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHUDHitIndicatorWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHUDHitIndicatorWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_Image_HitIndicator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDHitIndicatorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHUDHitIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_Image_HitIndicator = { "Image_HitIndicator", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDHitIndicatorWidget, Image_HitIndicator), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_Image_HitIndicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_Image_HitIndicator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_EnemyHitAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDHitIndicatorWidget" },
		{ "ModuleRelativePath", "Public/SBZHUDHitIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_EnemyHitAudioEvent = { "EnemyHitAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDHitIndicatorWidget, EnemyHitAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_EnemyHitAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_EnemyHitAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_CriticalHitAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDHitIndicatorWidget" },
		{ "ModuleRelativePath", "Public/SBZHUDHitIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_CriticalHitAudioEvent = { "CriticalHitAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDHitIndicatorWidget, CriticalHitAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_CriticalHitAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_CriticalHitAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_EnemyKilledAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDHitIndicatorWidget" },
		{ "ModuleRelativePath", "Public/SBZHUDHitIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_EnemyKilledAudioEvent = { "EnemyKilledAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDHitIndicatorWidget, EnemyKilledAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_EnemyKilledAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_EnemyKilledAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_EnemyCriticalKilledAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDHitIndicatorWidget" },
		{ "ModuleRelativePath", "Public/SBZHUDHitIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_EnemyCriticalKilledAudioEvent = { "EnemyCriticalKilledAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDHitIndicatorWidget, EnemyCriticalKilledAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_EnemyCriticalKilledAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_EnemyCriticalKilledAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_NoDamageAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDHitIndicatorWidget" },
		{ "ModuleRelativePath", "Public/SBZHUDHitIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_NoDamageAudioEvent = { "NoDamageAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDHitIndicatorWidget, NoDamageAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_NoDamageAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_NoDamageAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_ArmorHitAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDHitIndicatorWidget" },
		{ "ModuleRelativePath", "Public/SBZHUDHitIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_ArmorHitAudioEvent = { "ArmorHitAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDHitIndicatorWidget, ArmorHitAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_ArmorHitAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_ArmorHitAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_ArmorPenetrationAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDHitIndicatorWidget" },
		{ "ModuleRelativePath", "Public/SBZHUDHitIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_ArmorPenetrationAudioEvent = { "ArmorPenetrationAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDHitIndicatorWidget, ArmorPenetrationAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_ArmorPenetrationAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_ArmorPenetrationAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_ArmorBreakAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDHitIndicatorWidget" },
		{ "ModuleRelativePath", "Public/SBZHUDHitIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_ArmorBreakAudioEvent = { "ArmorBreakAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDHitIndicatorWidget, ArmorBreakAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_ArmorBreakAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_ArmorBreakAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_HitIndicatorSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDHitIndicatorWidget" },
		{ "ModuleRelativePath", "Public/SBZHUDHitIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_HitIndicatorSettings = { "HitIndicatorSettings", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDHitIndicatorWidget, HitIndicatorSettings), Z_Construct_UScriptStruct_FSBZHitIndicatorSettings, METADATA_PARAMS(Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_HitIndicatorSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_HitIndicatorSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_Image_HitIndicator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_EnemyHitAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_CriticalHitAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_EnemyKilledAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_EnemyCriticalKilledAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_NoDamageAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_ArmorHitAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_ArmorPenetrationAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_ArmorBreakAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::NewProp_HitIndicatorSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHUDHitIndicatorWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::ClassParams = {
		&USBZHUDHitIndicatorWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHUDHitIndicatorWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHUDHitIndicatorWidget, 200200682);
	template<> STARBREEZE_API UClass* StaticClass<USBZHUDHitIndicatorWidget>()
	{
		return USBZHUDHitIndicatorWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHUDHitIndicatorWidget(Z_Construct_UClass_USBZHUDHitIndicatorWidget, &USBZHUDHitIndicatorWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHUDHitIndicatorWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHUDHitIndicatorWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

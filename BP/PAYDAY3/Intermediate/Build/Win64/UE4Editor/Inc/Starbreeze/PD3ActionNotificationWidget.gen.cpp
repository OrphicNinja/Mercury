// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3ActionNotificationWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3ActionNotificationWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3ActionNotificationWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3ActionNotificationWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPawnWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHUDNotificationData();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZReviveEvent();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZControlsReference();
// End Cross Module References
	DEFINE_FUNCTION(UPD3ActionNotificationWidget::execAddNotification)
	{
		P_GET_STRUCT_REF(FSBZHUDNotificationData,Z_Param_Out_HUDNotification);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddNotification(Z_Param_Out_HUDNotification);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3ActionNotificationWidget::execOnAICharacterKilled)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAICharacterKilled(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3ActionNotificationWidget::execOnRevive)
	{
		P_GET_STRUCT_REF(FSBZReviveEvent,Z_Param_Out_ReviveEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRevive(Z_Param_Out_ReviveEventData);
		P_NATIVE_END;
	}
	static FName NAME_UPD3ActionNotificationWidget_DisplayNotification = FName(TEXT("DisplayNotification"));
	void UPD3ActionNotificationWidget::DisplayNotification(FSBZHUDNotificationData const& InNotification)
	{
		PD3ActionNotificationWidget_eventDisplayNotification_Parms Parms;
		Parms.InNotification=InNotification;
		ProcessEvent(FindFunctionChecked(NAME_UPD3ActionNotificationWidget_DisplayNotification),&Parms);
	}
	static FName NAME_UPD3ActionNotificationWidget_OnNotificationAdded = FName(TEXT("OnNotificationAdded"));
	void UPD3ActionNotificationWidget::OnNotificationAdded(FSBZHUDNotificationData const& InNotificationAdded)
	{
		PD3ActionNotificationWidget_eventOnNotificationAdded_Parms Parms;
		Parms.InNotificationAdded=InNotificationAdded;
		ProcessEvent(FindFunctionChecked(NAME_UPD3ActionNotificationWidget_OnNotificationAdded),&Parms);
	}
	void UPD3ActionNotificationWidget::StaticRegisterNativesUPD3ActionNotificationWidget()
	{
		UClass* Class = UPD3ActionNotificationWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNotification", &UPD3ActionNotificationWidget::execAddNotification },
			{ "OnAICharacterKilled", &UPD3ActionNotificationWidget::execOnAICharacterKilled },
			{ "OnRevive", &UPD3ActionNotificationWidget::execOnRevive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPD3ActionNotificationWidget_AddNotification_Statics
	{
		struct PD3ActionNotificationWidget_eventAddNotification_Parms
		{
			FSBZHUDNotificationData HUDNotification;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3ActionNotificationWidget_AddNotification_Statics::NewProp_HUDNotification_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPD3ActionNotificationWidget_AddNotification_Statics::NewProp_HUDNotification = { "HUDNotification", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3ActionNotificationWidget_eventAddNotification_Parms, HUDNotification), Z_Construct_UScriptStruct_FSBZHUDNotificationData, METADATA_PARAMS(Z_Construct_UFunction_UPD3ActionNotificationWidget_AddNotification_Statics::NewProp_HUDNotification_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3ActionNotificationWidget_AddNotification_Statics::NewProp_HUDNotification_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3ActionNotificationWidget_AddNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3ActionNotificationWidget_AddNotification_Statics::NewProp_HUDNotification,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3ActionNotificationWidget_AddNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3ActionNotificationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3ActionNotificationWidget_AddNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3ActionNotificationWidget, nullptr, "AddNotification", nullptr, nullptr, sizeof(PD3ActionNotificationWidget_eventAddNotification_Parms), Z_Construct_UFunction_UPD3ActionNotificationWidget_AddNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3ActionNotificationWidget_AddNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3ActionNotificationWidget_AddNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3ActionNotificationWidget_AddNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3ActionNotificationWidget_AddNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3ActionNotificationWidget_AddNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3ActionNotificationWidget_DisplayNotification_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InNotification_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InNotification;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3ActionNotificationWidget_DisplayNotification_Statics::NewProp_InNotification_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPD3ActionNotificationWidget_DisplayNotification_Statics::NewProp_InNotification = { "InNotification", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3ActionNotificationWidget_eventDisplayNotification_Parms, InNotification), Z_Construct_UScriptStruct_FSBZHUDNotificationData, METADATA_PARAMS(Z_Construct_UFunction_UPD3ActionNotificationWidget_DisplayNotification_Statics::NewProp_InNotification_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3ActionNotificationWidget_DisplayNotification_Statics::NewProp_InNotification_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3ActionNotificationWidget_DisplayNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3ActionNotificationWidget_DisplayNotification_Statics::NewProp_InNotification,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3ActionNotificationWidget_DisplayNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3ActionNotificationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3ActionNotificationWidget_DisplayNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3ActionNotificationWidget, nullptr, "DisplayNotification", nullptr, nullptr, sizeof(PD3ActionNotificationWidget_eventDisplayNotification_Parms), Z_Construct_UFunction_UPD3ActionNotificationWidget_DisplayNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3ActionNotificationWidget_DisplayNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3ActionNotificationWidget_DisplayNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3ActionNotificationWidget_DisplayNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3ActionNotificationWidget_DisplayNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3ActionNotificationWidget_DisplayNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3ActionNotificationWidget_OnAICharacterKilled_Statics
	{
		struct PD3ActionNotificationWidget_eventOnAICharacterKilled_Parms
		{
			ASBZCharacter* Character;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3ActionNotificationWidget_OnAICharacterKilled_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3ActionNotificationWidget_eventOnAICharacterKilled_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3ActionNotificationWidget_OnAICharacterKilled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3ActionNotificationWidget_OnAICharacterKilled_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3ActionNotificationWidget_OnAICharacterKilled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3ActionNotificationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3ActionNotificationWidget_OnAICharacterKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3ActionNotificationWidget, nullptr, "OnAICharacterKilled", nullptr, nullptr, sizeof(PD3ActionNotificationWidget_eventOnAICharacterKilled_Parms), Z_Construct_UFunction_UPD3ActionNotificationWidget_OnAICharacterKilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3ActionNotificationWidget_OnAICharacterKilled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3ActionNotificationWidget_OnAICharacterKilled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3ActionNotificationWidget_OnAICharacterKilled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3ActionNotificationWidget_OnAICharacterKilled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3ActionNotificationWidget_OnAICharacterKilled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3ActionNotificationWidget_OnNotificationAdded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InNotificationAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InNotificationAdded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3ActionNotificationWidget_OnNotificationAdded_Statics::NewProp_InNotificationAdded_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPD3ActionNotificationWidget_OnNotificationAdded_Statics::NewProp_InNotificationAdded = { "InNotificationAdded", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3ActionNotificationWidget_eventOnNotificationAdded_Parms, InNotificationAdded), Z_Construct_UScriptStruct_FSBZHUDNotificationData, METADATA_PARAMS(Z_Construct_UFunction_UPD3ActionNotificationWidget_OnNotificationAdded_Statics::NewProp_InNotificationAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3ActionNotificationWidget_OnNotificationAdded_Statics::NewProp_InNotificationAdded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3ActionNotificationWidget_OnNotificationAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3ActionNotificationWidget_OnNotificationAdded_Statics::NewProp_InNotificationAdded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3ActionNotificationWidget_OnNotificationAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3ActionNotificationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3ActionNotificationWidget_OnNotificationAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3ActionNotificationWidget, nullptr, "OnNotificationAdded", nullptr, nullptr, sizeof(PD3ActionNotificationWidget_eventOnNotificationAdded_Parms), Z_Construct_UFunction_UPD3ActionNotificationWidget_OnNotificationAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3ActionNotificationWidget_OnNotificationAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3ActionNotificationWidget_OnNotificationAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3ActionNotificationWidget_OnNotificationAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3ActionNotificationWidget_OnNotificationAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3ActionNotificationWidget_OnNotificationAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3ActionNotificationWidget_OnRevive_Statics
	{
		struct PD3ActionNotificationWidget_eventOnRevive_Parms
		{
			FSBZReviveEvent ReviveEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReviveEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReviveEventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3ActionNotificationWidget_OnRevive_Statics::NewProp_ReviveEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPD3ActionNotificationWidget_OnRevive_Statics::NewProp_ReviveEventData = { "ReviveEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3ActionNotificationWidget_eventOnRevive_Parms, ReviveEventData), Z_Construct_UScriptStruct_FSBZReviveEvent, METADATA_PARAMS(Z_Construct_UFunction_UPD3ActionNotificationWidget_OnRevive_Statics::NewProp_ReviveEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3ActionNotificationWidget_OnRevive_Statics::NewProp_ReviveEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3ActionNotificationWidget_OnRevive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3ActionNotificationWidget_OnRevive_Statics::NewProp_ReviveEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3ActionNotificationWidget_OnRevive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3ActionNotificationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3ActionNotificationWidget_OnRevive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3ActionNotificationWidget, nullptr, "OnRevive", nullptr, nullptr, sizeof(PD3ActionNotificationWidget_eventOnRevive_Parms), Z_Construct_UFunction_UPD3ActionNotificationWidget_OnRevive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3ActionNotificationWidget_OnRevive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3ActionNotificationWidget_OnRevive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3ActionNotificationWidget_OnRevive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3ActionNotificationWidget_OnRevive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3ActionNotificationWidget_OnRevive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3ActionNotificationWidget_NoRegister()
	{
		return UPD3ActionNotificationWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPD3ActionNotificationWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HUDNotifications_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDNotifications_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HUDNotifications;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_ActionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_ActionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeOutAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FadeOutAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CasingNotification_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CasingNotification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CasingControlsReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CasingControlsReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KilledCivilianNotification_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KilledCivilianNotification;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPawnWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3ActionNotificationWidget_AddNotification, "AddNotification" }, // 966068160
		{ &Z_Construct_UFunction_UPD3ActionNotificationWidget_DisplayNotification, "DisplayNotification" }, // 2955144465
		{ &Z_Construct_UFunction_UPD3ActionNotificationWidget_OnAICharacterKilled, "OnAICharacterKilled" }, // 174982868
		{ &Z_Construct_UFunction_UPD3ActionNotificationWidget_OnNotificationAdded, "OnNotificationAdded" }, // 2417641108
		{ &Z_Construct_UFunction_UPD3ActionNotificationWidget_OnRevive, "OnRevive" }, // 3470138097
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3ActionNotificationWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3ActionNotificationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_HUDNotifications_Inner = { "HUDNotifications", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZHUDNotificationData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_HUDNotifications_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3ActionNotificationWidget" },
		{ "ModuleRelativePath", "Public/PD3ActionNotificationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_HUDNotifications = { "HUDNotifications", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3ActionNotificationWidget, HUDNotifications), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_HUDNotifications_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_HUDNotifications_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_Text_ActionText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3ActionNotificationWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3ActionNotificationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_Text_ActionText = { "Text_ActionText", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3ActionNotificationWidget, Text_ActionText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_Text_ActionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_Text_ActionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_FadeOutAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3ActionNotificationWidget" },
		{ "ModuleRelativePath", "Public/PD3ActionNotificationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_FadeOutAnimation = { "FadeOutAnimation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3ActionNotificationWidget, FadeOutAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_FadeOutAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_FadeOutAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_CasingNotification_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3ActionNotificationWidget" },
		{ "ModuleRelativePath", "Public/PD3ActionNotificationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_CasingNotification = { "CasingNotification", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3ActionNotificationWidget, CasingNotification), Z_Construct_UScriptStruct_FSBZHUDNotificationData, METADATA_PARAMS(Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_CasingNotification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_CasingNotification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_CasingControlsReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3ActionNotificationWidget" },
		{ "ModuleRelativePath", "Public/PD3ActionNotificationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_CasingControlsReference = { "CasingControlsReference", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3ActionNotificationWidget, CasingControlsReference), Z_Construct_UScriptStruct_FSBZControlsReference, METADATA_PARAMS(Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_CasingControlsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_CasingControlsReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_KilledCivilianNotification_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3ActionNotificationWidget" },
		{ "ModuleRelativePath", "Public/PD3ActionNotificationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_KilledCivilianNotification = { "KilledCivilianNotification", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3ActionNotificationWidget, KilledCivilianNotification), Z_Construct_UScriptStruct_FSBZHUDNotificationData, METADATA_PARAMS(Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_KilledCivilianNotification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_KilledCivilianNotification_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_HUDNotifications_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_HUDNotifications,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_Text_ActionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_FadeOutAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_CasingNotification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_CasingControlsReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::NewProp_KilledCivilianNotification,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3ActionNotificationWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::ClassParams = {
		&UPD3ActionNotificationWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3ActionNotificationWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3ActionNotificationWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3ActionNotificationWidget, 3420051910);
	template<> STARBREEZE_API UClass* StaticClass<UPD3ActionNotificationWidget>()
	{
		return UPD3ActionNotificationWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3ActionNotificationWidget(Z_Construct_UClass_UPD3ActionNotificationWidget, &UPD3ActionNotificationWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3ActionNotificationWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3ActionNotificationWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

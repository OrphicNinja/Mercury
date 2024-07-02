// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameStartMainMenuWeaponCustomizationWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameStartMainMenuWeaponCustomizationWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableConfig();
// End Cross Module References
	DEFINE_FUNCTION(USBZGameStartMainMenuWeaponCustomizationWidget::execCustomizeWeaponInSlot)
	{
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_InEquippableSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_InWeaponSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CustomizeWeaponInSlot(ESBZEquippableLoadoutSlot(Z_Param_InEquippableSlot),Z_Param_InWeaponSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStartMainMenuWeaponCustomizationWidget::execGetCurrentWeaponSlotData)
	{
		P_GET_ENUM_REF(ESBZEquippableLoadoutSlot,Z_Param_Out_OutEquippableSlot);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutWeaponSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurrentWeaponSlotData((ESBZEquippableLoadoutSlot&)(Z_Param_Out_OutEquippableSlot),Z_Param_Out_OutWeaponSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStartMainMenuWeaponCustomizationWidget::execUpdateEquippableConfig)
	{
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_InEquippableSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_InWeaponSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateEquippableConfig(ESBZEquippableLoadoutSlot(Z_Param_InEquippableSlot),Z_Param_InWeaponSlotIndex);
		P_NATIVE_END;
	}
	void USBZGameStartMainMenuWeaponCustomizationWidget::StaticRegisterNativesUSBZGameStartMainMenuWeaponCustomizationWidget()
	{
		UClass* Class = USBZGameStartMainMenuWeaponCustomizationWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CustomizeWeaponInSlot", &USBZGameStartMainMenuWeaponCustomizationWidget::execCustomizeWeaponInSlot },
			{ "GetCurrentWeaponSlotData", &USBZGameStartMainMenuWeaponCustomizationWidget::execGetCurrentWeaponSlotData },
			{ "UpdateEquippableConfig", &USBZGameStartMainMenuWeaponCustomizationWidget::execUpdateEquippableConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_CustomizeWeaponInSlot_Statics
	{
		struct SBZGameStartMainMenuWeaponCustomizationWidget_eventCustomizeWeaponInSlot_Parms
		{
			ESBZEquippableLoadoutSlot InEquippableSlot;
			int32 InWeaponSlotIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InEquippableSlot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InEquippableSlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InWeaponSlotIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_CustomizeWeaponInSlot_Statics::NewProp_InEquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_CustomizeWeaponInSlot_Statics::NewProp_InEquippableSlot = { "InEquippableSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStartMainMenuWeaponCustomizationWidget_eventCustomizeWeaponInSlot_Parms, InEquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_CustomizeWeaponInSlot_Statics::NewProp_InWeaponSlotIndex = { "InWeaponSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStartMainMenuWeaponCustomizationWidget_eventCustomizeWeaponInSlot_Parms, InWeaponSlotIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_CustomizeWeaponInSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameStartMainMenuWeaponCustomizationWidget_eventCustomizeWeaponInSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_CustomizeWeaponInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameStartMainMenuWeaponCustomizationWidget_eventCustomizeWeaponInSlot_Parms), &Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_CustomizeWeaponInSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_CustomizeWeaponInSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_CustomizeWeaponInSlot_Statics::NewProp_InEquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_CustomizeWeaponInSlot_Statics::NewProp_InEquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_CustomizeWeaponInSlot_Statics::NewProp_InWeaponSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_CustomizeWeaponInSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_CustomizeWeaponInSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuWeaponCustomizationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_CustomizeWeaponInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget, nullptr, "CustomizeWeaponInSlot", nullptr, nullptr, sizeof(SBZGameStartMainMenuWeaponCustomizationWidget_eventCustomizeWeaponInSlot_Parms), Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_CustomizeWeaponInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_CustomizeWeaponInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_CustomizeWeaponInSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_CustomizeWeaponInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_CustomizeWeaponInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_CustomizeWeaponInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_GetCurrentWeaponSlotData_Statics
	{
		struct SBZGameStartMainMenuWeaponCustomizationWidget_eventGetCurrentWeaponSlotData_Parms
		{
			ESBZEquippableLoadoutSlot OutEquippableSlot;
			int32 OutWeaponSlotIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutEquippableSlot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutEquippableSlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutWeaponSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_GetCurrentWeaponSlotData_Statics::NewProp_OutEquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_GetCurrentWeaponSlotData_Statics::NewProp_OutEquippableSlot = { "OutEquippableSlot", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStartMainMenuWeaponCustomizationWidget_eventGetCurrentWeaponSlotData_Parms, OutEquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_GetCurrentWeaponSlotData_Statics::NewProp_OutWeaponSlotIndex = { "OutWeaponSlotIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStartMainMenuWeaponCustomizationWidget_eventGetCurrentWeaponSlotData_Parms, OutWeaponSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_GetCurrentWeaponSlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_GetCurrentWeaponSlotData_Statics::NewProp_OutEquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_GetCurrentWeaponSlotData_Statics::NewProp_OutEquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_GetCurrentWeaponSlotData_Statics::NewProp_OutWeaponSlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_GetCurrentWeaponSlotData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuWeaponCustomizationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_GetCurrentWeaponSlotData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget, nullptr, "GetCurrentWeaponSlotData", nullptr, nullptr, sizeof(SBZGameStartMainMenuWeaponCustomizationWidget_eventGetCurrentWeaponSlotData_Parms), Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_GetCurrentWeaponSlotData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_GetCurrentWeaponSlotData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_GetCurrentWeaponSlotData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_GetCurrentWeaponSlotData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_GetCurrentWeaponSlotData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_GetCurrentWeaponSlotData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_UpdateEquippableConfig_Statics
	{
		struct SBZGameStartMainMenuWeaponCustomizationWidget_eventUpdateEquippableConfig_Parms
		{
			ESBZEquippableLoadoutSlot InEquippableSlot;
			int32 InWeaponSlotIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InEquippableSlot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InEquippableSlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InWeaponSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_UpdateEquippableConfig_Statics::NewProp_InEquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_UpdateEquippableConfig_Statics::NewProp_InEquippableSlot = { "InEquippableSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStartMainMenuWeaponCustomizationWidget_eventUpdateEquippableConfig_Parms, InEquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_UpdateEquippableConfig_Statics::NewProp_InWeaponSlotIndex = { "InWeaponSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStartMainMenuWeaponCustomizationWidget_eventUpdateEquippableConfig_Parms, InWeaponSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_UpdateEquippableConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_UpdateEquippableConfig_Statics::NewProp_InEquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_UpdateEquippableConfig_Statics::NewProp_InEquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_UpdateEquippableConfig_Statics::NewProp_InWeaponSlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_UpdateEquippableConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuWeaponCustomizationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_UpdateEquippableConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget, nullptr, "UpdateEquippableConfig", nullptr, nullptr, sizeof(SBZGameStartMainMenuWeaponCustomizationWidget_eventUpdateEquippableConfig_Parms), Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_UpdateEquippableConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_UpdateEquippableConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_UpdateEquippableConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_UpdateEquippableConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_UpdateEquippableConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_UpdateEquippableConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_NoRegister()
	{
		return USBZGameStartMainMenuWeaponCustomizationWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquippableConfig;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquippableSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EquippableSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_CustomizeWeaponInSlot, "CustomizeWeaponInSlot" }, // 1521888287
		{ &Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_GetCurrentWeaponSlotData, "GetCurrentWeaponSlotData" }, // 1933375308
		{ &Z_Construct_UFunction_USBZGameStartMainMenuWeaponCustomizationWidget_UpdateEquippableConfig, "UpdateEquippableConfig" }, // 3502135509
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGameStartMainMenuWeaponCustomizationWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuWeaponCustomizationWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::NewProp_EquippableConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStartMainMenuWeaponCustomizationWidget" },
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuWeaponCustomizationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::NewProp_EquippableConfig = { "EquippableConfig", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStartMainMenuWeaponCustomizationWidget, EquippableConfig), Z_Construct_UScriptStruct_FSBZEquippableConfig, METADATA_PARAMS(Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::NewProp_EquippableConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::NewProp_EquippableConfig_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::NewProp_EquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::NewProp_EquippableSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStartMainMenuWeaponCustomizationWidget" },
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuWeaponCustomizationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::NewProp_EquippableSlot = { "EquippableSlot", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStartMainMenuWeaponCustomizationWidget, EquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::NewProp_EquippableSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::NewProp_EquippableSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::NewProp_WeaponSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStartMainMenuWeaponCustomizationWidget" },
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuWeaponCustomizationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::NewProp_WeaponSlotIndex = { "WeaponSlotIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStartMainMenuWeaponCustomizationWidget, WeaponSlotIndex), METADATA_PARAMS(Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::NewProp_WeaponSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::NewProp_WeaponSlotIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::NewProp_EquippableConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::NewProp_EquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::NewProp_EquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::NewProp_WeaponSlotIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGameStartMainMenuWeaponCustomizationWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::ClassParams = {
		&USBZGameStartMainMenuWeaponCustomizationWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGameStartMainMenuWeaponCustomizationWidget, 2607680415);
	template<> STARBREEZE_API UClass* StaticClass<USBZGameStartMainMenuWeaponCustomizationWidget>()
	{
		return USBZGameStartMainMenuWeaponCustomizationWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGameStartMainMenuWeaponCustomizationWidget(Z_Construct_UClass_USBZGameStartMainMenuWeaponCustomizationWidget, &USBZGameStartMainMenuWeaponCustomizationWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGameStartMainMenuWeaponCustomizationWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGameStartMainMenuWeaponCustomizationWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

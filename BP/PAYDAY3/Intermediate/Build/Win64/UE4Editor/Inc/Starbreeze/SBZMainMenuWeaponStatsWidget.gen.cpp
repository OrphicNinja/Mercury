// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuWeaponStatsWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuWeaponStatsWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponStatsWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableConfig();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableData_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartSlotBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartDataAsset_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponStats();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFireType();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUIWeaponStatsAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuWeaponStatsWidget::execCompareWithEquippableConfig)
	{
		P_GET_STRUCT_REF(FSBZEquippableConfig,Z_Param_Out_InEquippableConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompareWithEquippableConfig(Z_Param_Out_InEquippableConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponStatsWidget::execCompareWithEquippableData)
	{
		P_GET_OBJECT(USBZEquippableData,Z_Param_InEquippableData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompareWithEquippableData(Z_Param_InEquippableData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponStatsWidget::execCompareWithNothing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompareWithNothing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponStatsWidget::execCompareWithSlot)
	{
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_InEquippableSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_InWeaponSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompareWithSlot(ESBZEquippableLoadoutSlot(Z_Param_InEquippableSlot),Z_Param_InWeaponSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponStatsWidget::execCompareWithWeaponPart)
	{
		P_GET_OBJECT(USBZModularPartSlotBase,Z_Param_InPartSlot);
		P_GET_OBJECT(USBZEquippablePartDataAsset,Z_Param_InWeaponPart);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompareWithWeaponPart(Z_Param_InPartSlot,Z_Param_InWeaponPart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponStatsWidget::execHasCompare)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCompare();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponStatsWidget::execSetBaseFromEquippableConfig)
	{
		P_GET_STRUCT_REF(FSBZEquippableConfig,Z_Param_Out_InEquippableConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBaseFromEquippableConfig(Z_Param_Out_InEquippableConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponStatsWidget::execSetBaseFromEquippableData)
	{
		P_GET_OBJECT(USBZEquippableData,Z_Param_InEquippableData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBaseFromEquippableData(Z_Param_InEquippableData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponStatsWidget::execSetBaseFromSlot)
	{
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_InEquippableSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_InWeaponSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBaseFromSlot(ESBZEquippableLoadoutSlot(Z_Param_InEquippableSlot),Z_Param_InWeaponSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponStatsWidget::execSetEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEmpty();
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuWeaponStatsWidget_OnEmpty = FName(TEXT("OnEmpty"));
	void USBZMainMenuWeaponStatsWidget::OnEmpty()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponStatsWidget_OnEmpty),NULL);
	}
	static FName NAME_USBZMainMenuWeaponStatsWidget_OnUpdateVisuals = FName(TEXT("OnUpdateVisuals"));
	void USBZMainMenuWeaponStatsWidget::OnUpdateVisuals()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponStatsWidget_OnUpdateVisuals),NULL);
	}
	void USBZMainMenuWeaponStatsWidget::StaticRegisterNativesUSBZMainMenuWeaponStatsWidget()
	{
		UClass* Class = USBZMainMenuWeaponStatsWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompareWithEquippableConfig", &USBZMainMenuWeaponStatsWidget::execCompareWithEquippableConfig },
			{ "CompareWithEquippableData", &USBZMainMenuWeaponStatsWidget::execCompareWithEquippableData },
			{ "CompareWithNothing", &USBZMainMenuWeaponStatsWidget::execCompareWithNothing },
			{ "CompareWithSlot", &USBZMainMenuWeaponStatsWidget::execCompareWithSlot },
			{ "CompareWithWeaponPart", &USBZMainMenuWeaponStatsWidget::execCompareWithWeaponPart },
			{ "HasCompare", &USBZMainMenuWeaponStatsWidget::execHasCompare },
			{ "SetBaseFromEquippableConfig", &USBZMainMenuWeaponStatsWidget::execSetBaseFromEquippableConfig },
			{ "SetBaseFromEquippableData", &USBZMainMenuWeaponStatsWidget::execSetBaseFromEquippableData },
			{ "SetBaseFromSlot", &USBZMainMenuWeaponStatsWidget::execSetBaseFromSlot },
			{ "SetEmpty", &USBZMainMenuWeaponStatsWidget::execSetEmpty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableConfig_Statics
	{
		struct SBZMainMenuWeaponStatsWidget_eventCompareWithEquippableConfig_Parms
		{
			FSBZEquippableConfig InEquippableConfig;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InEquippableConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InEquippableConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableConfig_Statics::NewProp_InEquippableConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableConfig_Statics::NewProp_InEquippableConfig = { "InEquippableConfig", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponStatsWidget_eventCompareWithEquippableConfig_Parms, InEquippableConfig), Z_Construct_UScriptStruct_FSBZEquippableConfig, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableConfig_Statics::NewProp_InEquippableConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableConfig_Statics::NewProp_InEquippableConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableConfig_Statics::NewProp_InEquippableConfig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponStatsWidget, nullptr, "CompareWithEquippableConfig", nullptr, nullptr, sizeof(SBZMainMenuWeaponStatsWidget_eventCompareWithEquippableConfig_Parms), Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableData_Statics
	{
		struct SBZMainMenuWeaponStatsWidget_eventCompareWithEquippableData_Parms
		{
			const USBZEquippableData* InEquippableData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InEquippableData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InEquippableData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableData_Statics::NewProp_InEquippableData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableData_Statics::NewProp_InEquippableData = { "InEquippableData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponStatsWidget_eventCompareWithEquippableData_Parms, InEquippableData), Z_Construct_UClass_USBZEquippableData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableData_Statics::NewProp_InEquippableData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableData_Statics::NewProp_InEquippableData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableData_Statics::NewProp_InEquippableData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponStatsWidget, nullptr, "CompareWithEquippableData", nullptr, nullptr, sizeof(SBZMainMenuWeaponStatsWidget_eventCompareWithEquippableData_Parms), Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithNothing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithNothing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithNothing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponStatsWidget, nullptr, "CompareWithNothing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithNothing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithNothing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithNothing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithNothing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithSlot_Statics
	{
		struct SBZMainMenuWeaponStatsWidget_eventCompareWithSlot_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithSlot_Statics::NewProp_InEquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithSlot_Statics::NewProp_InEquippableSlot = { "InEquippableSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponStatsWidget_eventCompareWithSlot_Parms, InEquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithSlot_Statics::NewProp_InWeaponSlotIndex = { "InWeaponSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponStatsWidget_eventCompareWithSlot_Parms, InWeaponSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithSlot_Statics::NewProp_InEquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithSlot_Statics::NewProp_InEquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithSlot_Statics::NewProp_InWeaponSlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponStatsWidget, nullptr, "CompareWithSlot", nullptr, nullptr, sizeof(SBZMainMenuWeaponStatsWidget_eventCompareWithSlot_Parms), Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithWeaponPart_Statics
	{
		struct SBZMainMenuWeaponStatsWidget_eventCompareWithWeaponPart_Parms
		{
			const USBZModularPartSlotBase* InPartSlot;
			const USBZEquippablePartDataAsset* InWeaponPart;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPartSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPartSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWeaponPart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InWeaponPart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithWeaponPart_Statics::NewProp_InPartSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithWeaponPart_Statics::NewProp_InPartSlot = { "InPartSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponStatsWidget_eventCompareWithWeaponPart_Parms, InPartSlot), Z_Construct_UClass_USBZModularPartSlotBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithWeaponPart_Statics::NewProp_InPartSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithWeaponPart_Statics::NewProp_InPartSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithWeaponPart_Statics::NewProp_InWeaponPart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithWeaponPart_Statics::NewProp_InWeaponPart = { "InWeaponPart", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponStatsWidget_eventCompareWithWeaponPart_Parms, InWeaponPart), Z_Construct_UClass_USBZEquippablePartDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithWeaponPart_Statics::NewProp_InWeaponPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithWeaponPart_Statics::NewProp_InWeaponPart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithWeaponPart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithWeaponPart_Statics::NewProp_InPartSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithWeaponPart_Statics::NewProp_InWeaponPart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithWeaponPart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithWeaponPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponStatsWidget, nullptr, "CompareWithWeaponPart", nullptr, nullptr, sizeof(SBZMainMenuWeaponStatsWidget_eventCompareWithWeaponPart_Parms), Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithWeaponPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithWeaponPart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithWeaponPart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithWeaponPart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithWeaponPart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithWeaponPart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_HasCompare_Statics
	{
		struct SBZMainMenuWeaponStatsWidget_eventHasCompare_Parms
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
	void Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_HasCompare_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponStatsWidget_eventHasCompare_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_HasCompare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponStatsWidget_eventHasCompare_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_HasCompare_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_HasCompare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_HasCompare_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_HasCompare_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_HasCompare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponStatsWidget, nullptr, "HasCompare", nullptr, nullptr, sizeof(SBZMainMenuWeaponStatsWidget_eventHasCompare_Parms), Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_HasCompare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_HasCompare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_HasCompare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_HasCompare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_HasCompare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_HasCompare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_OnEmpty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_OnEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_OnEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponStatsWidget, nullptr, "OnEmpty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_OnEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_OnEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_OnEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_OnEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_OnUpdateVisuals_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_OnUpdateVisuals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_OnUpdateVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponStatsWidget, nullptr, "OnUpdateVisuals", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_OnUpdateVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_OnUpdateVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_OnUpdateVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_OnUpdateVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableConfig_Statics
	{
		struct SBZMainMenuWeaponStatsWidget_eventSetBaseFromEquippableConfig_Parms
		{
			FSBZEquippableConfig InEquippableConfig;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InEquippableConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InEquippableConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableConfig_Statics::NewProp_InEquippableConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableConfig_Statics::NewProp_InEquippableConfig = { "InEquippableConfig", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponStatsWidget_eventSetBaseFromEquippableConfig_Parms, InEquippableConfig), Z_Construct_UScriptStruct_FSBZEquippableConfig, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableConfig_Statics::NewProp_InEquippableConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableConfig_Statics::NewProp_InEquippableConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableConfig_Statics::NewProp_InEquippableConfig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponStatsWidget, nullptr, "SetBaseFromEquippableConfig", nullptr, nullptr, sizeof(SBZMainMenuWeaponStatsWidget_eventSetBaseFromEquippableConfig_Parms), Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableData_Statics
	{
		struct SBZMainMenuWeaponStatsWidget_eventSetBaseFromEquippableData_Parms
		{
			const USBZEquippableData* InEquippableData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InEquippableData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InEquippableData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableData_Statics::NewProp_InEquippableData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableData_Statics::NewProp_InEquippableData = { "InEquippableData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponStatsWidget_eventSetBaseFromEquippableData_Parms, InEquippableData), Z_Construct_UClass_USBZEquippableData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableData_Statics::NewProp_InEquippableData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableData_Statics::NewProp_InEquippableData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableData_Statics::NewProp_InEquippableData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponStatsWidget, nullptr, "SetBaseFromEquippableData", nullptr, nullptr, sizeof(SBZMainMenuWeaponStatsWidget_eventSetBaseFromEquippableData_Parms), Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromSlot_Statics
	{
		struct SBZMainMenuWeaponStatsWidget_eventSetBaseFromSlot_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromSlot_Statics::NewProp_InEquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromSlot_Statics::NewProp_InEquippableSlot = { "InEquippableSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponStatsWidget_eventSetBaseFromSlot_Parms, InEquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromSlot_Statics::NewProp_InWeaponSlotIndex = { "InWeaponSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponStatsWidget_eventSetBaseFromSlot_Parms, InWeaponSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromSlot_Statics::NewProp_InEquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromSlot_Statics::NewProp_InEquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromSlot_Statics::NewProp_InWeaponSlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponStatsWidget, nullptr, "SetBaseFromSlot", nullptr, nullptr, sizeof(SBZMainMenuWeaponStatsWidget_eventSetBaseFromSlot_Parms), Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetEmpty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponStatsWidget, nullptr, "SetEmpty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_NoRegister()
	{
		return USBZMainMenuWeaponStatsWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseEquippableConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseEquippableConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseWeaponStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseWeaponStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseAmmoLoadedMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BaseAmmoLoadedMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseAmmoInventoryMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BaseAmmoInventoryMax;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BaseFireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseFireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BaseFireType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompareEquippableConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompareEquippableConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompareWeaponStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompareWeaponStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompareAmmoLoadedMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompareAmmoLoadedMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompareAmmoInventoryMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompareAmmoInventoryMax;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompareFireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompareFireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CompareFireType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIWeaponStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UIWeaponStats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableConfig, "CompareWithEquippableConfig" }, // 4155404479
		{ &Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithEquippableData, "CompareWithEquippableData" }, // 2200685091
		{ &Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithNothing, "CompareWithNothing" }, // 2236646381
		{ &Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithSlot, "CompareWithSlot" }, // 4048611557
		{ &Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_CompareWithWeaponPart, "CompareWithWeaponPart" }, // 4165278066
		{ &Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_HasCompare, "HasCompare" }, // 2486384177
		{ &Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_OnEmpty, "OnEmpty" }, // 2567327275
		{ &Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_OnUpdateVisuals, "OnUpdateVisuals" }, // 4244022766
		{ &Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableConfig, "SetBaseFromEquippableConfig" }, // 781650484
		{ &Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromEquippableData, "SetBaseFromEquippableData" }, // 2532849571
		{ &Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetBaseFromSlot, "SetBaseFromSlot" }, // 1504639334
		{ &Z_Construct_UFunction_USBZMainMenuWeaponStatsWidget_SetEmpty, "SetEmpty" }, // 3881637580
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuWeaponStatsWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponStatsWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseEquippableConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponStatsWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseEquippableConfig = { "BaseEquippableConfig", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponStatsWidget, BaseEquippableConfig), Z_Construct_UScriptStruct_FSBZEquippableConfig, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseEquippableConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseEquippableConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseWeaponStats_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponStatsWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseWeaponStats = { "BaseWeaponStats", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponStatsWidget, BaseWeaponStats), Z_Construct_UScriptStruct_FSBZWeaponStats, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseWeaponStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseWeaponStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseAmmoLoadedMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponStatsWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseAmmoLoadedMax = { "BaseAmmoLoadedMax", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponStatsWidget, BaseAmmoLoadedMax), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseAmmoLoadedMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseAmmoLoadedMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseAmmoInventoryMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponStatsWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseAmmoInventoryMax = { "BaseAmmoInventoryMax", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponStatsWidget, BaseAmmoInventoryMax), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseAmmoInventoryMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseAmmoInventoryMax_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseFireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseFireType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponStatsWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseFireType = { "BaseFireType", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponStatsWidget, BaseFireType), Z_Construct_UEnum_Starbreeze_ESBZFireType, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseFireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseFireType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareEquippableConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponStatsWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareEquippableConfig = { "CompareEquippableConfig", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponStatsWidget, CompareEquippableConfig), Z_Construct_UScriptStruct_FSBZEquippableConfig, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareEquippableConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareEquippableConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareWeaponStats_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponStatsWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareWeaponStats = { "CompareWeaponStats", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponStatsWidget, CompareWeaponStats), Z_Construct_UScriptStruct_FSBZWeaponStats, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareWeaponStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareWeaponStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareAmmoLoadedMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponStatsWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareAmmoLoadedMax = { "CompareAmmoLoadedMax", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponStatsWidget, CompareAmmoLoadedMax), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareAmmoLoadedMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareAmmoLoadedMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareAmmoInventoryMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponStatsWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareAmmoInventoryMax = { "CompareAmmoInventoryMax", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponStatsWidget, CompareAmmoInventoryMax), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareAmmoInventoryMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareAmmoInventoryMax_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareFireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareFireType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponStatsWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareFireType = { "CompareFireType", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponStatsWidget, CompareFireType), Z_Construct_UEnum_Starbreeze_ESBZFireType, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareFireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareFireType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_UIWeaponStats_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponStatsWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponStatsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_UIWeaponStats = { "UIWeaponStats", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponStatsWidget, UIWeaponStats), Z_Construct_UClass_USBZUIWeaponStatsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_UIWeaponStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_UIWeaponStats_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseEquippableConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseWeaponStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseAmmoLoadedMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseAmmoInventoryMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseFireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_BaseFireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareEquippableConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareWeaponStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareAmmoLoadedMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareAmmoInventoryMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareFireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_CompareFireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::NewProp_UIWeaponStats,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuWeaponStatsWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::ClassParams = {
		&USBZMainMenuWeaponStatsWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuWeaponStatsWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuWeaponStatsWidget, 1203387690);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuWeaponStatsWidget>()
	{
		return USBZMainMenuWeaponStatsWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuWeaponStatsWidget(Z_Construct_UClass_USBZMainMenuWeaponStatsWidget, &USBZMainMenuWeaponStatsWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuWeaponStatsWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuWeaponStatsWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

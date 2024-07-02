// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuWeaponProgressionDisplayWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuWeaponProgressionDisplayWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseWeaponData_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZModularSlotPart();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartDataAsset_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDamageDistance();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableConfig();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuWeaponProgressionDisplayWidget::execInitilizeWithBaseInventoryData)
	{
		P_GET_OBJECT(USBZInventoryBaseData,Z_Param_InBaseData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitilizeWithBaseInventoryData(Z_Param_InBaseData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponProgressionDisplayWidget::execSetEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponProgressionDisplayWidget::execUpdateBaseWeaponVisuals)
	{
		P_GET_OBJECT(USBZBaseWeaponData,Z_Param_InBaseWeaponData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBaseWeaponVisuals(Z_Param_InBaseWeaponData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponProgressionDisplayWidget::execUpdateWeaponVisuals)
	{
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_InEquippableSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_InWeaponSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWeaponVisuals(ESBZEquippableLoadoutSlot(Z_Param_InEquippableSlot),Z_Param_InWeaponSlotIndex);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuWeaponProgressionDisplayWidget_OnBaseData = FName(TEXT("OnBaseData"));
	void USBZMainMenuWeaponProgressionDisplayWidget::OnBaseData()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponProgressionDisplayWidget_OnBaseData),NULL);
	}
	static FName NAME_USBZMainMenuWeaponProgressionDisplayWidget_OnDataEmpty = FName(TEXT("OnDataEmpty"));
	void USBZMainMenuWeaponProgressionDisplayWidget::OnDataEmpty()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponProgressionDisplayWidget_OnDataEmpty),NULL);
	}
	static FName NAME_USBZMainMenuWeaponProgressionDisplayWidget_OnNewWeaponData = FName(TEXT("OnNewWeaponData"));
	void USBZMainMenuWeaponProgressionDisplayWidget::OnNewWeaponData()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponProgressionDisplayWidget_OnNewWeaponData),NULL);
	}
	void USBZMainMenuWeaponProgressionDisplayWidget::StaticRegisterNativesUSBZMainMenuWeaponProgressionDisplayWidget()
	{
		UClass* Class = USBZMainMenuWeaponProgressionDisplayWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitilizeWithBaseInventoryData", &USBZMainMenuWeaponProgressionDisplayWidget::execInitilizeWithBaseInventoryData },
			{ "SetEmpty", &USBZMainMenuWeaponProgressionDisplayWidget::execSetEmpty },
			{ "UpdateBaseWeaponVisuals", &USBZMainMenuWeaponProgressionDisplayWidget::execUpdateBaseWeaponVisuals },
			{ "UpdateWeaponVisuals", &USBZMainMenuWeaponProgressionDisplayWidget::execUpdateWeaponVisuals },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_InitilizeWithBaseInventoryData_Statics
	{
		struct SBZMainMenuWeaponProgressionDisplayWidget_eventInitilizeWithBaseInventoryData_Parms
		{
			const USBZInventoryBaseData* InBaseData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBaseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InBaseData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_InitilizeWithBaseInventoryData_Statics::NewProp_InBaseData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_InitilizeWithBaseInventoryData_Statics::NewProp_InBaseData = { "InBaseData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponProgressionDisplayWidget_eventInitilizeWithBaseInventoryData_Parms, InBaseData), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_InitilizeWithBaseInventoryData_Statics::NewProp_InBaseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_InitilizeWithBaseInventoryData_Statics::NewProp_InBaseData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_InitilizeWithBaseInventoryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_InitilizeWithBaseInventoryData_Statics::NewProp_InBaseData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_InitilizeWithBaseInventoryData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_InitilizeWithBaseInventoryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget, nullptr, "InitilizeWithBaseInventoryData", nullptr, nullptr, sizeof(SBZMainMenuWeaponProgressionDisplayWidget_eventInitilizeWithBaseInventoryData_Parms), Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_InitilizeWithBaseInventoryData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_InitilizeWithBaseInventoryData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_InitilizeWithBaseInventoryData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_InitilizeWithBaseInventoryData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_InitilizeWithBaseInventoryData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_InitilizeWithBaseInventoryData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_OnBaseData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_OnBaseData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_OnBaseData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget, nullptr, "OnBaseData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_OnBaseData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_OnBaseData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_OnBaseData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_OnBaseData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_OnDataEmpty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_OnDataEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_OnDataEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget, nullptr, "OnDataEmpty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_OnDataEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_OnDataEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_OnDataEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_OnDataEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_OnNewWeaponData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_OnNewWeaponData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_OnNewWeaponData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget, nullptr, "OnNewWeaponData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_OnNewWeaponData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_OnNewWeaponData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_OnNewWeaponData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_OnNewWeaponData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_SetEmpty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_SetEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_SetEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget, nullptr, "SetEmpty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_SetEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_SetEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_SetEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_SetEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateBaseWeaponVisuals_Statics
	{
		struct SBZMainMenuWeaponProgressionDisplayWidget_eventUpdateBaseWeaponVisuals_Parms
		{
			const USBZBaseWeaponData* InBaseWeaponData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBaseWeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InBaseWeaponData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateBaseWeaponVisuals_Statics::NewProp_InBaseWeaponData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateBaseWeaponVisuals_Statics::NewProp_InBaseWeaponData = { "InBaseWeaponData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponProgressionDisplayWidget_eventUpdateBaseWeaponVisuals_Parms, InBaseWeaponData), Z_Construct_UClass_USBZBaseWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateBaseWeaponVisuals_Statics::NewProp_InBaseWeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateBaseWeaponVisuals_Statics::NewProp_InBaseWeaponData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateBaseWeaponVisuals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateBaseWeaponVisuals_Statics::NewProp_InBaseWeaponData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateBaseWeaponVisuals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateBaseWeaponVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget, nullptr, "UpdateBaseWeaponVisuals", nullptr, nullptr, sizeof(SBZMainMenuWeaponProgressionDisplayWidget_eventUpdateBaseWeaponVisuals_Parms), Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateBaseWeaponVisuals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateBaseWeaponVisuals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateBaseWeaponVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateBaseWeaponVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateBaseWeaponVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateBaseWeaponVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateWeaponVisuals_Statics
	{
		struct SBZMainMenuWeaponProgressionDisplayWidget_eventUpdateWeaponVisuals_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateWeaponVisuals_Statics::NewProp_InEquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateWeaponVisuals_Statics::NewProp_InEquippableSlot = { "InEquippableSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponProgressionDisplayWidget_eventUpdateWeaponVisuals_Parms, InEquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateWeaponVisuals_Statics::NewProp_InWeaponSlotIndex = { "InWeaponSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponProgressionDisplayWidget_eventUpdateWeaponVisuals_Parms, InWeaponSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateWeaponVisuals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateWeaponVisuals_Statics::NewProp_InEquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateWeaponVisuals_Statics::NewProp_InEquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateWeaponVisuals_Statics::NewProp_InWeaponSlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateWeaponVisuals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateWeaponVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget, nullptr, "UpdateWeaponVisuals", nullptr, nullptr, sizeof(SBZMainMenuWeaponProgressionDisplayWidget_eventUpdateWeaponVisuals_Parms), Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateWeaponVisuals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateWeaponVisuals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateWeaponVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateWeaponVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateWeaponVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateWeaponVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_NoRegister()
	{
		return USBZMainMenuWeaponProgressionDisplayWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWeaponLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxWeaponLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWeaponXP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentWeaponXP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponXPAtNextLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponXPAtNextLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponLevelProgression_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponLevelProgression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseItemData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquippableSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EquippableSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponSlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxModifierSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxModifierSlots;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponSlotPartArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSlotPartArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponSlotPartArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponPartArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPartArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponPartArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponStatDamageFalloff_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponStatDamageFalloff_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponStatDamageFalloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquippableConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_InitilizeWithBaseInventoryData, "InitilizeWithBaseInventoryData" }, // 872045143
		{ &Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_OnBaseData, "OnBaseData" }, // 665990725
		{ &Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_OnDataEmpty, "OnDataEmpty" }, // 2883918429
		{ &Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_OnNewWeaponData, "OnNewWeaponData" }, // 3324741205
		{ &Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_SetEmpty, "SetEmpty" }, // 1657527548
		{ &Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateBaseWeaponVisuals, "UpdateBaseWeaponVisuals" }, // 1705030457
		{ &Z_Construct_UFunction_USBZMainMenuWeaponProgressionDisplayWidget_UpdateWeaponVisuals, "UpdateWeaponVisuals" }, // 1095478046
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuWeaponProgressionDisplayWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionDisplayWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponProgressionDisplayWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponLevel = { "WeaponLevel", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, WeaponLevel), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_MaxWeaponLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponProgressionDisplayWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_MaxWeaponLevel = { "MaxWeaponLevel", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, MaxWeaponLevel), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_MaxWeaponLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_MaxWeaponLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_CurrentWeaponXP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponProgressionDisplayWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_CurrentWeaponXP = { "CurrentWeaponXP", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, CurrentWeaponXP), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_CurrentWeaponXP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_CurrentWeaponXP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponXPAtNextLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponProgressionDisplayWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponXPAtNextLevel = { "WeaponXPAtNextLevel", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, WeaponXPAtNextLevel), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponXPAtNextLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponXPAtNextLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponLevelProgression_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponProgressionDisplayWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponLevelProgression = { "WeaponLevelProgression", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, WeaponLevelProgression), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponLevelProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponLevelProgression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_BaseItemData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponProgressionDisplayWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_BaseItemData = { "BaseItemData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, BaseItemData), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_BaseItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_BaseItemData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_EquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_EquippableSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponProgressionDisplayWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_EquippableSlot = { "EquippableSlot", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, EquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_EquippableSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_EquippableSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponProgressionDisplayWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponSlotIndex = { "WeaponSlotIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, WeaponSlotIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponSlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_MaxModifierSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponProgressionDisplayWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_MaxModifierSlots = { "MaxModifierSlots", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, MaxModifierSlots), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_MaxModifierSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_MaxModifierSlots_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponSlotPartArray_Inner = { "WeaponSlotPartArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZModularSlotPart, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponSlotPartArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponProgressionDisplayWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponSlotPartArray = { "WeaponSlotPartArray", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, WeaponSlotPartArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponSlotPartArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponSlotPartArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponPartArray_Inner = { "WeaponPartArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZEquippablePartDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponPartArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponProgressionDisplayWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponPartArray = { "WeaponPartArray", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, WeaponPartArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponPartArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponPartArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponStatDamageFalloff_Inner = { "WeaponStatDamageFalloff", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZDamageDistance, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponStatDamageFalloff_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponProgressionDisplayWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponStatDamageFalloff = { "WeaponStatDamageFalloff", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, WeaponStatDamageFalloff), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponStatDamageFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponStatDamageFalloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_EquippableConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponProgressionDisplayWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponProgressionDisplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_EquippableConfig = { "EquippableConfig", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, EquippableConfig), Z_Construct_UScriptStruct_FSBZEquippableConfig, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_EquippableConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_EquippableConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_MaxWeaponLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_CurrentWeaponXP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponXPAtNextLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponLevelProgression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_BaseItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_EquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_EquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_MaxModifierSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponSlotPartArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponSlotPartArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponPartArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponPartArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponStatDamageFalloff_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_WeaponStatDamageFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::NewProp_EquippableConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuWeaponProgressionDisplayWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::ClassParams = {
		&USBZMainMenuWeaponProgressionDisplayWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuWeaponProgressionDisplayWidget, 2128908936);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuWeaponProgressionDisplayWidget>()
	{
		return USBZMainMenuWeaponProgressionDisplayWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuWeaponProgressionDisplayWidget(Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget, &USBZMainMenuWeaponProgressionDisplayWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuWeaponProgressionDisplayWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuWeaponProgressionDisplayWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

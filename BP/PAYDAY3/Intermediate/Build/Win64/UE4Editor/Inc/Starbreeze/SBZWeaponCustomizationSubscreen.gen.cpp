// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponCustomizationSubscreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponCustomizationSubscreen() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponCustomizationSubscreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponCustomizationSubscreen();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableConfig();
// End Cross Module References
	DEFINE_FUNCTION(USBZWeaponCustomizationSubscreen::execApplyCosmeticConfig)
	{
		P_GET_OBJECT(USBZCosmeticsDataAsset,Z_Param_CosmeticDataAsset);
		P_GET_PROPERTY(FIntProperty,Z_Param_ConfigIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyCosmeticConfig(Z_Param_CosmeticDataAsset,Z_Param_ConfigIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWeaponCustomizationSubscreen::execApplyCosmeticData)
	{
		P_GET_OBJECT(USBZCosmeticsDataAsset,Z_Param_CosmeticDataAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyCosmeticData(Z_Param_CosmeticDataAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWeaponCustomizationSubscreen::execApplyCosmeticOnBackend)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyCosmeticOnBackend();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWeaponCustomizationSubscreen::execGetCosmeticConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZEquippablePartConfig**)Z_Param__Result=P_THIS->GetCosmeticConfig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWeaponCustomizationSubscreen::execGetCosmeticItems)
	{
		P_GET_OBJECT(USBZCosmeticsPartSlot,Z_Param_NewCosmeticSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZCosmeticsInventoryItem>*)Z_Param__Result=P_THIS->GetCosmeticItems(Z_Param_NewCosmeticSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWeaponCustomizationSubscreen::execGetCosmeticPart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const USBZCosmeticsDataAsset**)Z_Param__Result=P_THIS->GetCosmeticPart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWeaponCustomizationSubscreen::execGetCosmeticSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const USBZCosmeticsPartSlot**)Z_Param__Result=P_THIS->GetCosmeticSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWeaponCustomizationSubscreen::execOnApplyCosmeticDone)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnApplyCosmeticDone(ESBZMetaRequestResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWeaponCustomizationSubscreen::execRefreshEquippableConfig)
	{
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_InEquippableSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_InWeaponSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshEquippableConfig(ESBZEquippableLoadoutSlot(Z_Param_InEquippableSlot),Z_Param_InWeaponSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWeaponCustomizationSubscreen::execSetupScreen)
	{
		P_GET_OBJECT(USBZCosmeticsPartSlot,Z_Param_NewCosmeticSlot);
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_LoadoutSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_LoadoutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupScreen(Z_Param_NewCosmeticSlot,ESBZEquippableLoadoutSlot(Z_Param_LoadoutSlot),Z_Param_LoadoutIndex);
		P_NATIVE_END;
	}
	static FName NAME_USBZWeaponCustomizationSubscreen_OnCosmeticSlotUpdated = FName(TEXT("OnCosmeticSlotUpdated"));
	void USBZWeaponCustomizationSubscreen::OnCosmeticSlotUpdated()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZWeaponCustomizationSubscreen_OnCosmeticSlotUpdated),NULL);
	}
	static FName NAME_USBZWeaponCustomizationSubscreen_OnTryApply = FName(TEXT("OnTryApply"));
	void USBZWeaponCustomizationSubscreen::OnTryApply()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZWeaponCustomizationSubscreen_OnTryApply),NULL);
	}
	static FName NAME_USBZWeaponCustomizationSubscreen_OnTryApplyDone = FName(TEXT("OnTryApplyDone"));
	void USBZWeaponCustomizationSubscreen::OnTryApplyDone(ESBZMetaRequestResult Result)
	{
		SBZWeaponCustomizationSubscreen_eventOnTryApplyDone_Parms Parms;
		Parms.Result=Result;
		ProcessEvent(FindFunctionChecked(NAME_USBZWeaponCustomizationSubscreen_OnTryApplyDone),&Parms);
	}
	static FName NAME_USBZWeaponCustomizationSubscreen_UpdatePreview = FName(TEXT("UpdatePreview"));
	void USBZWeaponCustomizationSubscreen::UpdatePreview()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZWeaponCustomizationSubscreen_UpdatePreview),NULL);
	}
	void USBZWeaponCustomizationSubscreen::StaticRegisterNativesUSBZWeaponCustomizationSubscreen()
	{
		UClass* Class = USBZWeaponCustomizationSubscreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyCosmeticConfig", &USBZWeaponCustomizationSubscreen::execApplyCosmeticConfig },
			{ "ApplyCosmeticData", &USBZWeaponCustomizationSubscreen::execApplyCosmeticData },
			{ "ApplyCosmeticOnBackend", &USBZWeaponCustomizationSubscreen::execApplyCosmeticOnBackend },
			{ "GetCosmeticConfig", &USBZWeaponCustomizationSubscreen::execGetCosmeticConfig },
			{ "GetCosmeticItems", &USBZWeaponCustomizationSubscreen::execGetCosmeticItems },
			{ "GetCosmeticPart", &USBZWeaponCustomizationSubscreen::execGetCosmeticPart },
			{ "GetCosmeticSlot", &USBZWeaponCustomizationSubscreen::execGetCosmeticSlot },
			{ "OnApplyCosmeticDone", &USBZWeaponCustomizationSubscreen::execOnApplyCosmeticDone },
			{ "RefreshEquippableConfig", &USBZWeaponCustomizationSubscreen::execRefreshEquippableConfig },
			{ "SetupScreen", &USBZWeaponCustomizationSubscreen::execSetupScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticConfig_Statics
	{
		struct SBZWeaponCustomizationSubscreen_eventApplyCosmeticConfig_Parms
		{
			const USBZCosmeticsDataAsset* CosmeticDataAsset;
			int32 ConfigIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CosmeticDataAsset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConfigIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticConfig_Statics::NewProp_CosmeticDataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticConfig_Statics::NewProp_CosmeticDataAsset = { "CosmeticDataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWeaponCustomizationSubscreen_eventApplyCosmeticConfig_Parms, CosmeticDataAsset), Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticConfig_Statics::NewProp_CosmeticDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticConfig_Statics::NewProp_CosmeticDataAsset_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticConfig_Statics::NewProp_ConfigIndex = { "ConfigIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWeaponCustomizationSubscreen_eventApplyCosmeticConfig_Parms, ConfigIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticConfig_Statics::NewProp_CosmeticDataAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticConfig_Statics::NewProp_ConfigIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWeaponCustomizationSubscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWeaponCustomizationSubscreen, nullptr, "ApplyCosmeticConfig", nullptr, nullptr, sizeof(SBZWeaponCustomizationSubscreen_eventApplyCosmeticConfig_Parms), Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticData_Statics
	{
		struct SBZWeaponCustomizationSubscreen_eventApplyCosmeticData_Parms
		{
			const USBZCosmeticsDataAsset* CosmeticDataAsset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CosmeticDataAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticData_Statics::NewProp_CosmeticDataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticData_Statics::NewProp_CosmeticDataAsset = { "CosmeticDataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWeaponCustomizationSubscreen_eventApplyCosmeticData_Parms, CosmeticDataAsset), Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticData_Statics::NewProp_CosmeticDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticData_Statics::NewProp_CosmeticDataAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticData_Statics::NewProp_CosmeticDataAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWeaponCustomizationSubscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWeaponCustomizationSubscreen, nullptr, "ApplyCosmeticData", nullptr, nullptr, sizeof(SBZWeaponCustomizationSubscreen_eventApplyCosmeticData_Parms), Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticOnBackend_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticOnBackend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWeaponCustomizationSubscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticOnBackend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWeaponCustomizationSubscreen, nullptr, "ApplyCosmeticOnBackend", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticOnBackend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticOnBackend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticOnBackend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticOnBackend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticConfig_Statics
	{
		struct SBZWeaponCustomizationSubscreen_eventGetCosmeticConfig_Parms
		{
			USBZEquippablePartConfig* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWeaponCustomizationSubscreen_eventGetCosmeticConfig_Parms, ReturnValue), Z_Construct_UClass_USBZEquippablePartConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWeaponCustomizationSubscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWeaponCustomizationSubscreen, nullptr, "GetCosmeticConfig", nullptr, nullptr, sizeof(SBZWeaponCustomizationSubscreen_eventGetCosmeticConfig_Parms), Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticItems_Statics
	{
		struct SBZWeaponCustomizationSubscreen_eventGetCosmeticItems_Parms
		{
			const USBZCosmeticsPartSlot* NewCosmeticSlot;
			TArray<FSBZCosmeticsInventoryItem> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewCosmeticSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewCosmeticSlot;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticItems_Statics::NewProp_NewCosmeticSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticItems_Statics::NewProp_NewCosmeticSlot = { "NewCosmeticSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWeaponCustomizationSubscreen_eventGetCosmeticItems_Parms, NewCosmeticSlot), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticItems_Statics::NewProp_NewCosmeticSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticItems_Statics::NewProp_NewCosmeticSlot_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWeaponCustomizationSubscreen_eventGetCosmeticItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticItems_Statics::NewProp_NewCosmeticSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticItems_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWeaponCustomizationSubscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWeaponCustomizationSubscreen, nullptr, "GetCosmeticItems", nullptr, nullptr, sizeof(SBZWeaponCustomizationSubscreen_eventGetCosmeticItems_Parms), Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticPart_Statics
	{
		struct SBZWeaponCustomizationSubscreen_eventGetCosmeticPart_Parms
		{
			const USBZCosmeticsDataAsset* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticPart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWeaponCustomizationSubscreen_eventGetCosmeticPart_Parms, ReturnValue), Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticPart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticPart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticPart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWeaponCustomizationSubscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWeaponCustomizationSubscreen, nullptr, "GetCosmeticPart", nullptr, nullptr, sizeof(SBZWeaponCustomizationSubscreen_eventGetCosmeticPart_Parms), Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticPart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticPart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticPart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticPart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticPart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticSlot_Statics
	{
		struct SBZWeaponCustomizationSubscreen_eventGetCosmeticSlot_Parms
		{
			const USBZCosmeticsPartSlot* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWeaponCustomizationSubscreen_eventGetCosmeticSlot_Parms, ReturnValue), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWeaponCustomizationSubscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWeaponCustomizationSubscreen, nullptr, "GetCosmeticSlot", nullptr, nullptr, sizeof(SBZWeaponCustomizationSubscreen_eventGetCosmeticSlot_Parms), Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnApplyCosmeticDone_Statics
	{
		struct SBZWeaponCustomizationSubscreen_eventOnApplyCosmeticDone_Parms
		{
			ESBZMetaRequestResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnApplyCosmeticDone_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnApplyCosmeticDone_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWeaponCustomizationSubscreen_eventOnApplyCosmeticDone_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnApplyCosmeticDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnApplyCosmeticDone_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnApplyCosmeticDone_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnApplyCosmeticDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWeaponCustomizationSubscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnApplyCosmeticDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWeaponCustomizationSubscreen, nullptr, "OnApplyCosmeticDone", nullptr, nullptr, sizeof(SBZWeaponCustomizationSubscreen_eventOnApplyCosmeticDone_Parms), Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnApplyCosmeticDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnApplyCosmeticDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnApplyCosmeticDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnApplyCosmeticDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnApplyCosmeticDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnApplyCosmeticDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnCosmeticSlotUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnCosmeticSlotUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWeaponCustomizationSubscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnCosmeticSlotUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWeaponCustomizationSubscreen, nullptr, "OnCosmeticSlotUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnCosmeticSlotUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnCosmeticSlotUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnCosmeticSlotUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnCosmeticSlotUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnTryApply_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnTryApply_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWeaponCustomizationSubscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnTryApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWeaponCustomizationSubscreen, nullptr, "OnTryApply", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnTryApply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnTryApply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnTryApply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnTryApply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnTryApplyDone_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnTryApplyDone_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnTryApplyDone_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWeaponCustomizationSubscreen_eventOnTryApplyDone_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnTryApplyDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnTryApplyDone_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnTryApplyDone_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnTryApplyDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWeaponCustomizationSubscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnTryApplyDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWeaponCustomizationSubscreen, nullptr, "OnTryApplyDone", nullptr, nullptr, sizeof(SBZWeaponCustomizationSubscreen_eventOnTryApplyDone_Parms), Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnTryApplyDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnTryApplyDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnTryApplyDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnTryApplyDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnTryApplyDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnTryApplyDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_RefreshEquippableConfig_Statics
	{
		struct SBZWeaponCustomizationSubscreen_eventRefreshEquippableConfig_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_RefreshEquippableConfig_Statics::NewProp_InEquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_RefreshEquippableConfig_Statics::NewProp_InEquippableSlot = { "InEquippableSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWeaponCustomizationSubscreen_eventRefreshEquippableConfig_Parms, InEquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_RefreshEquippableConfig_Statics::NewProp_InWeaponSlotIndex = { "InWeaponSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWeaponCustomizationSubscreen_eventRefreshEquippableConfig_Parms, InWeaponSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_RefreshEquippableConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_RefreshEquippableConfig_Statics::NewProp_InEquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_RefreshEquippableConfig_Statics::NewProp_InEquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_RefreshEquippableConfig_Statics::NewProp_InWeaponSlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_RefreshEquippableConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWeaponCustomizationSubscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_RefreshEquippableConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWeaponCustomizationSubscreen, nullptr, "RefreshEquippableConfig", nullptr, nullptr, sizeof(SBZWeaponCustomizationSubscreen_eventRefreshEquippableConfig_Parms), Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_RefreshEquippableConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_RefreshEquippableConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_RefreshEquippableConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_RefreshEquippableConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_RefreshEquippableConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_RefreshEquippableConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_SetupScreen_Statics
	{
		struct SBZWeaponCustomizationSubscreen_eventSetupScreen_Parms
		{
			const USBZCosmeticsPartSlot* NewCosmeticSlot;
			ESBZEquippableLoadoutSlot LoadoutSlot;
			int32 LoadoutIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewCosmeticSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewCosmeticSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoadoutSlot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoadoutSlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoadoutIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_SetupScreen_Statics::NewProp_NewCosmeticSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_SetupScreen_Statics::NewProp_NewCosmeticSlot = { "NewCosmeticSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWeaponCustomizationSubscreen_eventSetupScreen_Parms, NewCosmeticSlot), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_SetupScreen_Statics::NewProp_NewCosmeticSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_SetupScreen_Statics::NewProp_NewCosmeticSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_SetupScreen_Statics::NewProp_LoadoutSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_SetupScreen_Statics::NewProp_LoadoutSlot = { "LoadoutSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWeaponCustomizationSubscreen_eventSetupScreen_Parms, LoadoutSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_SetupScreen_Statics::NewProp_LoadoutIndex = { "LoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWeaponCustomizationSubscreen_eventSetupScreen_Parms, LoadoutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_SetupScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_SetupScreen_Statics::NewProp_NewCosmeticSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_SetupScreen_Statics::NewProp_LoadoutSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_SetupScreen_Statics::NewProp_LoadoutSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_SetupScreen_Statics::NewProp_LoadoutIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_SetupScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWeaponCustomizationSubscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_SetupScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWeaponCustomizationSubscreen, nullptr, "SetupScreen", nullptr, nullptr, sizeof(SBZWeaponCustomizationSubscreen_eventSetupScreen_Parms), Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_SetupScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_SetupScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_SetupScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_SetupScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_SetupScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_SetupScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_UpdatePreview_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_UpdatePreview_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWeaponCustomizationSubscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_UpdatePreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWeaponCustomizationSubscreen, nullptr, "UpdatePreview", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_UpdatePreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_UpdatePreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_UpdatePreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_UpdatePreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZWeaponCustomizationSubscreen_NoRegister()
	{
		return USBZWeaponCustomizationSubscreen::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CosmeticSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CosmeticData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CosmeticConfig;
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
	UObject* (*const Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticConfig, "ApplyCosmeticConfig" }, // 2569226319
		{ &Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticData, "ApplyCosmeticData" }, // 973225814
		{ &Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_ApplyCosmeticOnBackend, "ApplyCosmeticOnBackend" }, // 3205673014
		{ &Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticConfig, "GetCosmeticConfig" }, // 3763301243
		{ &Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticItems, "GetCosmeticItems" }, // 1918444922
		{ &Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticPart, "GetCosmeticPart" }, // 568183605
		{ &Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_GetCosmeticSlot, "GetCosmeticSlot" }, // 4271321921
		{ &Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnApplyCosmeticDone, "OnApplyCosmeticDone" }, // 3529907339
		{ &Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnCosmeticSlotUpdated, "OnCosmeticSlotUpdated" }, // 1643431509
		{ &Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnTryApply, "OnTryApply" }, // 2834487197
		{ &Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_OnTryApplyDone, "OnTryApplyDone" }, // 2429461376
		{ &Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_RefreshEquippableConfig, "RefreshEquippableConfig" }, // 2510914689
		{ &Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_SetupScreen, "SetupScreen" }, // 3036182695
		{ &Z_Construct_UFunction_USBZWeaponCustomizationSubscreen_UpdatePreview, "UpdatePreview" }, // 2978350395
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponCustomizationSubscreen.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponCustomizationSubscreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_EquippableConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponCustomizationSubscreen" },
		{ "ModuleRelativePath", "Public/SBZWeaponCustomizationSubscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_EquippableConfig = { "EquippableConfig", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponCustomizationSubscreen, EquippableConfig), Z_Construct_UScriptStruct_FSBZEquippableConfig, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_EquippableConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_EquippableConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_CosmeticSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponCustomizationSubscreen" },
		{ "ModuleRelativePath", "Public/SBZWeaponCustomizationSubscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_CosmeticSlot = { "CosmeticSlot", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponCustomizationSubscreen, CosmeticSlot), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_CosmeticSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_CosmeticSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_CosmeticData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponCustomizationSubscreen" },
		{ "ModuleRelativePath", "Public/SBZWeaponCustomizationSubscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_CosmeticData = { "CosmeticData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponCustomizationSubscreen, CosmeticData), Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_CosmeticData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_CosmeticData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_CosmeticConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponCustomizationSubscreen" },
		{ "ModuleRelativePath", "Public/SBZWeaponCustomizationSubscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_CosmeticConfig = { "CosmeticConfig", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponCustomizationSubscreen, CosmeticConfig), Z_Construct_UClass_USBZEquippablePartConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_CosmeticConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_CosmeticConfig_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_EquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_EquippableSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponCustomizationSubscreen" },
		{ "ModuleRelativePath", "Public/SBZWeaponCustomizationSubscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_EquippableSlot = { "EquippableSlot", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponCustomizationSubscreen, EquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_EquippableSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_EquippableSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_WeaponSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponCustomizationSubscreen" },
		{ "ModuleRelativePath", "Public/SBZWeaponCustomizationSubscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_WeaponSlotIndex = { "WeaponSlotIndex", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponCustomizationSubscreen, WeaponSlotIndex), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_WeaponSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_WeaponSlotIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_EquippableConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_CosmeticSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_CosmeticData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_CosmeticConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_EquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_EquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::NewProp_WeaponSlotIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponCustomizationSubscreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::ClassParams = {
		&USBZWeaponCustomizationSubscreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponCustomizationSubscreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponCustomizationSubscreen, 3980700098);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponCustomizationSubscreen>()
	{
		return USBZWeaponCustomizationSubscreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponCustomizationSubscreen(Z_Construct_UClass_USBZWeaponCustomizationSubscreen, &USBZWeaponCustomizationSubscreen::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponCustomizationSubscreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponCustomizationSubscreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

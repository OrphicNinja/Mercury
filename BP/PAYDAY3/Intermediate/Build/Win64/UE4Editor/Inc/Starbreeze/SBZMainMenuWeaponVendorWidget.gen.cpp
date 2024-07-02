// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuWeaponVendorWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuWeaponVendorWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponVendorWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPresetStoreItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponStoreItem();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuWeaponVendorWidget::execNativeOnBuyWeaponDone)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_BuyWeaponResult);
		P_GET_STRUCT(FGuid,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnBuyWeaponDone(ESBZMetaRequestResult(Z_Param_BuyWeaponResult),Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponVendorWidget::execNativeOnBuyWeaponPresetDone)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_BuyWeaponResult);
		P_GET_STRUCT(FGuid,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnBuyWeaponPresetDone(ESBZMetaRequestResult(Z_Param_BuyWeaponResult),Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponVendorWidget::execTryBuyWeapon)
	{
		P_GET_STRUCT_REF(FSBZWeaponStoreItem,Z_Param_Out_WeaponStoreItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryBuyWeapon(Z_Param_Out_WeaponStoreItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponVendorWidget::execTryBuyWeaponPreset)
	{
		P_GET_STRUCT_REF(FSBZWeaponPresetStoreItem,Z_Param_Out_WeaponPresetStoreItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryBuyWeaponPreset(Z_Param_Out_WeaponPresetStoreItem);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuWeaponVendorWidget_OnBuyWeaponDone = FName(TEXT("OnBuyWeaponDone"));
	void USBZMainMenuWeaponVendorWidget::OnBuyWeaponDone(bool bWasSuccess)
	{
		SBZMainMenuWeaponVendorWidget_eventOnBuyWeaponDone_Parms Parms;
		Parms.bWasSuccess=bWasSuccess ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponVendorWidget_OnBuyWeaponDone),&Parms);
	}
	static FName NAME_USBZMainMenuWeaponVendorWidget_OnBuyWeaponPresetDone = FName(TEXT("OnBuyWeaponPresetDone"));
	void USBZMainMenuWeaponVendorWidget::OnBuyWeaponPresetDone(bool bWasSuccess)
	{
		SBZMainMenuWeaponVendorWidget_eventOnBuyWeaponPresetDone_Parms Parms;
		Parms.bWasSuccess=bWasSuccess ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponVendorWidget_OnBuyWeaponPresetDone),&Parms);
	}
	static FName NAME_USBZMainMenuWeaponVendorWidget_OnWeaponPresetStoreItemsUpdated = FName(TEXT("OnWeaponPresetStoreItemsUpdated"));
	void USBZMainMenuWeaponVendorWidget::OnWeaponPresetStoreItemsUpdated(TMap<FGuid,FSBZWeaponPresetStoreItem> const& InWeaponPresetStoreMap)
	{
		SBZMainMenuWeaponVendorWidget_eventOnWeaponPresetStoreItemsUpdated_Parms Parms;
		Parms.InWeaponPresetStoreMap=InWeaponPresetStoreMap;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponVendorWidget_OnWeaponPresetStoreItemsUpdated),&Parms);
	}
	static FName NAME_USBZMainMenuWeaponVendorWidget_OnWeaponStoreItemsUpdated = FName(TEXT("OnWeaponStoreItemsUpdated"));
	void USBZMainMenuWeaponVendorWidget::OnWeaponStoreItemsUpdated(TMap<FGuid,FSBZWeaponStoreItem> const& InWeaponStoreMap)
	{
		SBZMainMenuWeaponVendorWidget_eventOnWeaponStoreItemsUpdated_Parms Parms;
		Parms.InWeaponStoreMap=InWeaponStoreMap;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponVendorWidget_OnWeaponStoreItemsUpdated),&Parms);
	}
	void USBZMainMenuWeaponVendorWidget::StaticRegisterNativesUSBZMainMenuWeaponVendorWidget()
	{
		UClass* Class = USBZMainMenuWeaponVendorWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NativeOnBuyWeaponDone", &USBZMainMenuWeaponVendorWidget::execNativeOnBuyWeaponDone },
			{ "NativeOnBuyWeaponPresetDone", &USBZMainMenuWeaponVendorWidget::execNativeOnBuyWeaponPresetDone },
			{ "TryBuyWeapon", &USBZMainMenuWeaponVendorWidget::execTryBuyWeapon },
			{ "TryBuyWeaponPreset", &USBZMainMenuWeaponVendorWidget::execTryBuyWeaponPreset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponDone_Statics
	{
		struct SBZMainMenuWeaponVendorWidget_eventNativeOnBuyWeaponDone_Parms
		{
			ESBZMetaRequestResult BuyWeaponResult;
			FGuid ItemId;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BuyWeaponResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BuyWeaponResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponDone_Statics::NewProp_BuyWeaponResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponDone_Statics::NewProp_BuyWeaponResult = { "BuyWeaponResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponVendorWidget_eventNativeOnBuyWeaponDone_Parms, BuyWeaponResult), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponDone_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponVendorWidget_eventNativeOnBuyWeaponDone_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponDone_Statics::NewProp_BuyWeaponResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponDone_Statics::NewProp_BuyWeaponResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponDone_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponVendorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponVendorWidget, nullptr, "NativeOnBuyWeaponDone", nullptr, nullptr, sizeof(SBZMainMenuWeaponVendorWidget_eventNativeOnBuyWeaponDone_Parms), Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponPresetDone_Statics
	{
		struct SBZMainMenuWeaponVendorWidget_eventNativeOnBuyWeaponPresetDone_Parms
		{
			ESBZMetaRequestResult BuyWeaponResult;
			FGuid ItemId;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BuyWeaponResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BuyWeaponResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponPresetDone_Statics::NewProp_BuyWeaponResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponPresetDone_Statics::NewProp_BuyWeaponResult = { "BuyWeaponResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponVendorWidget_eventNativeOnBuyWeaponPresetDone_Parms, BuyWeaponResult), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponPresetDone_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponVendorWidget_eventNativeOnBuyWeaponPresetDone_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponPresetDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponPresetDone_Statics::NewProp_BuyWeaponResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponPresetDone_Statics::NewProp_BuyWeaponResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponPresetDone_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponPresetDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponVendorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponPresetDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponVendorWidget, nullptr, "NativeOnBuyWeaponPresetDone", nullptr, nullptr, sizeof(SBZMainMenuWeaponVendorWidget_eventNativeOnBuyWeaponPresetDone_Parms), Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponPresetDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponPresetDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponPresetDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponPresetDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponPresetDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponPresetDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponDone_Statics
	{
		static void NewProp_bWasSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponDone_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponVendorWidget_eventOnBuyWeaponDone_Parms*)Obj)->bWasSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponDone_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponVendorWidget_eventOnBuyWeaponDone_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponDone_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponDone_Statics::NewProp_bWasSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponVendorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponVendorWidget, nullptr, "OnBuyWeaponDone", nullptr, nullptr, sizeof(SBZMainMenuWeaponVendorWidget_eventOnBuyWeaponDone_Parms), Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponPresetDone_Statics
	{
		static void NewProp_bWasSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponPresetDone_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponVendorWidget_eventOnBuyWeaponPresetDone_Parms*)Obj)->bWasSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponPresetDone_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponVendorWidget_eventOnBuyWeaponPresetDone_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponPresetDone_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponPresetDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponPresetDone_Statics::NewProp_bWasSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponPresetDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponVendorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponPresetDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponVendorWidget, nullptr, "OnBuyWeaponPresetDone", nullptr, nullptr, sizeof(SBZMainMenuWeaponVendorWidget_eventOnBuyWeaponPresetDone_Parms), Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponPresetDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponPresetDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponPresetDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponPresetDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponPresetDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponPresetDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponPresetStoreItemsUpdated_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InWeaponPresetStoreMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InWeaponPresetStoreMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWeaponPresetStoreMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_InWeaponPresetStoreMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponPresetStoreItemsUpdated_Statics::NewProp_InWeaponPresetStoreMap_ValueProp = { "InWeaponPresetStoreMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZWeaponPresetStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponPresetStoreItemsUpdated_Statics::NewProp_InWeaponPresetStoreMap_Key_KeyProp = { "InWeaponPresetStoreMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponPresetStoreItemsUpdated_Statics::NewProp_InWeaponPresetStoreMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponPresetStoreItemsUpdated_Statics::NewProp_InWeaponPresetStoreMap = { "InWeaponPresetStoreMap", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponVendorWidget_eventOnWeaponPresetStoreItemsUpdated_Parms, InWeaponPresetStoreMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponPresetStoreItemsUpdated_Statics::NewProp_InWeaponPresetStoreMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponPresetStoreItemsUpdated_Statics::NewProp_InWeaponPresetStoreMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponPresetStoreItemsUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponPresetStoreItemsUpdated_Statics::NewProp_InWeaponPresetStoreMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponPresetStoreItemsUpdated_Statics::NewProp_InWeaponPresetStoreMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponPresetStoreItemsUpdated_Statics::NewProp_InWeaponPresetStoreMap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponPresetStoreItemsUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponVendorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponPresetStoreItemsUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponVendorWidget, nullptr, "OnWeaponPresetStoreItemsUpdated", nullptr, nullptr, sizeof(SBZMainMenuWeaponVendorWidget_eventOnWeaponPresetStoreItemsUpdated_Parms), Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponPresetStoreItemsUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponPresetStoreItemsUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponPresetStoreItemsUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponPresetStoreItemsUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponPresetStoreItemsUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponPresetStoreItemsUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponStoreItemsUpdated_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InWeaponStoreMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InWeaponStoreMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWeaponStoreMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_InWeaponStoreMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponStoreItemsUpdated_Statics::NewProp_InWeaponStoreMap_ValueProp = { "InWeaponStoreMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZWeaponStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponStoreItemsUpdated_Statics::NewProp_InWeaponStoreMap_Key_KeyProp = { "InWeaponStoreMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponStoreItemsUpdated_Statics::NewProp_InWeaponStoreMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponStoreItemsUpdated_Statics::NewProp_InWeaponStoreMap = { "InWeaponStoreMap", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponVendorWidget_eventOnWeaponStoreItemsUpdated_Parms, InWeaponStoreMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponStoreItemsUpdated_Statics::NewProp_InWeaponStoreMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponStoreItemsUpdated_Statics::NewProp_InWeaponStoreMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponStoreItemsUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponStoreItemsUpdated_Statics::NewProp_InWeaponStoreMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponStoreItemsUpdated_Statics::NewProp_InWeaponStoreMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponStoreItemsUpdated_Statics::NewProp_InWeaponStoreMap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponStoreItemsUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponVendorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponStoreItemsUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponVendorWidget, nullptr, "OnWeaponStoreItemsUpdated", nullptr, nullptr, sizeof(SBZMainMenuWeaponVendorWidget_eventOnWeaponStoreItemsUpdated_Parms), Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponStoreItemsUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponStoreItemsUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponStoreItemsUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponStoreItemsUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponStoreItemsUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponStoreItemsUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeapon_Statics
	{
		struct SBZMainMenuWeaponVendorWidget_eventTryBuyWeapon_Parms
		{
			FSBZWeaponStoreItem WeaponStoreItem;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponStoreItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponStoreItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeapon_Statics::NewProp_WeaponStoreItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeapon_Statics::NewProp_WeaponStoreItem = { "WeaponStoreItem", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponVendorWidget_eventTryBuyWeapon_Parms, WeaponStoreItem), Z_Construct_UScriptStruct_FSBZWeaponStoreItem, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeapon_Statics::NewProp_WeaponStoreItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeapon_Statics::NewProp_WeaponStoreItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeapon_Statics::NewProp_WeaponStoreItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponVendorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponVendorWidget, nullptr, "TryBuyWeapon", nullptr, nullptr, sizeof(SBZMainMenuWeaponVendorWidget_eventTryBuyWeapon_Parms), Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeaponPreset_Statics
	{
		struct SBZMainMenuWeaponVendorWidget_eventTryBuyWeaponPreset_Parms
		{
			FSBZWeaponPresetStoreItem WeaponPresetStoreItem;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPresetStoreItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponPresetStoreItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeaponPreset_Statics::NewProp_WeaponPresetStoreItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeaponPreset_Statics::NewProp_WeaponPresetStoreItem = { "WeaponPresetStoreItem", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponVendorWidget_eventTryBuyWeaponPreset_Parms, WeaponPresetStoreItem), Z_Construct_UScriptStruct_FSBZWeaponPresetStoreItem, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeaponPreset_Statics::NewProp_WeaponPresetStoreItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeaponPreset_Statics::NewProp_WeaponPresetStoreItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeaponPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeaponPreset_Statics::NewProp_WeaponPresetStoreItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeaponPreset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponVendorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeaponPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponVendorWidget, nullptr, "TryBuyWeaponPreset", nullptr, nullptr, sizeof(SBZMainMenuWeaponVendorWidget_eventTryBuyWeaponPreset_Parms), Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeaponPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeaponPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeaponPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeaponPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeaponPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeaponPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_NoRegister()
	{
		return USBZMainMenuWeaponVendorWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquippableSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EquippableSlot;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponStoreMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponStoreMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponStoreMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_WeaponStoreMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponPresetStoreMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponPresetStoreMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPresetStoreMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_WeaponPresetStoreMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponDone, "NativeOnBuyWeaponDone" }, // 4069855215
		{ &Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_NativeOnBuyWeaponPresetDone, "NativeOnBuyWeaponPresetDone" }, // 4002160092
		{ &Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponDone, "OnBuyWeaponDone" }, // 3336407558
		{ &Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnBuyWeaponPresetDone, "OnBuyWeaponPresetDone" }, // 3314083422
		{ &Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponPresetStoreItemsUpdated, "OnWeaponPresetStoreItemsUpdated" }, // 130757816
		{ &Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_OnWeaponStoreItemsUpdated, "OnWeaponStoreItemsUpdated" }, // 1125422752
		{ &Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeapon, "TryBuyWeapon" }, // 2028381772
		{ &Z_Construct_UFunction_USBZMainMenuWeaponVendorWidget_TryBuyWeaponPreset, "TryBuyWeaponPreset" }, // 3673202537
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuWeaponVendorWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponVendorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::NewProp_EquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::NewProp_EquippableSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponVendorWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponVendorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::NewProp_EquippableSlot = { "EquippableSlot", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponVendorWidget, EquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::NewProp_EquippableSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::NewProp_EquippableSlot_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::NewProp_WeaponStoreMap_ValueProp = { "WeaponStoreMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZWeaponStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::NewProp_WeaponStoreMap_Key_KeyProp = { "WeaponStoreMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::NewProp_WeaponStoreMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponVendorWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponVendorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::NewProp_WeaponStoreMap = { "WeaponStoreMap", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponVendorWidget, WeaponStoreMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::NewProp_WeaponStoreMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::NewProp_WeaponStoreMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::NewProp_WeaponPresetStoreMap_ValueProp = { "WeaponPresetStoreMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZWeaponPresetStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::NewProp_WeaponPresetStoreMap_Key_KeyProp = { "WeaponPresetStoreMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::NewProp_WeaponPresetStoreMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponVendorWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponVendorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::NewProp_WeaponPresetStoreMap = { "WeaponPresetStoreMap", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponVendorWidget, WeaponPresetStoreMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::NewProp_WeaponPresetStoreMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::NewProp_WeaponPresetStoreMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::NewProp_EquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::NewProp_EquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::NewProp_WeaponStoreMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::NewProp_WeaponStoreMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::NewProp_WeaponStoreMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::NewProp_WeaponPresetStoreMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::NewProp_WeaponPresetStoreMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::NewProp_WeaponPresetStoreMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuWeaponVendorWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::ClassParams = {
		&USBZMainMenuWeaponVendorWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuWeaponVendorWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuWeaponVendorWidget, 2596100533);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuWeaponVendorWidget>()
	{
		return USBZMainMenuWeaponVendorWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuWeaponVendorWidget(Z_Construct_UClass_USBZMainMenuWeaponVendorWidget, &USBZMainMenuWeaponVendorWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuWeaponVendorWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuWeaponVendorWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

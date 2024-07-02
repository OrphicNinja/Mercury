// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuCosmetic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuCosmetic() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCosmetic_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCosmetic();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartConfig_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMainMenuCosmeticType();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreBaseItem();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemCategory();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuCosmetic::execApplyEquippablePreview)
	{
		P_GET_TMAP_REF(USBZCosmeticsPartSlot*,USBZModularPartDataAsset*,Z_Param_Out_InPreviewDataMap);
		P_GET_TMAP_REF(USBZCosmeticsPartSlot*,USBZModularPartConfig*,Z_Param_Out_InPreviewConfigMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyEquippablePreview(Z_Param_Out_InPreviewDataMap,Z_Param_Out_InPreviewConfigMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCosmetic::execApplyMaskPreview)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyMaskPreview();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCosmetic::execBuy)
	{
		P_GET_TMAP_REF(USBZCosmeticsPartSlot*,USBZModularPartDataAsset*,Z_Param_Out_InBuyDataMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Buy(Z_Param_Out_InBuyDataMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCosmetic::execDisplay)
	{
		P_GET_ENUM(ESBZMainMenuCosmeticType,Z_Param_InType);
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_InEquippableSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Display(ESBZMainMenuCosmeticType(Z_Param_InType),ESBZEquippableLoadoutSlot(Z_Param_InEquippableSlot),Z_Param_InIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCosmetic::execIsSelectButtonDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSelectButtonDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCosmetic::execPopulateStoreItems)
	{
		P_GET_ENUM(ESBZItemCategory,Z_Param_Category);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PopulateStoreItems(ESBZItemCategory(Z_Param_Category));
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuCosmetic_BP_OnApplyPreviewDone = FName(TEXT("BP_OnApplyPreviewDone"));
	void USBZMainMenuCosmetic::BP_OnApplyPreviewDone(bool bIsSuccess, ESBZMetaRequestResult Result)
	{
		SBZMainMenuCosmetic_eventBP_OnApplyPreviewDone_Parms Parms;
		Parms.bIsSuccess=bIsSuccess ? true : false;
		Parms.Result=Result;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuCosmetic_BP_OnApplyPreviewDone),&Parms);
	}
	static FName NAME_USBZMainMenuCosmetic_BP_OnBuyDone = FName(TEXT("BP_OnBuyDone"));
	void USBZMainMenuCosmetic::BP_OnBuyDone(bool bIsSuccess, ESBZMetaRequestResult Result)
	{
		SBZMainMenuCosmetic_eventBP_OnBuyDone_Parms Parms;
		Parms.bIsSuccess=bIsSuccess ? true : false;
		Parms.Result=Result;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuCosmetic_BP_OnBuyDone),&Parms);
	}
	static FName NAME_USBZMainMenuCosmetic_OnAddStoreItem = FName(TEXT("OnAddStoreItem"));
	void USBZMainMenuCosmetic::OnAddStoreItem(const USBZCosmeticsDataAsset* AssetData, FSBZStoreBaseItem const& StoreData)
	{
		SBZMainMenuCosmetic_eventOnAddStoreItem_Parms Parms;
		Parms.AssetData=AssetData;
		Parms.StoreData=StoreData;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuCosmetic_OnAddStoreItem),&Parms);
	}
	static FName NAME_USBZMainMenuCosmetic_RefreshOwnedItems = FName(TEXT("RefreshOwnedItems"));
	void USBZMainMenuCosmetic::RefreshOwnedItems()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuCosmetic_RefreshOwnedItems),NULL);
	}
	void USBZMainMenuCosmetic::StaticRegisterNativesUSBZMainMenuCosmetic()
	{
		UClass* Class = USBZMainMenuCosmetic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyEquippablePreview", &USBZMainMenuCosmetic::execApplyEquippablePreview },
			{ "ApplyMaskPreview", &USBZMainMenuCosmetic::execApplyMaskPreview },
			{ "Buy", &USBZMainMenuCosmetic::execBuy },
			{ "Display", &USBZMainMenuCosmetic::execDisplay },
			{ "IsSelectButtonDown", &USBZMainMenuCosmetic::execIsSelectButtonDown },
			{ "PopulateStoreItems", &USBZMainMenuCosmetic::execPopulateStoreItems },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics
	{
		struct SBZMainMenuCosmetic_eventApplyEquippablePreview_Parms
		{
			TMap<USBZCosmeticsPartSlot*,USBZModularPartDataAsset*> InPreviewDataMap;
			TMap<USBZCosmeticsPartSlot*,USBZModularPartConfig*> InPreviewConfigMap;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPreviewDataMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPreviewDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPreviewDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_InPreviewDataMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPreviewConfigMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPreviewConfigMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPreviewConfigMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_InPreviewConfigMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::NewProp_InPreviewDataMap_ValueProp = { "InPreviewDataMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZModularPartDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::NewProp_InPreviewDataMap_Key_KeyProp = { "InPreviewDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::NewProp_InPreviewDataMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::NewProp_InPreviewDataMap = { "InPreviewDataMap", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmetic_eventApplyEquippablePreview_Parms, InPreviewDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::NewProp_InPreviewDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::NewProp_InPreviewDataMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::NewProp_InPreviewConfigMap_ValueProp = { "InPreviewConfigMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZModularPartConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::NewProp_InPreviewConfigMap_Key_KeyProp = { "InPreviewConfigMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::NewProp_InPreviewConfigMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::NewProp_InPreviewConfigMap = { "InPreviewConfigMap", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmetic_eventApplyEquippablePreview_Parms, InPreviewConfigMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::NewProp_InPreviewConfigMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::NewProp_InPreviewConfigMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::NewProp_InPreviewDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::NewProp_InPreviewDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::NewProp_InPreviewDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::NewProp_InPreviewConfigMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::NewProp_InPreviewConfigMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::NewProp_InPreviewConfigMap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmetic, nullptr, "ApplyEquippablePreview", nullptr, nullptr, sizeof(SBZMainMenuCosmetic_eventApplyEquippablePreview_Parms), Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyMaskPreview_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyMaskPreview_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyMaskPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmetic, nullptr, "ApplyMaskPreview", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyMaskPreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyMaskPreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyMaskPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyMaskPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnApplyPreviewDone_Statics
	{
		static void NewProp_bIsSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSuccess;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnApplyPreviewDone_Statics::NewProp_bIsSuccess_SetBit(void* Obj)
	{
		((SBZMainMenuCosmetic_eventBP_OnApplyPreviewDone_Parms*)Obj)->bIsSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnApplyPreviewDone_Statics::NewProp_bIsSuccess = { "bIsSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuCosmetic_eventBP_OnApplyPreviewDone_Parms), &Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnApplyPreviewDone_Statics::NewProp_bIsSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnApplyPreviewDone_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnApplyPreviewDone_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmetic_eventBP_OnApplyPreviewDone_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnApplyPreviewDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnApplyPreviewDone_Statics::NewProp_bIsSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnApplyPreviewDone_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnApplyPreviewDone_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnApplyPreviewDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnApplyPreviewDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmetic, nullptr, "BP_OnApplyPreviewDone", nullptr, nullptr, sizeof(SBZMainMenuCosmetic_eventBP_OnApplyPreviewDone_Parms), Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnApplyPreviewDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnApplyPreviewDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnApplyPreviewDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnApplyPreviewDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnApplyPreviewDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnApplyPreviewDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnBuyDone_Statics
	{
		static void NewProp_bIsSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSuccess;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnBuyDone_Statics::NewProp_bIsSuccess_SetBit(void* Obj)
	{
		((SBZMainMenuCosmetic_eventBP_OnBuyDone_Parms*)Obj)->bIsSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnBuyDone_Statics::NewProp_bIsSuccess = { "bIsSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuCosmetic_eventBP_OnBuyDone_Parms), &Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnBuyDone_Statics::NewProp_bIsSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnBuyDone_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnBuyDone_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmetic_eventBP_OnBuyDone_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnBuyDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnBuyDone_Statics::NewProp_bIsSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnBuyDone_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnBuyDone_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnBuyDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnBuyDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmetic, nullptr, "BP_OnBuyDone", nullptr, nullptr, sizeof(SBZMainMenuCosmetic_eventBP_OnBuyDone_Parms), Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnBuyDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnBuyDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnBuyDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnBuyDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnBuyDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnBuyDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmetic_Buy_Statics
	{
		struct SBZMainMenuCosmetic_eventBuy_Parms
		{
			TMap<USBZCosmeticsPartSlot*,USBZModularPartDataAsset*> InBuyDataMap;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InBuyDataMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InBuyDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBuyDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_InBuyDataMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCosmetic_Buy_Statics::NewProp_InBuyDataMap_ValueProp = { "InBuyDataMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZModularPartDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCosmetic_Buy_Statics::NewProp_InBuyDataMap_Key_KeyProp = { "InBuyDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmetic_Buy_Statics::NewProp_InBuyDataMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USBZMainMenuCosmetic_Buy_Statics::NewProp_InBuyDataMap = { "InBuyDataMap", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmetic_eventBuy_Parms, InBuyDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmetic_Buy_Statics::NewProp_InBuyDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmetic_Buy_Statics::NewProp_InBuyDataMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCosmetic_Buy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmetic_Buy_Statics::NewProp_InBuyDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmetic_Buy_Statics::NewProp_InBuyDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmetic_Buy_Statics::NewProp_InBuyDataMap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmetic_Buy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmetic_Buy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmetic, nullptr, "Buy", nullptr, nullptr, sizeof(SBZMainMenuCosmetic_eventBuy_Parms), Z_Construct_UFunction_USBZMainMenuCosmetic_Buy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmetic_Buy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmetic_Buy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmetic_Buy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmetic_Buy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmetic_Buy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmetic_Display_Statics
	{
		struct SBZMainMenuCosmetic_eventDisplay_Parms
		{
			ESBZMainMenuCosmeticType InType;
			ESBZEquippableLoadoutSlot InEquippableSlot;
			int32 InIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InEquippableSlot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InEquippableSlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuCosmetic_Display_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuCosmetic_Display_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmetic_eventDisplay_Parms, InType), Z_Construct_UEnum_Starbreeze_ESBZMainMenuCosmeticType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuCosmetic_Display_Statics::NewProp_InEquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuCosmetic_Display_Statics::NewProp_InEquippableSlot = { "InEquippableSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmetic_eventDisplay_Parms, InEquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuCosmetic_Display_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmetic_eventDisplay_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCosmetic_Display_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmetic_Display_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmetic_Display_Statics::NewProp_InType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmetic_Display_Statics::NewProp_InEquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmetic_Display_Statics::NewProp_InEquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmetic_Display_Statics::NewProp_InIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmetic_Display_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmetic_Display_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmetic, nullptr, "Display", nullptr, nullptr, sizeof(SBZMainMenuCosmetic_eventDisplay_Parms), Z_Construct_UFunction_USBZMainMenuCosmetic_Display_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmetic_Display_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmetic_Display_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmetic_Display_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmetic_Display()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmetic_Display_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmetic_IsSelectButtonDown_Statics
	{
		struct SBZMainMenuCosmetic_eventIsSelectButtonDown_Parms
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
	void Z_Construct_UFunction_USBZMainMenuCosmetic_IsSelectButtonDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuCosmetic_eventIsSelectButtonDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuCosmetic_IsSelectButtonDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuCosmetic_eventIsSelectButtonDown_Parms), &Z_Construct_UFunction_USBZMainMenuCosmetic_IsSelectButtonDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCosmetic_IsSelectButtonDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmetic_IsSelectButtonDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmetic_IsSelectButtonDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmetic_IsSelectButtonDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmetic, nullptr, "IsSelectButtonDown", nullptr, nullptr, sizeof(SBZMainMenuCosmetic_eventIsSelectButtonDown_Parms), Z_Construct_UFunction_USBZMainMenuCosmetic_IsSelectButtonDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmetic_IsSelectButtonDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmetic_IsSelectButtonDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmetic_IsSelectButtonDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmetic_IsSelectButtonDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmetic_IsSelectButtonDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmetic_OnAddStoreItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoreData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoreData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmetic_OnAddStoreItem_Statics::NewProp_AssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCosmetic_OnAddStoreItem_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmetic_eventOnAddStoreItem_Parms, AssetData), Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmetic_OnAddStoreItem_Statics::NewProp_AssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmetic_OnAddStoreItem_Statics::NewProp_AssetData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmetic_OnAddStoreItem_Statics::NewProp_StoreData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuCosmetic_OnAddStoreItem_Statics::NewProp_StoreData = { "StoreData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmetic_eventOnAddStoreItem_Parms, StoreData), Z_Construct_UScriptStruct_FSBZStoreBaseItem, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmetic_OnAddStoreItem_Statics::NewProp_StoreData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmetic_OnAddStoreItem_Statics::NewProp_StoreData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCosmetic_OnAddStoreItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmetic_OnAddStoreItem_Statics::NewProp_AssetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmetic_OnAddStoreItem_Statics::NewProp_StoreData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmetic_OnAddStoreItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmetic_OnAddStoreItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmetic, nullptr, "OnAddStoreItem", nullptr, nullptr, sizeof(SBZMainMenuCosmetic_eventOnAddStoreItem_Parms), Z_Construct_UFunction_USBZMainMenuCosmetic_OnAddStoreItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmetic_OnAddStoreItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmetic_OnAddStoreItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmetic_OnAddStoreItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmetic_OnAddStoreItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmetic_OnAddStoreItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmetic_PopulateStoreItems_Statics
	{
		struct SBZMainMenuCosmetic_eventPopulateStoreItems_Parms
		{
			ESBZItemCategory Category;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuCosmetic_PopulateStoreItems_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuCosmetic_PopulateStoreItems_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmetic_eventPopulateStoreItems_Parms, Category), Z_Construct_UEnum_Starbreeze_ESBZItemCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCosmetic_PopulateStoreItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmetic_PopulateStoreItems_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmetic_PopulateStoreItems_Statics::NewProp_Category,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmetic_PopulateStoreItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmetic_PopulateStoreItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmetic, nullptr, "PopulateStoreItems", nullptr, nullptr, sizeof(SBZMainMenuCosmetic_eventPopulateStoreItems_Parms), Z_Construct_UFunction_USBZMainMenuCosmetic_PopulateStoreItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmetic_PopulateStoreItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmetic_PopulateStoreItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmetic_PopulateStoreItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmetic_PopulateStoreItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmetic_PopulateStoreItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmetic_RefreshOwnedItems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmetic_RefreshOwnedItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmetic_RefreshOwnedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmetic, nullptr, "RefreshOwnedItems", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmetic_RefreshOwnedItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmetic_RefreshOwnedItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmetic_RefreshOwnedItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmetic_RefreshOwnedItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuCosmetic_NoRegister()
	{
		return USBZMainMenuCosmetic::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuCosmetic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquippableSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EquippableSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddEquippableMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AddEquippableMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddEquippableMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AddEquippableMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastBuyDataMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastBuyDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastBuyDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LastBuyDataMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastFailedBuyDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LastFailedBuyDisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuCosmetic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuCosmetic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyEquippablePreview, "ApplyEquippablePreview" }, // 1503622067
		{ &Z_Construct_UFunction_USBZMainMenuCosmetic_ApplyMaskPreview, "ApplyMaskPreview" }, // 261095386
		{ &Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnApplyPreviewDone, "BP_OnApplyPreviewDone" }, // 4146896861
		{ &Z_Construct_UFunction_USBZMainMenuCosmetic_BP_OnBuyDone, "BP_OnBuyDone" }, // 330143254
		{ &Z_Construct_UFunction_USBZMainMenuCosmetic_Buy, "Buy" }, // 1708127676
		{ &Z_Construct_UFunction_USBZMainMenuCosmetic_Display, "Display" }, // 2237581517
		{ &Z_Construct_UFunction_USBZMainMenuCosmetic_IsSelectButtonDown, "IsSelectButtonDown" }, // 1032173270
		{ &Z_Construct_UFunction_USBZMainMenuCosmetic_OnAddStoreItem, "OnAddStoreItem" }, // 800136706
		{ &Z_Construct_UFunction_USBZMainMenuCosmetic_PopulateStoreItems, "PopulateStoreItems" }, // 389431910
		{ &Z_Construct_UFunction_USBZMainMenuCosmetic_RefreshOwnedItems, "RefreshOwnedItems" }, // 1931033223
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCosmetic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuCosmetic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCosmetic" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCosmetic, Type), Z_Construct_UEnum_Starbreeze_ESBZMainMenuCosmeticType, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_EquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_EquippableSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCosmetic" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_EquippableSlot = { "EquippableSlot", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCosmetic, EquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_EquippableSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_EquippableSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_Index_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCosmetic" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCosmetic, Index), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_AddEquippableMap_ValueProp = { "AddEquippableMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_AddEquippableMap_Key_KeyProp = { "AddEquippableMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_AddEquippableMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCosmetic" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_AddEquippableMap = { "AddEquippableMap", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCosmetic, AddEquippableMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_AddEquippableMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_AddEquippableMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_LastBuyDataMap_ValueProp = { "LastBuyDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZModularPartDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_LastBuyDataMap_Key_KeyProp = { "LastBuyDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_LastBuyDataMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCosmetic" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_LastBuyDataMap = { "LastBuyDataMap", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCosmetic, LastBuyDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_LastBuyDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_LastBuyDataMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_LastFailedBuyDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCosmetic" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_LastFailedBuyDisplayName = { "LastFailedBuyDisplayName", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCosmetic, LastFailedBuyDisplayName), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_LastFailedBuyDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_LastFailedBuyDisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_EquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_EquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_AddEquippableMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_AddEquippableMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_AddEquippableMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_LastBuyDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_LastBuyDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_LastBuyDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCosmetic_Statics::NewProp_LastFailedBuyDisplayName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuCosmetic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuCosmetic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuCosmetic_Statics::ClassParams = {
		&USBZMainMenuCosmetic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuCosmetic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCosmetic_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCosmetic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCosmetic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuCosmetic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuCosmetic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuCosmetic, 1974352388);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuCosmetic>()
	{
		return USBZMainMenuCosmetic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuCosmetic(Z_Construct_UClass_USBZMainMenuCosmetic, &USBZMainMenuCosmetic::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuCosmetic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuCosmetic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

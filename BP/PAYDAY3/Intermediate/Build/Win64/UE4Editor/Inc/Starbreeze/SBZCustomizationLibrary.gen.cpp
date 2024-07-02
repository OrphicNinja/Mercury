// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCustomizationLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCustomizationLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCustomizationLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCustomizationLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCustomizationManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMask_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCustomizableSuitMeshComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskConfig();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitConfig();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitPartConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartDataAsset_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitInventorySlot();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZCustomizationLibrary::execApplyAllCosmeticPartsFromPreviewOnMask)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZCustomizationLibrary::ApplyAllCosmeticPartsFromPreviewOnMask(Z_Param_SlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCustomizationLibrary::execApplyAllCosmeticPartsFromPreviewOnSuit)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZCustomizationLibrary::ApplyAllCosmeticPartsFromPreviewOnSuit(Z_Param_SlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCustomizationLibrary::execApplyCosmeticPartOnMask)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_GET_OBJECT(USBZCosmeticsPartSlot,Z_Param_CosmeticsPartSlot);
		P_GET_STRUCT_REF(FSBZMaskPartConfigGroup,Z_Param_Out_MaskPartConfigGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZCustomizationLibrary::ApplyCosmeticPartOnMask(Z_Param_SlotIndex,Z_Param_CosmeticsPartSlot,Z_Param_Out_MaskPartConfigGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCustomizationLibrary::execGetCustomizationManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASBZCustomizationManager**)Z_Param__Result=USBZCustomizationLibrary::GetCustomizationManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCustomizationLibrary::execGetGlobalMaskPreviewActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASBZMask**)Z_Param__Result=USBZCustomizationLibrary::GetGlobalMaskPreviewActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCustomizationLibrary::execGetMainMenuMannequinCustomizableSuitComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZCustomizableSuitMeshComponent**)Z_Param__Result=USBZCustomizationLibrary::GetMainMenuMannequinCustomizableSuitComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCustomizationLibrary::execGetPreviewMaskConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZMaskConfig*)Z_Param__Result=USBZCustomizationLibrary::GetPreviewMaskConfig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCustomizationLibrary::execGetPreviewSuitConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZSuitConfig*)Z_Param__Result=USBZCustomizationLibrary::GetPreviewSuitConfig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCustomizationLibrary::execGetPreviewSuitCosmeticDataAsset)
	{
		P_GET_OBJECT(USBZCosmeticsPartSlot,Z_Param_Slot);
		P_GET_OBJECT(USBZSuitPartConfig,Z_Param_Config);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const USBZModularPartDataAsset**)Z_Param__Result=USBZCustomizationLibrary::GetPreviewSuitCosmeticDataAsset(Z_Param_Slot,Z_Param_Config);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCustomizationLibrary::execGetSuitCosmeticDataAssetFromInventorySlot)
	{
		P_GET_STRUCT_REF(FSBZSuitInventorySlot,Z_Param_Out_InventorySlot);
		P_GET_OBJECT(USBZCosmeticsPartSlot,Z_Param_Slot);
		P_GET_OBJECT(USBZSuitPartConfig,Z_Param_Config);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const USBZModularPartDataAsset**)Z_Param__Result=USBZCustomizationLibrary::GetSuitCosmeticDataAssetFromInventorySlot(Z_Param_Out_InventorySlot,Z_Param_Slot,Z_Param_Config);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCustomizationLibrary::execMaskPreviewAssetInSlot)
	{
		P_GET_OBJECT(USBZCosmeticsPartSlot,Z_Param_Slot);
		P_GET_STRUCT_REF(FSBZMaskPartConfigGroup,Z_Param_Out_MaskPartConfigGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZCustomizationLibrary::MaskPreviewAssetInSlot(Z_Param_Slot,Z_Param_Out_MaskPartConfigGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCustomizationLibrary::execPreviewEquippedMask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZCustomizationLibrary::PreviewEquippedMask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCustomizationLibrary::execPreviewSuitAssetInSlot)
	{
		P_GET_OBJECT(USBZCosmeticsPartSlot,Z_Param_Slot);
		P_GET_STRUCT_REF(FSBZSuitPartConfigGroup,Z_Param_Out_SuitPartConfigGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZCustomizationLibrary::PreviewSuitAssetInSlot(Z_Param_Slot,Z_Param_Out_SuitPartConfigGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCustomizationLibrary::execRemoveMaskPreviewAssetFromSlot)
	{
		P_GET_OBJECT(USBZCosmeticsPartSlot,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZCustomizationLibrary::RemoveMaskPreviewAssetFromSlot(Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCustomizationLibrary::execRemoveSuitPreviewAssetFromSlot)
	{
		P_GET_OBJECT(USBZSuitPartConfig,Z_Param_InSuitPartConfig);
		P_GET_OBJECT(USBZCosmeticsPartSlot,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZCustomizationLibrary::RemoveSuitPreviewAssetFromSlot(Z_Param_InSuitPartConfig,Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCustomizationLibrary::execSetDefaultMaskOnPreviewMaskConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZCustomizationLibrary::SetDefaultMaskOnPreviewMaskConfig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCustomizationLibrary::execSetDefaultSuitOnPreviewSuitConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZCustomizationLibrary::SetDefaultSuitOnPreviewSuitConfig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCustomizationLibrary::execSetPartInPreview)
	{
		P_GET_OBJECT(USBZSuitPartConfig,Z_Param_InSuitPartConfig);
		P_GET_OBJECT(USBZCosmeticsPartSlot,Z_Param_InCosmeticPartSlot);
		P_GET_OBJECT(USBZCosmeticsDataAsset,Z_Param_InCosmeticsDataAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZCustomizationLibrary::SetPartInPreview(Z_Param_InSuitPartConfig,Z_Param_InCosmeticPartSlot,Z_Param_InCosmeticsDataAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCustomizationLibrary::execSetPreviewMaskConfig)
	{
		P_GET_STRUCT_REF(FSBZMaskConfig,Z_Param_Out_MaskConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZCustomizationLibrary::SetPreviewMaskConfig(Z_Param_Out_MaskConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCustomizationLibrary::execSetPreviewSuitConfig)
	{
		P_GET_STRUCT_REF(FSBZSuitConfig,Z_Param_Out_InSuitConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZCustomizationLibrary::SetPreviewSuitConfig(Z_Param_Out_InSuitConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCustomizationLibrary::execUseDefaultMask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZCustomizationLibrary::UseDefaultMask();
		P_NATIVE_END;
	}
	void USBZCustomizationLibrary::StaticRegisterNativesUSBZCustomizationLibrary()
	{
		UClass* Class = USBZCustomizationLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyAllCosmeticPartsFromPreviewOnMask", &USBZCustomizationLibrary::execApplyAllCosmeticPartsFromPreviewOnMask },
			{ "ApplyAllCosmeticPartsFromPreviewOnSuit", &USBZCustomizationLibrary::execApplyAllCosmeticPartsFromPreviewOnSuit },
			{ "ApplyCosmeticPartOnMask", &USBZCustomizationLibrary::execApplyCosmeticPartOnMask },
			{ "GetCustomizationManager", &USBZCustomizationLibrary::execGetCustomizationManager },
			{ "GetGlobalMaskPreviewActor", &USBZCustomizationLibrary::execGetGlobalMaskPreviewActor },
			{ "GetMainMenuMannequinCustomizableSuitComponent", &USBZCustomizationLibrary::execGetMainMenuMannequinCustomizableSuitComponent },
			{ "GetPreviewMaskConfig", &USBZCustomizationLibrary::execGetPreviewMaskConfig },
			{ "GetPreviewSuitConfig", &USBZCustomizationLibrary::execGetPreviewSuitConfig },
			{ "GetPreviewSuitCosmeticDataAsset", &USBZCustomizationLibrary::execGetPreviewSuitCosmeticDataAsset },
			{ "GetSuitCosmeticDataAssetFromInventorySlot", &USBZCustomizationLibrary::execGetSuitCosmeticDataAssetFromInventorySlot },
			{ "MaskPreviewAssetInSlot", &USBZCustomizationLibrary::execMaskPreviewAssetInSlot },
			{ "PreviewEquippedMask", &USBZCustomizationLibrary::execPreviewEquippedMask },
			{ "PreviewSuitAssetInSlot", &USBZCustomizationLibrary::execPreviewSuitAssetInSlot },
			{ "RemoveMaskPreviewAssetFromSlot", &USBZCustomizationLibrary::execRemoveMaskPreviewAssetFromSlot },
			{ "RemoveSuitPreviewAssetFromSlot", &USBZCustomizationLibrary::execRemoveSuitPreviewAssetFromSlot },
			{ "SetDefaultMaskOnPreviewMaskConfig", &USBZCustomizationLibrary::execSetDefaultMaskOnPreviewMaskConfig },
			{ "SetDefaultSuitOnPreviewSuitConfig", &USBZCustomizationLibrary::execSetDefaultSuitOnPreviewSuitConfig },
			{ "SetPartInPreview", &USBZCustomizationLibrary::execSetPartInPreview },
			{ "SetPreviewMaskConfig", &USBZCustomizationLibrary::execSetPreviewMaskConfig },
			{ "SetPreviewSuitConfig", &USBZCustomizationLibrary::execSetPreviewSuitConfig },
			{ "UseDefaultMask", &USBZCustomizationLibrary::execUseDefaultMask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnMask_Statics
	{
		struct SBZCustomizationLibrary_eventApplyAllCosmeticPartsFromPreviewOnMask_Parms
		{
			int32 SlotIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnMask_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnMask_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventApplyAllCosmeticPartsFromPreviewOnMask_Parms, SlotIndex), METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnMask_Statics::NewProp_SlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnMask_Statics::NewProp_SlotIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnMask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnMask_Statics::NewProp_SlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnMask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCustomizationLibrary, nullptr, "ApplyAllCosmeticPartsFromPreviewOnMask", nullptr, nullptr, sizeof(SBZCustomizationLibrary_eventApplyAllCosmeticPartsFromPreviewOnMask_Parms), Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnMask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnSuit_Statics
	{
		struct SBZCustomizationLibrary_eventApplyAllCosmeticPartsFromPreviewOnSuit_Parms
		{
			int32 SlotIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnSuit_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnSuit_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventApplyAllCosmeticPartsFromPreviewOnSuit_Parms, SlotIndex), METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnSuit_Statics::NewProp_SlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnSuit_Statics::NewProp_SlotIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnSuit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnSuit_Statics::NewProp_SlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnSuit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnSuit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCustomizationLibrary, nullptr, "ApplyAllCosmeticPartsFromPreviewOnSuit", nullptr, nullptr, sizeof(SBZCustomizationLibrary_eventApplyAllCosmeticPartsFromPreviewOnSuit_Parms), Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnSuit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnSuit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnSuit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnSuit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnSuit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnSuit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask_Statics
	{
		struct SBZCustomizationLibrary_eventApplyCosmeticPartOnMask_Parms
		{
			int32 SlotIndex;
			const USBZCosmeticsPartSlot* CosmeticsPartSlot;
			FSBZMaskPartConfigGroup MaskPartConfigGroup;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticsPartSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CosmeticsPartSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskPartConfigGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskPartConfigGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventApplyCosmeticPartOnMask_Parms, SlotIndex), METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask_Statics::NewProp_SlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask_Statics::NewProp_SlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask_Statics::NewProp_CosmeticsPartSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask_Statics::NewProp_CosmeticsPartSlot = { "CosmeticsPartSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventApplyCosmeticPartOnMask_Parms, CosmeticsPartSlot), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask_Statics::NewProp_CosmeticsPartSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask_Statics::NewProp_CosmeticsPartSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask_Statics::NewProp_MaskPartConfigGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask_Statics::NewProp_MaskPartConfigGroup = { "MaskPartConfigGroup", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventApplyCosmeticPartOnMask_Parms, MaskPartConfigGroup), Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask_Statics::NewProp_MaskPartConfigGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask_Statics::NewProp_MaskPartConfigGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask_Statics::NewProp_SlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask_Statics::NewProp_CosmeticsPartSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask_Statics::NewProp_MaskPartConfigGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCustomizationLibrary, nullptr, "ApplyCosmeticPartOnMask", nullptr, nullptr, sizeof(SBZCustomizationLibrary_eventApplyCosmeticPartOnMask_Parms), Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCustomizationLibrary_GetCustomizationManager_Statics
	{
		struct SBZCustomizationLibrary_eventGetCustomizationManager_Parms
		{
			ASBZCustomizationManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_GetCustomizationManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventGetCustomizationManager_Parms, ReturnValue), Z_Construct_UClass_ASBZCustomizationManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCustomizationLibrary_GetCustomizationManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_GetCustomizationManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_GetCustomizationManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCustomizationLibrary_GetCustomizationManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCustomizationLibrary, nullptr, "GetCustomizationManager", nullptr, nullptr, sizeof(SBZCustomizationLibrary_eventGetCustomizationManager_Parms), Z_Construct_UFunction_USBZCustomizationLibrary_GetCustomizationManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_GetCustomizationManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_GetCustomizationManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_GetCustomizationManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCustomizationLibrary_GetCustomizationManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCustomizationLibrary_GetCustomizationManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCustomizationLibrary_GetGlobalMaskPreviewActor_Statics
	{
		struct SBZCustomizationLibrary_eventGetGlobalMaskPreviewActor_Parms
		{
			ASBZMask* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_GetGlobalMaskPreviewActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventGetGlobalMaskPreviewActor_Parms, ReturnValue), Z_Construct_UClass_ASBZMask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCustomizationLibrary_GetGlobalMaskPreviewActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_GetGlobalMaskPreviewActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_GetGlobalMaskPreviewActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCustomizationLibrary_GetGlobalMaskPreviewActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCustomizationLibrary, nullptr, "GetGlobalMaskPreviewActor", nullptr, nullptr, sizeof(SBZCustomizationLibrary_eventGetGlobalMaskPreviewActor_Parms), Z_Construct_UFunction_USBZCustomizationLibrary_GetGlobalMaskPreviewActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_GetGlobalMaskPreviewActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_GetGlobalMaskPreviewActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_GetGlobalMaskPreviewActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCustomizationLibrary_GetGlobalMaskPreviewActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCustomizationLibrary_GetGlobalMaskPreviewActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCustomizationLibrary_GetMainMenuMannequinCustomizableSuitComponent_Statics
	{
		struct SBZCustomizationLibrary_eventGetMainMenuMannequinCustomizableSuitComponent_Parms
		{
			USBZCustomizableSuitMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_GetMainMenuMannequinCustomizableSuitComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_GetMainMenuMannequinCustomizableSuitComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventGetMainMenuMannequinCustomizableSuitComponent_Parms, ReturnValue), Z_Construct_UClass_USBZCustomizableSuitMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_GetMainMenuMannequinCustomizableSuitComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_GetMainMenuMannequinCustomizableSuitComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCustomizationLibrary_GetMainMenuMannequinCustomizableSuitComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_GetMainMenuMannequinCustomizableSuitComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_GetMainMenuMannequinCustomizableSuitComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCustomizationLibrary_GetMainMenuMannequinCustomizableSuitComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCustomizationLibrary, nullptr, "GetMainMenuMannequinCustomizableSuitComponent", nullptr, nullptr, sizeof(SBZCustomizationLibrary_eventGetMainMenuMannequinCustomizableSuitComponent_Parms), Z_Construct_UFunction_USBZCustomizationLibrary_GetMainMenuMannequinCustomizableSuitComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_GetMainMenuMannequinCustomizableSuitComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_GetMainMenuMannequinCustomizableSuitComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_GetMainMenuMannequinCustomizableSuitComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCustomizationLibrary_GetMainMenuMannequinCustomizableSuitComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCustomizationLibrary_GetMainMenuMannequinCustomizableSuitComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewMaskConfig_Statics
	{
		struct SBZCustomizationLibrary_eventGetPreviewMaskConfig_Parms
		{
			FSBZMaskConfig ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewMaskConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventGetPreviewMaskConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZMaskConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewMaskConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewMaskConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewMaskConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewMaskConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCustomizationLibrary, nullptr, "GetPreviewMaskConfig", nullptr, nullptr, sizeof(SBZCustomizationLibrary_eventGetPreviewMaskConfig_Parms), Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewMaskConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewMaskConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewMaskConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewMaskConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewMaskConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewMaskConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitConfig_Statics
	{
		struct SBZCustomizationLibrary_eventGetPreviewSuitConfig_Parms
		{
			FSBZSuitConfig ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventGetPreviewSuitConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZSuitConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCustomizationLibrary, nullptr, "GetPreviewSuitConfig", nullptr, nullptr, sizeof(SBZCustomizationLibrary_eventGetPreviewSuitConfig_Parms), Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitCosmeticDataAsset_Statics
	{
		struct SBZCustomizationLibrary_eventGetPreviewSuitCosmeticDataAsset_Parms
		{
			const USBZCosmeticsPartSlot* Slot;
			const USBZSuitPartConfig* Config;
			const USBZModularPartDataAsset* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Config;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitCosmeticDataAsset_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitCosmeticDataAsset_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventGetPreviewSuitCosmeticDataAsset_Parms, Slot), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitCosmeticDataAsset_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitCosmeticDataAsset_Statics::NewProp_Slot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitCosmeticDataAsset_Statics::NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitCosmeticDataAsset_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventGetPreviewSuitCosmeticDataAsset_Parms, Config), Z_Construct_UClass_USBZSuitPartConfig_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitCosmeticDataAsset_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitCosmeticDataAsset_Statics::NewProp_Config_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitCosmeticDataAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventGetPreviewSuitCosmeticDataAsset_Parms, ReturnValue), Z_Construct_UClass_USBZModularPartDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitCosmeticDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitCosmeticDataAsset_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitCosmeticDataAsset_Statics::NewProp_Config,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitCosmeticDataAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitCosmeticDataAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitCosmeticDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCustomizationLibrary, nullptr, "GetPreviewSuitCosmeticDataAsset", nullptr, nullptr, sizeof(SBZCustomizationLibrary_eventGetPreviewSuitCosmeticDataAsset_Parms), Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitCosmeticDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitCosmeticDataAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitCosmeticDataAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitCosmeticDataAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitCosmeticDataAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitCosmeticDataAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics
	{
		struct SBZCustomizationLibrary_eventGetSuitCosmeticDataAssetFromInventorySlot_Parms
		{
			FSBZSuitInventorySlot InventorySlot;
			const USBZCosmeticsPartSlot* Slot;
			const USBZSuitPartConfig* Config;
			const USBZModularPartDataAsset* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventorySlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InventorySlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Config;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics::NewProp_InventorySlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics::NewProp_InventorySlot = { "InventorySlot", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventGetSuitCosmeticDataAssetFromInventorySlot_Parms, InventorySlot), Z_Construct_UScriptStruct_FSBZSuitInventorySlot, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics::NewProp_InventorySlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics::NewProp_InventorySlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventGetSuitCosmeticDataAssetFromInventorySlot_Parms, Slot), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics::NewProp_Slot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics::NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventGetSuitCosmeticDataAssetFromInventorySlot_Parms, Config), Z_Construct_UClass_USBZSuitPartConfig_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics::NewProp_Config_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventGetSuitCosmeticDataAssetFromInventorySlot_Parms, ReturnValue), Z_Construct_UClass_USBZModularPartDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics::NewProp_InventorySlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics::NewProp_Config,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCustomizationLibrary, nullptr, "GetSuitCosmeticDataAssetFromInventorySlot", nullptr, nullptr, sizeof(SBZCustomizationLibrary_eventGetSuitCosmeticDataAssetFromInventorySlot_Parms), Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCustomizationLibrary_MaskPreviewAssetInSlot_Statics
	{
		struct SBZCustomizationLibrary_eventMaskPreviewAssetInSlot_Parms
		{
			const USBZCosmeticsPartSlot* Slot;
			FSBZMaskPartConfigGroup MaskPartConfigGroup;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskPartConfigGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskPartConfigGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_MaskPreviewAssetInSlot_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_MaskPreviewAssetInSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventMaskPreviewAssetInSlot_Parms, Slot), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_MaskPreviewAssetInSlot_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_MaskPreviewAssetInSlot_Statics::NewProp_Slot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_MaskPreviewAssetInSlot_Statics::NewProp_MaskPartConfigGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_MaskPreviewAssetInSlot_Statics::NewProp_MaskPartConfigGroup = { "MaskPartConfigGroup", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventMaskPreviewAssetInSlot_Parms, MaskPartConfigGroup), Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_MaskPreviewAssetInSlot_Statics::NewProp_MaskPartConfigGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_MaskPreviewAssetInSlot_Statics::NewProp_MaskPartConfigGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCustomizationLibrary_MaskPreviewAssetInSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_MaskPreviewAssetInSlot_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_MaskPreviewAssetInSlot_Statics::NewProp_MaskPartConfigGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_MaskPreviewAssetInSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCustomizationLibrary_MaskPreviewAssetInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCustomizationLibrary, nullptr, "MaskPreviewAssetInSlot", nullptr, nullptr, sizeof(SBZCustomizationLibrary_eventMaskPreviewAssetInSlot_Parms), Z_Construct_UFunction_USBZCustomizationLibrary_MaskPreviewAssetInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_MaskPreviewAssetInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_MaskPreviewAssetInSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_MaskPreviewAssetInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCustomizationLibrary_MaskPreviewAssetInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCustomizationLibrary_MaskPreviewAssetInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCustomizationLibrary_PreviewEquippedMask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_PreviewEquippedMask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCustomizationLibrary_PreviewEquippedMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCustomizationLibrary, nullptr, "PreviewEquippedMask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_PreviewEquippedMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_PreviewEquippedMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCustomizationLibrary_PreviewEquippedMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCustomizationLibrary_PreviewEquippedMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCustomizationLibrary_PreviewSuitAssetInSlot_Statics
	{
		struct SBZCustomizationLibrary_eventPreviewSuitAssetInSlot_Parms
		{
			const USBZCosmeticsPartSlot* Slot;
			FSBZSuitPartConfigGroup SuitPartConfigGroup;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitPartConfigGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuitPartConfigGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_PreviewSuitAssetInSlot_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_PreviewSuitAssetInSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventPreviewSuitAssetInSlot_Parms, Slot), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_PreviewSuitAssetInSlot_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_PreviewSuitAssetInSlot_Statics::NewProp_Slot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_PreviewSuitAssetInSlot_Statics::NewProp_SuitPartConfigGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_PreviewSuitAssetInSlot_Statics::NewProp_SuitPartConfigGroup = { "SuitPartConfigGroup", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventPreviewSuitAssetInSlot_Parms, SuitPartConfigGroup), Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_PreviewSuitAssetInSlot_Statics::NewProp_SuitPartConfigGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_PreviewSuitAssetInSlot_Statics::NewProp_SuitPartConfigGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCustomizationLibrary_PreviewSuitAssetInSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_PreviewSuitAssetInSlot_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_PreviewSuitAssetInSlot_Statics::NewProp_SuitPartConfigGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_PreviewSuitAssetInSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCustomizationLibrary_PreviewSuitAssetInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCustomizationLibrary, nullptr, "PreviewSuitAssetInSlot", nullptr, nullptr, sizeof(SBZCustomizationLibrary_eventPreviewSuitAssetInSlot_Parms), Z_Construct_UFunction_USBZCustomizationLibrary_PreviewSuitAssetInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_PreviewSuitAssetInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_PreviewSuitAssetInSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_PreviewSuitAssetInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCustomizationLibrary_PreviewSuitAssetInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCustomizationLibrary_PreviewSuitAssetInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCustomizationLibrary_RemoveMaskPreviewAssetFromSlot_Statics
	{
		struct SBZCustomizationLibrary_eventRemoveMaskPreviewAssetFromSlot_Parms
		{
			const USBZCosmeticsPartSlot* Slot;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_RemoveMaskPreviewAssetFromSlot_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_RemoveMaskPreviewAssetFromSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventRemoveMaskPreviewAssetFromSlot_Parms, Slot), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_RemoveMaskPreviewAssetFromSlot_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_RemoveMaskPreviewAssetFromSlot_Statics::NewProp_Slot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCustomizationLibrary_RemoveMaskPreviewAssetFromSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_RemoveMaskPreviewAssetFromSlot_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_RemoveMaskPreviewAssetFromSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCustomizationLibrary_RemoveMaskPreviewAssetFromSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCustomizationLibrary, nullptr, "RemoveMaskPreviewAssetFromSlot", nullptr, nullptr, sizeof(SBZCustomizationLibrary_eventRemoveMaskPreviewAssetFromSlot_Parms), Z_Construct_UFunction_USBZCustomizationLibrary_RemoveMaskPreviewAssetFromSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_RemoveMaskPreviewAssetFromSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_RemoveMaskPreviewAssetFromSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_RemoveMaskPreviewAssetFromSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCustomizationLibrary_RemoveMaskPreviewAssetFromSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCustomizationLibrary_RemoveMaskPreviewAssetFromSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCustomizationLibrary_RemoveSuitPreviewAssetFromSlot_Statics
	{
		struct SBZCustomizationLibrary_eventRemoveSuitPreviewAssetFromSlot_Parms
		{
			const USBZSuitPartConfig* InSuitPartConfig;
			const USBZCosmeticsPartSlot* Slot;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSuitPartConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSuitPartConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_RemoveSuitPreviewAssetFromSlot_Statics::NewProp_InSuitPartConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_RemoveSuitPreviewAssetFromSlot_Statics::NewProp_InSuitPartConfig = { "InSuitPartConfig", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventRemoveSuitPreviewAssetFromSlot_Parms, InSuitPartConfig), Z_Construct_UClass_USBZSuitPartConfig_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_RemoveSuitPreviewAssetFromSlot_Statics::NewProp_InSuitPartConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_RemoveSuitPreviewAssetFromSlot_Statics::NewProp_InSuitPartConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_RemoveSuitPreviewAssetFromSlot_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_RemoveSuitPreviewAssetFromSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventRemoveSuitPreviewAssetFromSlot_Parms, Slot), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_RemoveSuitPreviewAssetFromSlot_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_RemoveSuitPreviewAssetFromSlot_Statics::NewProp_Slot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCustomizationLibrary_RemoveSuitPreviewAssetFromSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_RemoveSuitPreviewAssetFromSlot_Statics::NewProp_InSuitPartConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_RemoveSuitPreviewAssetFromSlot_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_RemoveSuitPreviewAssetFromSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCustomizationLibrary_RemoveSuitPreviewAssetFromSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCustomizationLibrary, nullptr, "RemoveSuitPreviewAssetFromSlot", nullptr, nullptr, sizeof(SBZCustomizationLibrary_eventRemoveSuitPreviewAssetFromSlot_Parms), Z_Construct_UFunction_USBZCustomizationLibrary_RemoveSuitPreviewAssetFromSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_RemoveSuitPreviewAssetFromSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_RemoveSuitPreviewAssetFromSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_RemoveSuitPreviewAssetFromSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCustomizationLibrary_RemoveSuitPreviewAssetFromSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCustomizationLibrary_RemoveSuitPreviewAssetFromSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCustomizationLibrary_SetDefaultMaskOnPreviewMaskConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_SetDefaultMaskOnPreviewMaskConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCustomizationLibrary_SetDefaultMaskOnPreviewMaskConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCustomizationLibrary, nullptr, "SetDefaultMaskOnPreviewMaskConfig", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_SetDefaultMaskOnPreviewMaskConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_SetDefaultMaskOnPreviewMaskConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCustomizationLibrary_SetDefaultMaskOnPreviewMaskConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCustomizationLibrary_SetDefaultMaskOnPreviewMaskConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCustomizationLibrary_SetDefaultSuitOnPreviewSuitConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_SetDefaultSuitOnPreviewSuitConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCustomizationLibrary_SetDefaultSuitOnPreviewSuitConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCustomizationLibrary, nullptr, "SetDefaultSuitOnPreviewSuitConfig", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_SetDefaultSuitOnPreviewSuitConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_SetDefaultSuitOnPreviewSuitConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCustomizationLibrary_SetDefaultSuitOnPreviewSuitConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCustomizationLibrary_SetDefaultSuitOnPreviewSuitConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview_Statics
	{
		struct SBZCustomizationLibrary_eventSetPartInPreview_Parms
		{
			const USBZSuitPartConfig* InSuitPartConfig;
			const USBZCosmeticsPartSlot* InCosmeticPartSlot;
			const USBZCosmeticsDataAsset* InCosmeticsDataAsset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSuitPartConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSuitPartConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCosmeticPartSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCosmeticPartSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCosmeticsDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCosmeticsDataAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview_Statics::NewProp_InSuitPartConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview_Statics::NewProp_InSuitPartConfig = { "InSuitPartConfig", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventSetPartInPreview_Parms, InSuitPartConfig), Z_Construct_UClass_USBZSuitPartConfig_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview_Statics::NewProp_InSuitPartConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview_Statics::NewProp_InSuitPartConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview_Statics::NewProp_InCosmeticPartSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview_Statics::NewProp_InCosmeticPartSlot = { "InCosmeticPartSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventSetPartInPreview_Parms, InCosmeticPartSlot), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview_Statics::NewProp_InCosmeticPartSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview_Statics::NewProp_InCosmeticPartSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview_Statics::NewProp_InCosmeticsDataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview_Statics::NewProp_InCosmeticsDataAsset = { "InCosmeticsDataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventSetPartInPreview_Parms, InCosmeticsDataAsset), Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview_Statics::NewProp_InCosmeticsDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview_Statics::NewProp_InCosmeticsDataAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview_Statics::NewProp_InSuitPartConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview_Statics::NewProp_InCosmeticPartSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview_Statics::NewProp_InCosmeticsDataAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCustomizationLibrary, nullptr, "SetPartInPreview", nullptr, nullptr, sizeof(SBZCustomizationLibrary_eventSetPartInPreview_Parms), Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewMaskConfig_Statics
	{
		struct SBZCustomizationLibrary_eventSetPreviewMaskConfig_Parms
		{
			FSBZMaskConfig MaskConfig;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewMaskConfig_Statics::NewProp_MaskConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewMaskConfig_Statics::NewProp_MaskConfig = { "MaskConfig", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventSetPreviewMaskConfig_Parms, MaskConfig), Z_Construct_UScriptStruct_FSBZMaskConfig, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewMaskConfig_Statics::NewProp_MaskConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewMaskConfig_Statics::NewProp_MaskConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewMaskConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewMaskConfig_Statics::NewProp_MaskConfig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewMaskConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewMaskConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCustomizationLibrary, nullptr, "SetPreviewMaskConfig", nullptr, nullptr, sizeof(SBZCustomizationLibrary_eventSetPreviewMaskConfig_Parms), Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewMaskConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewMaskConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewMaskConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewMaskConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewMaskConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewMaskConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewSuitConfig_Statics
	{
		struct SBZCustomizationLibrary_eventSetPreviewSuitConfig_Parms
		{
			FSBZSuitConfig InSuitConfig;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSuitConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSuitConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewSuitConfig_Statics::NewProp_InSuitConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewSuitConfig_Statics::NewProp_InSuitConfig = { "InSuitConfig", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationLibrary_eventSetPreviewSuitConfig_Parms, InSuitConfig), Z_Construct_UScriptStruct_FSBZSuitConfig, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewSuitConfig_Statics::NewProp_InSuitConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewSuitConfig_Statics::NewProp_InSuitConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewSuitConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewSuitConfig_Statics::NewProp_InSuitConfig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewSuitConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewSuitConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCustomizationLibrary, nullptr, "SetPreviewSuitConfig", nullptr, nullptr, sizeof(SBZCustomizationLibrary_eventSetPreviewSuitConfig_Parms), Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewSuitConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewSuitConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewSuitConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewSuitConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewSuitConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewSuitConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCustomizationLibrary_UseDefaultMask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizationLibrary_UseDefaultMask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCustomizationLibrary_UseDefaultMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCustomizationLibrary, nullptr, "UseDefaultMask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizationLibrary_UseDefaultMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizationLibrary_UseDefaultMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCustomizationLibrary_UseDefaultMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCustomizationLibrary_UseDefaultMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCustomizationLibrary_NoRegister()
	{
		return USBZCustomizationLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZCustomizationLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCustomizationLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCustomizationLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnMask, "ApplyAllCosmeticPartsFromPreviewOnMask" }, // 298278884
		{ &Z_Construct_UFunction_USBZCustomizationLibrary_ApplyAllCosmeticPartsFromPreviewOnSuit, "ApplyAllCosmeticPartsFromPreviewOnSuit" }, // 587002844
		{ &Z_Construct_UFunction_USBZCustomizationLibrary_ApplyCosmeticPartOnMask, "ApplyCosmeticPartOnMask" }, // 1006071775
		{ &Z_Construct_UFunction_USBZCustomizationLibrary_GetCustomizationManager, "GetCustomizationManager" }, // 589754488
		{ &Z_Construct_UFunction_USBZCustomizationLibrary_GetGlobalMaskPreviewActor, "GetGlobalMaskPreviewActor" }, // 1820414902
		{ &Z_Construct_UFunction_USBZCustomizationLibrary_GetMainMenuMannequinCustomizableSuitComponent, "GetMainMenuMannequinCustomizableSuitComponent" }, // 2962412228
		{ &Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewMaskConfig, "GetPreviewMaskConfig" }, // 2617119891
		{ &Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitConfig, "GetPreviewSuitConfig" }, // 599240174
		{ &Z_Construct_UFunction_USBZCustomizationLibrary_GetPreviewSuitCosmeticDataAsset, "GetPreviewSuitCosmeticDataAsset" }, // 402423871
		{ &Z_Construct_UFunction_USBZCustomizationLibrary_GetSuitCosmeticDataAssetFromInventorySlot, "GetSuitCosmeticDataAssetFromInventorySlot" }, // 746433400
		{ &Z_Construct_UFunction_USBZCustomizationLibrary_MaskPreviewAssetInSlot, "MaskPreviewAssetInSlot" }, // 1906833747
		{ &Z_Construct_UFunction_USBZCustomizationLibrary_PreviewEquippedMask, "PreviewEquippedMask" }, // 2393961054
		{ &Z_Construct_UFunction_USBZCustomizationLibrary_PreviewSuitAssetInSlot, "PreviewSuitAssetInSlot" }, // 3631245800
		{ &Z_Construct_UFunction_USBZCustomizationLibrary_RemoveMaskPreviewAssetFromSlot, "RemoveMaskPreviewAssetFromSlot" }, // 4133132650
		{ &Z_Construct_UFunction_USBZCustomizationLibrary_RemoveSuitPreviewAssetFromSlot, "RemoveSuitPreviewAssetFromSlot" }, // 1203174000
		{ &Z_Construct_UFunction_USBZCustomizationLibrary_SetDefaultMaskOnPreviewMaskConfig, "SetDefaultMaskOnPreviewMaskConfig" }, // 3408319289
		{ &Z_Construct_UFunction_USBZCustomizationLibrary_SetDefaultSuitOnPreviewSuitConfig, "SetDefaultSuitOnPreviewSuitConfig" }, // 3048890895
		{ &Z_Construct_UFunction_USBZCustomizationLibrary_SetPartInPreview, "SetPartInPreview" }, // 667545137
		{ &Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewMaskConfig, "SetPreviewMaskConfig" }, // 2861808147
		{ &Z_Construct_UFunction_USBZCustomizationLibrary_SetPreviewSuitConfig, "SetPreviewSuitConfig" }, // 346689242
		{ &Z_Construct_UFunction_USBZCustomizationLibrary_UseDefaultMask, "UseDefaultMask" }, // 2022362897
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCustomizationLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCustomizationLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCustomizationLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCustomizationLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCustomizationLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCustomizationLibrary_Statics::ClassParams = {
		&USBZCustomizationLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCustomizationLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCustomizationLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCustomizationLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCustomizationLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCustomizationLibrary, 631099669);
	template<> STARBREEZE_API UClass* StaticClass<USBZCustomizationLibrary>()
	{
		return USBZCustomizationLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCustomizationLibrary(Z_Construct_UClass_USBZCustomizationLibrary, &USBZCustomizationLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCustomizationLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCustomizationLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

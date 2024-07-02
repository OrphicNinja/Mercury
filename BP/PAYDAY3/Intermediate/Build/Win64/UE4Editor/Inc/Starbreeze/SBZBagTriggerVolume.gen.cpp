// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBagTriggerVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBagTriggerVolume() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBagTriggerVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBagTriggerVolume();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBagItem_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBagHandle();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZBagTriggerMode();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBagType_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZBagCountChangedDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZBagEnteredDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZBagVolumeComplete__DelegateSignature();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBagFilter();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBagRespawnPoint_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZBagTriggerVolume::execCheckCustomBagFilter)
	{
		P_GET_OBJECT(ASBZBagItem,Z_Param_BagItem);
		P_GET_STRUCT(FSBZBagHandle,Z_Param_BagHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckCustomBagFilter_Implementation(Z_Param_BagItem,Z_Param_BagHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBagTriggerVolume::execFilterBag)
	{
		P_GET_OBJECT(ASBZBagItem,Z_Param_BagItem);
		P_GET_STRUCT(FSBZBagHandle,Z_Param_BagHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FilterBag(Z_Param_BagItem,Z_Param_BagHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBagTriggerVolume::execGetCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBagTriggerVolume::execManuallySecureBag)
	{
		P_GET_OBJECT(ASBZBagItem,Z_Param_BagItem);
		P_GET_UBOOL(Z_Param_bFilterFirst);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ManuallySecureBag(Z_Param_BagItem,Z_Param_bFilterFirst);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBagTriggerVolume::execSetVolumeEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolumeEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	static FName NAME_ASBZBagTriggerVolume_CheckCustomBagFilter = FName(TEXT("CheckCustomBagFilter"));
	bool ASBZBagTriggerVolume::CheckCustomBagFilter(ASBZBagItem* BagItem, FSBZBagHandle BagHandle)
	{
		SBZBagTriggerVolume_eventCheckCustomBagFilter_Parms Parms;
		Parms.BagItem=BagItem;
		Parms.BagHandle=BagHandle;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBagTriggerVolume_CheckCustomBagFilter),&Parms);
		return !!Parms.ReturnValue;
	}
	void ASBZBagTriggerVolume::StaticRegisterNativesASBZBagTriggerVolume()
	{
		UClass* Class = ASBZBagTriggerVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckCustomBagFilter", &ASBZBagTriggerVolume::execCheckCustomBagFilter },
			{ "FilterBag", &ASBZBagTriggerVolume::execFilterBag },
			{ "GetCount", &ASBZBagTriggerVolume::execGetCount },
			{ "ManuallySecureBag", &ASBZBagTriggerVolume::execManuallySecureBag },
			{ "SetVolumeEnabled", &ASBZBagTriggerVolume::execSetVolumeEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZBagTriggerVolume_CheckCustomBagFilter_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagItem;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BagHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZBagTriggerVolume_CheckCustomBagFilter_Statics::NewProp_BagItem = { "BagItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagTriggerVolume_eventCheckCustomBagFilter_Parms, BagItem), Z_Construct_UClass_ASBZBagItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBagTriggerVolume_CheckCustomBagFilter_Statics::NewProp_BagHandle = { "BagHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagTriggerVolume_eventCheckCustomBagFilter_Parms, BagHandle), Z_Construct_UScriptStruct_FSBZBagHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZBagTriggerVolume_CheckCustomBagFilter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZBagTriggerVolume_eventCheckCustomBagFilter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZBagTriggerVolume_CheckCustomBagFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBagTriggerVolume_eventCheckCustomBagFilter_Parms), &Z_Construct_UFunction_ASBZBagTriggerVolume_CheckCustomBagFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBagTriggerVolume_CheckCustomBagFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBagTriggerVolume_CheckCustomBagFilter_Statics::NewProp_BagItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBagTriggerVolume_CheckCustomBagFilter_Statics::NewProp_BagHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBagTriggerVolume_CheckCustomBagFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBagTriggerVolume_CheckCustomBagFilter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBagTriggerVolume_CheckCustomBagFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBagTriggerVolume, nullptr, "CheckCustomBagFilter", nullptr, nullptr, sizeof(SBZBagTriggerVolume_eventCheckCustomBagFilter_Parms), Z_Construct_UFunction_ASBZBagTriggerVolume_CheckCustomBagFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagTriggerVolume_CheckCustomBagFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBagTriggerVolume_CheckCustomBagFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagTriggerVolume_CheckCustomBagFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBagTriggerVolume_CheckCustomBagFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBagTriggerVolume_CheckCustomBagFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBagTriggerVolume_FilterBag_Statics
	{
		struct SBZBagTriggerVolume_eventFilterBag_Parms
		{
			ASBZBagItem* BagItem;
			FSBZBagHandle BagHandle;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagItem;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BagHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZBagTriggerVolume_FilterBag_Statics::NewProp_BagItem = { "BagItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagTriggerVolume_eventFilterBag_Parms, BagItem), Z_Construct_UClass_ASBZBagItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBagTriggerVolume_FilterBag_Statics::NewProp_BagHandle = { "BagHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagTriggerVolume_eventFilterBag_Parms, BagHandle), Z_Construct_UScriptStruct_FSBZBagHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZBagTriggerVolume_FilterBag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZBagTriggerVolume_eventFilterBag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZBagTriggerVolume_FilterBag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBagTriggerVolume_eventFilterBag_Parms), &Z_Construct_UFunction_ASBZBagTriggerVolume_FilterBag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBagTriggerVolume_FilterBag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBagTriggerVolume_FilterBag_Statics::NewProp_BagItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBagTriggerVolume_FilterBag_Statics::NewProp_BagHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBagTriggerVolume_FilterBag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBagTriggerVolume_FilterBag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBagTriggerVolume_FilterBag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBagTriggerVolume, nullptr, "FilterBag", nullptr, nullptr, sizeof(SBZBagTriggerVolume_eventFilterBag_Parms), Z_Construct_UFunction_ASBZBagTriggerVolume_FilterBag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagTriggerVolume_FilterBag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBagTriggerVolume_FilterBag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagTriggerVolume_FilterBag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBagTriggerVolume_FilterBag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBagTriggerVolume_FilterBag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBagTriggerVolume_GetCount_Statics
	{
		struct SBZBagTriggerVolume_eventGetCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZBagTriggerVolume_GetCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagTriggerVolume_eventGetCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBagTriggerVolume_GetCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBagTriggerVolume_GetCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBagTriggerVolume_GetCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBagTriggerVolume_GetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBagTriggerVolume, nullptr, "GetCount", nullptr, nullptr, sizeof(SBZBagTriggerVolume_eventGetCount_Parms), Z_Construct_UFunction_ASBZBagTriggerVolume_GetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagTriggerVolume_GetCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBagTriggerVolume_GetCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagTriggerVolume_GetCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBagTriggerVolume_GetCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBagTriggerVolume_GetCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBagTriggerVolume_ManuallySecureBag_Statics
	{
		struct SBZBagTriggerVolume_eventManuallySecureBag_Parms
		{
			ASBZBagItem* BagItem;
			bool bFilterFirst;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagItem;
		static void NewProp_bFilterFirst_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFilterFirst;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZBagTriggerVolume_ManuallySecureBag_Statics::NewProp_BagItem = { "BagItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagTriggerVolume_eventManuallySecureBag_Parms, BagItem), Z_Construct_UClass_ASBZBagItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZBagTriggerVolume_ManuallySecureBag_Statics::NewProp_bFilterFirst_SetBit(void* Obj)
	{
		((SBZBagTriggerVolume_eventManuallySecureBag_Parms*)Obj)->bFilterFirst = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZBagTriggerVolume_ManuallySecureBag_Statics::NewProp_bFilterFirst = { "bFilterFirst", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBagTriggerVolume_eventManuallySecureBag_Parms), &Z_Construct_UFunction_ASBZBagTriggerVolume_ManuallySecureBag_Statics::NewProp_bFilterFirst_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZBagTriggerVolume_ManuallySecureBag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZBagTriggerVolume_eventManuallySecureBag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZBagTriggerVolume_ManuallySecureBag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBagTriggerVolume_eventManuallySecureBag_Parms), &Z_Construct_UFunction_ASBZBagTriggerVolume_ManuallySecureBag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBagTriggerVolume_ManuallySecureBag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBagTriggerVolume_ManuallySecureBag_Statics::NewProp_BagItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBagTriggerVolume_ManuallySecureBag_Statics::NewProp_bFilterFirst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBagTriggerVolume_ManuallySecureBag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBagTriggerVolume_ManuallySecureBag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBagTriggerVolume_ManuallySecureBag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBagTriggerVolume, nullptr, "ManuallySecureBag", nullptr, nullptr, sizeof(SBZBagTriggerVolume_eventManuallySecureBag_Parms), Z_Construct_UFunction_ASBZBagTriggerVolume_ManuallySecureBag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagTriggerVolume_ManuallySecureBag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBagTriggerVolume_ManuallySecureBag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagTriggerVolume_ManuallySecureBag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBagTriggerVolume_ManuallySecureBag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBagTriggerVolume_ManuallySecureBag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBagTriggerVolume_SetVolumeEnabled_Statics
	{
		struct SBZBagTriggerVolume_eventSetVolumeEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZBagTriggerVolume_SetVolumeEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZBagTriggerVolume_eventSetVolumeEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZBagTriggerVolume_SetVolumeEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBagTriggerVolume_eventSetVolumeEnabled_Parms), &Z_Construct_UFunction_ASBZBagTriggerVolume_SetVolumeEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBagTriggerVolume_SetVolumeEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBagTriggerVolume_SetVolumeEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBagTriggerVolume_SetVolumeEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBagTriggerVolume_SetVolumeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBagTriggerVolume, nullptr, "SetVolumeEnabled", nullptr, nullptr, sizeof(SBZBagTriggerVolume_eventSetVolumeEnabled_Parms), Z_Construct_UFunction_ASBZBagTriggerVolume_SetVolumeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagTriggerVolume_SetVolumeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBagTriggerVolume_SetVolumeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagTriggerVolume_SetVolumeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBagTriggerVolume_SetVolumeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBagTriggerVolume_SetVolumeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZBagTriggerVolume_NoRegister()
	{
		return ASBZBagTriggerVolume::StaticClass();
	}
	struct Z_Construct_UClass_ASBZBagTriggerVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldStartEnabled_MetaData[];
#endif
		static void NewProp_bShouldStartEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldStartEnabled;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TriggerMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TriggerMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableOnComplete_MetaData[];
#endif
		static void NewProp_bDisableOnComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableOnComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCountOverlappedForTarget_MetaData[];
#endif
		static void NewProp_bCountOverlappedForTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCountOverlappedForTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCountSecuredForTarget_MetaData[];
#endif
		static void NewProp_bCountSecuredForTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCountSecuredForTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagTypeArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagTypeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BagTypeArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBagCountChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBagCountChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBagEnteredOrSecured_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBagEnteredOrSecured;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocallySecured_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LocallySecured;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagTeleportPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagTeleportPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZBagTriggerVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZBagTriggerVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZBagTriggerVolume_CheckCustomBagFilter, "CheckCustomBagFilter" }, // 1281819385
		{ &Z_Construct_UFunction_ASBZBagTriggerVolume_FilterBag, "FilterBag" }, // 2528733687
		{ &Z_Construct_UFunction_ASBZBagTriggerVolume_GetCount, "GetCount" }, // 1564434951
		{ &Z_Construct_UFunction_ASBZBagTriggerVolume_ManuallySecureBag, "ManuallySecureBag" }, // 449793826
		{ &Z_Construct_UFunction_ASBZBagTriggerVolume_SetVolumeEnabled, "SetVolumeEnabled" }, // 331684279
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagTriggerVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "SBZBagTriggerVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBagTriggerVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bShouldStartEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZBagTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bShouldStartEnabled_SetBit(void* Obj)
	{
		((ASBZBagTriggerVolume*)Obj)->bShouldStartEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bShouldStartEnabled = { "bShouldStartEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZBagTriggerVolume), &Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bShouldStartEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bShouldStartEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bShouldStartEnabled_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_TriggerMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_TriggerMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZBagTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_TriggerMode = { "TriggerMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagTriggerVolume, TriggerMode), Z_Construct_UEnum_Starbreeze_ESBZBagTriggerMode, METADATA_PARAMS(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_TriggerMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_TriggerMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bDisableOnComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZBagTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bDisableOnComplete_SetBit(void* Obj)
	{
		((ASBZBagTriggerVolume*)Obj)->bDisableOnComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bDisableOnComplete = { "bDisableOnComplete", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZBagTriggerVolume), &Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bDisableOnComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bDisableOnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bDisableOnComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bCountOverlappedForTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZBagTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bCountOverlappedForTarget_SetBit(void* Obj)
	{
		((ASBZBagTriggerVolume*)Obj)->bCountOverlappedForTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bCountOverlappedForTarget = { "bCountOverlappedForTarget", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZBagTriggerVolume), &Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bCountOverlappedForTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bCountOverlappedForTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bCountOverlappedForTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bCountSecuredForTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZBagTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bCountSecuredForTarget_SetBit(void* Obj)
	{
		((ASBZBagTriggerVolume*)Obj)->bCountSecuredForTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bCountSecuredForTarget = { "bCountSecuredForTarget", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZBagTriggerVolume), &Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bCountSecuredForTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bCountSecuredForTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bCountSecuredForTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZBagTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagTriggerVolume, Target), METADATA_PARAMS(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_BagTypeArray_Inner = { "BagTypeArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZBagType_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_BagTypeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZBagTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_BagTypeArray = { "BagTypeArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagTriggerVolume, BagTypeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_BagTypeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_BagTypeArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_OnBagCountChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZBagTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_OnBagCountChanged = { "OnBagCountChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagTriggerVolume, OnBagCountChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZBagCountChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_OnBagCountChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_OnBagCountChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_OnBagEnteredOrSecured_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZBagTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_OnBagEnteredOrSecured = { "OnBagEnteredOrSecured", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagTriggerVolume, OnBagEnteredOrSecured), Z_Construct_UDelegateFunction_Starbreeze_SBZBagEnteredDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_OnBagEnteredOrSecured_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_OnBagEnteredOrSecured_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_OnComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZBagTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagTriggerVolume, OnComplete), Z_Construct_UDelegateFunction_Starbreeze_SBZBagVolumeComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_OnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_OnComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_Filter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZBagTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagTriggerVolume, Filter), Z_Construct_UScriptStruct_FSBZBagFilter, METADATA_PARAMS(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_Filter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_LocallySecured_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZBagTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_LocallySecured = { "LocallySecured", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagTriggerVolume, LocallySecured), METADATA_PARAMS(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_LocallySecured_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_LocallySecured_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_BagTeleportPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZBagTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_BagTeleportPoint = { "BagTeleportPoint", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagTriggerVolume, BagTeleportPoint), Z_Construct_UClass_ASBZBagRespawnPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_BagTeleportPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_BagTeleportPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZBagTriggerVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bShouldStartEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_TriggerMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_TriggerMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bDisableOnComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bCountOverlappedForTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_bCountSecuredForTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_BagTypeArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_BagTypeArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_OnBagCountChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_OnBagEnteredOrSecured,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_OnComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_Filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_LocallySecured,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagTriggerVolume_Statics::NewProp_BagTeleportPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZBagTriggerVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZBagTriggerVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZBagTriggerVolume_Statics::ClassParams = {
		&ASBZBagTriggerVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZBagTriggerVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagTriggerVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZBagTriggerVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZBagTriggerVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZBagTriggerVolume, 3502335477);
	template<> STARBREEZE_API UClass* StaticClass<ASBZBagTriggerVolume>()
	{
		return ASBZBagTriggerVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZBagTriggerVolume(Z_Construct_UClass_ASBZBagTriggerVolume, &ASBZBagTriggerVolume::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZBagTriggerVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZBagTriggerVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

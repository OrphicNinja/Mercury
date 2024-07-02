// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuInventorySuitSlotButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuInventorySuitSlotButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitConfig();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitInventorySlot();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuInventorySuitSlotButton::execGetSuitInSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZSuitData**)Z_Param__Result=P_THIS->GetSuitInSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventorySuitSlotButton::execGetSuitInSlotConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZSuitConfig*)Z_Param__Result=P_THIS->GetSuitInSlotConfig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventorySuitSlotButton::execGetSuitSlotIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSuitSlotIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventorySuitSlotButton::execInitializeSuitSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InSuitSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeSuitSlot(Z_Param_InSuitSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventorySuitSlotButton::execIsEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventorySuitSlotButton::execIsPresetSuitSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPresetSuitSlot();
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuInventorySuitSlotButton_OnSuitSlotInitialized = FName(TEXT("OnSuitSlotInitialized"));
	void USBZMainMenuInventorySuitSlotButton::OnSuitSlotInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuInventorySuitSlotButton_OnSuitSlotInitialized),NULL);
	}
	static FName NAME_USBZMainMenuInventorySuitSlotButton_SetActiveSuitSlot = FName(TEXT("SetActiveSuitSlot"));
	void USBZMainMenuInventorySuitSlotButton::SetActiveSuitSlot(bool bIsActiveSuitSlot)
	{
		SBZMainMenuInventorySuitSlotButton_eventSetActiveSuitSlot_Parms Parms;
		Parms.bIsActiveSuitSlot=bIsActiveSuitSlot ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuInventorySuitSlotButton_SetActiveSuitSlot),&Parms);
	}
	void USBZMainMenuInventorySuitSlotButton::StaticRegisterNativesUSBZMainMenuInventorySuitSlotButton()
	{
		UClass* Class = USBZMainMenuInventorySuitSlotButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSuitInSlot", &USBZMainMenuInventorySuitSlotButton::execGetSuitInSlot },
			{ "GetSuitInSlotConfig", &USBZMainMenuInventorySuitSlotButton::execGetSuitInSlotConfig },
			{ "GetSuitSlotIndex", &USBZMainMenuInventorySuitSlotButton::execGetSuitSlotIndex },
			{ "InitializeSuitSlot", &USBZMainMenuInventorySuitSlotButton::execInitializeSuitSlot },
			{ "IsEmpty", &USBZMainMenuInventorySuitSlotButton::execIsEmpty },
			{ "IsPresetSuitSlot", &USBZMainMenuInventorySuitSlotButton::execIsPresetSuitSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlot_Statics
	{
		struct SBZMainMenuInventorySuitSlotButton_eventGetSuitInSlot_Parms
		{
			USBZSuitData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventorySuitSlotButton_eventGetSuitInSlot_Parms, ReturnValue), Z_Construct_UClass_USBZSuitData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventorySuitSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton, nullptr, "GetSuitInSlot", nullptr, nullptr, sizeof(SBZMainMenuInventorySuitSlotButton_eventGetSuitInSlot_Parms), Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlotConfig_Statics
	{
		struct SBZMainMenuInventorySuitSlotButton_eventGetSuitInSlotConfig_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlotConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventorySuitSlotButton_eventGetSuitInSlotConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZSuitConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlotConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlotConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlotConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventorySuitSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlotConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton, nullptr, "GetSuitInSlotConfig", nullptr, nullptr, sizeof(SBZMainMenuInventorySuitSlotButton_eventGetSuitInSlotConfig_Parms), Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlotConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlotConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlotConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlotConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlotConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlotConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitSlotIndex_Statics
	{
		struct SBZMainMenuInventorySuitSlotButton_eventGetSuitSlotIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitSlotIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventorySuitSlotButton_eventGetSuitSlotIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitSlotIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitSlotIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitSlotIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventorySuitSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitSlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton, nullptr, "GetSuitSlotIndex", nullptr, nullptr, sizeof(SBZMainMenuInventorySuitSlotButton_eventGetSuitSlotIndex_Parms), Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitSlotIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitSlotIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitSlotIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitSlotIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitSlotIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitSlotIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_InitializeSuitSlot_Statics
	{
		struct SBZMainMenuInventorySuitSlotButton_eventInitializeSuitSlot_Parms
		{
			int32 InSuitSlotIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InSuitSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_InitializeSuitSlot_Statics::NewProp_InSuitSlotIndex = { "InSuitSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventorySuitSlotButton_eventInitializeSuitSlot_Parms, InSuitSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_InitializeSuitSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_InitializeSuitSlot_Statics::NewProp_InSuitSlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_InitializeSuitSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventorySuitSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_InitializeSuitSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton, nullptr, "InitializeSuitSlot", nullptr, nullptr, sizeof(SBZMainMenuInventorySuitSlotButton_eventInitializeSuitSlot_Parms), Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_InitializeSuitSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_InitializeSuitSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_InitializeSuitSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_InitializeSuitSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_InitializeSuitSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_InitializeSuitSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsEmpty_Statics
	{
		struct SBZMainMenuInventorySuitSlotButton_eventIsEmpty_Parms
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
	void Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuInventorySuitSlotButton_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuInventorySuitSlotButton_eventIsEmpty_Parms), &Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsEmpty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventorySuitSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton, nullptr, "IsEmpty", nullptr, nullptr, sizeof(SBZMainMenuInventorySuitSlotButton_eventIsEmpty_Parms), Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsPresetSuitSlot_Statics
	{
		struct SBZMainMenuInventorySuitSlotButton_eventIsPresetSuitSlot_Parms
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
	void Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsPresetSuitSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuInventorySuitSlotButton_eventIsPresetSuitSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsPresetSuitSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuInventorySuitSlotButton_eventIsPresetSuitSlot_Parms), &Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsPresetSuitSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsPresetSuitSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsPresetSuitSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsPresetSuitSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventorySuitSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsPresetSuitSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton, nullptr, "IsPresetSuitSlot", nullptr, nullptr, sizeof(SBZMainMenuInventorySuitSlotButton_eventIsPresetSuitSlot_Parms), Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsPresetSuitSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsPresetSuitSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsPresetSuitSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsPresetSuitSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsPresetSuitSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsPresetSuitSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_OnSuitSlotInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_OnSuitSlotInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventorySuitSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_OnSuitSlotInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton, nullptr, "OnSuitSlotInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_OnSuitSlotInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_OnSuitSlotInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_OnSuitSlotInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_OnSuitSlotInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_SetActiveSuitSlot_Statics
	{
		static void NewProp_bIsActiveSuitSlot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActiveSuitSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_SetActiveSuitSlot_Statics::NewProp_bIsActiveSuitSlot_SetBit(void* Obj)
	{
		((SBZMainMenuInventorySuitSlotButton_eventSetActiveSuitSlot_Parms*)Obj)->bIsActiveSuitSlot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_SetActiveSuitSlot_Statics::NewProp_bIsActiveSuitSlot = { "bIsActiveSuitSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuInventorySuitSlotButton_eventSetActiveSuitSlot_Parms), &Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_SetActiveSuitSlot_Statics::NewProp_bIsActiveSuitSlot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_SetActiveSuitSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_SetActiveSuitSlot_Statics::NewProp_bIsActiveSuitSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_SetActiveSuitSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventorySuitSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_SetActiveSuitSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton, nullptr, "SetActiveSuitSlot", nullptr, nullptr, sizeof(SBZMainMenuInventorySuitSlotButton_eventSetActiveSuitSlot_Parms), Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_SetActiveSuitSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_SetActiveSuitSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_SetActiveSuitSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_SetActiveSuitSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_SetActiveSuitSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_SetActiveSuitSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_NoRegister()
	{
		return USBZMainMenuInventorySuitSlotButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuitSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SuitSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlot, "GetSuitInSlot" }, // 2791974284
		{ &Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitInSlotConfig, "GetSuitInSlotConfig" }, // 846125654
		{ &Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_GetSuitSlotIndex, "GetSuitSlotIndex" }, // 1337950954
		{ &Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_InitializeSuitSlot, "InitializeSuitSlot" }, // 3083274715
		{ &Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsEmpty, "IsEmpty" }, // 2511314065
		{ &Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_IsPresetSuitSlot, "IsPresetSuitSlot" }, // 573270953
		{ &Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_OnSuitSlotInitialized, "OnSuitSlotInitialized" }, // 1324491164
		{ &Z_Construct_UFunction_USBZMainMenuInventorySuitSlotButton_SetActiveSuitSlot, "SetActiveSuitSlot" }, // 2417091651
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuInventorySuitSlotButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventorySuitSlotButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_Statics::NewProp_SuitSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventorySuitSlotButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventorySuitSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_Statics::NewProp_SuitSlot = { "SuitSlot", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventorySuitSlotButton, SuitSlot), Z_Construct_UScriptStruct_FSBZSuitInventorySlot, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_Statics::NewProp_SuitSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_Statics::NewProp_SuitSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_Statics::NewProp_SuitSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventorySuitSlotButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventorySuitSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_Statics::NewProp_SuitSlotIndex = { "SuitSlotIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventorySuitSlotButton, SuitSlotIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_Statics::NewProp_SuitSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_Statics::NewProp_SuitSlotIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_Statics::NewProp_SuitSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_Statics::NewProp_SuitSlotIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuInventorySuitSlotButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_Statics::ClassParams = {
		&USBZMainMenuInventorySuitSlotButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuInventorySuitSlotButton, 1270636936);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuInventorySuitSlotButton>()
	{
		return USBZMainMenuInventorySuitSlotButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuInventorySuitSlotButton(Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton, &USBZMainMenuInventorySuitSlotButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuInventorySuitSlotButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuInventorySuitSlotButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

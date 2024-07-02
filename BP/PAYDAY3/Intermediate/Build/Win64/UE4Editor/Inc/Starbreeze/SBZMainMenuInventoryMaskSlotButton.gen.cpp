// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuInventoryMaskSlotButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuInventoryMaskSlotButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskInventorySlot();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuInventoryMaskSlotButton::execGetMaskInSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZMaskData**)Z_Param__Result=P_THIS->GetMaskInSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryMaskSlotButton::execGetMaskSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZMaskInventorySlot*)Z_Param__Result=P_THIS->GetMaskSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryMaskSlotButton::execGetMaskSlotIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaskSlotIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryMaskSlotButton::execInitializeMaskSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InMaskSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeMaskSlot(Z_Param_InMaskSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryMaskSlotButton::execIsEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryMaskSlotButton::execIsPreconfigMaskSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPreconfigMaskSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryMaskSlotButton::execIsPresetMaskSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPresetMaskSlot();
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuInventoryMaskSlotButton_OnMaskSlotInitialized = FName(TEXT("OnMaskSlotInitialized"));
	void USBZMainMenuInventoryMaskSlotButton::OnMaskSlotInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuInventoryMaskSlotButton_OnMaskSlotInitialized),NULL);
	}
	static FName NAME_USBZMainMenuInventoryMaskSlotButton_SetActiveMaskSlot = FName(TEXT("SetActiveMaskSlot"));
	void USBZMainMenuInventoryMaskSlotButton::SetActiveMaskSlot(bool bIsActiveMaskSlot)
	{
		SBZMainMenuInventoryMaskSlotButton_eventSetActiveMaskSlot_Parms Parms;
		Parms.bIsActiveMaskSlot=bIsActiveMaskSlot ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuInventoryMaskSlotButton_SetActiveMaskSlot),&Parms);
	}
	void USBZMainMenuInventoryMaskSlotButton::StaticRegisterNativesUSBZMainMenuInventoryMaskSlotButton()
	{
		UClass* Class = USBZMainMenuInventoryMaskSlotButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaskInSlot", &USBZMainMenuInventoryMaskSlotButton::execGetMaskInSlot },
			{ "GetMaskSlot", &USBZMainMenuInventoryMaskSlotButton::execGetMaskSlot },
			{ "GetMaskSlotIndex", &USBZMainMenuInventoryMaskSlotButton::execGetMaskSlotIndex },
			{ "InitializeMaskSlot", &USBZMainMenuInventoryMaskSlotButton::execInitializeMaskSlot },
			{ "IsEmpty", &USBZMainMenuInventoryMaskSlotButton::execIsEmpty },
			{ "IsPreconfigMaskSlot", &USBZMainMenuInventoryMaskSlotButton::execIsPreconfigMaskSlot },
			{ "IsPresetMaskSlot", &USBZMainMenuInventoryMaskSlotButton::execIsPresetMaskSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskInSlot_Statics
	{
		struct SBZMainMenuInventoryMaskSlotButton_eventGetMaskInSlot_Parms
		{
			USBZMaskData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryMaskSlotButton_eventGetMaskInSlot_Parms, ReturnValue), Z_Construct_UClass_USBZMaskData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskInSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskInSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskInSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryMaskSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton, nullptr, "GetMaskInSlot", nullptr, nullptr, sizeof(SBZMainMenuInventoryMaskSlotButton_eventGetMaskInSlot_Parms), Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskInSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlot_Statics
	{
		struct SBZMainMenuInventoryMaskSlotButton_eventGetMaskSlot_Parms
		{
			FSBZMaskInventorySlot ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryMaskSlotButton_eventGetMaskSlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZMaskInventorySlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryMaskSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton, nullptr, "GetMaskSlot", nullptr, nullptr, sizeof(SBZMainMenuInventoryMaskSlotButton_eventGetMaskSlot_Parms), Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlotIndex_Statics
	{
		struct SBZMainMenuInventoryMaskSlotButton_eventGetMaskSlotIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlotIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryMaskSlotButton_eventGetMaskSlotIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlotIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlotIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlotIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryMaskSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton, nullptr, "GetMaskSlotIndex", nullptr, nullptr, sizeof(SBZMainMenuInventoryMaskSlotButton_eventGetMaskSlotIndex_Parms), Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlotIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlotIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlotIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlotIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlotIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlotIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_InitializeMaskSlot_Statics
	{
		struct SBZMainMenuInventoryMaskSlotButton_eventInitializeMaskSlot_Parms
		{
			int32 InMaskSlotIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMaskSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_InitializeMaskSlot_Statics::NewProp_InMaskSlotIndex = { "InMaskSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryMaskSlotButton_eventInitializeMaskSlot_Parms, InMaskSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_InitializeMaskSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_InitializeMaskSlot_Statics::NewProp_InMaskSlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_InitializeMaskSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryMaskSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_InitializeMaskSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton, nullptr, "InitializeMaskSlot", nullptr, nullptr, sizeof(SBZMainMenuInventoryMaskSlotButton_eventInitializeMaskSlot_Parms), Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_InitializeMaskSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_InitializeMaskSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_InitializeMaskSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_InitializeMaskSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_InitializeMaskSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_InitializeMaskSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsEmpty_Statics
	{
		struct SBZMainMenuInventoryMaskSlotButton_eventIsEmpty_Parms
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
	void Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuInventoryMaskSlotButton_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuInventoryMaskSlotButton_eventIsEmpty_Parms), &Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsEmpty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryMaskSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton, nullptr, "IsEmpty", nullptr, nullptr, sizeof(SBZMainMenuInventoryMaskSlotButton_eventIsEmpty_Parms), Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPreconfigMaskSlot_Statics
	{
		struct SBZMainMenuInventoryMaskSlotButton_eventIsPreconfigMaskSlot_Parms
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
	void Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPreconfigMaskSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuInventoryMaskSlotButton_eventIsPreconfigMaskSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPreconfigMaskSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuInventoryMaskSlotButton_eventIsPreconfigMaskSlot_Parms), &Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPreconfigMaskSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPreconfigMaskSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPreconfigMaskSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPreconfigMaskSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryMaskSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPreconfigMaskSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton, nullptr, "IsPreconfigMaskSlot", nullptr, nullptr, sizeof(SBZMainMenuInventoryMaskSlotButton_eventIsPreconfigMaskSlot_Parms), Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPreconfigMaskSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPreconfigMaskSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPreconfigMaskSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPreconfigMaskSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPreconfigMaskSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPreconfigMaskSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPresetMaskSlot_Statics
	{
		struct SBZMainMenuInventoryMaskSlotButton_eventIsPresetMaskSlot_Parms
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
	void Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPresetMaskSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuInventoryMaskSlotButton_eventIsPresetMaskSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPresetMaskSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuInventoryMaskSlotButton_eventIsPresetMaskSlot_Parms), &Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPresetMaskSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPresetMaskSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPresetMaskSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPresetMaskSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryMaskSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPresetMaskSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton, nullptr, "IsPresetMaskSlot", nullptr, nullptr, sizeof(SBZMainMenuInventoryMaskSlotButton_eventIsPresetMaskSlot_Parms), Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPresetMaskSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPresetMaskSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPresetMaskSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPresetMaskSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPresetMaskSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPresetMaskSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_OnMaskSlotInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_OnMaskSlotInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryMaskSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_OnMaskSlotInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton, nullptr, "OnMaskSlotInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_OnMaskSlotInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_OnMaskSlotInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_OnMaskSlotInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_OnMaskSlotInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_SetActiveMaskSlot_Statics
	{
		static void NewProp_bIsActiveMaskSlot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActiveMaskSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_SetActiveMaskSlot_Statics::NewProp_bIsActiveMaskSlot_SetBit(void* Obj)
	{
		((SBZMainMenuInventoryMaskSlotButton_eventSetActiveMaskSlot_Parms*)Obj)->bIsActiveMaskSlot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_SetActiveMaskSlot_Statics::NewProp_bIsActiveMaskSlot = { "bIsActiveMaskSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuInventoryMaskSlotButton_eventSetActiveMaskSlot_Parms), &Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_SetActiveMaskSlot_Statics::NewProp_bIsActiveMaskSlot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_SetActiveMaskSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_SetActiveMaskSlot_Statics::NewProp_bIsActiveMaskSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_SetActiveMaskSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryMaskSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_SetActiveMaskSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton, nullptr, "SetActiveMaskSlot", nullptr, nullptr, sizeof(SBZMainMenuInventoryMaskSlotButton_eventSetActiveMaskSlot_Parms), Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_SetActiveMaskSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_SetActiveMaskSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_SetActiveMaskSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_SetActiveMaskSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_SetActiveMaskSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_SetActiveMaskSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_NoRegister()
	{
		return USBZMainMenuInventoryMaskSlotButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskInSlot, "GetMaskInSlot" }, // 1182824367
		{ &Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlot, "GetMaskSlot" }, // 391054371
		{ &Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_GetMaskSlotIndex, "GetMaskSlotIndex" }, // 3969457631
		{ &Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_InitializeMaskSlot, "InitializeMaskSlot" }, // 2143564825
		{ &Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsEmpty, "IsEmpty" }, // 3156637277
		{ &Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPreconfigMaskSlot, "IsPreconfigMaskSlot" }, // 1819745201
		{ &Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_IsPresetMaskSlot, "IsPresetMaskSlot" }, // 768931073
		{ &Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_OnMaskSlotInitialized, "OnMaskSlotInitialized" }, // 1376812886
		{ &Z_Construct_UFunction_USBZMainMenuInventoryMaskSlotButton_SetActiveMaskSlot, "SetActiveMaskSlot" }, // 706734065
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuInventoryMaskSlotButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryMaskSlotButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_Statics::NewProp_MaskSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryMaskSlotButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryMaskSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_Statics::NewProp_MaskSlot = { "MaskSlot", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryMaskSlotButton, MaskSlot), Z_Construct_UScriptStruct_FSBZMaskInventorySlot, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_Statics::NewProp_MaskSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_Statics::NewProp_MaskSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_Statics::NewProp_MaskSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryMaskSlotButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryMaskSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_Statics::NewProp_MaskSlotIndex = { "MaskSlotIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryMaskSlotButton, MaskSlotIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_Statics::NewProp_MaskSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_Statics::NewProp_MaskSlotIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_Statics::NewProp_MaskSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_Statics::NewProp_MaskSlotIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuInventoryMaskSlotButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_Statics::ClassParams = {
		&USBZMainMenuInventoryMaskSlotButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuInventoryMaskSlotButton, 3688783835);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuInventoryMaskSlotButton>()
	{
		return USBZMainMenuInventoryMaskSlotButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuInventoryMaskSlotButton(Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton, &USBZMainMenuInventoryMaskSlotButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuInventoryMaskSlotButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuInventoryMaskSlotButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

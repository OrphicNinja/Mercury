// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuInventoryGloveSlotButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuInventoryGloveSlotButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGloveData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGloveInventorySlot();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuInventoryGloveSlotButton::execGetGloveInSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZGloveData**)Z_Param__Result=P_THIS->GetGloveInSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryGloveSlotButton::execGetGloveSlotIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGloveSlotIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryGloveSlotButton::execInitializeGloveSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InGloveSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeGloveSlot(Z_Param_InGloveSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryGloveSlotButton::execIsEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEmpty();
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuInventoryGloveSlotButton_OnGloveSlotInitialized = FName(TEXT("OnGloveSlotInitialized"));
	void USBZMainMenuInventoryGloveSlotButton::OnGloveSlotInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuInventoryGloveSlotButton_OnGloveSlotInitialized),NULL);
	}
	static FName NAME_USBZMainMenuInventoryGloveSlotButton_SetActiveGloveSlot = FName(TEXT("SetActiveGloveSlot"));
	void USBZMainMenuInventoryGloveSlotButton::SetActiveGloveSlot(bool bIsActiveGloveSlot)
	{
		SBZMainMenuInventoryGloveSlotButton_eventSetActiveGloveSlot_Parms Parms;
		Parms.bIsActiveGloveSlot=bIsActiveGloveSlot ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuInventoryGloveSlotButton_SetActiveGloveSlot),&Parms);
	}
	void USBZMainMenuInventoryGloveSlotButton::StaticRegisterNativesUSBZMainMenuInventoryGloveSlotButton()
	{
		UClass* Class = USBZMainMenuInventoryGloveSlotButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGloveInSlot", &USBZMainMenuInventoryGloveSlotButton::execGetGloveInSlot },
			{ "GetGloveSlotIndex", &USBZMainMenuInventoryGloveSlotButton::execGetGloveSlotIndex },
			{ "InitializeGloveSlot", &USBZMainMenuInventoryGloveSlotButton::execInitializeGloveSlot },
			{ "IsEmpty", &USBZMainMenuInventoryGloveSlotButton::execIsEmpty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveInSlot_Statics
	{
		struct SBZMainMenuInventoryGloveSlotButton_eventGetGloveInSlot_Parms
		{
			USBZGloveData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryGloveSlotButton_eventGetGloveInSlot_Parms, ReturnValue), Z_Construct_UClass_USBZGloveData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveInSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveInSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveInSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryGloveSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton, nullptr, "GetGloveInSlot", nullptr, nullptr, sizeof(SBZMainMenuInventoryGloveSlotButton_eventGetGloveInSlot_Parms), Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveInSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveSlotIndex_Statics
	{
		struct SBZMainMenuInventoryGloveSlotButton_eventGetGloveSlotIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveSlotIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryGloveSlotButton_eventGetGloveSlotIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveSlotIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveSlotIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveSlotIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryGloveSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveSlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton, nullptr, "GetGloveSlotIndex", nullptr, nullptr, sizeof(SBZMainMenuInventoryGloveSlotButton_eventGetGloveSlotIndex_Parms), Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveSlotIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveSlotIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveSlotIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveSlotIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveSlotIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveSlotIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_InitializeGloveSlot_Statics
	{
		struct SBZMainMenuInventoryGloveSlotButton_eventInitializeGloveSlot_Parms
		{
			int32 InGloveSlotIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InGloveSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_InitializeGloveSlot_Statics::NewProp_InGloveSlotIndex = { "InGloveSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryGloveSlotButton_eventInitializeGloveSlot_Parms, InGloveSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_InitializeGloveSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_InitializeGloveSlot_Statics::NewProp_InGloveSlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_InitializeGloveSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryGloveSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_InitializeGloveSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton, nullptr, "InitializeGloveSlot", nullptr, nullptr, sizeof(SBZMainMenuInventoryGloveSlotButton_eventInitializeGloveSlot_Parms), Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_InitializeGloveSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_InitializeGloveSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_InitializeGloveSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_InitializeGloveSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_InitializeGloveSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_InitializeGloveSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_IsEmpty_Statics
	{
		struct SBZMainMenuInventoryGloveSlotButton_eventIsEmpty_Parms
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
	void Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuInventoryGloveSlotButton_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuInventoryGloveSlotButton_eventIsEmpty_Parms), &Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_IsEmpty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_IsEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_IsEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryGloveSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton, nullptr, "IsEmpty", nullptr, nullptr, sizeof(SBZMainMenuInventoryGloveSlotButton_eventIsEmpty_Parms), Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_IsEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_IsEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_IsEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_IsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_IsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_OnGloveSlotInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_OnGloveSlotInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryGloveSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_OnGloveSlotInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton, nullptr, "OnGloveSlotInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_OnGloveSlotInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_OnGloveSlotInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_OnGloveSlotInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_OnGloveSlotInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_SetActiveGloveSlot_Statics
	{
		static void NewProp_bIsActiveGloveSlot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActiveGloveSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_SetActiveGloveSlot_Statics::NewProp_bIsActiveGloveSlot_SetBit(void* Obj)
	{
		((SBZMainMenuInventoryGloveSlotButton_eventSetActiveGloveSlot_Parms*)Obj)->bIsActiveGloveSlot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_SetActiveGloveSlot_Statics::NewProp_bIsActiveGloveSlot = { "bIsActiveGloveSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuInventoryGloveSlotButton_eventSetActiveGloveSlot_Parms), &Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_SetActiveGloveSlot_Statics::NewProp_bIsActiveGloveSlot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_SetActiveGloveSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_SetActiveGloveSlot_Statics::NewProp_bIsActiveGloveSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_SetActiveGloveSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryGloveSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_SetActiveGloveSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton, nullptr, "SetActiveGloveSlot", nullptr, nullptr, sizeof(SBZMainMenuInventoryGloveSlotButton_eventSetActiveGloveSlot_Parms), Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_SetActiveGloveSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_SetActiveGloveSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_SetActiveGloveSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_SetActiveGloveSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_SetActiveGloveSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_SetActiveGloveSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_NoRegister()
	{
		return USBZMainMenuInventoryGloveSlotButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GloveSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GloveSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveInSlot, "GetGloveInSlot" }, // 1167602462
		{ &Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_GetGloveSlotIndex, "GetGloveSlotIndex" }, // 3199635126
		{ &Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_InitializeGloveSlot, "InitializeGloveSlot" }, // 4060559318
		{ &Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_IsEmpty, "IsEmpty" }, // 2013676055
		{ &Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_OnGloveSlotInitialized, "OnGloveSlotInitialized" }, // 1801892015
		{ &Z_Construct_UFunction_USBZMainMenuInventoryGloveSlotButton_SetActiveGloveSlot, "SetActiveGloveSlot" }, // 2674631126
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuInventoryGloveSlotButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryGloveSlotButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_Statics::NewProp_GloveSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryGloveSlotButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryGloveSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_Statics::NewProp_GloveSlot = { "GloveSlot", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryGloveSlotButton, GloveSlot), Z_Construct_UScriptStruct_FSBZGloveInventorySlot, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_Statics::NewProp_GloveSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_Statics::NewProp_GloveSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_Statics::NewProp_GloveSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryGloveSlotButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryGloveSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_Statics::NewProp_GloveSlotIndex = { "GloveSlotIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryGloveSlotButton, GloveSlotIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_Statics::NewProp_GloveSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_Statics::NewProp_GloveSlotIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_Statics::NewProp_GloveSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_Statics::NewProp_GloveSlotIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuInventoryGloveSlotButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_Statics::ClassParams = {
		&USBZMainMenuInventoryGloveSlotButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuInventoryGloveSlotButton, 4210909063);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuInventoryGloveSlotButton>()
	{
		return USBZMainMenuInventoryGloveSlotButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuInventoryGloveSlotButton(Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton, &USBZMainMenuInventoryGloveSlotButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuInventoryGloveSlotButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuInventoryGloveSlotButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

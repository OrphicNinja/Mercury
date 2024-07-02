// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuInventoryCharacterSlotButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuInventoryCharacterSlotButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterInventoryData();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuInventoryCharacterSlotButton::execDeselectPreferredCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeselectPreferredCharacter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryCharacterSlotButton::execGetCharacterSlotData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZCharacterInventoryData*)Z_Param__Result=P_THIS->GetCharacterSlotData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryCharacterSlotButton::execGetDisplayPreferredIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDisplayPreferredIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryCharacterSlotButton::execInitializeCharacterSlotData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InInventoryIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeCharacterSlotData(Z_Param_InInventoryIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryCharacterSlotButton::execIsPreferredCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPreferredCharacter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryCharacterSlotButton::execSetPreferredValueIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InPreferredValueIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreferredValueIndex(Z_Param_InPreferredValueIndex);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuInventoryCharacterSlotButton_OnCharacterSlotInitialized = FName(TEXT("OnCharacterSlotInitialized"));
	void USBZMainMenuInventoryCharacterSlotButton::OnCharacterSlotInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuInventoryCharacterSlotButton_OnCharacterSlotInitialized),NULL);
	}
	static FName NAME_USBZMainMenuInventoryCharacterSlotButton_OnPreferredValueIndexChanged = FName(TEXT("OnPreferredValueIndexChanged"));
	void USBZMainMenuInventoryCharacterSlotButton::OnPreferredValueIndexChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuInventoryCharacterSlotButton_OnPreferredValueIndexChanged),NULL);
	}
	void USBZMainMenuInventoryCharacterSlotButton::StaticRegisterNativesUSBZMainMenuInventoryCharacterSlotButton()
	{
		UClass* Class = USBZMainMenuInventoryCharacterSlotButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeselectPreferredCharacter", &USBZMainMenuInventoryCharacterSlotButton::execDeselectPreferredCharacter },
			{ "GetCharacterSlotData", &USBZMainMenuInventoryCharacterSlotButton::execGetCharacterSlotData },
			{ "GetDisplayPreferredIndex", &USBZMainMenuInventoryCharacterSlotButton::execGetDisplayPreferredIndex },
			{ "InitializeCharacterSlotData", &USBZMainMenuInventoryCharacterSlotButton::execInitializeCharacterSlotData },
			{ "IsPreferredCharacter", &USBZMainMenuInventoryCharacterSlotButton::execIsPreferredCharacter },
			{ "SetPreferredValueIndex", &USBZMainMenuInventoryCharacterSlotButton::execSetPreferredValueIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_DeselectPreferredCharacter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_DeselectPreferredCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_DeselectPreferredCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton, nullptr, "DeselectPreferredCharacter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_DeselectPreferredCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_DeselectPreferredCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_DeselectPreferredCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_DeselectPreferredCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetCharacterSlotData_Statics
	{
		struct SBZMainMenuInventoryCharacterSlotButton_eventGetCharacterSlotData_Parms
		{
			FSBZCharacterInventoryData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetCharacterSlotData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryCharacterSlotButton_eventGetCharacterSlotData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZCharacterInventoryData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetCharacterSlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetCharacterSlotData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetCharacterSlotData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetCharacterSlotData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton, nullptr, "GetCharacterSlotData", nullptr, nullptr, sizeof(SBZMainMenuInventoryCharacterSlotButton_eventGetCharacterSlotData_Parms), Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetCharacterSlotData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetCharacterSlotData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetCharacterSlotData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetCharacterSlotData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetCharacterSlotData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetCharacterSlotData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetDisplayPreferredIndex_Statics
	{
		struct SBZMainMenuInventoryCharacterSlotButton_eventGetDisplayPreferredIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetDisplayPreferredIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryCharacterSlotButton_eventGetDisplayPreferredIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetDisplayPreferredIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetDisplayPreferredIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetDisplayPreferredIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetDisplayPreferredIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton, nullptr, "GetDisplayPreferredIndex", nullptr, nullptr, sizeof(SBZMainMenuInventoryCharacterSlotButton_eventGetDisplayPreferredIndex_Parms), Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetDisplayPreferredIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetDisplayPreferredIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetDisplayPreferredIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetDisplayPreferredIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetDisplayPreferredIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetDisplayPreferredIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_InitializeCharacterSlotData_Statics
	{
		struct SBZMainMenuInventoryCharacterSlotButton_eventInitializeCharacterSlotData_Parms
		{
			int32 InInventoryIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InInventoryIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_InitializeCharacterSlotData_Statics::NewProp_InInventoryIndex = { "InInventoryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryCharacterSlotButton_eventInitializeCharacterSlotData_Parms, InInventoryIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_InitializeCharacterSlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_InitializeCharacterSlotData_Statics::NewProp_InInventoryIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_InitializeCharacterSlotData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_InitializeCharacterSlotData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton, nullptr, "InitializeCharacterSlotData", nullptr, nullptr, sizeof(SBZMainMenuInventoryCharacterSlotButton_eventInitializeCharacterSlotData_Parms), Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_InitializeCharacterSlotData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_InitializeCharacterSlotData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_InitializeCharacterSlotData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_InitializeCharacterSlotData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_InitializeCharacterSlotData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_InitializeCharacterSlotData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_IsPreferredCharacter_Statics
	{
		struct SBZMainMenuInventoryCharacterSlotButton_eventIsPreferredCharacter_Parms
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
	void Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_IsPreferredCharacter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuInventoryCharacterSlotButton_eventIsPreferredCharacter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_IsPreferredCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuInventoryCharacterSlotButton_eventIsPreferredCharacter_Parms), &Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_IsPreferredCharacter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_IsPreferredCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_IsPreferredCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_IsPreferredCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_IsPreferredCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton, nullptr, "IsPreferredCharacter", nullptr, nullptr, sizeof(SBZMainMenuInventoryCharacterSlotButton_eventIsPreferredCharacter_Parms), Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_IsPreferredCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_IsPreferredCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_IsPreferredCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_IsPreferredCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_IsPreferredCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_IsPreferredCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_OnCharacterSlotInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_OnCharacterSlotInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_OnCharacterSlotInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton, nullptr, "OnCharacterSlotInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_OnCharacterSlotInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_OnCharacterSlotInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_OnCharacterSlotInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_OnCharacterSlotInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_OnPreferredValueIndexChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_OnPreferredValueIndexChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_OnPreferredValueIndexChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton, nullptr, "OnPreferredValueIndexChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_OnPreferredValueIndexChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_OnPreferredValueIndexChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_OnPreferredValueIndexChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_OnPreferredValueIndexChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_SetPreferredValueIndex_Statics
	{
		struct SBZMainMenuInventoryCharacterSlotButton_eventSetPreferredValueIndex_Parms
		{
			int32 InPreferredValueIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InPreferredValueIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_SetPreferredValueIndex_Statics::NewProp_InPreferredValueIndex = { "InPreferredValueIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryCharacterSlotButton_eventSetPreferredValueIndex_Parms, InPreferredValueIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_SetPreferredValueIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_SetPreferredValueIndex_Statics::NewProp_InPreferredValueIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_SetPreferredValueIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_SetPreferredValueIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton, nullptr, "SetPreferredValueIndex", nullptr, nullptr, sizeof(SBZMainMenuInventoryCharacterSlotButton_eventSetPreferredValueIndex_Parms), Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_SetPreferredValueIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_SetPreferredValueIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_SetPreferredValueIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_SetPreferredValueIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_SetPreferredValueIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_SetPreferredValueIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_NoRegister()
	{
		return USBZMainMenuInventoryCharacterSlotButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterSlotData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterSlotData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InventoryIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredValueIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreferredValueIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_DeselectPreferredCharacter, "DeselectPreferredCharacter" }, // 1044433244
		{ &Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetCharacterSlotData, "GetCharacterSlotData" }, // 1253998969
		{ &Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_GetDisplayPreferredIndex, "GetDisplayPreferredIndex" }, // 3453470339
		{ &Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_InitializeCharacterSlotData, "InitializeCharacterSlotData" }, // 3316492199
		{ &Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_IsPreferredCharacter, "IsPreferredCharacter" }, // 3696751280
		{ &Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_OnCharacterSlotInitialized, "OnCharacterSlotInitialized" }, // 1781221274
		{ &Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_OnPreferredValueIndexChanged, "OnPreferredValueIndexChanged" }, // 2847943322
		{ &Z_Construct_UFunction_USBZMainMenuInventoryCharacterSlotButton_SetPreferredValueIndex, "SetPreferredValueIndex" }, // 985272432
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuInventoryCharacterSlotButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterSlotButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::NewProp_CharacterSlotData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryCharacterSlotButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::NewProp_CharacterSlotData = { "CharacterSlotData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryCharacterSlotButton, CharacterSlotData), Z_Construct_UScriptStruct_FSBZCharacterInventoryData, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::NewProp_CharacterSlotData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::NewProp_CharacterSlotData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::NewProp_InventoryIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryCharacterSlotButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::NewProp_InventoryIndex = { "InventoryIndex", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryCharacterSlotButton, InventoryIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::NewProp_InventoryIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::NewProp_InventoryIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::NewProp_PreferredValueIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryCharacterSlotButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::NewProp_PreferredValueIndex = { "PreferredValueIndex", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryCharacterSlotButton, PreferredValueIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::NewProp_PreferredValueIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::NewProp_PreferredValueIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::NewProp_CharacterSlotData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::NewProp_InventoryIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::NewProp_PreferredValueIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuInventoryCharacterSlotButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::ClassParams = {
		&USBZMainMenuInventoryCharacterSlotButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuInventoryCharacterSlotButton, 3656513686);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuInventoryCharacterSlotButton>()
	{
		return USBZMainMenuInventoryCharacterSlotButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuInventoryCharacterSlotButton(Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton, &USBZMainMenuInventoryCharacterSlotButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuInventoryCharacterSlotButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuInventoryCharacterSlotButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

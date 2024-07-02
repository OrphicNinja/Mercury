// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuPrePlaningLoadoutSelection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuPrePlaningLoadoutSelection() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnPlayerLoadoutConfigChanged__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuPrePlaningLoadoutSelection::execBindGamepadActions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindGamepadActions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuPrePlaningLoadoutSelection::execGetFocusedPlayerLoadoutIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFocusedPlayerLoadoutIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuPrePlaningLoadoutSelection::execIsFocusedPlayerLoadoutValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFocusedPlayerLoadoutValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuPrePlaningLoadoutSelection::execNativeOnActiveLoadoutChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewActiveLoadoutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnActiveLoadoutChanged(Z_Param_NewActiveLoadoutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuPrePlaningLoadoutSelection::execNativeOnFocusedPlayerLoadoutConfigChanged)
	{
		P_GET_STRUCT_REF(FSBZPlayerLoadoutConfig,Z_Param_Out_NewPlayerLoadout);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnFocusedPlayerLoadoutConfigChanged(Z_Param_Out_NewPlayerLoadout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuPrePlaningLoadoutSelection::execOnLocalLoadoutUpdated)
	{
		P_GET_STRUCT_REF(FSBZPlayerLoadoutConfig,Z_Param_Out_InPlayerLoadout);
		P_GET_PROPERTY(FIntProperty,Z_Param_ModifiedPlayerLoadoutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocalLoadoutUpdated(Z_Param_Out_InPlayerLoadout,Z_Param_ModifiedPlayerLoadoutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuPrePlaningLoadoutSelection::execSetFocusedPlayerLoadoutIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewFocusedPlayerLoadoutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFocusedPlayerLoadoutIndex(Z_Param_NewFocusedPlayerLoadoutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuPrePlaningLoadoutSelection::execUnbindGamepadActions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindGamepadActions();
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuPrePlaningLoadoutSelection_ActiveLoadoutChanged = FName(TEXT("ActiveLoadoutChanged"));
	void USBZMainMenuPrePlaningLoadoutSelection::ActiveLoadoutChanged(int32 NewActiveLoadoutIndex)
	{
		SBZMainMenuPrePlaningLoadoutSelection_eventActiveLoadoutChanged_Parms Parms;
		Parms.NewActiveLoadoutIndex=NewActiveLoadoutIndex;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuPrePlaningLoadoutSelection_ActiveLoadoutChanged),&Parms);
	}
	static FName NAME_USBZMainMenuPrePlaningLoadoutSelection_FocusedPlayerLoadoutConfigChanged = FName(TEXT("FocusedPlayerLoadoutConfigChanged"));
	void USBZMainMenuPrePlaningLoadoutSelection::FocusedPlayerLoadoutConfigChanged(FSBZPlayerLoadoutConfig const& NewPlayerLoadout)
	{
		SBZMainMenuPrePlaningLoadoutSelection_eventFocusedPlayerLoadoutConfigChanged_Parms Parms;
		Parms.NewPlayerLoadout=NewPlayerLoadout;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuPrePlaningLoadoutSelection_FocusedPlayerLoadoutConfigChanged),&Parms);
	}
	static FName NAME_USBZMainMenuPrePlaningLoadoutSelection_OnInputTypeChangedToGamepad = FName(TEXT("OnInputTypeChangedToGamepad"));
	void USBZMainMenuPrePlaningLoadoutSelection::OnInputTypeChangedToGamepad(bool bIsGamepad)
	{
		SBZMainMenuPrePlaningLoadoutSelection_eventOnInputTypeChangedToGamepad_Parms Parms;
		Parms.bIsGamepad=bIsGamepad ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuPrePlaningLoadoutSelection_OnInputTypeChangedToGamepad),&Parms);
	}
	static FName NAME_USBZMainMenuPrePlaningLoadoutSelection_OnLoadoutDecrement = FName(TEXT("OnLoadoutDecrement"));
	void USBZMainMenuPrePlaningLoadoutSelection::OnLoadoutDecrement()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuPrePlaningLoadoutSelection_OnLoadoutDecrement),NULL);
	}
	static FName NAME_USBZMainMenuPrePlaningLoadoutSelection_OnLoadoutIncrement = FName(TEXT("OnLoadoutIncrement"));
	void USBZMainMenuPrePlaningLoadoutSelection::OnLoadoutIncrement()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuPrePlaningLoadoutSelection_OnLoadoutIncrement),NULL);
	}
	void USBZMainMenuPrePlaningLoadoutSelection::StaticRegisterNativesUSBZMainMenuPrePlaningLoadoutSelection()
	{
		UClass* Class = USBZMainMenuPrePlaningLoadoutSelection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindGamepadActions", &USBZMainMenuPrePlaningLoadoutSelection::execBindGamepadActions },
			{ "GetFocusedPlayerLoadoutIndex", &USBZMainMenuPrePlaningLoadoutSelection::execGetFocusedPlayerLoadoutIndex },
			{ "IsFocusedPlayerLoadoutValid", &USBZMainMenuPrePlaningLoadoutSelection::execIsFocusedPlayerLoadoutValid },
			{ "NativeOnActiveLoadoutChanged", &USBZMainMenuPrePlaningLoadoutSelection::execNativeOnActiveLoadoutChanged },
			{ "NativeOnFocusedPlayerLoadoutConfigChanged", &USBZMainMenuPrePlaningLoadoutSelection::execNativeOnFocusedPlayerLoadoutConfigChanged },
			{ "OnLocalLoadoutUpdated", &USBZMainMenuPrePlaningLoadoutSelection::execOnLocalLoadoutUpdated },
			{ "SetFocusedPlayerLoadoutIndex", &USBZMainMenuPrePlaningLoadoutSelection::execSetFocusedPlayerLoadoutIndex },
			{ "UnbindGamepadActions", &USBZMainMenuPrePlaningLoadoutSelection::execUnbindGamepadActions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_ActiveLoadoutChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewActiveLoadoutIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_ActiveLoadoutChanged_Statics::NewProp_NewActiveLoadoutIndex = { "NewActiveLoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuPrePlaningLoadoutSelection_eventActiveLoadoutChanged_Parms, NewActiveLoadoutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_ActiveLoadoutChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_ActiveLoadoutChanged_Statics::NewProp_NewActiveLoadoutIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_ActiveLoadoutChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlaningLoadoutSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_ActiveLoadoutChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection, nullptr, "ActiveLoadoutChanged", nullptr, nullptr, sizeof(SBZMainMenuPrePlaningLoadoutSelection_eventActiveLoadoutChanged_Parms), Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_ActiveLoadoutChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_ActiveLoadoutChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_ActiveLoadoutChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_ActiveLoadoutChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_ActiveLoadoutChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_ActiveLoadoutChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_BindGamepadActions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_BindGamepadActions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlaningLoadoutSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_BindGamepadActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection, nullptr, "BindGamepadActions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_BindGamepadActions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_BindGamepadActions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_BindGamepadActions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_BindGamepadActions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_FocusedPlayerLoadoutConfigChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPlayerLoadout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPlayerLoadout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_FocusedPlayerLoadoutConfigChanged_Statics::NewProp_NewPlayerLoadout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_FocusedPlayerLoadoutConfigChanged_Statics::NewProp_NewPlayerLoadout = { "NewPlayerLoadout", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuPrePlaningLoadoutSelection_eventFocusedPlayerLoadoutConfigChanged_Parms, NewPlayerLoadout), Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_FocusedPlayerLoadoutConfigChanged_Statics::NewProp_NewPlayerLoadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_FocusedPlayerLoadoutConfigChanged_Statics::NewProp_NewPlayerLoadout_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_FocusedPlayerLoadoutConfigChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_FocusedPlayerLoadoutConfigChanged_Statics::NewProp_NewPlayerLoadout,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_FocusedPlayerLoadoutConfigChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlaningLoadoutSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_FocusedPlayerLoadoutConfigChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection, nullptr, "FocusedPlayerLoadoutConfigChanged", nullptr, nullptr, sizeof(SBZMainMenuPrePlaningLoadoutSelection_eventFocusedPlayerLoadoutConfigChanged_Parms), Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_FocusedPlayerLoadoutConfigChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_FocusedPlayerLoadoutConfigChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_FocusedPlayerLoadoutConfigChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_FocusedPlayerLoadoutConfigChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_FocusedPlayerLoadoutConfigChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_FocusedPlayerLoadoutConfigChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_GetFocusedPlayerLoadoutIndex_Statics
	{
		struct SBZMainMenuPrePlaningLoadoutSelection_eventGetFocusedPlayerLoadoutIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_GetFocusedPlayerLoadoutIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuPrePlaningLoadoutSelection_eventGetFocusedPlayerLoadoutIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_GetFocusedPlayerLoadoutIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_GetFocusedPlayerLoadoutIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_GetFocusedPlayerLoadoutIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlaningLoadoutSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_GetFocusedPlayerLoadoutIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection, nullptr, "GetFocusedPlayerLoadoutIndex", nullptr, nullptr, sizeof(SBZMainMenuPrePlaningLoadoutSelection_eventGetFocusedPlayerLoadoutIndex_Parms), Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_GetFocusedPlayerLoadoutIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_GetFocusedPlayerLoadoutIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_GetFocusedPlayerLoadoutIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_GetFocusedPlayerLoadoutIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_GetFocusedPlayerLoadoutIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_GetFocusedPlayerLoadoutIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_IsFocusedPlayerLoadoutValid_Statics
	{
		struct SBZMainMenuPrePlaningLoadoutSelection_eventIsFocusedPlayerLoadoutValid_Parms
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
	void Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_IsFocusedPlayerLoadoutValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuPrePlaningLoadoutSelection_eventIsFocusedPlayerLoadoutValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_IsFocusedPlayerLoadoutValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuPrePlaningLoadoutSelection_eventIsFocusedPlayerLoadoutValid_Parms), &Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_IsFocusedPlayerLoadoutValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_IsFocusedPlayerLoadoutValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_IsFocusedPlayerLoadoutValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_IsFocusedPlayerLoadoutValid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlaningLoadoutSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_IsFocusedPlayerLoadoutValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection, nullptr, "IsFocusedPlayerLoadoutValid", nullptr, nullptr, sizeof(SBZMainMenuPrePlaningLoadoutSelection_eventIsFocusedPlayerLoadoutValid_Parms), Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_IsFocusedPlayerLoadoutValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_IsFocusedPlayerLoadoutValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_IsFocusedPlayerLoadoutValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_IsFocusedPlayerLoadoutValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_IsFocusedPlayerLoadoutValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_IsFocusedPlayerLoadoutValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnActiveLoadoutChanged_Statics
	{
		struct SBZMainMenuPrePlaningLoadoutSelection_eventNativeOnActiveLoadoutChanged_Parms
		{
			int32 NewActiveLoadoutIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewActiveLoadoutIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnActiveLoadoutChanged_Statics::NewProp_NewActiveLoadoutIndex = { "NewActiveLoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuPrePlaningLoadoutSelection_eventNativeOnActiveLoadoutChanged_Parms, NewActiveLoadoutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnActiveLoadoutChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnActiveLoadoutChanged_Statics::NewProp_NewActiveLoadoutIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnActiveLoadoutChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlaningLoadoutSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnActiveLoadoutChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection, nullptr, "NativeOnActiveLoadoutChanged", nullptr, nullptr, sizeof(SBZMainMenuPrePlaningLoadoutSelection_eventNativeOnActiveLoadoutChanged_Parms), Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnActiveLoadoutChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnActiveLoadoutChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnActiveLoadoutChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnActiveLoadoutChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnActiveLoadoutChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnActiveLoadoutChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnFocusedPlayerLoadoutConfigChanged_Statics
	{
		struct SBZMainMenuPrePlaningLoadoutSelection_eventNativeOnFocusedPlayerLoadoutConfigChanged_Parms
		{
			FSBZPlayerLoadoutConfig NewPlayerLoadout;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPlayerLoadout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPlayerLoadout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnFocusedPlayerLoadoutConfigChanged_Statics::NewProp_NewPlayerLoadout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnFocusedPlayerLoadoutConfigChanged_Statics::NewProp_NewPlayerLoadout = { "NewPlayerLoadout", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuPrePlaningLoadoutSelection_eventNativeOnFocusedPlayerLoadoutConfigChanged_Parms, NewPlayerLoadout), Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnFocusedPlayerLoadoutConfigChanged_Statics::NewProp_NewPlayerLoadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnFocusedPlayerLoadoutConfigChanged_Statics::NewProp_NewPlayerLoadout_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnFocusedPlayerLoadoutConfigChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnFocusedPlayerLoadoutConfigChanged_Statics::NewProp_NewPlayerLoadout,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnFocusedPlayerLoadoutConfigChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlaningLoadoutSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnFocusedPlayerLoadoutConfigChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection, nullptr, "NativeOnFocusedPlayerLoadoutConfigChanged", nullptr, nullptr, sizeof(SBZMainMenuPrePlaningLoadoutSelection_eventNativeOnFocusedPlayerLoadoutConfigChanged_Parms), Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnFocusedPlayerLoadoutConfigChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnFocusedPlayerLoadoutConfigChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnFocusedPlayerLoadoutConfigChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnFocusedPlayerLoadoutConfigChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnFocusedPlayerLoadoutConfigChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnFocusedPlayerLoadoutConfigChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnInputTypeChangedToGamepad_Statics
	{
		static void NewProp_bIsGamepad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGamepad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnInputTypeChangedToGamepad_Statics::NewProp_bIsGamepad_SetBit(void* Obj)
	{
		((SBZMainMenuPrePlaningLoadoutSelection_eventOnInputTypeChangedToGamepad_Parms*)Obj)->bIsGamepad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnInputTypeChangedToGamepad_Statics::NewProp_bIsGamepad = { "bIsGamepad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuPrePlaningLoadoutSelection_eventOnInputTypeChangedToGamepad_Parms), &Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnInputTypeChangedToGamepad_Statics::NewProp_bIsGamepad_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnInputTypeChangedToGamepad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnInputTypeChangedToGamepad_Statics::NewProp_bIsGamepad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnInputTypeChangedToGamepad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlaningLoadoutSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnInputTypeChangedToGamepad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection, nullptr, "OnInputTypeChangedToGamepad", nullptr, nullptr, sizeof(SBZMainMenuPrePlaningLoadoutSelection_eventOnInputTypeChangedToGamepad_Parms), Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnInputTypeChangedToGamepad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnInputTypeChangedToGamepad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnInputTypeChangedToGamepad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnInputTypeChangedToGamepad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnInputTypeChangedToGamepad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnInputTypeChangedToGamepad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLoadoutDecrement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLoadoutDecrement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlaningLoadoutSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLoadoutDecrement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection, nullptr, "OnLoadoutDecrement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLoadoutDecrement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLoadoutDecrement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLoadoutDecrement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLoadoutDecrement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLoadoutIncrement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLoadoutIncrement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlaningLoadoutSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLoadoutIncrement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection, nullptr, "OnLoadoutIncrement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLoadoutIncrement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLoadoutIncrement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLoadoutIncrement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLoadoutIncrement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLocalLoadoutUpdated_Statics
	{
		struct SBZMainMenuPrePlaningLoadoutSelection_eventOnLocalLoadoutUpdated_Parms
		{
			FSBZPlayerLoadoutConfig InPlayerLoadout;
			int32 ModifiedPlayerLoadoutIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerLoadout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerLoadout;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ModifiedPlayerLoadoutIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLocalLoadoutUpdated_Statics::NewProp_InPlayerLoadout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLocalLoadoutUpdated_Statics::NewProp_InPlayerLoadout = { "InPlayerLoadout", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuPrePlaningLoadoutSelection_eventOnLocalLoadoutUpdated_Parms, InPlayerLoadout), Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLocalLoadoutUpdated_Statics::NewProp_InPlayerLoadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLocalLoadoutUpdated_Statics::NewProp_InPlayerLoadout_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLocalLoadoutUpdated_Statics::NewProp_ModifiedPlayerLoadoutIndex = { "ModifiedPlayerLoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuPrePlaningLoadoutSelection_eventOnLocalLoadoutUpdated_Parms, ModifiedPlayerLoadoutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLocalLoadoutUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLocalLoadoutUpdated_Statics::NewProp_InPlayerLoadout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLocalLoadoutUpdated_Statics::NewProp_ModifiedPlayerLoadoutIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLocalLoadoutUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlaningLoadoutSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLocalLoadoutUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection, nullptr, "OnLocalLoadoutUpdated", nullptr, nullptr, sizeof(SBZMainMenuPrePlaningLoadoutSelection_eventOnLocalLoadoutUpdated_Parms), Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLocalLoadoutUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLocalLoadoutUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLocalLoadoutUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLocalLoadoutUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLocalLoadoutUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLocalLoadoutUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_SetFocusedPlayerLoadoutIndex_Statics
	{
		struct SBZMainMenuPrePlaningLoadoutSelection_eventSetFocusedPlayerLoadoutIndex_Parms
		{
			int32 NewFocusedPlayerLoadoutIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewFocusedPlayerLoadoutIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_SetFocusedPlayerLoadoutIndex_Statics::NewProp_NewFocusedPlayerLoadoutIndex = { "NewFocusedPlayerLoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuPrePlaningLoadoutSelection_eventSetFocusedPlayerLoadoutIndex_Parms, NewFocusedPlayerLoadoutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_SetFocusedPlayerLoadoutIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_SetFocusedPlayerLoadoutIndex_Statics::NewProp_NewFocusedPlayerLoadoutIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_SetFocusedPlayerLoadoutIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlaningLoadoutSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_SetFocusedPlayerLoadoutIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection, nullptr, "SetFocusedPlayerLoadoutIndex", nullptr, nullptr, sizeof(SBZMainMenuPrePlaningLoadoutSelection_eventSetFocusedPlayerLoadoutIndex_Parms), Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_SetFocusedPlayerLoadoutIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_SetFocusedPlayerLoadoutIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_SetFocusedPlayerLoadoutIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_SetFocusedPlayerLoadoutIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_SetFocusedPlayerLoadoutIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_SetFocusedPlayerLoadoutIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_UnbindGamepadActions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_UnbindGamepadActions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlaningLoadoutSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_UnbindGamepadActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection, nullptr, "UnbindGamepadActions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_UnbindGamepadActions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_UnbindGamepadActions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_UnbindGamepadActions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_UnbindGamepadActions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_NoRegister()
	{
		return USBZMainMenuPrePlaningLoadoutSelection::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldUseActionBindings_MetaData[];
#endif
		static void NewProp_bShouldUseActionBindings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldUseActionBindings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFocusedPlayerLoadoutConfigChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFocusedPlayerLoadoutConfigChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusedPlayerLoadoutIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FocusedPlayerLoadoutIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValidLoadout_MetaData[];
#endif
		static void NewProp_bIsValidLoadout_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValidLoadout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveForwardActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MoveForwardActionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveBackwardActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MoveBackwardActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_ActiveLoadoutChanged, "ActiveLoadoutChanged" }, // 2031125894
		{ &Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_BindGamepadActions, "BindGamepadActions" }, // 656091948
		{ &Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_FocusedPlayerLoadoutConfigChanged, "FocusedPlayerLoadoutConfigChanged" }, // 60600880
		{ &Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_GetFocusedPlayerLoadoutIndex, "GetFocusedPlayerLoadoutIndex" }, // 4111434998
		{ &Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_IsFocusedPlayerLoadoutValid, "IsFocusedPlayerLoadoutValid" }, // 515283416
		{ &Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnActiveLoadoutChanged, "NativeOnActiveLoadoutChanged" }, // 1810699334
		{ &Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_NativeOnFocusedPlayerLoadoutConfigChanged, "NativeOnFocusedPlayerLoadoutConfigChanged" }, // 2406961678
		{ &Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnInputTypeChangedToGamepad, "OnInputTypeChangedToGamepad" }, // 2919961334
		{ &Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLoadoutDecrement, "OnLoadoutDecrement" }, // 176702658
		{ &Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLoadoutIncrement, "OnLoadoutIncrement" }, // 2001084742
		{ &Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_OnLocalLoadoutUpdated, "OnLocalLoadoutUpdated" }, // 2824546397
		{ &Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_SetFocusedPlayerLoadoutIndex, "SetFocusedPlayerLoadoutIndex" }, // 2298171819
		{ &Z_Construct_UFunction_USBZMainMenuPrePlaningLoadoutSelection_UnbindGamepadActions, "UnbindGamepadActions" }, // 926114505
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuPrePlaningLoadoutSelection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlaningLoadoutSelection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_bShouldUseActionBindings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPrePlaningLoadoutSelection" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlaningLoadoutSelection.h" },
	};
#endif
	void Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_bShouldUseActionBindings_SetBit(void* Obj)
	{
		((USBZMainMenuPrePlaningLoadoutSelection*)Obj)->bShouldUseActionBindings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_bShouldUseActionBindings = { "bShouldUseActionBindings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMainMenuPrePlaningLoadoutSelection), &Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_bShouldUseActionBindings_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_bShouldUseActionBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_bShouldUseActionBindings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_OnFocusedPlayerLoadoutConfigChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPrePlaningLoadoutSelection" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlaningLoadoutSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_OnFocusedPlayerLoadoutConfigChanged = { "OnFocusedPlayerLoadoutConfigChanged", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuPrePlaningLoadoutSelection, OnFocusedPlayerLoadoutConfigChanged), Z_Construct_UDelegateFunction_Starbreeze_OnPlayerLoadoutConfigChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_OnFocusedPlayerLoadoutConfigChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_OnFocusedPlayerLoadoutConfigChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_FocusedPlayerLoadoutIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPrePlaningLoadoutSelection" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlaningLoadoutSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_FocusedPlayerLoadoutIndex = { "FocusedPlayerLoadoutIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuPrePlaningLoadoutSelection, FocusedPlayerLoadoutIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_FocusedPlayerLoadoutIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_FocusedPlayerLoadoutIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_bIsValidLoadout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPrePlaningLoadoutSelection" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlaningLoadoutSelection.h" },
	};
#endif
	void Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_bIsValidLoadout_SetBit(void* Obj)
	{
		((USBZMainMenuPrePlaningLoadoutSelection*)Obj)->bIsValidLoadout = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_bIsValidLoadout = { "bIsValidLoadout", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMainMenuPrePlaningLoadoutSelection), &Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_bIsValidLoadout_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_bIsValidLoadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_bIsValidLoadout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_MoveForwardActionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPrePlaningLoadoutSelection" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlaningLoadoutSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_MoveForwardActionName = { "MoveForwardActionName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuPrePlaningLoadoutSelection, MoveForwardActionName), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_MoveForwardActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_MoveForwardActionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_MoveBackwardActionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPrePlaningLoadoutSelection" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlaningLoadoutSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_MoveBackwardActionName = { "MoveBackwardActionName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuPrePlaningLoadoutSelection, MoveBackwardActionName), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_MoveBackwardActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_MoveBackwardActionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_bShouldUseActionBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_OnFocusedPlayerLoadoutConfigChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_FocusedPlayerLoadoutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_bIsValidLoadout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_MoveForwardActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::NewProp_MoveBackwardActionName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuPrePlaningLoadoutSelection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::ClassParams = {
		&USBZMainMenuPrePlaningLoadoutSelection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuPrePlaningLoadoutSelection, 2149497779);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuPrePlaningLoadoutSelection>()
	{
		return USBZMainMenuPrePlaningLoadoutSelection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuPrePlaningLoadoutSelection(Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection, &USBZMainMenuPrePlaningLoadoutSelection::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuPrePlaningLoadoutSelection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuPrePlaningLoadoutSelection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

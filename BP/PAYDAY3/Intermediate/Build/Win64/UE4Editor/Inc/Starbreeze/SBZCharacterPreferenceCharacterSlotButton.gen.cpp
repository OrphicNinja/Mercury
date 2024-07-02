// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterPreferenceCharacterSlotButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterPreferenceCharacterSlotButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCharacterData_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnCharacterPreferenceSlotButtonSelected__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZCharacterPreferenceCharacterSlotButton::execGetDisplayIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDisplayIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterPreferenceCharacterSlotButton::execIsEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterPreferenceCharacterSlotButton::execIsLocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterPreferenceCharacterSlotButton::execSetActive)
	{
		P_GET_UBOOL(Z_Param_bInIsActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActive(Z_Param_bInIsActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterPreferenceCharacterSlotButton::execSetCharacterInSlot)
	{
		P_GET_OBJECT(USBZPlayerCharacterData,Z_Param_InCharacterInSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCharacterInSlot(Z_Param_InCharacterInSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterPreferenceCharacterSlotButton::execSetEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterPreferenceCharacterSlotButton::execSetIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InItemIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIndex(Z_Param_InItemIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterPreferenceCharacterSlotButton::execSetIndexNone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIndexNone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterPreferenceCharacterSlotButton::execSetLocked)
	{
		P_GET_UBOOL(Z_Param_bInIsLocked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocked(Z_Param_bInIsLocked);
		P_NATIVE_END;
	}
	static FName NAME_USBZCharacterPreferenceCharacterSlotButton_OnActiveChanged = FName(TEXT("OnActiveChanged"));
	void USBZCharacterPreferenceCharacterSlotButton::OnActiveChanged(bool bInIsActive)
	{
		SBZCharacterPreferenceCharacterSlotButton_eventOnActiveChanged_Parms Parms;
		Parms.bInIsActive=bInIsActive ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZCharacterPreferenceCharacterSlotButton_OnActiveChanged),&Parms);
	}
	static FName NAME_USBZCharacterPreferenceCharacterSlotButton_OnCharacterInSlotChanged = FName(TEXT("OnCharacterInSlotChanged"));
	void USBZCharacterPreferenceCharacterSlotButton::OnCharacterInSlotChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZCharacterPreferenceCharacterSlotButton_OnCharacterInSlotChanged),NULL);
	}
	static FName NAME_USBZCharacterPreferenceCharacterSlotButton_OnClicked = FName(TEXT("OnClicked"));
	void USBZCharacterPreferenceCharacterSlotButton::OnClicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZCharacterPreferenceCharacterSlotButton_OnClicked),NULL);
	}
	static FName NAME_USBZCharacterPreferenceCharacterSlotButton_OnEmptySet = FName(TEXT("OnEmptySet"));
	void USBZCharacterPreferenceCharacterSlotButton::OnEmptySet()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZCharacterPreferenceCharacterSlotButton_OnEmptySet),NULL);
	}
	static FName NAME_USBZCharacterPreferenceCharacterSlotButton_OnHovered = FName(TEXT("OnHovered"));
	void USBZCharacterPreferenceCharacterSlotButton::OnHovered(bool bIsHovered)
	{
		SBZCharacterPreferenceCharacterSlotButton_eventOnHovered_Parms Parms;
		Parms.bIsHovered=bIsHovered ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZCharacterPreferenceCharacterSlotButton_OnHovered),&Parms);
	}
	static FName NAME_USBZCharacterPreferenceCharacterSlotButton_OnIndexChanged = FName(TEXT("OnIndexChanged"));
	void USBZCharacterPreferenceCharacterSlotButton::OnIndexChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZCharacterPreferenceCharacterSlotButton_OnIndexChanged),NULL);
	}
	static FName NAME_USBZCharacterPreferenceCharacterSlotButton_OnLockedChanged = FName(TEXT("OnLockedChanged"));
	void USBZCharacterPreferenceCharacterSlotButton::OnLockedChanged(bool bInIsLocked)
	{
		SBZCharacterPreferenceCharacterSlotButton_eventOnLockedChanged_Parms Parms;
		Parms.bInIsLocked=bInIsLocked ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZCharacterPreferenceCharacterSlotButton_OnLockedChanged),&Parms);
	}
	void USBZCharacterPreferenceCharacterSlotButton::StaticRegisterNativesUSBZCharacterPreferenceCharacterSlotButton()
	{
		UClass* Class = USBZCharacterPreferenceCharacterSlotButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisplayIndex", &USBZCharacterPreferenceCharacterSlotButton::execGetDisplayIndex },
			{ "IsEmpty", &USBZCharacterPreferenceCharacterSlotButton::execIsEmpty },
			{ "IsLocked", &USBZCharacterPreferenceCharacterSlotButton::execIsLocked },
			{ "SetActive", &USBZCharacterPreferenceCharacterSlotButton::execSetActive },
			{ "SetCharacterInSlot", &USBZCharacterPreferenceCharacterSlotButton::execSetCharacterInSlot },
			{ "SetEmpty", &USBZCharacterPreferenceCharacterSlotButton::execSetEmpty },
			{ "SetIndex", &USBZCharacterPreferenceCharacterSlotButton::execSetIndex },
			{ "SetIndexNone", &USBZCharacterPreferenceCharacterSlotButton::execSetIndexNone },
			{ "SetLocked", &USBZCharacterPreferenceCharacterSlotButton::execSetLocked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_GetDisplayIndex_Statics
	{
		struct SBZCharacterPreferenceCharacterSlotButton_eventGetDisplayIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_GetDisplayIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterPreferenceCharacterSlotButton_eventGetDisplayIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_GetDisplayIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_GetDisplayIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_GetDisplayIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterPreferenceCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_GetDisplayIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton, nullptr, "GetDisplayIndex", nullptr, nullptr, sizeof(SBZCharacterPreferenceCharacterSlotButton_eventGetDisplayIndex_Parms), Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_GetDisplayIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_GetDisplayIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_GetDisplayIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_GetDisplayIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_GetDisplayIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_GetDisplayIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsEmpty_Statics
	{
		struct SBZCharacterPreferenceCharacterSlotButton_eventIsEmpty_Parms
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
	void Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZCharacterPreferenceCharacterSlotButton_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCharacterPreferenceCharacterSlotButton_eventIsEmpty_Parms), &Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsEmpty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterPreferenceCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton, nullptr, "IsEmpty", nullptr, nullptr, sizeof(SBZCharacterPreferenceCharacterSlotButton_eventIsEmpty_Parms), Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsLocked_Statics
	{
		struct SBZCharacterPreferenceCharacterSlotButton_eventIsLocked_Parms
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
	void Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZCharacterPreferenceCharacterSlotButton_eventIsLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCharacterPreferenceCharacterSlotButton_eventIsLocked_Parms), &Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsLocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterPreferenceCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton, nullptr, "IsLocked", nullptr, nullptr, sizeof(SBZCharacterPreferenceCharacterSlotButton_eventIsLocked_Parms), Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnActiveChanged_Statics
	{
		static void NewProp_bInIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnActiveChanged_Statics::NewProp_bInIsActive_SetBit(void* Obj)
	{
		((SBZCharacterPreferenceCharacterSlotButton_eventOnActiveChanged_Parms*)Obj)->bInIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnActiveChanged_Statics::NewProp_bInIsActive = { "bInIsActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCharacterPreferenceCharacterSlotButton_eventOnActiveChanged_Parms), &Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnActiveChanged_Statics::NewProp_bInIsActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnActiveChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnActiveChanged_Statics::NewProp_bInIsActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnActiveChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterPreferenceCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnActiveChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton, nullptr, "OnActiveChanged", nullptr, nullptr, sizeof(SBZCharacterPreferenceCharacterSlotButton_eventOnActiveChanged_Parms), Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnActiveChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnActiveChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnActiveChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnActiveChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnActiveChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnActiveChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnCharacterInSlotChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnCharacterInSlotChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterPreferenceCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnCharacterInSlotChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton, nullptr, "OnCharacterInSlotChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnCharacterInSlotChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnCharacterInSlotChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnCharacterInSlotChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnCharacterInSlotChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterPreferenceCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton, nullptr, "OnClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnEmptySet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnEmptySet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterPreferenceCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnEmptySet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton, nullptr, "OnEmptySet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnEmptySet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnEmptySet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnEmptySet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnEmptySet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnHovered_Statics
	{
		static void NewProp_bIsHovered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHovered;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnHovered_Statics::NewProp_bIsHovered_SetBit(void* Obj)
	{
		((SBZCharacterPreferenceCharacterSlotButton_eventOnHovered_Parms*)Obj)->bIsHovered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnHovered_Statics::NewProp_bIsHovered = { "bIsHovered", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCharacterPreferenceCharacterSlotButton_eventOnHovered_Parms), &Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnHovered_Statics::NewProp_bIsHovered_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnHovered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnHovered_Statics::NewProp_bIsHovered,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterPreferenceCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton, nullptr, "OnHovered", nullptr, nullptr, sizeof(SBZCharacterPreferenceCharacterSlotButton_eventOnHovered_Parms), Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnHovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnHovered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnIndexChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnIndexChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterPreferenceCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnIndexChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton, nullptr, "OnIndexChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnIndexChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnIndexChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnIndexChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnIndexChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnLockedChanged_Statics
	{
		static void NewProp_bInIsLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnLockedChanged_Statics::NewProp_bInIsLocked_SetBit(void* Obj)
	{
		((SBZCharacterPreferenceCharacterSlotButton_eventOnLockedChanged_Parms*)Obj)->bInIsLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnLockedChanged_Statics::NewProp_bInIsLocked = { "bInIsLocked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCharacterPreferenceCharacterSlotButton_eventOnLockedChanged_Parms), &Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnLockedChanged_Statics::NewProp_bInIsLocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnLockedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnLockedChanged_Statics::NewProp_bInIsLocked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnLockedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterPreferenceCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnLockedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton, nullptr, "OnLockedChanged", nullptr, nullptr, sizeof(SBZCharacterPreferenceCharacterSlotButton_eventOnLockedChanged_Parms), Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnLockedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnLockedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnLockedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnLockedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnLockedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnLockedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetActive_Statics
	{
		struct SBZCharacterPreferenceCharacterSlotButton_eventSetActive_Parms
		{
			bool bInIsActive;
		};
		static void NewProp_bInIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetActive_Statics::NewProp_bInIsActive_SetBit(void* Obj)
	{
		((SBZCharacterPreferenceCharacterSlotButton_eventSetActive_Parms*)Obj)->bInIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetActive_Statics::NewProp_bInIsActive = { "bInIsActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCharacterPreferenceCharacterSlotButton_eventSetActive_Parms), &Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetActive_Statics::NewProp_bInIsActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetActive_Statics::NewProp_bInIsActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterPreferenceCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton, nullptr, "SetActive", nullptr, nullptr, sizeof(SBZCharacterPreferenceCharacterSlotButton_eventSetActive_Parms), Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetCharacterInSlot_Statics
	{
		struct SBZCharacterPreferenceCharacterSlotButton_eventSetCharacterInSlot_Parms
		{
			const USBZPlayerCharacterData* InCharacterInSlot;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCharacterInSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCharacterInSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetCharacterInSlot_Statics::NewProp_InCharacterInSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetCharacterInSlot_Statics::NewProp_InCharacterInSlot = { "InCharacterInSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterPreferenceCharacterSlotButton_eventSetCharacterInSlot_Parms, InCharacterInSlot), Z_Construct_UClass_USBZPlayerCharacterData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetCharacterInSlot_Statics::NewProp_InCharacterInSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetCharacterInSlot_Statics::NewProp_InCharacterInSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetCharacterInSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetCharacterInSlot_Statics::NewProp_InCharacterInSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetCharacterInSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterPreferenceCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetCharacterInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton, nullptr, "SetCharacterInSlot", nullptr, nullptr, sizeof(SBZCharacterPreferenceCharacterSlotButton_eventSetCharacterInSlot_Parms), Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetCharacterInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetCharacterInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetCharacterInSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetCharacterInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetCharacterInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetCharacterInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetEmpty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterPreferenceCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton, nullptr, "SetEmpty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetIndex_Statics
	{
		struct SBZCharacterPreferenceCharacterSlotButton_eventSetIndex_Parms
		{
			int32 InItemIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InItemIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetIndex_Statics::NewProp_InItemIndex = { "InItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterPreferenceCharacterSlotButton_eventSetIndex_Parms, InItemIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetIndex_Statics::NewProp_InItemIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterPreferenceCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton, nullptr, "SetIndex", nullptr, nullptr, sizeof(SBZCharacterPreferenceCharacterSlotButton_eventSetIndex_Parms), Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetIndexNone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetIndexNone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterPreferenceCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetIndexNone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton, nullptr, "SetIndexNone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetIndexNone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetIndexNone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetIndexNone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetIndexNone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetLocked_Statics
	{
		struct SBZCharacterPreferenceCharacterSlotButton_eventSetLocked_Parms
		{
			bool bInIsLocked;
		};
		static void NewProp_bInIsLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetLocked_Statics::NewProp_bInIsLocked_SetBit(void* Obj)
	{
		((SBZCharacterPreferenceCharacterSlotButton_eventSetLocked_Parms*)Obj)->bInIsLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetLocked_Statics::NewProp_bInIsLocked = { "bInIsLocked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCharacterPreferenceCharacterSlotButton_eventSetLocked_Parms), &Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetLocked_Statics::NewProp_bInIsLocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetLocked_Statics::NewProp_bInIsLocked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetLocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterPreferenceCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton, nullptr, "SetLocked", nullptr, nullptr, sizeof(SBZCharacterPreferenceCharacterSlotButton_eventSetLocked_Parms), Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_NoRegister()
	{
		return USBZCharacterPreferenceCharacterSlotButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCharacterPreferenceSlotButtonSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterPreferenceSlotButtonSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLocked_MetaData[];
#endif
		static void NewProp_bIsLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterInSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterInSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_GetDisplayIndex, "GetDisplayIndex" }, // 68192681
		{ &Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsEmpty, "IsEmpty" }, // 3693324797
		{ &Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_IsLocked, "IsLocked" }, // 2855962770
		{ &Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnActiveChanged, "OnActiveChanged" }, // 3953451087
		{ &Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnCharacterInSlotChanged, "OnCharacterInSlotChanged" }, // 3406667595
		{ &Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnClicked, "OnClicked" }, // 1449911296
		{ &Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnEmptySet, "OnEmptySet" }, // 3965425613
		{ &Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnHovered, "OnHovered" }, // 949068430
		{ &Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnIndexChanged, "OnIndexChanged" }, // 777273450
		{ &Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_OnLockedChanged, "OnLockedChanged" }, // 2632786356
		{ &Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetActive, "SetActive" }, // 1316312307
		{ &Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetCharacterInSlot, "SetCharacterInSlot" }, // 2040232839
		{ &Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetEmpty, "SetEmpty" }, // 827346876
		{ &Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetIndex, "SetIndex" }, // 1065778864
		{ &Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetIndexNone, "SetIndexNone" }, // 2548570445
		{ &Z_Construct_UFunction_USBZCharacterPreferenceCharacterSlotButton_SetLocked, "SetLocked" }, // 2363984651
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCharacterPreferenceCharacterSlotButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterPreferenceCharacterSlotButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::NewProp_OnCharacterPreferenceSlotButtonSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterPreferenceCharacterSlotButton" },
		{ "ModuleRelativePath", "Public/SBZCharacterPreferenceCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::NewProp_OnCharacterPreferenceSlotButtonSelected = { "OnCharacterPreferenceSlotButtonSelected", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterPreferenceCharacterSlotButton, OnCharacterPreferenceSlotButtonSelected), Z_Construct_UDelegateFunction_Starbreeze_OnCharacterPreferenceSlotButtonSelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::NewProp_OnCharacterPreferenceSlotButtonSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::NewProp_OnCharacterPreferenceSlotButtonSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::NewProp_bIsLocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterPreferenceCharacterSlotButton" },
		{ "ModuleRelativePath", "Public/SBZCharacterPreferenceCharacterSlotButton.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::NewProp_bIsLocked_SetBit(void* Obj)
	{
		((USBZCharacterPreferenceCharacterSlotButton*)Obj)->bIsLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::NewProp_bIsLocked = { "bIsLocked", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZCharacterPreferenceCharacterSlotButton), &Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::NewProp_bIsLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::NewProp_bIsLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::NewProp_bIsLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::NewProp_ItemIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterPreferenceCharacterSlotButton" },
		{ "ModuleRelativePath", "Public/SBZCharacterPreferenceCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterPreferenceCharacterSlotButton, ItemIndex), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::NewProp_ItemIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::NewProp_ItemIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::NewProp_CharacterInSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterPreferenceCharacterSlotButton" },
		{ "ModuleRelativePath", "Public/SBZCharacterPreferenceCharacterSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::NewProp_CharacterInSlot = { "CharacterInSlot", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterPreferenceCharacterSlotButton, CharacterInSlot), Z_Construct_UClass_USBZPlayerCharacterData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::NewProp_CharacterInSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::NewProp_CharacterInSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::NewProp_OnCharacterPreferenceSlotButtonSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::NewProp_bIsLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::NewProp_ItemIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::NewProp_CharacterInSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCharacterPreferenceCharacterSlotButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::ClassParams = {
		&USBZCharacterPreferenceCharacterSlotButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCharacterPreferenceCharacterSlotButton, 1161221906);
	template<> STARBREEZE_API UClass* StaticClass<USBZCharacterPreferenceCharacterSlotButton>()
	{
		return USBZCharacterPreferenceCharacterSlotButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCharacterPreferenceCharacterSlotButton(Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton, &USBZCharacterPreferenceCharacterSlotButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCharacterPreferenceCharacterSlotButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCharacterPreferenceCharacterSlotButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

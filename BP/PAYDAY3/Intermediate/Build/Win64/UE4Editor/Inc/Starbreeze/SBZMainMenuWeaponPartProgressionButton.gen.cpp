// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuWeaponPartProgressionButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuWeaponPartProgressionButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZWeaponPartApplyStatus();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPartDataAsset_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuWeaponPartProgressionButton::execGetPartApplyStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZWeaponPartApplyStatus*)Z_Param__Result=P_THIS->GetPartApplyStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponPartProgressionButton::execGetUnlockLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetUnlockLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponPartProgressionButton::execGetWeaponPart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZWeaponPartDataAsset**)Z_Param__Result=P_THIS->GetWeaponPart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponPartProgressionButton::execGetWeaponPartProgression)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZWeaponPartProgressionCurrent*)Z_Param__Result=P_THIS->GetWeaponPartProgression();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponPartProgressionButton::execInitializeWeaponPartProgression)
	{
		P_GET_STRUCT_REF(FSBZWeaponPartProgressionCurrent,Z_Param_Out_InWeaponPartProgression);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeWeaponPartProgression(Z_Param_Out_InWeaponPartProgression);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponPartProgressionButton::execIsDefaultButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDefaultButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponPartProgressionButton::execSetEquipped)
	{
		P_GET_UBOOL(Z_Param_bInIsEquipped);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEquipped(Z_Param_bInIsEquipped);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponPartProgressionButton::execSetIsDefaultButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsDefaultButton();
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuWeaponPartProgressionButton_DefaultButtonSet = FName(TEXT("DefaultButtonSet"));
	void USBZMainMenuWeaponPartProgressionButton::DefaultButtonSet()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponPartProgressionButton_DefaultButtonSet),NULL);
	}
	static FName NAME_USBZMainMenuWeaponPartProgressionButton_OnEquippedChanged = FName(TEXT("OnEquippedChanged"));
	void USBZMainMenuWeaponPartProgressionButton::OnEquippedChanged(bool bInIsEquipped)
	{
		SBZMainMenuWeaponPartProgressionButton_eventOnEquippedChanged_Parms Parms;
		Parms.bInIsEquipped=bInIsEquipped ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponPartProgressionButton_OnEquippedChanged),&Parms);
	}
	static FName NAME_USBZMainMenuWeaponPartProgressionButton_WeaponPartProgressionInitialized = FName(TEXT("WeaponPartProgressionInitialized"));
	void USBZMainMenuWeaponPartProgressionButton::WeaponPartProgressionInitialized(FSBZWeaponPartProgressionCurrent const& InWeaponPartProgression)
	{
		SBZMainMenuWeaponPartProgressionButton_eventWeaponPartProgressionInitialized_Parms Parms;
		Parms.InWeaponPartProgression=InWeaponPartProgression;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponPartProgressionButton_WeaponPartProgressionInitialized),&Parms);
	}
	void USBZMainMenuWeaponPartProgressionButton::StaticRegisterNativesUSBZMainMenuWeaponPartProgressionButton()
	{
		UClass* Class = USBZMainMenuWeaponPartProgressionButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPartApplyStatus", &USBZMainMenuWeaponPartProgressionButton::execGetPartApplyStatus },
			{ "GetUnlockLevel", &USBZMainMenuWeaponPartProgressionButton::execGetUnlockLevel },
			{ "GetWeaponPart", &USBZMainMenuWeaponPartProgressionButton::execGetWeaponPart },
			{ "GetWeaponPartProgression", &USBZMainMenuWeaponPartProgressionButton::execGetWeaponPartProgression },
			{ "InitializeWeaponPartProgression", &USBZMainMenuWeaponPartProgressionButton::execInitializeWeaponPartProgression },
			{ "IsDefaultButton", &USBZMainMenuWeaponPartProgressionButton::execIsDefaultButton },
			{ "SetEquipped", &USBZMainMenuWeaponPartProgressionButton::execSetEquipped },
			{ "SetIsDefaultButton", &USBZMainMenuWeaponPartProgressionButton::execSetIsDefaultButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_DefaultButtonSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_DefaultButtonSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponPartProgressionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_DefaultButtonSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton, nullptr, "DefaultButtonSet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_DefaultButtonSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_DefaultButtonSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_DefaultButtonSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_DefaultButtonSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetPartApplyStatus_Statics
	{
		struct SBZMainMenuWeaponPartProgressionButton_eventGetPartApplyStatus_Parms
		{
			ESBZWeaponPartApplyStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetPartApplyStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetPartApplyStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponPartProgressionButton_eventGetPartApplyStatus_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZWeaponPartApplyStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetPartApplyStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetPartApplyStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetPartApplyStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetPartApplyStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponPartProgressionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetPartApplyStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton, nullptr, "GetPartApplyStatus", nullptr, nullptr, sizeof(SBZMainMenuWeaponPartProgressionButton_eventGetPartApplyStatus_Parms), Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetPartApplyStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetPartApplyStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetPartApplyStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetPartApplyStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetPartApplyStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetPartApplyStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetUnlockLevel_Statics
	{
		struct SBZMainMenuWeaponPartProgressionButton_eventGetUnlockLevel_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetUnlockLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponPartProgressionButton_eventGetUnlockLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetUnlockLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetUnlockLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetUnlockLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponPartProgressionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetUnlockLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton, nullptr, "GetUnlockLevel", nullptr, nullptr, sizeof(SBZMainMenuWeaponPartProgressionButton_eventGetUnlockLevel_Parms), Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetUnlockLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetUnlockLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetUnlockLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetUnlockLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetUnlockLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetUnlockLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPart_Statics
	{
		struct SBZMainMenuWeaponPartProgressionButton_eventGetWeaponPart_Parms
		{
			const USBZWeaponPartDataAsset* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponPartProgressionButton_eventGetWeaponPart_Parms, ReturnValue), Z_Construct_UClass_USBZWeaponPartDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponPartProgressionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton, nullptr, "GetWeaponPart", nullptr, nullptr, sizeof(SBZMainMenuWeaponPartProgressionButton_eventGetWeaponPart_Parms), Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPartProgression_Statics
	{
		struct SBZMainMenuWeaponPartProgressionButton_eventGetWeaponPartProgression_Parms
		{
			FSBZWeaponPartProgressionCurrent ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPartProgression_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponPartProgressionButton_eventGetWeaponPartProgression_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPartProgression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPartProgression_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPartProgression_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponPartProgressionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPartProgression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton, nullptr, "GetWeaponPartProgression", nullptr, nullptr, sizeof(SBZMainMenuWeaponPartProgressionButton_eventGetWeaponPartProgression_Parms), Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPartProgression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPartProgression_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPartProgression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPartProgression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPartProgression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPartProgression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_InitializeWeaponPartProgression_Statics
	{
		struct SBZMainMenuWeaponPartProgressionButton_eventInitializeWeaponPartProgression_Parms
		{
			FSBZWeaponPartProgressionCurrent InWeaponPartProgression;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWeaponPartProgression_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InWeaponPartProgression;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_InitializeWeaponPartProgression_Statics::NewProp_InWeaponPartProgression_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_InitializeWeaponPartProgression_Statics::NewProp_InWeaponPartProgression = { "InWeaponPartProgression", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponPartProgressionButton_eventInitializeWeaponPartProgression_Parms, InWeaponPartProgression), Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_InitializeWeaponPartProgression_Statics::NewProp_InWeaponPartProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_InitializeWeaponPartProgression_Statics::NewProp_InWeaponPartProgression_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_InitializeWeaponPartProgression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_InitializeWeaponPartProgression_Statics::NewProp_InWeaponPartProgression,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_InitializeWeaponPartProgression_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponPartProgressionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_InitializeWeaponPartProgression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton, nullptr, "InitializeWeaponPartProgression", nullptr, nullptr, sizeof(SBZMainMenuWeaponPartProgressionButton_eventInitializeWeaponPartProgression_Parms), Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_InitializeWeaponPartProgression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_InitializeWeaponPartProgression_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_InitializeWeaponPartProgression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_InitializeWeaponPartProgression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_InitializeWeaponPartProgression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_InitializeWeaponPartProgression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_IsDefaultButton_Statics
	{
		struct SBZMainMenuWeaponPartProgressionButton_eventIsDefaultButton_Parms
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
	void Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_IsDefaultButton_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponPartProgressionButton_eventIsDefaultButton_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_IsDefaultButton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponPartProgressionButton_eventIsDefaultButton_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_IsDefaultButton_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_IsDefaultButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_IsDefaultButton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_IsDefaultButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponPartProgressionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_IsDefaultButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton, nullptr, "IsDefaultButton", nullptr, nullptr, sizeof(SBZMainMenuWeaponPartProgressionButton_eventIsDefaultButton_Parms), Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_IsDefaultButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_IsDefaultButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_IsDefaultButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_IsDefaultButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_IsDefaultButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_IsDefaultButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_OnEquippedChanged_Statics
	{
		static void NewProp_bInIsEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsEquipped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_OnEquippedChanged_Statics::NewProp_bInIsEquipped_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponPartProgressionButton_eventOnEquippedChanged_Parms*)Obj)->bInIsEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_OnEquippedChanged_Statics::NewProp_bInIsEquipped = { "bInIsEquipped", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponPartProgressionButton_eventOnEquippedChanged_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_OnEquippedChanged_Statics::NewProp_bInIsEquipped_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_OnEquippedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_OnEquippedChanged_Statics::NewProp_bInIsEquipped,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_OnEquippedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponPartProgressionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_OnEquippedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton, nullptr, "OnEquippedChanged", nullptr, nullptr, sizeof(SBZMainMenuWeaponPartProgressionButton_eventOnEquippedChanged_Parms), Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_OnEquippedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_OnEquippedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_OnEquippedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_OnEquippedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_OnEquippedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_OnEquippedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_SetEquipped_Statics
	{
		struct SBZMainMenuWeaponPartProgressionButton_eventSetEquipped_Parms
		{
			bool bInIsEquipped;
		};
		static void NewProp_bInIsEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsEquipped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_SetEquipped_Statics::NewProp_bInIsEquipped_SetBit(void* Obj)
	{
		((SBZMainMenuWeaponPartProgressionButton_eventSetEquipped_Parms*)Obj)->bInIsEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_SetEquipped_Statics::NewProp_bInIsEquipped = { "bInIsEquipped", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuWeaponPartProgressionButton_eventSetEquipped_Parms), &Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_SetEquipped_Statics::NewProp_bInIsEquipped_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_SetEquipped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_SetEquipped_Statics::NewProp_bInIsEquipped,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_SetEquipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponPartProgressionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_SetEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton, nullptr, "SetEquipped", nullptr, nullptr, sizeof(SBZMainMenuWeaponPartProgressionButton_eventSetEquipped_Parms), Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_SetEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_SetEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_SetEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_SetEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_SetEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_SetEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_SetIsDefaultButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_SetIsDefaultButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponPartProgressionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_SetIsDefaultButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton, nullptr, "SetIsDefaultButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_SetIsDefaultButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_SetIsDefaultButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_SetIsDefaultButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_SetIsDefaultButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_WeaponPartProgressionInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWeaponPartProgression_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InWeaponPartProgression;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_WeaponPartProgressionInitialized_Statics::NewProp_InWeaponPartProgression_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_WeaponPartProgressionInitialized_Statics::NewProp_InWeaponPartProgression = { "InWeaponPartProgression", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponPartProgressionButton_eventWeaponPartProgressionInitialized_Parms, InWeaponPartProgression), Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_WeaponPartProgressionInitialized_Statics::NewProp_InWeaponPartProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_WeaponPartProgressionInitialized_Statics::NewProp_InWeaponPartProgression_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_WeaponPartProgressionInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_WeaponPartProgressionInitialized_Statics::NewProp_InWeaponPartProgression,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_WeaponPartProgressionInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponPartProgressionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_WeaponPartProgressionInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton, nullptr, "WeaponPartProgressionInitialized", nullptr, nullptr, sizeof(SBZMainMenuWeaponPartProgressionButton_eventWeaponPartProgressionInitialized_Parms), Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_WeaponPartProgressionInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_WeaponPartProgressionInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_WeaponPartProgressionInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_WeaponPartProgressionInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_WeaponPartProgressionInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_WeaponPartProgressionInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_NoRegister()
	{
		return USBZMainMenuWeaponPartProgressionButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPartProgression_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponPartProgression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEquipped_MetaData[];
#endif
		static void NewProp_bIsEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEquipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDefault_MetaData[];
#endif
		static void NewProp_bIsDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDefault;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_DefaultButtonSet, "DefaultButtonSet" }, // 3539841056
		{ &Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetPartApplyStatus, "GetPartApplyStatus" }, // 3716481661
		{ &Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetUnlockLevel, "GetUnlockLevel" }, // 413433306
		{ &Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPart, "GetWeaponPart" }, // 1676286355
		{ &Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_GetWeaponPartProgression, "GetWeaponPartProgression" }, // 1749443634
		{ &Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_InitializeWeaponPartProgression, "InitializeWeaponPartProgression" }, // 2614284616
		{ &Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_IsDefaultButton, "IsDefaultButton" }, // 1008433540
		{ &Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_OnEquippedChanged, "OnEquippedChanged" }, // 746130299
		{ &Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_SetEquipped, "SetEquipped" }, // 2951277983
		{ &Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_SetIsDefaultButton, "SetIsDefaultButton" }, // 3017016186
		{ &Z_Construct_UFunction_USBZMainMenuWeaponPartProgressionButton_WeaponPartProgressionInitialized, "WeaponPartProgressionInitialized" }, // 1165370176
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuWeaponPartProgressionButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponPartProgressionButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::NewProp_WeaponPartProgression_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponPartProgressionButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponPartProgressionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::NewProp_WeaponPartProgression = { "WeaponPartProgression", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponPartProgressionButton, WeaponPartProgression), Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::NewProp_WeaponPartProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::NewProp_WeaponPartProgression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::NewProp_bIsEquipped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponPartProgressionButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponPartProgressionButton.h" },
	};
#endif
	void Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::NewProp_bIsEquipped_SetBit(void* Obj)
	{
		((USBZMainMenuWeaponPartProgressionButton*)Obj)->bIsEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::NewProp_bIsEquipped = { "bIsEquipped", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMainMenuWeaponPartProgressionButton), &Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::NewProp_bIsEquipped_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::NewProp_bIsEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::NewProp_bIsEquipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::NewProp_bIsDefault_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponPartProgressionButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponPartProgressionButton.h" },
	};
#endif
	void Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::NewProp_bIsDefault_SetBit(void* Obj)
	{
		((USBZMainMenuWeaponPartProgressionButton*)Obj)->bIsDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::NewProp_bIsDefault = { "bIsDefault", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMainMenuWeaponPartProgressionButton), &Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::NewProp_bIsDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::NewProp_bIsDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::NewProp_bIsDefault_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::NewProp_WeaponPartProgression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::NewProp_bIsEquipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::NewProp_bIsDefault,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuWeaponPartProgressionButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::ClassParams = {
		&USBZMainMenuWeaponPartProgressionButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuWeaponPartProgressionButton, 3667665749);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuWeaponPartProgressionButton>()
	{
		return USBZMainMenuWeaponPartProgressionButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuWeaponPartProgressionButton(Z_Construct_UClass_USBZMainMenuWeaponPartProgressionButton, &USBZMainMenuWeaponPartProgressionButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuWeaponPartProgressionButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuWeaponPartProgressionButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

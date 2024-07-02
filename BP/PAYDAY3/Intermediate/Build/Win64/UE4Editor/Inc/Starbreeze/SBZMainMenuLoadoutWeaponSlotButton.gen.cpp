// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuLoadoutWeaponSlotButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuLoadoutWeaponSlotButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponInventorySlot();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuLoadoutWeaponSlotButton::execGetEntitlementAndWeaponID)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_EntitlementID);
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_ItemID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetEntitlementAndWeaponID(Z_Param_Out_EntitlementID,Z_Param_Out_ItemID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuLoadoutWeaponSlotButton::execGetEquippableSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZEquippableLoadoutSlot*)Z_Param__Result=P_THIS->GetEquippableSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuLoadoutWeaponSlotButton::execGetWeaponInSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZEquippableData**)Z_Param__Result=P_THIS->GetWeaponInSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuLoadoutWeaponSlotButton::execGetWeaponInSlotLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWeaponInSlotLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuLoadoutWeaponSlotButton::execGetWeaponInventoryData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZInventoryBaseData**)Z_Param__Result=P_THIS->GetWeaponInventoryData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuLoadoutWeaponSlotButton::execGetWeaponSlotIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWeaponSlotIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuLoadoutWeaponSlotButton::execInitializeWeaponSlot)
	{
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_InEquippableSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_InWeaponSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeWeaponSlot(ESBZEquippableLoadoutSlot(Z_Param_InEquippableSlot),Z_Param_InWeaponSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuLoadoutWeaponSlotButton::execIsEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuLoadoutWeaponSlotButton::execIsPresetWeaponSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPresetWeaponSlot();
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuLoadoutWeaponSlotButton_OnWeaponSlotInitialized = FName(TEXT("OnWeaponSlotInitialized"));
	void USBZMainMenuLoadoutWeaponSlotButton::OnWeaponSlotInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuLoadoutWeaponSlotButton_OnWeaponSlotInitialized),NULL);
	}
	static FName NAME_USBZMainMenuLoadoutWeaponSlotButton_SetActiveWeaponSlot = FName(TEXT("SetActiveWeaponSlot"));
	void USBZMainMenuLoadoutWeaponSlotButton::SetActiveWeaponSlot(bool bIsActiveWeaponSlot)
	{
		SBZMainMenuLoadoutWeaponSlotButton_eventSetActiveWeaponSlot_Parms Parms;
		Parms.bIsActiveWeaponSlot=bIsActiveWeaponSlot ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuLoadoutWeaponSlotButton_SetActiveWeaponSlot),&Parms);
	}
	void USBZMainMenuLoadoutWeaponSlotButton::StaticRegisterNativesUSBZMainMenuLoadoutWeaponSlotButton()
	{
		UClass* Class = USBZMainMenuLoadoutWeaponSlotButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEntitlementAndWeaponID", &USBZMainMenuLoadoutWeaponSlotButton::execGetEntitlementAndWeaponID },
			{ "GetEquippableSlot", &USBZMainMenuLoadoutWeaponSlotButton::execGetEquippableSlot },
			{ "GetWeaponInSlot", &USBZMainMenuLoadoutWeaponSlotButton::execGetWeaponInSlot },
			{ "GetWeaponInSlotLevel", &USBZMainMenuLoadoutWeaponSlotButton::execGetWeaponInSlotLevel },
			{ "GetWeaponInventoryData", &USBZMainMenuLoadoutWeaponSlotButton::execGetWeaponInventoryData },
			{ "GetWeaponSlotIndex", &USBZMainMenuLoadoutWeaponSlotButton::execGetWeaponSlotIndex },
			{ "InitializeWeaponSlot", &USBZMainMenuLoadoutWeaponSlotButton::execInitializeWeaponSlot },
			{ "IsEmpty", &USBZMainMenuLoadoutWeaponSlotButton::execIsEmpty },
			{ "IsPresetWeaponSlot", &USBZMainMenuLoadoutWeaponSlotButton::execIsPresetWeaponSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEntitlementAndWeaponID_Statics
	{
		struct SBZMainMenuLoadoutWeaponSlotButton_eventGetEntitlementAndWeaponID_Parms
		{
			FGuid EntitlementID;
			FGuid ItemID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntitlementID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEntitlementAndWeaponID_Statics::NewProp_EntitlementID = { "EntitlementID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutWeaponSlotButton_eventGetEntitlementAndWeaponID_Parms, EntitlementID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEntitlementAndWeaponID_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutWeaponSlotButton_eventGetEntitlementAndWeaponID_Parms, ItemID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEntitlementAndWeaponID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEntitlementAndWeaponID_Statics::NewProp_EntitlementID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEntitlementAndWeaponID_Statics::NewProp_ItemID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEntitlementAndWeaponID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEntitlementAndWeaponID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton, nullptr, "GetEntitlementAndWeaponID", nullptr, nullptr, sizeof(SBZMainMenuLoadoutWeaponSlotButton_eventGetEntitlementAndWeaponID_Parms), Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEntitlementAndWeaponID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEntitlementAndWeaponID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEntitlementAndWeaponID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEntitlementAndWeaponID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEntitlementAndWeaponID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEntitlementAndWeaponID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEquippableSlot_Statics
	{
		struct SBZMainMenuLoadoutWeaponSlotButton_eventGetEquippableSlot_Parms
		{
			ESBZEquippableLoadoutSlot ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEquippableSlot_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEquippableSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutWeaponSlotButton_eventGetEquippableSlot_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEquippableSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEquippableSlot_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEquippableSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEquippableSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEquippableSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton, nullptr, "GetEquippableSlot", nullptr, nullptr, sizeof(SBZMainMenuLoadoutWeaponSlotButton_eventGetEquippableSlot_Parms), Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEquippableSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEquippableSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEquippableSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEquippableSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEquippableSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEquippableSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlot_Statics
	{
		struct SBZMainMenuLoadoutWeaponSlotButton_eventGetWeaponInSlot_Parms
		{
			USBZEquippableData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutWeaponSlotButton_eventGetWeaponInSlot_Parms, ReturnValue), Z_Construct_UClass_USBZEquippableData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton, nullptr, "GetWeaponInSlot", nullptr, nullptr, sizeof(SBZMainMenuLoadoutWeaponSlotButton_eventGetWeaponInSlot_Parms), Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlotLevel_Statics
	{
		struct SBZMainMenuLoadoutWeaponSlotButton_eventGetWeaponInSlotLevel_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlotLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutWeaponSlotButton_eventGetWeaponInSlotLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlotLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlotLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlotLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlotLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton, nullptr, "GetWeaponInSlotLevel", nullptr, nullptr, sizeof(SBZMainMenuLoadoutWeaponSlotButton_eventGetWeaponInSlotLevel_Parms), Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlotLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlotLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlotLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlotLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlotLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlotLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInventoryData_Statics
	{
		struct SBZMainMenuLoadoutWeaponSlotButton_eventGetWeaponInventoryData_Parms
		{
			USBZInventoryBaseData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInventoryData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutWeaponSlotButton_eventGetWeaponInventoryData_Parms, ReturnValue), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInventoryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInventoryData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInventoryData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInventoryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton, nullptr, "GetWeaponInventoryData", nullptr, nullptr, sizeof(SBZMainMenuLoadoutWeaponSlotButton_eventGetWeaponInventoryData_Parms), Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInventoryData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInventoryData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInventoryData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInventoryData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInventoryData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInventoryData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponSlotIndex_Statics
	{
		struct SBZMainMenuLoadoutWeaponSlotButton_eventGetWeaponSlotIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponSlotIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutWeaponSlotButton_eventGetWeaponSlotIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponSlotIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponSlotIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponSlotIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponSlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton, nullptr, "GetWeaponSlotIndex", nullptr, nullptr, sizeof(SBZMainMenuLoadoutWeaponSlotButton_eventGetWeaponSlotIndex_Parms), Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponSlotIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponSlotIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponSlotIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponSlotIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponSlotIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponSlotIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_InitializeWeaponSlot_Statics
	{
		struct SBZMainMenuLoadoutWeaponSlotButton_eventInitializeWeaponSlot_Parms
		{
			ESBZEquippableLoadoutSlot InEquippableSlot;
			int32 InWeaponSlotIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InEquippableSlot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InEquippableSlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InWeaponSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_InitializeWeaponSlot_Statics::NewProp_InEquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_InitializeWeaponSlot_Statics::NewProp_InEquippableSlot = { "InEquippableSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutWeaponSlotButton_eventInitializeWeaponSlot_Parms, InEquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_InitializeWeaponSlot_Statics::NewProp_InWeaponSlotIndex = { "InWeaponSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutWeaponSlotButton_eventInitializeWeaponSlot_Parms, InWeaponSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_InitializeWeaponSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_InitializeWeaponSlot_Statics::NewProp_InEquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_InitializeWeaponSlot_Statics::NewProp_InEquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_InitializeWeaponSlot_Statics::NewProp_InWeaponSlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_InitializeWeaponSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_InitializeWeaponSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton, nullptr, "InitializeWeaponSlot", nullptr, nullptr, sizeof(SBZMainMenuLoadoutWeaponSlotButton_eventInitializeWeaponSlot_Parms), Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_InitializeWeaponSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_InitializeWeaponSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_InitializeWeaponSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_InitializeWeaponSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_InitializeWeaponSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_InitializeWeaponSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsEmpty_Statics
	{
		struct SBZMainMenuLoadoutWeaponSlotButton_eventIsEmpty_Parms
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
	void Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuLoadoutWeaponSlotButton_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuLoadoutWeaponSlotButton_eventIsEmpty_Parms), &Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsEmpty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton, nullptr, "IsEmpty", nullptr, nullptr, sizeof(SBZMainMenuLoadoutWeaponSlotButton_eventIsEmpty_Parms), Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsPresetWeaponSlot_Statics
	{
		struct SBZMainMenuLoadoutWeaponSlotButton_eventIsPresetWeaponSlot_Parms
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
	void Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsPresetWeaponSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuLoadoutWeaponSlotButton_eventIsPresetWeaponSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsPresetWeaponSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuLoadoutWeaponSlotButton_eventIsPresetWeaponSlot_Parms), &Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsPresetWeaponSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsPresetWeaponSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsPresetWeaponSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsPresetWeaponSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsPresetWeaponSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton, nullptr, "IsPresetWeaponSlot", nullptr, nullptr, sizeof(SBZMainMenuLoadoutWeaponSlotButton_eventIsPresetWeaponSlot_Parms), Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsPresetWeaponSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsPresetWeaponSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsPresetWeaponSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsPresetWeaponSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsPresetWeaponSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsPresetWeaponSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_OnWeaponSlotInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_OnWeaponSlotInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_OnWeaponSlotInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton, nullptr, "OnWeaponSlotInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_OnWeaponSlotInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_OnWeaponSlotInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_OnWeaponSlotInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_OnWeaponSlotInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_SetActiveWeaponSlot_Statics
	{
		static void NewProp_bIsActiveWeaponSlot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActiveWeaponSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_SetActiveWeaponSlot_Statics::NewProp_bIsActiveWeaponSlot_SetBit(void* Obj)
	{
		((SBZMainMenuLoadoutWeaponSlotButton_eventSetActiveWeaponSlot_Parms*)Obj)->bIsActiveWeaponSlot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_SetActiveWeaponSlot_Statics::NewProp_bIsActiveWeaponSlot = { "bIsActiveWeaponSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuLoadoutWeaponSlotButton_eventSetActiveWeaponSlot_Parms), &Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_SetActiveWeaponSlot_Statics::NewProp_bIsActiveWeaponSlot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_SetActiveWeaponSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_SetActiveWeaponSlot_Statics::NewProp_bIsActiveWeaponSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_SetActiveWeaponSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_SetActiveWeaponSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton, nullptr, "SetActiveWeaponSlot", nullptr, nullptr, sizeof(SBZMainMenuLoadoutWeaponSlotButton_eventSetActiveWeaponSlot_Parms), Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_SetActiveWeaponSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_SetActiveWeaponSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_SetActiveWeaponSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_SetActiveWeaponSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_SetActiveWeaponSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_SetActiveWeaponSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_NoRegister()
	{
		return USBZMainMenuLoadoutWeaponSlotButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquippableSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EquippableSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEntitlementAndWeaponID, "GetEntitlementAndWeaponID" }, // 3755734609
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetEquippableSlot, "GetEquippableSlot" }, // 3193295042
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlot, "GetWeaponInSlot" }, // 2510558880
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInSlotLevel, "GetWeaponInSlotLevel" }, // 2829527418
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponInventoryData, "GetWeaponInventoryData" }, // 370468665
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_GetWeaponSlotIndex, "GetWeaponSlotIndex" }, // 645291600
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_InitializeWeaponSlot, "InitializeWeaponSlot" }, // 2923407825
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsEmpty, "IsEmpty" }, // 476882232
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_IsPresetWeaponSlot, "IsPresetWeaponSlot" }, // 1367646587
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_OnWeaponSlotInitialized, "OnWeaponSlotInitialized" }, // 3388085314
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutWeaponSlotButton_SetActiveWeaponSlot, "SetActiveWeaponSlot" }, // 1736576241
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuLoadoutWeaponSlotButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponSlotButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::NewProp_WeaponSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuLoadoutWeaponSlotButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::NewProp_WeaponSlot = { "WeaponSlot", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuLoadoutWeaponSlotButton, WeaponSlot), Z_Construct_UScriptStruct_FSBZWeaponInventorySlot, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::NewProp_WeaponSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::NewProp_WeaponSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::NewProp_EquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::NewProp_EquippableSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuLoadoutWeaponSlotButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::NewProp_EquippableSlot = { "EquippableSlot", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuLoadoutWeaponSlotButton, EquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::NewProp_EquippableSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::NewProp_EquippableSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::NewProp_WeaponSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuLoadoutWeaponSlotButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutWeaponSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::NewProp_WeaponSlotIndex = { "WeaponSlotIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuLoadoutWeaponSlotButton, WeaponSlotIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::NewProp_WeaponSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::NewProp_WeaponSlotIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::NewProp_WeaponSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::NewProp_EquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::NewProp_EquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::NewProp_WeaponSlotIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuLoadoutWeaponSlotButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::ClassParams = {
		&USBZMainMenuLoadoutWeaponSlotButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuLoadoutWeaponSlotButton, 4103095617);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuLoadoutWeaponSlotButton>()
	{
		return USBZMainMenuLoadoutWeaponSlotButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuLoadoutWeaponSlotButton(Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton, &USBZMainMenuLoadoutWeaponSlotButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuLoadoutWeaponSlotButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuLoadoutWeaponSlotButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

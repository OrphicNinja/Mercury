// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuInventoryItemSlotButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuInventoryItemSlotButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZUIItemSource();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuInventoryItemSlotButton::execGetInfamyLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInfamyLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryItemSlotButton::execGetItemData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZInventoryBaseData**)Z_Param__Result=P_THIS->GetItemData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryItemSlotButton::execGetItemSource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZUIItemSource*)Z_Param__Result=P_THIS->GetItemSource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryItemSlotButton::execGetSkillName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetSkillName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryItemSlotButton::execInitializeInventoryItem)
	{
		P_GET_STRUCT_REF(FSBZPlayerUiItemInfo,Z_Param_Out_InItemData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeInventoryItem(Z_Param_Out_InItemData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryItemSlotButton::execInitializeItem)
	{
		P_GET_OBJECT(USBZInventoryBaseData,Z_Param_InventoryBaseData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeItem(Z_Param_InventoryBaseData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuInventoryItemSlotButton::execIsAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAvailable();
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuInventoryItemSlotButton_OnItemDataInitialized = FName(TEXT("OnItemDataInitialized"));
	void USBZMainMenuInventoryItemSlotButton::OnItemDataInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuInventoryItemSlotButton_OnItemDataInitialized),NULL);
	}
	static FName NAME_USBZMainMenuInventoryItemSlotButton_SetActiveItem = FName(TEXT("SetActiveItem"));
	void USBZMainMenuInventoryItemSlotButton::SetActiveItem(bool bIsActiveItem)
	{
		SBZMainMenuInventoryItemSlotButton_eventSetActiveItem_Parms Parms;
		Parms.bIsActiveItem=bIsActiveItem ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuInventoryItemSlotButton_SetActiveItem),&Parms);
	}
	void USBZMainMenuInventoryItemSlotButton::StaticRegisterNativesUSBZMainMenuInventoryItemSlotButton()
	{
		UClass* Class = USBZMainMenuInventoryItemSlotButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInfamyLevel", &USBZMainMenuInventoryItemSlotButton::execGetInfamyLevel },
			{ "GetItemData", &USBZMainMenuInventoryItemSlotButton::execGetItemData },
			{ "GetItemSource", &USBZMainMenuInventoryItemSlotButton::execGetItemSource },
			{ "GetSkillName", &USBZMainMenuInventoryItemSlotButton::execGetSkillName },
			{ "InitializeInventoryItem", &USBZMainMenuInventoryItemSlotButton::execInitializeInventoryItem },
			{ "InitializeItem", &USBZMainMenuInventoryItemSlotButton::execInitializeItem },
			{ "IsAvailable", &USBZMainMenuInventoryItemSlotButton::execIsAvailable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetInfamyLevel_Statics
	{
		struct SBZMainMenuInventoryItemSlotButton_eventGetInfamyLevel_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetInfamyLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryItemSlotButton_eventGetInfamyLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetInfamyLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetInfamyLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetInfamyLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryItemSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetInfamyLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton, nullptr, "GetInfamyLevel", nullptr, nullptr, sizeof(SBZMainMenuInventoryItemSlotButton_eventGetInfamyLevel_Parms), Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetInfamyLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetInfamyLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetInfamyLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetInfamyLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetInfamyLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetInfamyLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemData_Statics
	{
		struct SBZMainMenuInventoryItemSlotButton_eventGetItemData_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryItemSlotButton_eventGetItemData_Parms, ReturnValue), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryItemSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton, nullptr, "GetItemData", nullptr, nullptr, sizeof(SBZMainMenuInventoryItemSlotButton_eventGetItemData_Parms), Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemSource_Statics
	{
		struct SBZMainMenuInventoryItemSlotButton_eventGetItemSource_Parms
		{
			ESBZUIItemSource ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemSource_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryItemSlotButton_eventGetItemSource_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZUIItemSource, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemSource_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemSource_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryItemSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton, nullptr, "GetItemSource", nullptr, nullptr, sizeof(SBZMainMenuInventoryItemSlotButton_eventGetItemSource_Parms), Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetSkillName_Statics
	{
		struct SBZMainMenuInventoryItemSlotButton_eventGetSkillName_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetSkillName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryItemSlotButton_eventGetSkillName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetSkillName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetSkillName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetSkillName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryItemSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetSkillName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton, nullptr, "GetSkillName", nullptr, nullptr, sizeof(SBZMainMenuInventoryItemSlotButton_eventGetSkillName_Parms), Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetSkillName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetSkillName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetSkillName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetSkillName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetSkillName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetSkillName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeInventoryItem_Statics
	{
		struct SBZMainMenuInventoryItemSlotButton_eventInitializeInventoryItem_Parms
		{
			FSBZPlayerUiItemInfo InItemData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InItemData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeInventoryItem_Statics::NewProp_InItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeInventoryItem_Statics::NewProp_InItemData = { "InItemData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryItemSlotButton_eventInitializeInventoryItem_Parms, InItemData), Z_Construct_UScriptStruct_FSBZPlayerUiItemInfo, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeInventoryItem_Statics::NewProp_InItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeInventoryItem_Statics::NewProp_InItemData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeInventoryItem_Statics::NewProp_InItemData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeInventoryItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryItemSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton, nullptr, "InitializeInventoryItem", nullptr, nullptr, sizeof(SBZMainMenuInventoryItemSlotButton_eventInitializeInventoryItem_Parms), Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeInventoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeInventoryItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeInventoryItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeInventoryItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeInventoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeInventoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeItem_Statics
	{
		struct SBZMainMenuInventoryItemSlotButton_eventInitializeItem_Parms
		{
			const USBZInventoryBaseData* InventoryBaseData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryBaseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryBaseData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeItem_Statics::NewProp_InventoryBaseData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeItem_Statics::NewProp_InventoryBaseData = { "InventoryBaseData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryItemSlotButton_eventInitializeItem_Parms, InventoryBaseData), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeItem_Statics::NewProp_InventoryBaseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeItem_Statics::NewProp_InventoryBaseData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeItem_Statics::NewProp_InventoryBaseData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryItemSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton, nullptr, "InitializeItem", nullptr, nullptr, sizeof(SBZMainMenuInventoryItemSlotButton_eventInitializeItem_Parms), Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_IsAvailable_Statics
	{
		struct SBZMainMenuInventoryItemSlotButton_eventIsAvailable_Parms
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
	void Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_IsAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuInventoryItemSlotButton_eventIsAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_IsAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuInventoryItemSlotButton_eventIsAvailable_Parms), &Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_IsAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_IsAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_IsAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_IsAvailable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryItemSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_IsAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton, nullptr, "IsAvailable", nullptr, nullptr, sizeof(SBZMainMenuInventoryItemSlotButton_eventIsAvailable_Parms), Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_IsAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_IsAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_IsAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_IsAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_IsAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_IsAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_OnItemDataInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_OnItemDataInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryItemSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_OnItemDataInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton, nullptr, "OnItemDataInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_OnItemDataInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_OnItemDataInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_OnItemDataInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_OnItemDataInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_SetActiveItem_Statics
	{
		static void NewProp_bIsActiveItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActiveItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_SetActiveItem_Statics::NewProp_bIsActiveItem_SetBit(void* Obj)
	{
		((SBZMainMenuInventoryItemSlotButton_eventSetActiveItem_Parms*)Obj)->bIsActiveItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_SetActiveItem_Statics::NewProp_bIsActiveItem = { "bIsActiveItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuInventoryItemSlotButton_eventSetActiveItem_Parms), &Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_SetActiveItem_Statics::NewProp_bIsActiveItem_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_SetActiveItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_SetActiveItem_Statics::NewProp_bIsActiveItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_SetActiveItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryItemSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_SetActiveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton, nullptr, "SetActiveItem", nullptr, nullptr, sizeof(SBZMainMenuInventoryItemSlotButton_eventSetActiveItem_Parms), Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_SetActiveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_SetActiveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_SetActiveItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_SetActiveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_SetActiveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_SetActiveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_NoRegister()
	{
		return USBZMainMenuInventoryItemSlotButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfamyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InfamyLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAvailable_MetaData[];
#endif
		static void NewProp_bIsAvailable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAvailable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemSource_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SkillName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetInfamyLevel, "GetInfamyLevel" }, // 7014862
		{ &Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemData, "GetItemData" }, // 2341106733
		{ &Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetItemSource, "GetItemSource" }, // 3339708383
		{ &Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_GetSkillName, "GetSkillName" }, // 455731055
		{ &Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeInventoryItem, "InitializeInventoryItem" }, // 56497594
		{ &Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_InitializeItem, "InitializeItem" }, // 2782544270
		{ &Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_IsAvailable, "IsAvailable" }, // 2218526071
		{ &Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_OnItemDataInitialized, "OnItemDataInitialized" }, // 756800214
		{ &Z_Construct_UFunction_USBZMainMenuInventoryItemSlotButton_SetActiveItem, "SetActiveItem" }, // 715842201
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuInventoryItemSlotButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryItemSlotButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_ItemData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryItemSlotButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryItemSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryItemSlotButton, ItemData), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_ItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_ItemData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_InfamyLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryItemSlotButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryItemSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_InfamyLevel = { "InfamyLevel", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryItemSlotButton, InfamyLevel), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_InfamyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_InfamyLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_bIsAvailable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryItemSlotButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryItemSlotButton.h" },
	};
#endif
	void Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_bIsAvailable_SetBit(void* Obj)
	{
		((USBZMainMenuInventoryItemSlotButton*)Obj)->bIsAvailable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_bIsAvailable = { "bIsAvailable", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMainMenuInventoryItemSlotButton), &Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_bIsAvailable_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_bIsAvailable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_bIsAvailable_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_ItemSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_ItemSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryItemSlotButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryItemSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_ItemSource = { "ItemSource", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryItemSlotButton, ItemSource), Z_Construct_UEnum_Starbreeze_ESBZUIItemSource, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_ItemSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_ItemSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_SkillName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryItemSlotButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryItemSlotButton.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_SkillName = { "SkillName", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryItemSlotButton, SkillName), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_SkillName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_SkillName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_ItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_InfamyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_bIsAvailable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_ItemSource_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_ItemSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::NewProp_SkillName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuInventoryItemSlotButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::ClassParams = {
		&USBZMainMenuInventoryItemSlotButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuInventoryItemSlotButton, 3362651286);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuInventoryItemSlotButton>()
	{
		return USBZMainMenuInventoryItemSlotButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuInventoryItemSlotButton(Z_Construct_UClass_USBZMainMenuInventoryItemSlotButton, &USBZMainMenuInventoryItemSlotButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuInventoryItemSlotButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuInventoryItemSlotButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

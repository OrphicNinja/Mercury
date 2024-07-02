// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInventoryBaseData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInventoryBaseData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemRarity();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZInventoryBaseData::execGetDisplayName)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutDisplayName);
		P_GET_UBOOL_REF(Z_Param_Out_OutHasText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetDisplayName(Z_Param_Out_OutDisplayName,Z_Param_Out_OutHasText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInventoryBaseData::execGetFormattedDescriptionText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetFormattedDescriptionText();
		P_NATIVE_END;
	}
	void USBZInventoryBaseData::StaticRegisterNativesUSBZInventoryBaseData()
	{
		UClass* Class = USBZInventoryBaseData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisplayName", &USBZInventoryBaseData::execGetDisplayName },
			{ "GetFormattedDescriptionText", &USBZInventoryBaseData::execGetFormattedDescriptionText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZInventoryBaseData_GetDisplayName_Statics
	{
		struct SBZInventoryBaseData_eventGetDisplayName_Parms
		{
			FText OutDisplayName;
			bool OutHasText;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OutDisplayName;
		static void NewProp_OutHasText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OutHasText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZInventoryBaseData_GetDisplayName_Statics::NewProp_OutDisplayName = { "OutDisplayName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInventoryBaseData_eventGetDisplayName_Parms, OutDisplayName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZInventoryBaseData_GetDisplayName_Statics::NewProp_OutHasText_SetBit(void* Obj)
	{
		((SBZInventoryBaseData_eventGetDisplayName_Parms*)Obj)->OutHasText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZInventoryBaseData_GetDisplayName_Statics::NewProp_OutHasText = { "OutHasText", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInventoryBaseData_eventGetDisplayName_Parms), &Z_Construct_UFunction_USBZInventoryBaseData_GetDisplayName_Statics::NewProp_OutHasText_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInventoryBaseData_GetDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInventoryBaseData_GetDisplayName_Statics::NewProp_OutDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInventoryBaseData_GetDisplayName_Statics::NewProp_OutHasText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInventoryBaseData_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInventoryBaseData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInventoryBaseData_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInventoryBaseData, nullptr, "GetDisplayName", nullptr, nullptr, sizeof(SBZInventoryBaseData_eventGetDisplayName_Parms), Z_Construct_UFunction_USBZInventoryBaseData_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInventoryBaseData_GetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInventoryBaseData_GetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInventoryBaseData_GetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInventoryBaseData_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInventoryBaseData_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInventoryBaseData_GetFormattedDescriptionText_Statics
	{
		struct SBZInventoryBaseData_eventGetFormattedDescriptionText_Parms
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
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZInventoryBaseData_GetFormattedDescriptionText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInventoryBaseData_eventGetFormattedDescriptionText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInventoryBaseData_GetFormattedDescriptionText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInventoryBaseData_GetFormattedDescriptionText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInventoryBaseData_GetFormattedDescriptionText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInventoryBaseData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInventoryBaseData_GetFormattedDescriptionText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInventoryBaseData, nullptr, "GetFormattedDescriptionText", nullptr, nullptr, sizeof(SBZInventoryBaseData_eventGetFormattedDescriptionText_Parms), Z_Construct_UFunction_USBZInventoryBaseData_GetFormattedDescriptionText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInventoryBaseData_GetFormattedDescriptionText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInventoryBaseData_GetFormattedDescriptionText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInventoryBaseData_GetFormattedDescriptionText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInventoryBaseData_GetFormattedDescriptionText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInventoryBaseData_GetFormattedDescriptionText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister()
	{
		return USBZInventoryBaseData::StaticClass();
	}
	struct Z_Construct_UClass_USBZInventoryBaseData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccelByteItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteSkuNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AccelByteSkuNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteReferenceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AccelByteReferenceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatisticKillString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatisticKillString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatisticHeadshotKillString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatisticHeadshotKillString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DescriptionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShortDescriptionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ShortDescriptionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeClassText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TypeClassText;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemRarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemRarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemRarity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DisplayIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGameDisplayIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_InGameDisplayIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZInventoryBaseData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZInventoryBaseData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZInventoryBaseData_GetDisplayName, "GetDisplayName" }, // 3175518724
		{ &Z_Construct_UFunction_USBZInventoryBaseData_GetFormattedDescriptionText, "GetFormattedDescriptionText" }, // 3154799752
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInventoryBaseData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZInventoryBaseData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZInventoryBaseData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_AccelByteItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInventoryBaseData" },
		{ "ModuleRelativePath", "Public/SBZInventoryBaseData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_AccelByteItemId = { "AccelByteItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInventoryBaseData, AccelByteItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_AccelByteItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_AccelByteItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_AccelByteSkuNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInventoryBaseData" },
		{ "ModuleRelativePath", "Public/SBZInventoryBaseData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_AccelByteSkuNo = { "AccelByteSkuNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInventoryBaseData, AccelByteSkuNo), METADATA_PARAMS(Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_AccelByteSkuNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_AccelByteSkuNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_AccelByteReferenceName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInventoryBaseData" },
		{ "ModuleRelativePath", "Public/SBZInventoryBaseData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_AccelByteReferenceName = { "AccelByteReferenceName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInventoryBaseData, AccelByteReferenceName), METADATA_PARAMS(Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_AccelByteReferenceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_AccelByteReferenceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_StatisticKillString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInventoryBaseData" },
		{ "ModuleRelativePath", "Public/SBZInventoryBaseData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_StatisticKillString = { "StatisticKillString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInventoryBaseData, StatisticKillString), METADATA_PARAMS(Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_StatisticKillString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_StatisticKillString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_StatisticHeadshotKillString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInventoryBaseData" },
		{ "ModuleRelativePath", "Public/SBZInventoryBaseData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_StatisticHeadshotKillString = { "StatisticHeadshotKillString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInventoryBaseData, StatisticHeadshotKillString), METADATA_PARAMS(Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_StatisticHeadshotKillString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_StatisticHeadshotKillString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInventoryBaseData" },
		{ "ModuleRelativePath", "Public/SBZInventoryBaseData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInventoryBaseData, DisplayName), METADATA_PARAMS(Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_DescriptionText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInventoryBaseData" },
		{ "ModuleRelativePath", "Public/SBZInventoryBaseData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_DescriptionText = { "DescriptionText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInventoryBaseData, DescriptionText), METADATA_PARAMS(Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_DescriptionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_DescriptionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_ShortDescriptionText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInventoryBaseData" },
		{ "ModuleRelativePath", "Public/SBZInventoryBaseData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_ShortDescriptionText = { "ShortDescriptionText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInventoryBaseData, ShortDescriptionText), METADATA_PARAMS(Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_ShortDescriptionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_ShortDescriptionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_TypeClassText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInventoryBaseData" },
		{ "ModuleRelativePath", "Public/SBZInventoryBaseData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_TypeClassText = { "TypeClassText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInventoryBaseData, TypeClassText), METADATA_PARAMS(Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_TypeClassText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_TypeClassText_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_ItemRarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_ItemRarity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInventoryBaseData" },
		{ "ModuleRelativePath", "Public/SBZInventoryBaseData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_ItemRarity = { "ItemRarity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInventoryBaseData, ItemRarity), Z_Construct_UEnum_Starbreeze_ESBZItemRarity, METADATA_PARAMS(Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_ItemRarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_ItemRarity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_DisplayIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInventoryBaseData" },
		{ "ModuleRelativePath", "Public/SBZInventoryBaseData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_DisplayIcon = { "DisplayIcon", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInventoryBaseData, DisplayIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_DisplayIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_DisplayIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_InGameDisplayIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInventoryBaseData" },
		{ "ModuleRelativePath", "Public/SBZInventoryBaseData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_InGameDisplayIcon = { "InGameDisplayIcon", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInventoryBaseData, InGameDisplayIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_InGameDisplayIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_InGameDisplayIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZInventoryBaseData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_AccelByteItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_AccelByteSkuNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_AccelByteReferenceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_StatisticKillString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_StatisticHeadshotKillString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_DescriptionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_ShortDescriptionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_TypeClassText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_ItemRarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_ItemRarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_DisplayIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryBaseData_Statics::NewProp_InGameDisplayIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZInventoryBaseData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZInventoryBaseData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZInventoryBaseData_Statics::ClassParams = {
		&USBZInventoryBaseData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZInventoryBaseData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryBaseData_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZInventoryBaseData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryBaseData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZInventoryBaseData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZInventoryBaseData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZInventoryBaseData, 1224745101);
	template<> STARBREEZE_API UClass* StaticClass<USBZInventoryBaseData>()
	{
		return USBZInventoryBaseData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZInventoryBaseData(Z_Construct_UClass_USBZInventoryBaseData, &USBZInventoryBaseData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZInventoryBaseData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZInventoryBaseData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

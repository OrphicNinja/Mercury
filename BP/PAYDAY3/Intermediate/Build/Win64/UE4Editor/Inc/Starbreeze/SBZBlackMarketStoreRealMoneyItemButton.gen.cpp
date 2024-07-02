// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBlackMarketStoreRealMoneyItemButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBlackMarketStoreRealMoneyItemButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketStoreItemButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem();
// End Cross Module References
	DEFINE_FUNCTION(USBZBlackMarketStoreRealMoneyItemButton::execGetRealMoneyStoreItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZPayDayCreditStoreItem*)Z_Param__Result=P_THIS->GetRealMoneyStoreItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBlackMarketStoreRealMoneyItemButton::execInitializeRealMoneyStoreItem)
	{
		P_GET_STRUCT_REF(FSBZPayDayCreditStoreItem,Z_Param_Out_InRealMoneyStoreItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeRealMoneyStoreItem(Z_Param_Out_InRealMoneyStoreItem);
		P_NATIVE_END;
	}
	void USBZBlackMarketStoreRealMoneyItemButton::StaticRegisterNativesUSBZBlackMarketStoreRealMoneyItemButton()
	{
		UClass* Class = USBZBlackMarketStoreRealMoneyItemButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRealMoneyStoreItem", &USBZBlackMarketStoreRealMoneyItemButton::execGetRealMoneyStoreItem },
			{ "InitializeRealMoneyStoreItem", &USBZBlackMarketStoreRealMoneyItemButton::execInitializeRealMoneyStoreItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_GetRealMoneyStoreItem_Statics
	{
		struct SBZBlackMarketStoreRealMoneyItemButton_eventGetRealMoneyStoreItem_Parms
		{
			FSBZPayDayCreditStoreItem ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_GetRealMoneyStoreItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketStoreRealMoneyItemButton_eventGetRealMoneyStoreItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_GetRealMoneyStoreItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_GetRealMoneyStoreItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_GetRealMoneyStoreItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketStoreRealMoneyItemButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_GetRealMoneyStoreItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton, nullptr, "GetRealMoneyStoreItem", nullptr, nullptr, sizeof(SBZBlackMarketStoreRealMoneyItemButton_eventGetRealMoneyStoreItem_Parms), Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_GetRealMoneyStoreItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_GetRealMoneyStoreItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_GetRealMoneyStoreItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_GetRealMoneyStoreItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_GetRealMoneyStoreItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_GetRealMoneyStoreItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_InitializeRealMoneyStoreItem_Statics
	{
		struct SBZBlackMarketStoreRealMoneyItemButton_eventInitializeRealMoneyStoreItem_Parms
		{
			FSBZPayDayCreditStoreItem InRealMoneyStoreItem;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRealMoneyStoreItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRealMoneyStoreItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_InitializeRealMoneyStoreItem_Statics::NewProp_InRealMoneyStoreItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_InitializeRealMoneyStoreItem_Statics::NewProp_InRealMoneyStoreItem = { "InRealMoneyStoreItem", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBlackMarketStoreRealMoneyItemButton_eventInitializeRealMoneyStoreItem_Parms, InRealMoneyStoreItem), Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_InitializeRealMoneyStoreItem_Statics::NewProp_InRealMoneyStoreItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_InitializeRealMoneyStoreItem_Statics::NewProp_InRealMoneyStoreItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_InitializeRealMoneyStoreItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_InitializeRealMoneyStoreItem_Statics::NewProp_InRealMoneyStoreItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_InitializeRealMoneyStoreItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketStoreRealMoneyItemButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_InitializeRealMoneyStoreItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton, nullptr, "InitializeRealMoneyStoreItem", nullptr, nullptr, sizeof(SBZBlackMarketStoreRealMoneyItemButton_eventInitializeRealMoneyStoreItem_Parms), Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_InitializeRealMoneyStoreItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_InitializeRealMoneyStoreItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_InitializeRealMoneyStoreItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_InitializeRealMoneyStoreItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_InitializeRealMoneyStoreItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_InitializeRealMoneyStoreItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton_NoRegister()
	{
		return USBZBlackMarketStoreRealMoneyItemButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealMoneyStoreItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RealMoneyStoreItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBlackMarketStoreItemButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_GetRealMoneyStoreItem, "GetRealMoneyStoreItem" }, // 1539434965
		{ &Z_Construct_UFunction_USBZBlackMarketStoreRealMoneyItemButton_InitializeRealMoneyStoreItem, "InitializeRealMoneyStoreItem" }, // 1368600844
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBlackMarketStoreRealMoneyItemButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketStoreRealMoneyItemButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton_Statics::NewProp_RealMoneyStoreItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketStoreRealMoneyItemButton" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketStoreRealMoneyItemButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton_Statics::NewProp_RealMoneyStoreItem = { "RealMoneyStoreItem", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketStoreRealMoneyItemButton, RealMoneyStoreItem), Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton_Statics::NewProp_RealMoneyStoreItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton_Statics::NewProp_RealMoneyStoreItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton_Statics::NewProp_RealMoneyStoreItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBlackMarketStoreRealMoneyItemButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton_Statics::ClassParams = {
		&USBZBlackMarketStoreRealMoneyItemButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBlackMarketStoreRealMoneyItemButton, 3413310250);
	template<> STARBREEZE_API UClass* StaticClass<USBZBlackMarketStoreRealMoneyItemButton>()
	{
		return USBZBlackMarketStoreRealMoneyItemButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBlackMarketStoreRealMoneyItemButton(Z_Construct_UClass_USBZBlackMarketStoreRealMoneyItemButton, &USBZBlackMarketStoreRealMoneyItemButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBlackMarketStoreRealMoneyItemButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBlackMarketStoreRealMoneyItemButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

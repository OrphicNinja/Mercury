// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuInventoryWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuInventoryWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventoryWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventoryWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketStoreItemButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuInventoryWidget::execNativeOnLoadoutSlotStoreItemTransactionComplete)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_MetaResult);
		P_GET_OBJECT(USBZInventoryBaseData,Z_Param_InventoryItemData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnLoadoutSlotStoreItemTransactionComplete(ESBZMetaRequestResult(Z_Param_MetaResult),Z_Param_InventoryItemData);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuInventoryWidget_LoadoutSlotStorePurchased = FName(TEXT("LoadoutSlotStorePurchased"));
	void USBZMainMenuInventoryWidget::LoadoutSlotStorePurchased(bool bWasSuccessful)
	{
		SBZMainMenuInventoryWidget_eventLoadoutSlotStorePurchased_Parms Parms;
		Parms.bWasSuccessful=bWasSuccessful ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuInventoryWidget_LoadoutSlotStorePurchased),&Parms);
	}
	void USBZMainMenuInventoryWidget::StaticRegisterNativesUSBZMainMenuInventoryWidget()
	{
		UClass* Class = USBZMainMenuInventoryWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NativeOnLoadoutSlotStoreItemTransactionComplete", &USBZMainMenuInventoryWidget::execNativeOnLoadoutSlotStoreItemTransactionComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryWidget_LoadoutSlotStorePurchased_Statics
	{
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuInventoryWidget_LoadoutSlotStorePurchased_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SBZMainMenuInventoryWidget_eventLoadoutSlotStorePurchased_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryWidget_LoadoutSlotStorePurchased_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuInventoryWidget_eventLoadoutSlotStorePurchased_Parms), &Z_Construct_UFunction_USBZMainMenuInventoryWidget_LoadoutSlotStorePurchased_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryWidget_LoadoutSlotStorePurchased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryWidget_LoadoutSlotStorePurchased_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryWidget_LoadoutSlotStorePurchased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryWidget_LoadoutSlotStorePurchased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryWidget, nullptr, "LoadoutSlotStorePurchased", nullptr, nullptr, sizeof(SBZMainMenuInventoryWidget_eventLoadoutSlotStorePurchased_Parms), Z_Construct_UFunction_USBZMainMenuInventoryWidget_LoadoutSlotStorePurchased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryWidget_LoadoutSlotStorePurchased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryWidget_LoadoutSlotStorePurchased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryWidget_LoadoutSlotStorePurchased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryWidget_LoadoutSlotStorePurchased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryWidget_LoadoutSlotStorePurchased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuInventoryWidget_NativeOnLoadoutSlotStoreItemTransactionComplete_Statics
	{
		struct SBZMainMenuInventoryWidget_eventNativeOnLoadoutSlotStoreItemTransactionComplete_Parms
		{
			ESBZMetaRequestResult MetaResult;
			const USBZInventoryBaseData* InventoryItemData;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MetaResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MetaResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryItemData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuInventoryWidget_NativeOnLoadoutSlotStoreItemTransactionComplete_Statics::NewProp_MetaResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryWidget_NativeOnLoadoutSlotStoreItemTransactionComplete_Statics::NewProp_MetaResult = { "MetaResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryWidget_eventNativeOnLoadoutSlotStoreItemTransactionComplete_Parms, MetaResult), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryWidget_NativeOnLoadoutSlotStoreItemTransactionComplete_Statics::NewProp_InventoryItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuInventoryWidget_NativeOnLoadoutSlotStoreItemTransactionComplete_Statics::NewProp_InventoryItemData = { "InventoryItemData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuInventoryWidget_eventNativeOnLoadoutSlotStoreItemTransactionComplete_Parms, InventoryItemData), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryWidget_NativeOnLoadoutSlotStoreItemTransactionComplete_Statics::NewProp_InventoryItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryWidget_NativeOnLoadoutSlotStoreItemTransactionComplete_Statics::NewProp_InventoryItemData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuInventoryWidget_NativeOnLoadoutSlotStoreItemTransactionComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryWidget_NativeOnLoadoutSlotStoreItemTransactionComplete_Statics::NewProp_MetaResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryWidget_NativeOnLoadoutSlotStoreItemTransactionComplete_Statics::NewProp_MetaResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuInventoryWidget_NativeOnLoadoutSlotStoreItemTransactionComplete_Statics::NewProp_InventoryItemData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuInventoryWidget_NativeOnLoadoutSlotStoreItemTransactionComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuInventoryWidget_NativeOnLoadoutSlotStoreItemTransactionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuInventoryWidget, nullptr, "NativeOnLoadoutSlotStoreItemTransactionComplete", nullptr, nullptr, sizeof(SBZMainMenuInventoryWidget_eventNativeOnLoadoutSlotStoreItemTransactionComplete_Parms), Z_Construct_UFunction_USBZMainMenuInventoryWidget_NativeOnLoadoutSlotStoreItemTransactionComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryWidget_NativeOnLoadoutSlotStoreItemTransactionComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuInventoryWidget_NativeOnLoadoutSlotStoreItemTransactionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuInventoryWidget_NativeOnLoadoutSlotStoreItemTransactionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuInventoryWidget_NativeOnLoadoutSlotStoreItemTransactionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuInventoryWidget_NativeOnLoadoutSlotStoreItemTransactionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuInventoryWidget_NoRegister()
	{
		return USBZMainMenuInventoryWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuInventoryWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_LoadoutSlotStoreItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_LoadoutSlotStoreItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuInventoryWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuInventoryWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuInventoryWidget_LoadoutSlotStorePurchased, "LoadoutSlotStorePurchased" }, // 3174366953
		{ &Z_Construct_UFunction_USBZMainMenuInventoryWidget_NativeOnLoadoutSlotStoreItemTransactionComplete, "NativeOnLoadoutSlotStoreItemTransactionComplete" }, // 1183454943
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuInventoryWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuInventoryWidget_Statics::NewProp_Button_LoadoutSlotStoreItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuInventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuInventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuInventoryWidget_Statics::NewProp_Button_LoadoutSlotStoreItem = { "Button_LoadoutSlotStoreItem", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuInventoryWidget, Button_LoadoutSlotStoreItem), Z_Construct_UClass_USBZBlackMarketStoreItemButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryWidget_Statics::NewProp_Button_LoadoutSlotStoreItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryWidget_Statics::NewProp_Button_LoadoutSlotStoreItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuInventoryWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuInventoryWidget_Statics::NewProp_Button_LoadoutSlotStoreItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuInventoryWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuInventoryWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuInventoryWidget_Statics::ClassParams = {
		&USBZMainMenuInventoryWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuInventoryWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuInventoryWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuInventoryWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuInventoryWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuInventoryWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuInventoryWidget, 1624822431);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuInventoryWidget>()
	{
		return USBZMainMenuInventoryWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuInventoryWidget(Z_Construct_UClass_USBZMainMenuInventoryWidget, &USBZMainMenuInventoryWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuInventoryWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuInventoryWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

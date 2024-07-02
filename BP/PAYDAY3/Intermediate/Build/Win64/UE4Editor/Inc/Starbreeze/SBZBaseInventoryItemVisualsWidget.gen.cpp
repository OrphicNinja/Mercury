// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBaseInventoryItemVisualsWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBaseInventoryItemVisualsWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZBaseInventoryItemVisualsWidget::execInitializeItem)
	{
		P_GET_OBJECT(USBZInventoryBaseData,Z_Param_InItem);
		P_GET_UBOOL(Z_Param_bShouldLoadImage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeItem(Z_Param_InItem,Z_Param_bShouldLoadImage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBaseInventoryItemVisualsWidget::execNativeOnSpriteLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnSpriteLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBaseInventoryItemVisualsWidget::execSetEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEmpty();
		P_NATIVE_END;
	}
	static FName NAME_USBZBaseInventoryItemVisualsWidget_EmptySet = FName(TEXT("EmptySet"));
	void USBZBaseInventoryItemVisualsWidget::EmptySet()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZBaseInventoryItemVisualsWidget_EmptySet),NULL);
	}
	static FName NAME_USBZBaseInventoryItemVisualsWidget_ItemInitialized = FName(TEXT("ItemInitialized"));
	void USBZBaseInventoryItemVisualsWidget::ItemInitialized(const USBZInventoryBaseData* NewItem)
	{
		SBZBaseInventoryItemVisualsWidget_eventItemInitialized_Parms Parms;
		Parms.NewItem=NewItem;
		ProcessEvent(FindFunctionChecked(NAME_USBZBaseInventoryItemVisualsWidget_ItemInitialized),&Parms);
	}
	static FName NAME_USBZBaseInventoryItemVisualsWidget_OnLoadingChanged = FName(TEXT("OnLoadingChanged"));
	void USBZBaseInventoryItemVisualsWidget::OnLoadingChanged(bool bIsLoading)
	{
		SBZBaseInventoryItemVisualsWidget_eventOnLoadingChanged_Parms Parms;
		Parms.bIsLoading=bIsLoading ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZBaseInventoryItemVisualsWidget_OnLoadingChanged),&Parms);
	}
	static FName NAME_USBZBaseInventoryItemVisualsWidget_SpriteLoaded = FName(TEXT("SpriteLoaded"));
	void USBZBaseInventoryItemVisualsWidget::SpriteLoaded(UPaperSprite* OutLoadedSprite)
	{
		SBZBaseInventoryItemVisualsWidget_eventSpriteLoaded_Parms Parms;
		Parms.OutLoadedSprite=OutLoadedSprite;
		ProcessEvent(FindFunctionChecked(NAME_USBZBaseInventoryItemVisualsWidget_SpriteLoaded),&Parms);
	}
	void USBZBaseInventoryItemVisualsWidget::StaticRegisterNativesUSBZBaseInventoryItemVisualsWidget()
	{
		UClass* Class = USBZBaseInventoryItemVisualsWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeItem", &USBZBaseInventoryItemVisualsWidget::execInitializeItem },
			{ "NativeOnSpriteLoaded", &USBZBaseInventoryItemVisualsWidget::execNativeOnSpriteLoaded },
			{ "SetEmpty", &USBZBaseInventoryItemVisualsWidget::execSetEmpty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_EmptySet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_EmptySet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBaseInventoryItemVisualsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_EmptySet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget, nullptr, "EmptySet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_EmptySet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_EmptySet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_EmptySet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_EmptySet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_InitializeItem_Statics
	{
		struct SBZBaseInventoryItemVisualsWidget_eventInitializeItem_Parms
		{
			const USBZInventoryBaseData* InItem;
			bool bShouldLoadImage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InItem;
		static void NewProp_bShouldLoadImage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldLoadImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_InitializeItem_Statics::NewProp_InItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_InitializeItem_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBaseInventoryItemVisualsWidget_eventInitializeItem_Parms, InItem), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_InitializeItem_Statics::NewProp_InItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_InitializeItem_Statics::NewProp_InItem_MetaData)) };
	void Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_InitializeItem_Statics::NewProp_bShouldLoadImage_SetBit(void* Obj)
	{
		((SBZBaseInventoryItemVisualsWidget_eventInitializeItem_Parms*)Obj)->bShouldLoadImage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_InitializeItem_Statics::NewProp_bShouldLoadImage = { "bShouldLoadImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBaseInventoryItemVisualsWidget_eventInitializeItem_Parms), &Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_InitializeItem_Statics::NewProp_bShouldLoadImage_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_InitializeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_InitializeItem_Statics::NewProp_InItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_InitializeItem_Statics::NewProp_bShouldLoadImage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_InitializeItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBaseInventoryItemVisualsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_InitializeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget, nullptr, "InitializeItem", nullptr, nullptr, sizeof(SBZBaseInventoryItemVisualsWidget_eventInitializeItem_Parms), Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_InitializeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_InitializeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_InitializeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_InitializeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_InitializeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_InitializeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_ItemInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_ItemInitialized_Statics::NewProp_NewItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_ItemInitialized_Statics::NewProp_NewItem = { "NewItem", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBaseInventoryItemVisualsWidget_eventItemInitialized_Parms, NewItem), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_ItemInitialized_Statics::NewProp_NewItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_ItemInitialized_Statics::NewProp_NewItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_ItemInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_ItemInitialized_Statics::NewProp_NewItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_ItemInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBaseInventoryItemVisualsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_ItemInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget, nullptr, "ItemInitialized", nullptr, nullptr, sizeof(SBZBaseInventoryItemVisualsWidget_eventItemInitialized_Parms), Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_ItemInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_ItemInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_ItemInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_ItemInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_ItemInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_ItemInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_NativeOnSpriteLoaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_NativeOnSpriteLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBaseInventoryItemVisualsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_NativeOnSpriteLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget, nullptr, "NativeOnSpriteLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_NativeOnSpriteLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_NativeOnSpriteLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_NativeOnSpriteLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_NativeOnSpriteLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_OnLoadingChanged_Statics
	{
		static void NewProp_bIsLoading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLoading;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_OnLoadingChanged_Statics::NewProp_bIsLoading_SetBit(void* Obj)
	{
		((SBZBaseInventoryItemVisualsWidget_eventOnLoadingChanged_Parms*)Obj)->bIsLoading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_OnLoadingChanged_Statics::NewProp_bIsLoading = { "bIsLoading", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBaseInventoryItemVisualsWidget_eventOnLoadingChanged_Parms), &Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_OnLoadingChanged_Statics::NewProp_bIsLoading_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_OnLoadingChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_OnLoadingChanged_Statics::NewProp_bIsLoading,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_OnLoadingChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBaseInventoryItemVisualsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_OnLoadingChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget, nullptr, "OnLoadingChanged", nullptr, nullptr, sizeof(SBZBaseInventoryItemVisualsWidget_eventOnLoadingChanged_Parms), Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_OnLoadingChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_OnLoadingChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_OnLoadingChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_OnLoadingChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_OnLoadingChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_OnLoadingChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_SetEmpty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_SetEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBaseInventoryItemVisualsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_SetEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget, nullptr, "SetEmpty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_SetEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_SetEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_SetEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_SetEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_SpriteLoaded_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutLoadedSprite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_SpriteLoaded_Statics::NewProp_OutLoadedSprite = { "OutLoadedSprite", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBaseInventoryItemVisualsWidget_eventSpriteLoaded_Parms, OutLoadedSprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_SpriteLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_SpriteLoaded_Statics::NewProp_OutLoadedSprite,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_SpriteLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBaseInventoryItemVisualsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_SpriteLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget, nullptr, "SpriteLoaded", nullptr, nullptr, sizeof(SBZBaseInventoryItemVisualsWidget_eventSpriteLoaded_Parms), Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_SpriteLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_SpriteLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_SpriteLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_SpriteLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_SpriteLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_SpriteLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_NoRegister()
	{
		return USBZBaseInventoryItemVisualsWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemSprite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastItemSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastItemSprite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_EmptySet, "EmptySet" }, // 3237352064
		{ &Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_InitializeItem, "InitializeItem" }, // 2130075459
		{ &Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_ItemInitialized, "ItemInitialized" }, // 3198422060
		{ &Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_NativeOnSpriteLoaded, "NativeOnSpriteLoaded" }, // 2325271765
		{ &Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_OnLoadingChanged, "OnLoadingChanged" }, // 491238109
		{ &Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_SetEmpty, "SetEmpty" }, // 1588451580
		{ &Z_Construct_UFunction_USBZBaseInventoryItemVisualsWidget_SpriteLoaded, "SpriteLoaded" }, // 1464326571
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBaseInventoryItemVisualsWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBaseInventoryItemVisualsWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::NewProp_Item_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInventoryItemVisualsWidget" },
		{ "ModuleRelativePath", "Public/SBZBaseInventoryItemVisualsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInventoryItemVisualsWidget, Item), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::NewProp_Item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::NewProp_ItemSprite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInventoryItemVisualsWidget" },
		{ "ModuleRelativePath", "Public/SBZBaseInventoryItemVisualsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::NewProp_ItemSprite = { "ItemSprite", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInventoryItemVisualsWidget, ItemSprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::NewProp_ItemSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::NewProp_ItemSprite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::NewProp_LastItemSprite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInventoryItemVisualsWidget" },
		{ "ModuleRelativePath", "Public/SBZBaseInventoryItemVisualsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::NewProp_LastItemSprite = { "LastItemSprite", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInventoryItemVisualsWidget, LastItemSprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::NewProp_LastItemSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::NewProp_LastItemSprite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::NewProp_ItemSprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::NewProp_LastItemSprite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBaseInventoryItemVisualsWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::ClassParams = {
		&USBZBaseInventoryItemVisualsWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBaseInventoryItemVisualsWidget, 3742052074);
	template<> STARBREEZE_API UClass* StaticClass<USBZBaseInventoryItemVisualsWidget>()
	{
		return USBZBaseInventoryItemVisualsWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBaseInventoryItemVisualsWidget(Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget, &USBZBaseInventoryItemVisualsWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBaseInventoryItemVisualsWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBaseInventoryItemVisualsWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuWeaponInventoryModGridWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuWeaponInventoryModGridWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryModGridWidget::execInitializeGridWithMaskSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InMaskSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeGridWithMaskSlot(Z_Param_InMaskSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuWeaponInventoryModGridWidget::execInitializeGridWithWeaponSlot)
	{
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_InEquippableSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_InWeaponSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeGridWithWeaponSlot(ESBZEquippableLoadoutSlot(Z_Param_InEquippableSlot),Z_Param_InWeaponSlotIndex);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuWeaponInventoryModGridWidget_DisplayGrid = FName(TEXT("DisplayGrid"));
	void USBZMainMenuWeaponInventoryModGridWidget::DisplayGrid()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuWeaponInventoryModGridWidget_DisplayGrid),NULL);
	}
	void USBZMainMenuWeaponInventoryModGridWidget::StaticRegisterNativesUSBZMainMenuWeaponInventoryModGridWidget()
	{
		UClass* Class = USBZMainMenuWeaponInventoryModGridWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeGridWithMaskSlot", &USBZMainMenuWeaponInventoryModGridWidget::execInitializeGridWithMaskSlot },
			{ "InitializeGridWithWeaponSlot", &USBZMainMenuWeaponInventoryModGridWidget::execInitializeGridWithWeaponSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_DisplayGrid_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_DisplayGrid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryModGridWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_DisplayGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget, nullptr, "DisplayGrid", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_DisplayGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_DisplayGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_DisplayGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_DisplayGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithMaskSlot_Statics
	{
		struct SBZMainMenuWeaponInventoryModGridWidget_eventInitializeGridWithMaskSlot_Parms
		{
			int32 InMaskSlotIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMaskSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithMaskSlot_Statics::NewProp_InMaskSlotIndex = { "InMaskSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryModGridWidget_eventInitializeGridWithMaskSlot_Parms, InMaskSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithMaskSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithMaskSlot_Statics::NewProp_InMaskSlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithMaskSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryModGridWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithMaskSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget, nullptr, "InitializeGridWithMaskSlot", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryModGridWidget_eventInitializeGridWithMaskSlot_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithMaskSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithMaskSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithMaskSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithMaskSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithMaskSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithMaskSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithWeaponSlot_Statics
	{
		struct SBZMainMenuWeaponInventoryModGridWidget_eventInitializeGridWithWeaponSlot_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithWeaponSlot_Statics::NewProp_InEquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithWeaponSlot_Statics::NewProp_InEquippableSlot = { "InEquippableSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryModGridWidget_eventInitializeGridWithWeaponSlot_Parms, InEquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithWeaponSlot_Statics::NewProp_InWeaponSlotIndex = { "InWeaponSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuWeaponInventoryModGridWidget_eventInitializeGridWithWeaponSlot_Parms, InWeaponSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithWeaponSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithWeaponSlot_Statics::NewProp_InEquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithWeaponSlot_Statics::NewProp_InEquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithWeaponSlot_Statics::NewProp_InWeaponSlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithWeaponSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryModGridWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithWeaponSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget, nullptr, "InitializeGridWithWeaponSlot", nullptr, nullptr, sizeof(SBZMainMenuWeaponInventoryModGridWidget_eventInitializeGridWithWeaponSlot_Parms), Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithWeaponSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithWeaponSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithWeaponSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithWeaponSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithWeaponSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithWeaponSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_NoRegister()
	{
		return USBZMainMenuWeaponInventoryModGridWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmountToShow_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmountToShow;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_DisplayGrid, "DisplayGrid" }, // 1599350260
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithMaskSlot, "InitializeGridWithMaskSlot" }, // 3414267434
		{ &Z_Construct_UFunction_USBZMainMenuWeaponInventoryModGridWidget_InitializeGridWithWeaponSlot, "InitializeGridWithWeaponSlot" }, // 474761952
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuWeaponInventoryModGridWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryModGridWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_Statics::NewProp_AmountToShow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryModGridWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryModGridWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_Statics::NewProp_AmountToShow = { "AmountToShow", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryModGridWidget, AmountToShow), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_Statics::NewProp_AmountToShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_Statics::NewProp_AmountToShow_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_Statics::NewProp_ItemArray_Inner = { "ItemArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_Statics::NewProp_ItemArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuWeaponInventoryModGridWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuWeaponInventoryModGridWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_Statics::NewProp_ItemArray = { "ItemArray", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuWeaponInventoryModGridWidget, ItemArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_Statics::NewProp_ItemArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_Statics::NewProp_ItemArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_Statics::NewProp_AmountToShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_Statics::NewProp_ItemArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_Statics::NewProp_ItemArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuWeaponInventoryModGridWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_Statics::ClassParams = {
		&USBZMainMenuWeaponInventoryModGridWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuWeaponInventoryModGridWidget, 780747736);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuWeaponInventoryModGridWidget>()
	{
		return USBZMainMenuWeaponInventoryModGridWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuWeaponInventoryModGridWidget(Z_Construct_UClass_USBZMainMenuWeaponInventoryModGridWidget, &USBZMainMenuWeaponInventoryModGridWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuWeaponInventoryModGridWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuWeaponInventoryModGridWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

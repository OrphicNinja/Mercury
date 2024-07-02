// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3HUDPlayerCarryWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3HUDPlayerCarryWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDPlayerCarryWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDPlayerCarryWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStatePawnWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCarryType_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZControlsReference();
// End Cross Module References
	static FName NAME_UPD3HUDPlayerCarryWidget_OnCarryTypeDropped = FName(TEXT("OnCarryTypeDropped"));
	void UPD3HUDPlayerCarryWidget::OnCarryTypeDropped(const USBZCarryType* DroppedCarryType)
	{
		PD3HUDPlayerCarryWidget_eventOnCarryTypeDropped_Parms Parms;
		Parms.DroppedCarryType=DroppedCarryType;
		ProcessEvent(FindFunctionChecked(NAME_UPD3HUDPlayerCarryWidget_OnCarryTypeDropped),&Parms);
	}
	static FName NAME_UPD3HUDPlayerCarryWidget_OnCarryTypePickedUp = FName(TEXT("OnCarryTypePickedUp"));
	void UPD3HUDPlayerCarryWidget::OnCarryTypePickedUp(const USBZCarryType* PickedUpCarryType)
	{
		PD3HUDPlayerCarryWidget_eventOnCarryTypePickedUp_Parms Parms;
		Parms.PickedUpCarryType=PickedUpCarryType;
		ProcessEvent(FindFunctionChecked(NAME_UPD3HUDPlayerCarryWidget_OnCarryTypePickedUp),&Parms);
	}
	void UPD3HUDPlayerCarryWidget::StaticRegisterNativesUPD3HUDPlayerCarryWidget()
	{
	}
	struct Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypeDropped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DroppedCarryType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DroppedCarryType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypeDropped_Statics::NewProp_DroppedCarryType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypeDropped_Statics::NewProp_DroppedCarryType = { "DroppedCarryType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDPlayerCarryWidget_eventOnCarryTypeDropped_Parms, DroppedCarryType), Z_Construct_UClass_USBZCarryType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypeDropped_Statics::NewProp_DroppedCarryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypeDropped_Statics::NewProp_DroppedCarryType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypeDropped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypeDropped_Statics::NewProp_DroppedCarryType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypeDropped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HUDPlayerCarryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypeDropped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HUDPlayerCarryWidget, nullptr, "OnCarryTypeDropped", nullptr, nullptr, sizeof(PD3HUDPlayerCarryWidget_eventOnCarryTypeDropped_Parms), Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypeDropped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypeDropped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypeDropped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypeDropped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypeDropped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypeDropped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypePickedUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickedUpCarryType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickedUpCarryType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypePickedUp_Statics::NewProp_PickedUpCarryType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypePickedUp_Statics::NewProp_PickedUpCarryType = { "PickedUpCarryType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDPlayerCarryWidget_eventOnCarryTypePickedUp_Parms, PickedUpCarryType), Z_Construct_UClass_USBZCarryType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypePickedUp_Statics::NewProp_PickedUpCarryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypePickedUp_Statics::NewProp_PickedUpCarryType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypePickedUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypePickedUp_Statics::NewProp_PickedUpCarryType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypePickedUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HUDPlayerCarryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypePickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HUDPlayerCarryWidget, nullptr, "OnCarryTypePickedUp", nullptr, nullptr, sizeof(PD3HUDPlayerCarryWidget_eventOnCarryTypePickedUp_Parms), Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypePickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypePickedUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypePickedUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypePickedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypePickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypePickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3HUDPlayerCarryWidget_NoRegister()
	{
		return UPD3HUDPlayerCarryWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultControlsReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultControlsReference;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentCarryTypeArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCarryTypeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentCarryTypeArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentControlsReferenceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentControlsReferenceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerStatePawnWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypeDropped, "OnCarryTypeDropped" }, // 3327431959
		{ &Z_Construct_UFunction_UPD3HUDPlayerCarryWidget_OnCarryTypePickedUp, "OnCarryTypePickedUp" }, // 3522439469
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3HUDPlayerCarryWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerCarryWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::NewProp_DefaultControlsReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerCarryWidget" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerCarryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::NewProp_DefaultControlsReference = { "DefaultControlsReference", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerCarryWidget, DefaultControlsReference), Z_Construct_UScriptStruct_FSBZControlsReference, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::NewProp_DefaultControlsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::NewProp_DefaultControlsReference_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::NewProp_CurrentCarryTypeArray_Inner = { "CurrentCarryTypeArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZCarryType_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::NewProp_CurrentCarryTypeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerCarryWidget" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerCarryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::NewProp_CurrentCarryTypeArray = { "CurrentCarryTypeArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerCarryWidget, CurrentCarryTypeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::NewProp_CurrentCarryTypeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::NewProp_CurrentCarryTypeArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::NewProp_CurrentControlsReferenceID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerCarryWidget" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerCarryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::NewProp_CurrentControlsReferenceID = { "CurrentControlsReferenceID", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerCarryWidget, CurrentControlsReferenceID), METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::NewProp_CurrentControlsReferenceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::NewProp_CurrentControlsReferenceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::NewProp_DefaultControlsReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::NewProp_CurrentCarryTypeArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::NewProp_CurrentCarryTypeArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::NewProp_CurrentControlsReferenceID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3HUDPlayerCarryWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::ClassParams = {
		&UPD3HUDPlayerCarryWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3HUDPlayerCarryWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3HUDPlayerCarryWidget, 3627364064);
	template<> STARBREEZE_API UClass* StaticClass<UPD3HUDPlayerCarryWidget>()
	{
		return UPD3HUDPlayerCarryWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3HUDPlayerCarryWidget(Z_Construct_UClass_UPD3HUDPlayerCarryWidget, &UPD3HUDPlayerCarryWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3HUDPlayerCarryWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3HUDPlayerCarryWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

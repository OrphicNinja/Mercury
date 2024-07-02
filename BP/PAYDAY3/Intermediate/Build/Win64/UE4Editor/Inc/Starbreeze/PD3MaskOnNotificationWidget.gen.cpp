// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3MaskOnNotificationWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3MaskOnNotificationWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3MaskOnNotificationWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3MaskOnNotificationWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPawnWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(UPD3MaskOnNotificationWidget::execGetMaskOnProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaskOnProgress();
		P_NATIVE_END;
	}
	static FName NAME_UPD3MaskOnNotificationWidget_MaskOnChanged = FName(TEXT("MaskOnChanged"));
	void UPD3MaskOnNotificationWidget::MaskOnChanged(bool bInIsPuttingOnMask)
	{
		PD3MaskOnNotificationWidget_eventMaskOnChanged_Parms Parms;
		Parms.bInIsPuttingOnMask=bInIsPuttingOnMask ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UPD3MaskOnNotificationWidget_MaskOnChanged),&Parms);
	}
	static FName NAME_UPD3MaskOnNotificationWidget_OnProgressChanged = FName(TEXT("OnProgressChanged"));
	void UPD3MaskOnNotificationWidget::OnProgressChanged(float InProgress)
	{
		PD3MaskOnNotificationWidget_eventOnProgressChanged_Parms Parms;
		Parms.InProgress=InProgress;
		ProcessEvent(FindFunctionChecked(NAME_UPD3MaskOnNotificationWidget_OnProgressChanged),&Parms);
	}
	void UPD3MaskOnNotificationWidget::StaticRegisterNativesUPD3MaskOnNotificationWidget()
	{
		UClass* Class = UPD3MaskOnNotificationWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaskOnProgress", &UPD3MaskOnNotificationWidget::execGetMaskOnProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPD3MaskOnNotificationWidget_GetMaskOnProgress_Statics
	{
		struct PD3MaskOnNotificationWidget_eventGetMaskOnProgress_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3MaskOnNotificationWidget_GetMaskOnProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3MaskOnNotificationWidget_eventGetMaskOnProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3MaskOnNotificationWidget_GetMaskOnProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3MaskOnNotificationWidget_GetMaskOnProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3MaskOnNotificationWidget_GetMaskOnProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3MaskOnNotificationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3MaskOnNotificationWidget_GetMaskOnProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3MaskOnNotificationWidget, nullptr, "GetMaskOnProgress", nullptr, nullptr, sizeof(PD3MaskOnNotificationWidget_eventGetMaskOnProgress_Parms), Z_Construct_UFunction_UPD3MaskOnNotificationWidget_GetMaskOnProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MaskOnNotificationWidget_GetMaskOnProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3MaskOnNotificationWidget_GetMaskOnProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MaskOnNotificationWidget_GetMaskOnProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3MaskOnNotificationWidget_GetMaskOnProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3MaskOnNotificationWidget_GetMaskOnProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3MaskOnNotificationWidget_MaskOnChanged_Statics
	{
		static void NewProp_bInIsPuttingOnMask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsPuttingOnMask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPD3MaskOnNotificationWidget_MaskOnChanged_Statics::NewProp_bInIsPuttingOnMask_SetBit(void* Obj)
	{
		((PD3MaskOnNotificationWidget_eventMaskOnChanged_Parms*)Obj)->bInIsPuttingOnMask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPD3MaskOnNotificationWidget_MaskOnChanged_Statics::NewProp_bInIsPuttingOnMask = { "bInIsPuttingOnMask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PD3MaskOnNotificationWidget_eventMaskOnChanged_Parms), &Z_Construct_UFunction_UPD3MaskOnNotificationWidget_MaskOnChanged_Statics::NewProp_bInIsPuttingOnMask_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3MaskOnNotificationWidget_MaskOnChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3MaskOnNotificationWidget_MaskOnChanged_Statics::NewProp_bInIsPuttingOnMask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3MaskOnNotificationWidget_MaskOnChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3MaskOnNotificationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3MaskOnNotificationWidget_MaskOnChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3MaskOnNotificationWidget, nullptr, "MaskOnChanged", nullptr, nullptr, sizeof(PD3MaskOnNotificationWidget_eventMaskOnChanged_Parms), Z_Construct_UFunction_UPD3MaskOnNotificationWidget_MaskOnChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MaskOnNotificationWidget_MaskOnChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3MaskOnNotificationWidget_MaskOnChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MaskOnNotificationWidget_MaskOnChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3MaskOnNotificationWidget_MaskOnChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3MaskOnNotificationWidget_MaskOnChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3MaskOnNotificationWidget_OnProgressChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3MaskOnNotificationWidget_OnProgressChanged_Statics::NewProp_InProgress = { "InProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3MaskOnNotificationWidget_eventOnProgressChanged_Parms, InProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3MaskOnNotificationWidget_OnProgressChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3MaskOnNotificationWidget_OnProgressChanged_Statics::NewProp_InProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3MaskOnNotificationWidget_OnProgressChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3MaskOnNotificationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3MaskOnNotificationWidget_OnProgressChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3MaskOnNotificationWidget, nullptr, "OnProgressChanged", nullptr, nullptr, sizeof(PD3MaskOnNotificationWidget_eventOnProgressChanged_Parms), Z_Construct_UFunction_UPD3MaskOnNotificationWidget_OnProgressChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MaskOnNotificationWidget_OnProgressChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3MaskOnNotificationWidget_OnProgressChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MaskOnNotificationWidget_OnProgressChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3MaskOnNotificationWidget_OnProgressChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3MaskOnNotificationWidget_OnProgressChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3MaskOnNotificationWidget_NoRegister()
	{
		return UPD3MaskOnNotificationWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPD3MaskOnNotificationWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPuttingOnMask_MetaData[];
#endif
		static void NewProp_bIsPuttingOnMask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPuttingOnMask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3MaskOnNotificationWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPawnWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3MaskOnNotificationWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3MaskOnNotificationWidget_GetMaskOnProgress, "GetMaskOnProgress" }, // 955371936
		{ &Z_Construct_UFunction_UPD3MaskOnNotificationWidget_MaskOnChanged, "MaskOnChanged" }, // 4152452891
		{ &Z_Construct_UFunction_UPD3MaskOnNotificationWidget_OnProgressChanged, "OnProgressChanged" }, // 1269716985
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3MaskOnNotificationWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3MaskOnNotificationWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3MaskOnNotificationWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3MaskOnNotificationWidget_Statics::NewProp_bIsPuttingOnMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3MaskOnNotificationWidget" },
		{ "ModuleRelativePath", "Public/PD3MaskOnNotificationWidget.h" },
	};
#endif
	void Z_Construct_UClass_UPD3MaskOnNotificationWidget_Statics::NewProp_bIsPuttingOnMask_SetBit(void* Obj)
	{
		((UPD3MaskOnNotificationWidget*)Obj)->bIsPuttingOnMask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPD3MaskOnNotificationWidget_Statics::NewProp_bIsPuttingOnMask = { "bIsPuttingOnMask", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPD3MaskOnNotificationWidget), &Z_Construct_UClass_UPD3MaskOnNotificationWidget_Statics::NewProp_bIsPuttingOnMask_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPD3MaskOnNotificationWidget_Statics::NewProp_bIsPuttingOnMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3MaskOnNotificationWidget_Statics::NewProp_bIsPuttingOnMask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3MaskOnNotificationWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3MaskOnNotificationWidget_Statics::NewProp_bIsPuttingOnMask,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3MaskOnNotificationWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3MaskOnNotificationWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3MaskOnNotificationWidget_Statics::ClassParams = {
		&UPD3MaskOnNotificationWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPD3MaskOnNotificationWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3MaskOnNotificationWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3MaskOnNotificationWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3MaskOnNotificationWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3MaskOnNotificationWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3MaskOnNotificationWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3MaskOnNotificationWidget, 1155621528);
	template<> STARBREEZE_API UClass* StaticClass<UPD3MaskOnNotificationWidget>()
	{
		return UPD3MaskOnNotificationWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3MaskOnNotificationWidget(Z_Construct_UClass_UPD3MaskOnNotificationWidget, &UPD3MaskOnNotificationWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3MaskOnNotificationWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3MaskOnNotificationWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

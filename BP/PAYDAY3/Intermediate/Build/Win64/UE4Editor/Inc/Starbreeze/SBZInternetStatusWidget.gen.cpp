// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInternetStatusWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInternetStatusWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInternetStatusWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInternetStatusWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZServiceStatus();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZInternetStatusWidget::execSetNetworkLostConnectionVisibility)
	{
		P_GET_ENUM(ESBZServiceStatus,Z_Param_ServiceStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNetworkLostConnectionVisibility(ESBZServiceStatus(Z_Param_ServiceStatus));
		P_NATIVE_END;
	}
	void USBZInternetStatusWidget::StaticRegisterNativesUSBZInternetStatusWidget()
	{
		UClass* Class = USBZInternetStatusWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetNetworkLostConnectionVisibility", &USBZInternetStatusWidget::execSetNetworkLostConnectionVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZInternetStatusWidget_SetNetworkLostConnectionVisibility_Statics
	{
		struct SBZInternetStatusWidget_eventSetNetworkLostConnectionVisibility_Parms
		{
			ESBZServiceStatus ServiceStatus;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ServiceStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ServiceStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZInternetStatusWidget_SetNetworkLostConnectionVisibility_Statics::NewProp_ServiceStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZInternetStatusWidget_SetNetworkLostConnectionVisibility_Statics::NewProp_ServiceStatus = { "ServiceStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInternetStatusWidget_eventSetNetworkLostConnectionVisibility_Parms, ServiceStatus), Z_Construct_UEnum_Starbreeze_ESBZServiceStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInternetStatusWidget_SetNetworkLostConnectionVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInternetStatusWidget_SetNetworkLostConnectionVisibility_Statics::NewProp_ServiceStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInternetStatusWidget_SetNetworkLostConnectionVisibility_Statics::NewProp_ServiceStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInternetStatusWidget_SetNetworkLostConnectionVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInternetStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInternetStatusWidget_SetNetworkLostConnectionVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInternetStatusWidget, nullptr, "SetNetworkLostConnectionVisibility", nullptr, nullptr, sizeof(SBZInternetStatusWidget_eventSetNetworkLostConnectionVisibility_Parms), Z_Construct_UFunction_USBZInternetStatusWidget_SetNetworkLostConnectionVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInternetStatusWidget_SetNetworkLostConnectionVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInternetStatusWidget_SetNetworkLostConnectionVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInternetStatusWidget_SetNetworkLostConnectionVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInternetStatusWidget_SetNetworkLostConnectionVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInternetStatusWidget_SetNetworkLostConnectionVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZInternetStatusWidget_NoRegister()
	{
		return USBZInternetStatusWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZInternetStatusWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkErrorImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NetworkErrorImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZInternetStatusWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZInternetStatusWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZInternetStatusWidget_SetNetworkLostConnectionVisibility, "SetNetworkLostConnectionVisibility" }, // 985034423
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInternetStatusWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZInternetStatusWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZInternetStatusWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInternetStatusWidget_Statics::NewProp_NetworkErrorImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInternetStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZInternetStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZInternetStatusWidget_Statics::NewProp_NetworkErrorImage = { "NetworkErrorImage", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInternetStatusWidget, NetworkErrorImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZInternetStatusWidget_Statics::NewProp_NetworkErrorImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInternetStatusWidget_Statics::NewProp_NetworkErrorImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZInternetStatusWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInternetStatusWidget_Statics::NewProp_NetworkErrorImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZInternetStatusWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZInternetStatusWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZInternetStatusWidget_Statics::ClassParams = {
		&USBZInternetStatusWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZInternetStatusWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZInternetStatusWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZInternetStatusWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInternetStatusWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZInternetStatusWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZInternetStatusWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZInternetStatusWidget, 2041632982);
	template<> STARBREEZE_API UClass* StaticClass<USBZInternetStatusWidget>()
	{
		return USBZInternetStatusWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZInternetStatusWidget(Z_Construct_UClass_USBZInternetStatusWidget, &USBZInternetStatusWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZInternetStatusWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZInternetStatusWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gridly/Public/SBZGridlyTask_DownloadGridlyNativeCulture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGridlyTask_DownloadGridlyNativeCulture() {}
// Cross Module References
	GRIDLY_API UClass* Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_NoRegister();
	GRIDLY_API UClass* Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_Gridly();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GRIDLY_API UFunction* Z_Construct_UDelegateFunction_Gridly_DownloadGridlyNativeCultureDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZGridlyTask_DownloadGridlyNativeCulture::execDownloadLocalizedTexts)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZGridlyTask_DownloadGridlyNativeCulture**)Z_Param__Result=USBZGridlyTask_DownloadGridlyNativeCulture::DownloadLocalizedTexts(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USBZGridlyTask_DownloadGridlyNativeCulture::StaticRegisterNativesUSBZGridlyTask_DownloadGridlyNativeCulture()
	{
		UClass* Class = USBZGridlyTask_DownloadGridlyNativeCulture::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DownloadLocalizedTexts", &USBZGridlyTask_DownloadGridlyNativeCulture::execDownloadLocalizedTexts },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZGridlyTask_DownloadGridlyNativeCulture_DownloadLocalizedTexts_Statics
	{
		struct SBZGridlyTask_DownloadGridlyNativeCulture_eventDownloadLocalizedTexts_Parms
		{
			const UObject* WorldContextObject;
			USBZGridlyTask_DownloadGridlyNativeCulture* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGridlyTask_DownloadGridlyNativeCulture_DownloadLocalizedTexts_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGridlyTask_DownloadGridlyNativeCulture_DownloadLocalizedTexts_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGridlyTask_DownloadGridlyNativeCulture_eventDownloadLocalizedTexts_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZGridlyTask_DownloadGridlyNativeCulture_DownloadLocalizedTexts_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGridlyTask_DownloadGridlyNativeCulture_DownloadLocalizedTexts_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGridlyTask_DownloadGridlyNativeCulture_DownloadLocalizedTexts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGridlyTask_DownloadGridlyNativeCulture_eventDownloadLocalizedTexts_Parms, ReturnValue), Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGridlyTask_DownloadGridlyNativeCulture_DownloadLocalizedTexts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGridlyTask_DownloadGridlyNativeCulture_DownloadLocalizedTexts_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGridlyTask_DownloadGridlyNativeCulture_DownloadLocalizedTexts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGridlyTask_DownloadGridlyNativeCulture_DownloadLocalizedTexts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGridlyTask_DownloadGridlyNativeCulture.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGridlyTask_DownloadGridlyNativeCulture_DownloadLocalizedTexts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture, nullptr, "DownloadLocalizedTexts", nullptr, nullptr, sizeof(SBZGridlyTask_DownloadGridlyNativeCulture_eventDownloadLocalizedTexts_Parms), Z_Construct_UFunction_USBZGridlyTask_DownloadGridlyNativeCulture_DownloadLocalizedTexts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGridlyTask_DownloadGridlyNativeCulture_DownloadLocalizedTexts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGridlyTask_DownloadGridlyNativeCulture_DownloadLocalizedTexts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGridlyTask_DownloadGridlyNativeCulture_DownloadLocalizedTexts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGridlyTask_DownloadGridlyNativeCulture_DownloadLocalizedTexts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGridlyTask_DownloadGridlyNativeCulture_DownloadLocalizedTexts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_NoRegister()
	{
		return USBZGridlyTask_DownloadGridlyNativeCulture::StaticClass();
	}
	struct Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Gridly,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZGridlyTask_DownloadGridlyNativeCulture_DownloadLocalizedTexts, "DownloadLocalizedTexts" }, // 1772108841
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGridlyTask_DownloadGridlyNativeCulture.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGridlyTask_DownloadGridlyNativeCulture.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGridlyTask_DownloadGridlyNativeCulture" },
		{ "ModuleRelativePath", "Public/SBZGridlyTask_DownloadGridlyNativeCulture.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGridlyTask_DownloadGridlyNativeCulture, OnSuccess), Z_Construct_UDelegateFunction_Gridly_DownloadGridlyNativeCultureDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::NewProp_OnProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGridlyTask_DownloadGridlyNativeCulture" },
		{ "ModuleRelativePath", "Public/SBZGridlyTask_DownloadGridlyNativeCulture.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::NewProp_OnProgress = { "OnProgress", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGridlyTask_DownloadGridlyNativeCulture, OnProgress), Z_Construct_UDelegateFunction_Gridly_DownloadGridlyNativeCultureDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::NewProp_OnProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::NewProp_OnProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::NewProp_OnFail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGridlyTask_DownloadGridlyNativeCulture" },
		{ "ModuleRelativePath", "Public/SBZGridlyTask_DownloadGridlyNativeCulture.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGridlyTask_DownloadGridlyNativeCulture, OnFail), Z_Construct_UDelegateFunction_Gridly_DownloadGridlyNativeCultureDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::NewProp_OnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::NewProp_OnFail_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::NewProp_OnProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGridlyTask_DownloadGridlyNativeCulture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::ClassParams = {
		&USBZGridlyTask_DownloadGridlyNativeCulture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGridlyTask_DownloadGridlyNativeCulture, 1588354039);
	template<> GRIDLY_API UClass* StaticClass<USBZGridlyTask_DownloadGridlyNativeCulture>()
	{
		return USBZGridlyTask_DownloadGridlyNativeCulture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGridlyTask_DownloadGridlyNativeCulture(Z_Construct_UClass_USBZGridlyTask_DownloadGridlyNativeCulture, &USBZGridlyTask_DownloadGridlyNativeCulture::StaticClass, TEXT("/Script/Gridly"), TEXT("USBZGridlyTask_DownloadGridlyNativeCulture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGridlyTask_DownloadGridlyNativeCulture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateBackendError.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateBackendError() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateBackendError_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateBackendError();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClientStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineDataGameError_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBackendErrorWidget_NoRegister();
// End Cross Module References
	void USBZStateMachineStateBackendError::StaticRegisterNativesUSBZStateMachineStateBackendError()
	{
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateBackendError_NoRegister()
	{
		return USBZStateMachineStateBackendError::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateBackendError_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ErrorData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackendErrorWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackendErrorWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateBackendError_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZClientStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateBackendError_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateBackendError.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateBackendError.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateBackendError_Statics::NewProp_ErrorData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateBackendError" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateBackendError.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateBackendError_Statics::NewProp_ErrorData = { "ErrorData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateBackendError, ErrorData), Z_Construct_UClass_USBZStateMachineDataGameError_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateBackendError_Statics::NewProp_ErrorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateBackendError_Statics::NewProp_ErrorData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateBackendError_Statics::NewProp_BackendErrorWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateBackendError" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateBackendError.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateBackendError_Statics::NewProp_BackendErrorWidget = { "BackendErrorWidget", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateBackendError, BackendErrorWidget), Z_Construct_UClass_USBZBackendErrorWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateBackendError_Statics::NewProp_BackendErrorWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateBackendError_Statics::NewProp_BackendErrorWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineStateBackendError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateBackendError_Statics::NewProp_ErrorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateBackendError_Statics::NewProp_BackendErrorWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateBackendError_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateBackendError>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateBackendError_Statics::ClassParams = {
		&USBZStateMachineStateBackendError::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZStateMachineStateBackendError_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateBackendError_Statics::PropPointers),
		0,
		0x009000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateBackendError_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateBackendError_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateBackendError()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateBackendError_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateBackendError, 2546181817);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateBackendError>()
	{
		return USBZStateMachineStateBackendError::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateBackendError(Z_Construct_UClass_USBZStateMachineStateBackendError, &USBZStateMachineStateBackendError::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateBackendError"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateBackendError);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

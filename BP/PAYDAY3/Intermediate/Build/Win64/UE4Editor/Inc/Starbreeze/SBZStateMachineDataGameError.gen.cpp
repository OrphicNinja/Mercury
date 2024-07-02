// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineDataGameError.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineDataGameError() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineDataGameError_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineDataGameError();
	SBZSTATEMACHINEBASE_API UClass* Z_Construct_UClass_USBZStateMachineData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZGameMachineStateError();
// End Cross Module References
	void USBZStateMachineDataGameError::StaticRegisterNativesUSBZStateMachineDataGameError()
	{
	}
	UClass* Z_Construct_UClass_USBZStateMachineDataGameError_NoRegister()
	{
		return USBZStateMachineDataGameError::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineDataGameError_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ErrorType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ErrorType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineDataGameError_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZStateMachineData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineDataGameError_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineDataGameError.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineDataGameError.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZStateMachineDataGameError_Statics::NewProp_ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineDataGameError_Statics::NewProp_ErrorType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineDataGameError" },
		{ "ModuleRelativePath", "Public/SBZStateMachineDataGameError.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZStateMachineDataGameError_Statics::NewProp_ErrorType = { "ErrorType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineDataGameError, ErrorType), Z_Construct_UEnum_Starbreeze_ESBZGameMachineStateError, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineDataGameError_Statics::NewProp_ErrorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineDataGameError_Statics::NewProp_ErrorType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineDataGameError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineDataGameError_Statics::NewProp_ErrorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineDataGameError_Statics::NewProp_ErrorType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineDataGameError_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineDataGameError>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineDataGameError_Statics::ClassParams = {
		&USBZStateMachineDataGameError::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZStateMachineDataGameError_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineDataGameError_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineDataGameError_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineDataGameError_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineDataGameError()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineDataGameError_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineDataGameError, 858468468);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineDataGameError>()
	{
		return USBZStateMachineDataGameError::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineDataGameError(Z_Construct_UClass_USBZStateMachineDataGameError, &USBZStateMachineDataGameError::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineDataGameError"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineDataGameError);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

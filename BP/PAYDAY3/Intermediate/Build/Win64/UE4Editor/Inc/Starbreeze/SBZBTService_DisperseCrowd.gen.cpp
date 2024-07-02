// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTService_DisperseCrowd.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTService_DisperseCrowd() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_DisperseCrowd_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_DisperseCrowd();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest();
// End Cross Module References
	void USBZBTService_DisperseCrowd::StaticRegisterNativesUSBZBTService_DisperseCrowd()
	{
	}
	UClass* Z_Construct_UClass_USBZBTService_DisperseCrowd_NoRegister()
	{
		return USBZBTService_DisperseCrowd::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTService_DisperseCrowd_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCrowdSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxCrowdSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EQSRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EQSRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTService_DisperseCrowd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_DisperseCrowd_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTService_DisperseCrowd.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTService_DisperseCrowd.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_DisperseCrowd_Statics::NewProp_MaxCrowdSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_DisperseCrowd" },
		{ "ModuleRelativePath", "Public/SBZBTService_DisperseCrowd.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZBTService_DisperseCrowd_Statics::NewProp_MaxCrowdSize = { "MaxCrowdSize", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_DisperseCrowd, MaxCrowdSize), nullptr, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_DisperseCrowd_Statics::NewProp_MaxCrowdSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_DisperseCrowd_Statics::NewProp_MaxCrowdSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_DisperseCrowd_Statics::NewProp_EQSRequest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_DisperseCrowd" },
		{ "ModuleRelativePath", "Public/SBZBTService_DisperseCrowd.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTService_DisperseCrowd_Statics::NewProp_EQSRequest = { "EQSRequest", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_DisperseCrowd, EQSRequest), Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_DisperseCrowd_Statics::NewProp_EQSRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_DisperseCrowd_Statics::NewProp_EQSRequest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTService_DisperseCrowd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_DisperseCrowd_Statics::NewProp_MaxCrowdSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_DisperseCrowd_Statics::NewProp_EQSRequest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTService_DisperseCrowd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTService_DisperseCrowd>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTService_DisperseCrowd_Statics::ClassParams = {
		&USBZBTService_DisperseCrowd::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTService_DisperseCrowd_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_DisperseCrowd_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTService_DisperseCrowd_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_DisperseCrowd_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTService_DisperseCrowd()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTService_DisperseCrowd_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTService_DisperseCrowd, 974759297);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTService_DisperseCrowd>()
	{
		return USBZBTService_DisperseCrowd::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTService_DisperseCrowd(Z_Construct_UClass_USBZBTService_DisperseCrowd, &USBZBTService_DisperseCrowd::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTService_DisperseCrowd"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTService_DisperseCrowd);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

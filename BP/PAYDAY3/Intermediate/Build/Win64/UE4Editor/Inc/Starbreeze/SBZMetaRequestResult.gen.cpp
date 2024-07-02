// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMetaRequestResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMetaRequestResult() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMetaRequestResult_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMetaRequestResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZMetaRequestResult::StaticRegisterNativesUSBZMetaRequestResult()
	{
	}
	UClass* Z_Construct_UClass_USBZMetaRequestResult_NoRegister()
	{
		return USBZMetaRequestResult::StaticClass();
	}
	struct Z_Construct_UClass_USBZMetaRequestResult_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMetaRequestResult_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMetaRequestResult_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMetaRequestResult.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMetaRequestResult.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMetaRequestResult_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMetaRequestResult>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMetaRequestResult_Statics::ClassParams = {
		&USBZMetaRequestResult::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMetaRequestResult_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMetaRequestResult_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMetaRequestResult()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMetaRequestResult_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMetaRequestResult, 1675499289);
	template<> STARBREEZE_API UClass* StaticClass<USBZMetaRequestResult>()
	{
		return USBZMetaRequestResult::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMetaRequestResult(Z_Construct_UClass_USBZMetaRequestResult, &USBZMetaRequestResult::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMetaRequestResult"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMetaRequestResult);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

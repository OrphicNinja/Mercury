// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZThrowableInvisibleNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZThrowableInvisibleNotify() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThrowableInvisibleNotify_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThrowableInvisibleNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZThrowableInvisibleNotify::StaticRegisterNativesUSBZThrowableInvisibleNotify()
	{
	}
	UClass* Z_Construct_UClass_USBZThrowableInvisibleNotify_NoRegister()
	{
		return USBZThrowableInvisibleNotify::StaticClass();
	}
	struct Z_Construct_UClass_USBZThrowableInvisibleNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZThrowableInvisibleNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZThrowableInvisibleNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZThrowableInvisibleNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZThrowableInvisibleNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZThrowableInvisibleNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZThrowableInvisibleNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZThrowableInvisibleNotify_Statics::ClassParams = {
		&USBZThrowableInvisibleNotify::StaticClass,
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
		0x000120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZThrowableInvisibleNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZThrowableInvisibleNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZThrowableInvisibleNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZThrowableInvisibleNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZThrowableInvisibleNotify, 869270177);
	template<> STARBREEZE_API UClass* StaticClass<USBZThrowableInvisibleNotify>()
	{
		return USBZThrowableInvisibleNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZThrowableInvisibleNotify(Z_Construct_UClass_USBZThrowableInvisibleNotify, &USBZThrowableInvisibleNotify::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZThrowableInvisibleNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZThrowableInvisibleNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

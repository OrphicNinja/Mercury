// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZToolInvisibleNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZToolInvisibleNotify() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolInvisibleNotify_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolInvisibleNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZToolInvisibleNotify::StaticRegisterNativesUSBZToolInvisibleNotify()
	{
	}
	UClass* Z_Construct_UClass_USBZToolInvisibleNotify_NoRegister()
	{
		return USBZToolInvisibleNotify::StaticClass();
	}
	struct Z_Construct_UClass_USBZToolInvisibleNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZToolInvisibleNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZToolInvisibleNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZToolInvisibleNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZToolInvisibleNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZToolInvisibleNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZToolInvisibleNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZToolInvisibleNotify_Statics::ClassParams = {
		&USBZToolInvisibleNotify::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZToolInvisibleNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolInvisibleNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZToolInvisibleNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZToolInvisibleNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZToolInvisibleNotify, 1306370012);
	template<> STARBREEZE_API UClass* StaticClass<USBZToolInvisibleNotify>()
	{
		return USBZToolInvisibleNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZToolInvisibleNotify(Z_Construct_UClass_USBZToolInvisibleNotify, &USBZToolInvisibleNotify::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZToolInvisibleNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZToolInvisibleNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

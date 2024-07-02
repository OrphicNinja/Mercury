// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZToolVisibleNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZToolVisibleNotify() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolVisibleNotify_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolVisibleNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZToolVisibleNotify::StaticRegisterNativesUSBZToolVisibleNotify()
	{
	}
	UClass* Z_Construct_UClass_USBZToolVisibleNotify_NoRegister()
	{
		return USBZToolVisibleNotify::StaticClass();
	}
	struct Z_Construct_UClass_USBZToolVisibleNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZToolVisibleNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZToolVisibleNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZToolVisibleNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZToolVisibleNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZToolVisibleNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZToolVisibleNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZToolVisibleNotify_Statics::ClassParams = {
		&USBZToolVisibleNotify::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZToolVisibleNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolVisibleNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZToolVisibleNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZToolVisibleNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZToolVisibleNotify, 1578609983);
	template<> STARBREEZE_API UClass* StaticClass<USBZToolVisibleNotify>()
	{
		return USBZToolVisibleNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZToolVisibleNotify(Z_Construct_UClass_USBZToolVisibleNotify, &USBZToolVisibleNotify::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZToolVisibleNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZToolVisibleNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

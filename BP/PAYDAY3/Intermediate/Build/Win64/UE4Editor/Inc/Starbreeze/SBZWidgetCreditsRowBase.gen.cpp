// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWidgetCreditsRowBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWidgetCreditsRowBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetCreditsRowBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetCreditsRowBase();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZWidgetCreditsRowBase::StaticRegisterNativesUSBZWidgetCreditsRowBase()
	{
	}
	UClass* Z_Construct_UClass_USBZWidgetCreditsRowBase_NoRegister()
	{
		return USBZWidgetCreditsRowBase::StaticClass();
	}
	struct Z_Construct_UClass_USBZWidgetCreditsRowBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWidgetCreditsRowBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWidgetCreditsRowBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWidgetCreditsRowBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWidgetCreditsRowBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWidgetCreditsRowBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWidgetCreditsRowBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWidgetCreditsRowBase_Statics::ClassParams = {
		&USBZWidgetCreditsRowBase::StaticClass,
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
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWidgetCreditsRowBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWidgetCreditsRowBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWidgetCreditsRowBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWidgetCreditsRowBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWidgetCreditsRowBase, 3748680540);
	template<> STARBREEZE_API UClass* StaticClass<USBZWidgetCreditsRowBase>()
	{
		return USBZWidgetCreditsRowBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWidgetCreditsRowBase(Z_Construct_UClass_USBZWidgetCreditsRowBase, &USBZWidgetCreditsRowBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWidgetCreditsRowBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWidgetCreditsRowBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

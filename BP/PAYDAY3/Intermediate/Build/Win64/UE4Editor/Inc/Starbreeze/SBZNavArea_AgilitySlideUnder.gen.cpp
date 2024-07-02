// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNavArea_AgilitySlideUnder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNavArea_AgilitySlideUnder() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavArea_AgilitySlideUnder_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavArea_AgilitySlideUnder();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZNavArea_AgilitySlideUnder::StaticRegisterNativesUSBZNavArea_AgilitySlideUnder()
	{
	}
	UClass* Z_Construct_UClass_USBZNavArea_AgilitySlideUnder_NoRegister()
	{
		return USBZNavArea_AgilitySlideUnder::StaticClass();
	}
	struct Z_Construct_UClass_USBZNavArea_AgilitySlideUnder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZNavArea_AgilitySlideUnder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavArea,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavArea_AgilitySlideUnder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZNavArea_AgilitySlideUnder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZNavArea_AgilitySlideUnder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZNavArea_AgilitySlideUnder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZNavArea_AgilitySlideUnder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZNavArea_AgilitySlideUnder_Statics::ClassParams = {
		&USBZNavArea_AgilitySlideUnder::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x002000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZNavArea_AgilitySlideUnder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavArea_AgilitySlideUnder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZNavArea_AgilitySlideUnder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZNavArea_AgilitySlideUnder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZNavArea_AgilitySlideUnder, 137772259);
	template<> STARBREEZE_API UClass* StaticClass<USBZNavArea_AgilitySlideUnder>()
	{
		return USBZNavArea_AgilitySlideUnder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZNavArea_AgilitySlideUnder(Z_Construct_UClass_USBZNavArea_AgilitySlideUnder, &USBZNavArea_AgilitySlideUnder::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZNavArea_AgilitySlideUnder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZNavArea_AgilitySlideUnder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

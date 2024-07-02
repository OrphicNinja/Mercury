// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNavArea_AgilityClimbOnTopHigh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNavArea_AgilityClimbOnTopHigh() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavArea_AgilityClimbOnTopHigh_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavArea_AgilityClimbOnTopHigh();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZNavArea_AgilityClimbOnTopHigh::StaticRegisterNativesUSBZNavArea_AgilityClimbOnTopHigh()
	{
	}
	UClass* Z_Construct_UClass_USBZNavArea_AgilityClimbOnTopHigh_NoRegister()
	{
		return USBZNavArea_AgilityClimbOnTopHigh::StaticClass();
	}
	struct Z_Construct_UClass_USBZNavArea_AgilityClimbOnTopHigh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZNavArea_AgilityClimbOnTopHigh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavArea,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavArea_AgilityClimbOnTopHigh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZNavArea_AgilityClimbOnTopHigh.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZNavArea_AgilityClimbOnTopHigh.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZNavArea_AgilityClimbOnTopHigh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZNavArea_AgilityClimbOnTopHigh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZNavArea_AgilityClimbOnTopHigh_Statics::ClassParams = {
		&USBZNavArea_AgilityClimbOnTopHigh::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZNavArea_AgilityClimbOnTopHigh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavArea_AgilityClimbOnTopHigh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZNavArea_AgilityClimbOnTopHigh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZNavArea_AgilityClimbOnTopHigh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZNavArea_AgilityClimbOnTopHigh, 3744866477);
	template<> STARBREEZE_API UClass* StaticClass<USBZNavArea_AgilityClimbOnTopHigh>()
	{
		return USBZNavArea_AgilityClimbOnTopHigh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZNavArea_AgilityClimbOnTopHigh(Z_Construct_UClass_USBZNavArea_AgilityClimbOnTopHigh, &USBZNavArea_AgilityClimbOnTopHigh::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZNavArea_AgilityClimbOnTopHigh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZNavArea_AgilityClimbOnTopHigh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

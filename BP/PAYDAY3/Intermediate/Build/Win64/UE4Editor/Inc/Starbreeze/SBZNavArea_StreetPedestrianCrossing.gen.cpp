// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNavArea_StreetPedestrianCrossing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNavArea_StreetPedestrianCrossing() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavArea_StreetPedestrianCrossing_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavArea_StreetPedestrianCrossing();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZNavArea_StreetPedestrianCrossing::StaticRegisterNativesUSBZNavArea_StreetPedestrianCrossing()
	{
	}
	UClass* Z_Construct_UClass_USBZNavArea_StreetPedestrianCrossing_NoRegister()
	{
		return USBZNavArea_StreetPedestrianCrossing::StaticClass();
	}
	struct Z_Construct_UClass_USBZNavArea_StreetPedestrianCrossing_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZNavArea_StreetPedestrianCrossing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavArea,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavArea_StreetPedestrianCrossing_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZNavArea_StreetPedestrianCrossing.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZNavArea_StreetPedestrianCrossing.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZNavArea_StreetPedestrianCrossing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZNavArea_StreetPedestrianCrossing>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZNavArea_StreetPedestrianCrossing_Statics::ClassParams = {
		&USBZNavArea_StreetPedestrianCrossing::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZNavArea_StreetPedestrianCrossing_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavArea_StreetPedestrianCrossing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZNavArea_StreetPedestrianCrossing()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZNavArea_StreetPedestrianCrossing_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZNavArea_StreetPedestrianCrossing, 3530838095);
	template<> STARBREEZE_API UClass* StaticClass<USBZNavArea_StreetPedestrianCrossing>()
	{
		return USBZNavArea_StreetPedestrianCrossing::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZNavArea_StreetPedestrianCrossing(Z_Construct_UClass_USBZNavArea_StreetPedestrianCrossing, &USBZNavArea_StreetPedestrianCrossing::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZNavArea_StreetPedestrianCrossing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZNavArea_StreetPedestrianCrossing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

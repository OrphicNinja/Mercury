// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNavArea_PedestrianCrossing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNavArea_PedestrianCrossing() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavArea_PedestrianCrossing_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavArea_PedestrianCrossing();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZNavArea_PedestrianCrossing::StaticRegisterNativesUSBZNavArea_PedestrianCrossing()
	{
	}
	UClass* Z_Construct_UClass_USBZNavArea_PedestrianCrossing_NoRegister()
	{
		return USBZNavArea_PedestrianCrossing::StaticClass();
	}
	struct Z_Construct_UClass_USBZNavArea_PedestrianCrossing_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZNavArea_PedestrianCrossing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavArea,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavArea_PedestrianCrossing_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZNavArea_PedestrianCrossing.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZNavArea_PedestrianCrossing.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZNavArea_PedestrianCrossing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZNavArea_PedestrianCrossing>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZNavArea_PedestrianCrossing_Statics::ClassParams = {
		&USBZNavArea_PedestrianCrossing::StaticClass,
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
		0x003000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZNavArea_PedestrianCrossing_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavArea_PedestrianCrossing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZNavArea_PedestrianCrossing()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZNavArea_PedestrianCrossing_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZNavArea_PedestrianCrossing, 2383435334);
	template<> STARBREEZE_API UClass* StaticClass<USBZNavArea_PedestrianCrossing>()
	{
		return USBZNavArea_PedestrianCrossing::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZNavArea_PedestrianCrossing(Z_Construct_UClass_USBZNavArea_PedestrianCrossing, &USBZNavArea_PedestrianCrossing::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZNavArea_PedestrianCrossing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZNavArea_PedestrianCrossing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

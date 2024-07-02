// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNavArea_AgilityJumpingDownLow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNavArea_AgilityJumpingDownLow() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavArea_AgilityJumpingDownLow_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavArea_AgilityJumpingDownLow();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZNavArea_AgilityJumpingDownLow::StaticRegisterNativesUSBZNavArea_AgilityJumpingDownLow()
	{
	}
	UClass* Z_Construct_UClass_USBZNavArea_AgilityJumpingDownLow_NoRegister()
	{
		return USBZNavArea_AgilityJumpingDownLow::StaticClass();
	}
	struct Z_Construct_UClass_USBZNavArea_AgilityJumpingDownLow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZNavArea_AgilityJumpingDownLow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavArea,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavArea_AgilityJumpingDownLow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZNavArea_AgilityJumpingDownLow.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZNavArea_AgilityJumpingDownLow.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZNavArea_AgilityJumpingDownLow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZNavArea_AgilityJumpingDownLow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZNavArea_AgilityJumpingDownLow_Statics::ClassParams = {
		&USBZNavArea_AgilityJumpingDownLow::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZNavArea_AgilityJumpingDownLow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavArea_AgilityJumpingDownLow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZNavArea_AgilityJumpingDownLow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZNavArea_AgilityJumpingDownLow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZNavArea_AgilityJumpingDownLow, 686470540);
	template<> STARBREEZE_API UClass* StaticClass<USBZNavArea_AgilityJumpingDownLow>()
	{
		return USBZNavArea_AgilityJumpingDownLow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZNavArea_AgilityJumpingDownLow(Z_Construct_UClass_USBZNavArea_AgilityJumpingDownLow, &USBZNavArea_AgilityJumpingDownLow::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZNavArea_AgilityJumpingDownLow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZNavArea_AgilityJumpingDownLow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

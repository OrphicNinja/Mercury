// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNavArea_ExitableNoEnter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNavArea_ExitableNoEnter() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavArea_ExitableNoEnter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavArea_ExitableNoEnter();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZNavArea_ExitableNoEnter::StaticRegisterNativesUSBZNavArea_ExitableNoEnter()
	{
	}
	UClass* Z_Construct_UClass_USBZNavArea_ExitableNoEnter_NoRegister()
	{
		return USBZNavArea_ExitableNoEnter::StaticClass();
	}
	struct Z_Construct_UClass_USBZNavArea_ExitableNoEnter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZNavArea_ExitableNoEnter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavArea,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavArea_ExitableNoEnter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZNavArea_ExitableNoEnter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZNavArea_ExitableNoEnter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZNavArea_ExitableNoEnter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZNavArea_ExitableNoEnter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZNavArea_ExitableNoEnter_Statics::ClassParams = {
		&USBZNavArea_ExitableNoEnter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZNavArea_ExitableNoEnter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavArea_ExitableNoEnter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZNavArea_ExitableNoEnter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZNavArea_ExitableNoEnter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZNavArea_ExitableNoEnter, 4250439153);
	template<> STARBREEZE_API UClass* StaticClass<USBZNavArea_ExitableNoEnter>()
	{
		return USBZNavArea_ExitableNoEnter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZNavArea_ExitableNoEnter(Z_Construct_UClass_USBZNavArea_ExitableNoEnter, &USBZNavArea_ExitableNoEnter::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZNavArea_ExitableNoEnter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZNavArea_ExitableNoEnter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

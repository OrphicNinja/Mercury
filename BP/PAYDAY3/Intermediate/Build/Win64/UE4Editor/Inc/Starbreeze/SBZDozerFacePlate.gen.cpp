// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDozerFacePlate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDozerFacePlate() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDozerFacePlate_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDozerFacePlate();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDozerFaceArmor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZDozerFacePlate::StaticRegisterNativesUSBZDozerFacePlate()
	{
	}
	UClass* Z_Construct_UClass_USBZDozerFacePlate_NoRegister()
	{
		return USBZDozerFacePlate::StaticClass();
	}
	struct Z_Construct_UClass_USBZDozerFacePlate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDozerFacePlate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDozerFaceArmor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDozerFacePlate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "SBZDozerFacePlate.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDozerFacePlate.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDozerFacePlate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDozerFacePlate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDozerFacePlate_Statics::ClassParams = {
		&USBZDozerFacePlate::StaticClass,
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
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDozerFacePlate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDozerFacePlate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDozerFacePlate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDozerFacePlate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDozerFacePlate, 2269423219);
	template<> STARBREEZE_API UClass* StaticClass<USBZDozerFacePlate>()
	{
		return USBZDozerFacePlate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDozerFacePlate(Z_Construct_UClass_USBZDozerFacePlate, &USBZDozerFacePlate::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDozerFacePlate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDozerFacePlate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

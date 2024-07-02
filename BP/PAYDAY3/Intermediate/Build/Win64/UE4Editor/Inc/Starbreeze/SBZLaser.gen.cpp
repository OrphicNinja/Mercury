// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLaser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLaser() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLaser_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLaser();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZLaser::StaticRegisterNativesUSBZLaser()
	{
	}
	UClass* Z_Construct_UClass_USBZLaser_NoRegister()
	{
		return USBZLaser::StaticClass();
	}
	struct Z_Construct_UClass_USBZLaser_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLaser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLaser_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "SBZLaser.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLaser.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLaser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLaser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLaser_Statics::ClassParams = {
		&USBZLaser::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZLaser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLaser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLaser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLaser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLaser, 127225582);
	template<> STARBREEZE_API UClass* StaticClass<USBZLaser>()
	{
		return USBZLaser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLaser(Z_Construct_UClass_USBZLaser, &USBZLaser::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLaser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLaser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

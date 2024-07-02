// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAISentryGunController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAISentryGunController() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAISentryGunController_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAISentryGunController();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIArmedPawnController();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDamageInstigatorInterface_NoRegister();
// End Cross Module References
	void ASBZAISentryGunController::StaticRegisterNativesASBZAISentryGunController()
	{
	}
	UClass* Z_Construct_UClass_ASBZAISentryGunController_NoRegister()
	{
		return ASBZAISentryGunController::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAISentryGunController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAISentryGunController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZAIArmedPawnController,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAISentryGunController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZAISentryGunController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAISentryGunController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZAISentryGunController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZDamageInstigatorInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAISentryGunController, ISBZDamageInstigatorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAISentryGunController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAISentryGunController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAISentryGunController_Statics::ClassParams = {
		&ASBZAISentryGunController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAISentryGunController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAISentryGunController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAISentryGunController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAISentryGunController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAISentryGunController, 4147500498);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAISentryGunController>()
	{
		return ASBZAISentryGunController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAISentryGunController(Z_Construct_UClass_ASBZAISentryGunController, &ASBZAISentryGunController::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAISentryGunController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAISentryGunController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

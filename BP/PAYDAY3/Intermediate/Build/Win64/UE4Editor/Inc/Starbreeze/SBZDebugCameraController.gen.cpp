// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDebugCameraController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDebugCameraController() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDebugCameraController_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDebugCameraController();
	ENGINE_API UClass* Z_Construct_UClass_ADebugCameraController();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZDebugCameraController::StaticRegisterNativesASBZDebugCameraController()
	{
	}
	UClass* Z_Construct_UClass_ASBZDebugCameraController_NoRegister()
	{
		return ASBZDebugCameraController::StaticClass();
	}
	struct Z_Construct_UClass_ASBZDebugCameraController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZDebugCameraController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADebugCameraController,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDebugCameraController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZDebugCameraController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDebugCameraController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZDebugCameraController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZDebugCameraController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZDebugCameraController_Statics::ClassParams = {
		&ASBZDebugCameraController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZDebugCameraController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDebugCameraController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZDebugCameraController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZDebugCameraController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZDebugCameraController, 1365668395);
	template<> STARBREEZE_API UClass* StaticClass<ASBZDebugCameraController>()
	{
		return ASBZDebugCameraController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZDebugCameraController(Z_Construct_UClass_ASBZDebugCameraController, &ASBZDebugCameraController::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZDebugCameraController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZDebugCameraController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

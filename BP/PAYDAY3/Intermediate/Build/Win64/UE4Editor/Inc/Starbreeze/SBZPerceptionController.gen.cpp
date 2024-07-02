// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPerceptionController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPerceptionController() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPerceptionController_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPerceptionController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIVisualDetectionComponent_NoRegister();
// End Cross Module References
	void ASBZPerceptionController::StaticRegisterNativesASBZPerceptionController()
	{
	}
	UClass* Z_Construct_UClass_ASBZPerceptionController_NoRegister()
	{
		return ASBZPerceptionController::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPerceptionController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualDetectionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisualDetectionComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPerceptionController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPerceptionController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZPerceptionController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPerceptionController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPerceptionController_Statics::NewProp_VisualDetectionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPerceptionController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPerceptionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPerceptionController_Statics::NewProp_VisualDetectionComponent = { "VisualDetectionComponent", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPerceptionController, VisualDetectionComponent), Z_Construct_UClass_USBZAIVisualDetectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPerceptionController_Statics::NewProp_VisualDetectionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPerceptionController_Statics::NewProp_VisualDetectionComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPerceptionController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPerceptionController_Statics::NewProp_VisualDetectionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPerceptionController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPerceptionController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPerceptionController_Statics::ClassParams = {
		&ASBZPerceptionController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZPerceptionController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPerceptionController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPerceptionController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPerceptionController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPerceptionController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPerceptionController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPerceptionController, 1054217787);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPerceptionController>()
	{
		return ASBZPerceptionController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPerceptionController(Z_Construct_UClass_ASBZPerceptionController, &ASBZPerceptionController::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPerceptionController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPerceptionController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

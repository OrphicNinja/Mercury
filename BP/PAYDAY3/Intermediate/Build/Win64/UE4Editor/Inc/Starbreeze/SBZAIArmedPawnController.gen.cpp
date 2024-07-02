// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIArmedPawnController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIArmedPawnController() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIArmedPawnController_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIArmedPawnController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZFactionIdHelper();
// End Cross Module References
	void ASBZAIArmedPawnController::StaticRegisterNativesASBZAIArmedPawnController()
	{
	}
	UClass* Z_Construct_UClass_ASBZAIArmedPawnController_NoRegister()
	{
		return ASBZAIArmedPawnController::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAIArmedPawnController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Faction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Faction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAIArmedPawnController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIArmedPawnController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZAIArmedPawnController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIArmedPawnController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIArmedPawnController_Statics::NewProp_Faction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIArmedPawnController" },
		{ "ModuleRelativePath", "Public/SBZAIArmedPawnController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIArmedPawnController_Statics::NewProp_Faction = { "Faction", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIArmedPawnController, Faction), Z_Construct_UScriptStruct_FSBZFactionIdHelper, METADATA_PARAMS(Z_Construct_UClass_ASBZAIArmedPawnController_Statics::NewProp_Faction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIArmedPawnController_Statics::NewProp_Faction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAIArmedPawnController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIArmedPawnController_Statics::NewProp_Faction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAIArmedPawnController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAIArmedPawnController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAIArmedPawnController_Statics::ClassParams = {
		&ASBZAIArmedPawnController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZAIArmedPawnController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIArmedPawnController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAIArmedPawnController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIArmedPawnController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAIArmedPawnController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAIArmedPawnController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAIArmedPawnController, 3638173530);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAIArmedPawnController>()
	{
		return ASBZAIArmedPawnController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAIArmedPawnController(Z_Construct_UClass_ASBZAIArmedPawnController, &ASBZAIArmedPawnController::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAIArmedPawnController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAIArmedPawnController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpectatorPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpectatorPawn() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpectatorPawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpectatorPawn();
	ENGINE_API UClass* Z_Construct_UClass_ASpectatorPawn();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZSpectatorPawn::StaticRegisterNativesASBZSpectatorPawn()
	{
	}
	UClass* Z_Construct_UClass_ASBZSpectatorPawn_NoRegister()
	{
		return ASBZSpectatorPawn::StaticClass();
	}
	struct Z_Construct_UClass_ASBZSpectatorPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZSpectatorPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpectatorPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpectatorPawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SBZSpectatorPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSpectatorPawn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZSpectatorPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZSpectatorPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZSpectatorPawn_Statics::ClassParams = {
		&ASBZSpectatorPawn::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASBZSpectatorPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpectatorPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZSpectatorPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZSpectatorPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZSpectatorPawn, 3690809254);
	template<> STARBREEZE_API UClass* StaticClass<ASBZSpectatorPawn>()
	{
		return ASBZSpectatorPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZSpectatorPawn(Z_Construct_UClass_ASBZSpectatorPawn, &ASBZSpectatorPawn::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZSpectatorPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZSpectatorPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

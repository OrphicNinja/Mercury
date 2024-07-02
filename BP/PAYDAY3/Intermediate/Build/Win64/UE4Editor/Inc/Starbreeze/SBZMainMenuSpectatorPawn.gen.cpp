// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuSpectatorPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuSpectatorPawn() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMainMenuSpectatorPawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMainMenuSpectatorPawn();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpectatorPawn();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZMainMenuSpectatorPawn::StaticRegisterNativesASBZMainMenuSpectatorPawn()
	{
	}
	UClass* Z_Construct_UClass_ASBZMainMenuSpectatorPawn_NoRegister()
	{
		return ASBZMainMenuSpectatorPawn::StaticClass();
	}
	struct Z_Construct_UClass_ASBZMainMenuSpectatorPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZMainMenuSpectatorPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZSpectatorPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMainMenuSpectatorPawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SBZMainMenuSpectatorPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSpectatorPawn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZMainMenuSpectatorPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZMainMenuSpectatorPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZMainMenuSpectatorPawn_Statics::ClassParams = {
		&ASBZMainMenuSpectatorPawn::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASBZMainMenuSpectatorPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMainMenuSpectatorPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZMainMenuSpectatorPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZMainMenuSpectatorPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZMainMenuSpectatorPawn, 1326013946);
	template<> STARBREEZE_API UClass* StaticClass<ASBZMainMenuSpectatorPawn>()
	{
		return ASBZMainMenuSpectatorPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZMainMenuSpectatorPawn(Z_Construct_UClass_ASBZMainMenuSpectatorPawn, &ASBZMainMenuSpectatorPawn::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZMainMenuSpectatorPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZMainMenuSpectatorPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

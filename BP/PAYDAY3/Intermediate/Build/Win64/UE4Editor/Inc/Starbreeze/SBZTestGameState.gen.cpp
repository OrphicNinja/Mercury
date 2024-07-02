// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTestGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTestGameState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTestGameState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTestGameState();
	STARBREEZE_API UClass* Z_Construct_UClass_APD3HeistGameState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZTestGameState::StaticRegisterNativesASBZTestGameState()
	{
	}
	UClass* Z_Construct_UClass_ASBZTestGameState_NoRegister()
	{
		return ASBZTestGameState::StaticClass();
	}
	struct Z_Construct_UClass_ASBZTestGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZTestGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APD3HeistGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTestGameState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZTestGameState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTestGameState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZTestGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZTestGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZTestGameState_Statics::ClassParams = {
		&ASBZTestGameState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASBZTestGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTestGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZTestGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZTestGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZTestGameState, 3517597667);
	template<> STARBREEZE_API UClass* StaticClass<ASBZTestGameState>()
	{
		return ASBZTestGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZTestGameState(Z_Construct_UClass_ASBZTestGameState, &ASBZTestGameState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZTestGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZTestGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

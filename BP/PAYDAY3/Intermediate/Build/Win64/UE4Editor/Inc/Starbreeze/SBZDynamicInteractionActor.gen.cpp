// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDynamicInteractionActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDynamicInteractionActor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDynamicInteractionActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDynamicInteractionActor();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZInteractionActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZDynamicInteractionActor::StaticRegisterNativesASBZDynamicInteractionActor()
	{
	}
	UClass* Z_Construct_UClass_ASBZDynamicInteractionActor_NoRegister()
	{
		return ASBZDynamicInteractionActor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZDynamicInteractionActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZDynamicInteractionActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZInteractionActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDynamicInteractionActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDynamicInteractionActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDynamicInteractionActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZDynamicInteractionActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZDynamicInteractionActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZDynamicInteractionActor_Statics::ClassParams = {
		&ASBZDynamicInteractionActor::StaticClass,
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
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZDynamicInteractionActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDynamicInteractionActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZDynamicInteractionActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZDynamicInteractionActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZDynamicInteractionActor, 3659597449);
	template<> STARBREEZE_API UClass* StaticClass<ASBZDynamicInteractionActor>()
	{
		return ASBZDynamicInteractionActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZDynamicInteractionActor(Z_Construct_UClass_ASBZDynamicInteractionActor, &ASBZDynamicInteractionActor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZDynamicInteractionActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZDynamicInteractionActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

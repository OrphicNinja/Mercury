// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCuttableSkylightActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCuttableSkylightActor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCuttableSkylightActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCuttableSkylightActor();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCuttableActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZCuttableSkylightActor::StaticRegisterNativesASBZCuttableSkylightActor()
	{
	}
	UClass* Z_Construct_UClass_ASBZCuttableSkylightActor_NoRegister()
	{
		return ASBZCuttableSkylightActor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZCuttableSkylightActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZCuttableSkylightActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZCuttableActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCuttableSkylightActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCuttableSkylightActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCuttableSkylightActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZCuttableSkylightActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZCuttableSkylightActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZCuttableSkylightActor_Statics::ClassParams = {
		&ASBZCuttableSkylightActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASBZCuttableSkylightActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttableSkylightActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZCuttableSkylightActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZCuttableSkylightActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZCuttableSkylightActor, 2090488455);
	template<> STARBREEZE_API UClass* StaticClass<ASBZCuttableSkylightActor>()
	{
		return ASBZCuttableSkylightActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZCuttableSkylightActor(Z_Construct_UClass_ASBZCuttableSkylightActor, &ASBZCuttableSkylightActor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZCuttableSkylightActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZCuttableSkylightActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

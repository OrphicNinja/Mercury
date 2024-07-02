// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNoCookDS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNoCookDS() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZNoCookDS_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZNoCookDS();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZNoCookDS::StaticRegisterNativesASBZNoCookDS()
	{
	}
	UClass* Z_Construct_UClass_ASBZNoCookDS_NoRegister()
	{
		return ASBZNoCookDS::StaticClass();
	}
	struct Z_Construct_UClass_ASBZNoCookDS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZNoCookDS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZNoCookDS_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "SBZNoCookDS.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZNoCookDS.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZNoCookDS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZNoCookDS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZNoCookDS_Statics::ClassParams = {
		&ASBZNoCookDS::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZNoCookDS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZNoCookDS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZNoCookDS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZNoCookDS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZNoCookDS, 4244670188);
	template<> STARBREEZE_API UClass* StaticClass<ASBZNoCookDS>()
	{
		return ASBZNoCookDS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZNoCookDS(Z_Construct_UClass_ASBZNoCookDS, &ASBZNoCookDS::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZNoCookDS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZNoCookDS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

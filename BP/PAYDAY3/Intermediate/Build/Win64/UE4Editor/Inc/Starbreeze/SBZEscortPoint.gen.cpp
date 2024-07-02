// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEscortPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEscortPoint() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEscortPoint_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEscortPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZEscortPoint::StaticRegisterNativesASBZEscortPoint()
	{
	}
	UClass* Z_Construct_UClass_ASBZEscortPoint_NoRegister()
	{
		return ASBZEscortPoint::StaticClass();
	}
	struct Z_Construct_UClass_ASBZEscortPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZEscortPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZEscortPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEscortPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEscortPoint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZEscortPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZEscortPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZEscortPoint_Statics::ClassParams = {
		&ASBZEscortPoint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASBZEscortPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZEscortPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZEscortPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZEscortPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZEscortPoint, 861180371);
	template<> STARBREEZE_API UClass* StaticClass<ASBZEscortPoint>()
	{
		return ASBZEscortPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZEscortPoint(Z_Construct_UClass_ASBZEscortPoint, &ASBZEscortPoint::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZEscortPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZEscortPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

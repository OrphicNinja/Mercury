// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEllipsoid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEllipsoid() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEllipsoid_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEllipsoid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEllipsoidComponent_NoRegister();
// End Cross Module References
	void ASBZEllipsoid::StaticRegisterNativesASBZEllipsoid()
	{
	}
	UClass* Z_Construct_UClass_ASBZEllipsoid_NoRegister()
	{
		return ASBZEllipsoid::StaticClass();
	}
	struct Z_Construct_UClass_ASBZEllipsoid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EllipsoidComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EllipsoidComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZEllipsoid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZEllipsoid_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEllipsoid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEllipsoid.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZEllipsoid_Statics::NewProp_EllipsoidComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEllipsoid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZEllipsoid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZEllipsoid_Statics::NewProp_EllipsoidComponent = { "EllipsoidComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZEllipsoid, EllipsoidComponent), Z_Construct_UClass_USBZEllipsoidComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZEllipsoid_Statics::NewProp_EllipsoidComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZEllipsoid_Statics::NewProp_EllipsoidComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZEllipsoid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZEllipsoid_Statics::NewProp_EllipsoidComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZEllipsoid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZEllipsoid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZEllipsoid_Statics::ClassParams = {
		&ASBZEllipsoid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZEllipsoid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZEllipsoid_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZEllipsoid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZEllipsoid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZEllipsoid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZEllipsoid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZEllipsoid, 3513659562);
	template<> STARBREEZE_API UClass* StaticClass<ASBZEllipsoid>()
	{
		return ASBZEllipsoid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZEllipsoid(Z_Construct_UClass_ASBZEllipsoid, &ASBZEllipsoid::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZEllipsoid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZEllipsoid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

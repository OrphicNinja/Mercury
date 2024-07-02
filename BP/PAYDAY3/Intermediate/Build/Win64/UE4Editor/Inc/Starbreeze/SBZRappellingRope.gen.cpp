// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRappellingRope.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRappellingRope() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRappellingRope_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRappellingRope();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCosmeticProp();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRappellingRopeComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRappellingRopeData_NoRegister();
// End Cross Module References
	void ASBZRappellingRope::StaticRegisterNativesASBZRappellingRope()
	{
	}
	UClass* Z_Construct_UClass_ASBZRappellingRope_NoRegister()
	{
		return ASBZRappellingRope::StaticClass();
	}
	struct Z_Construct_UClass_ASBZRappellingRope_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RappellingRopeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RappellingRopeComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RappellingRopeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RappellingRopeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZRappellingRope_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZCosmeticProp,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRappellingRope_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZRappellingRope.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZRappellingRope.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRappellingRope_Statics::NewProp_RappellingRopeComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRappellingRope" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZRappellingRope.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRappellingRope_Statics::NewProp_RappellingRopeComponent = { "RappellingRopeComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRappellingRope, RappellingRopeComponent), Z_Construct_UClass_USBZRappellingRopeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZRappellingRope_Statics::NewProp_RappellingRopeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRappellingRope_Statics::NewProp_RappellingRopeComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRappellingRope_Statics::NewProp_RappellingRopeData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRappellingRope" },
		{ "ModuleRelativePath", "Public/SBZRappellingRope.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRappellingRope_Statics::NewProp_RappellingRopeData = { "RappellingRopeData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRappellingRope, RappellingRopeData), Z_Construct_UClass_USBZRappellingRopeData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZRappellingRope_Statics::NewProp_RappellingRopeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRappellingRope_Statics::NewProp_RappellingRopeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZRappellingRope_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRappellingRope_Statics::NewProp_RappellingRopeComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRappellingRope_Statics::NewProp_RappellingRopeData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZRappellingRope_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZRappellingRope>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZRappellingRope_Statics::ClassParams = {
		&ASBZRappellingRope::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZRappellingRope_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRappellingRope_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZRappellingRope_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRappellingRope_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZRappellingRope()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZRappellingRope_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZRappellingRope, 17867610);
	template<> STARBREEZE_API UClass* StaticClass<ASBZRappellingRope>()
	{
		return ASBZRappellingRope::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZRappellingRope(Z_Construct_UClass_ASBZRappellingRope, &ASBZRappellingRope::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZRappellingRope"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZRappellingRope);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

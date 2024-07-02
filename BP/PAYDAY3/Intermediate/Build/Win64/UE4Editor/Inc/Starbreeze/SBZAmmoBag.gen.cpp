// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAmmoBag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAmmoBag() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAmmoBag_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAmmoBag();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableCharges();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZAmmoBag::StaticRegisterNativesASBZAmmoBag()
	{
	}
	UClass* Z_Construct_UClass_ASBZAmmoBag_NoRegister()
	{
		return ASBZAmmoBag::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAmmoBag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfMagazinesPerCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NumberOfMagazinesPerCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfGrenadesPerCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NumberOfGrenadesPerCharge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAmmoBag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZPlaceableCharges,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAmmoBag_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAmmoBag.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAmmoBag.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAmmoBag_Statics::NewProp_NumberOfMagazinesPerCharge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAmmoBag" },
		{ "ModuleRelativePath", "Public/SBZAmmoBag.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZAmmoBag_Statics::NewProp_NumberOfMagazinesPerCharge = { "NumberOfMagazinesPerCharge", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAmmoBag, NumberOfMagazinesPerCharge), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZAmmoBag_Statics::NewProp_NumberOfMagazinesPerCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAmmoBag_Statics::NewProp_NumberOfMagazinesPerCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAmmoBag_Statics::NewProp_NumberOfGrenadesPerCharge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAmmoBag" },
		{ "ModuleRelativePath", "Public/SBZAmmoBag.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZAmmoBag_Statics::NewProp_NumberOfGrenadesPerCharge = { "NumberOfGrenadesPerCharge", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAmmoBag, NumberOfGrenadesPerCharge), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZAmmoBag_Statics::NewProp_NumberOfGrenadesPerCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAmmoBag_Statics::NewProp_NumberOfGrenadesPerCharge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAmmoBag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAmmoBag_Statics::NewProp_NumberOfMagazinesPerCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAmmoBag_Statics::NewProp_NumberOfGrenadesPerCharge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAmmoBag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAmmoBag>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAmmoBag_Statics::ClassParams = {
		&ASBZAmmoBag::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZAmmoBag_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAmmoBag_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAmmoBag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAmmoBag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAmmoBag()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAmmoBag_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAmmoBag, 4054928935);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAmmoBag>()
	{
		return ASBZAmmoBag::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAmmoBag(Z_Construct_UClass_ASBZAmmoBag, &ASBZAmmoBag::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAmmoBag"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAmmoBag);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

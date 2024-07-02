// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZArmorBag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZArmorBag() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZArmorBag_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZArmorBag();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableCharges();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZArmorBag::StaticRegisterNativesASBZArmorBag()
	{
	}
	UClass* Z_Construct_UClass_ASBZArmorBag_NoRegister()
	{
		return ASBZArmorBag::StaticClass();
	}
	struct Z_Construct_UClass_ASBZArmorBag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorChunkSizePerCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArmorChunkSizePerCharge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZArmorBag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZPlaceableCharges,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZArmorBag_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZArmorBag.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZArmorBag.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZArmorBag_Statics::NewProp_ArmorChunkSizePerCharge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmorBag" },
		{ "ModuleRelativePath", "Public/SBZArmorBag.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZArmorBag_Statics::NewProp_ArmorChunkSizePerCharge = { "ArmorChunkSizePerCharge", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZArmorBag, ArmorChunkSizePerCharge), METADATA_PARAMS(Z_Construct_UClass_ASBZArmorBag_Statics::NewProp_ArmorChunkSizePerCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZArmorBag_Statics::NewProp_ArmorChunkSizePerCharge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZArmorBag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZArmorBag_Statics::NewProp_ArmorChunkSizePerCharge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZArmorBag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZArmorBag>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZArmorBag_Statics::ClassParams = {
		&ASBZArmorBag::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZArmorBag_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZArmorBag_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZArmorBag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZArmorBag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZArmorBag()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZArmorBag_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZArmorBag, 1437958082);
	template<> STARBREEZE_API UClass* StaticClass<ASBZArmorBag>()
	{
		return ASBZArmorBag::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZArmorBag(Z_Construct_UClass_ASBZArmorBag, &ASBZArmorBag::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZArmorBag"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZArmorBag);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

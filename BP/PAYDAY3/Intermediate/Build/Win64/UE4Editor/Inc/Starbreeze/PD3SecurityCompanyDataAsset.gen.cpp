// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3SecurityCompanyDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3SecurityCompanyDataAsset() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3SecurityCompanyDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3SecurityCompanyDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
// End Cross Module References
	void UPD3SecurityCompanyDataAsset::StaticRegisterNativesUPD3SecurityCompanyDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UPD3SecurityCompanyDataAsset_NoRegister()
	{
		return UPD3SecurityCompanyDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecurityCompanyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SecurityCompanyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecurityCompanyLogo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecurityCompanyLogo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecurityCompanyDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SecurityCompanyDescription;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3SecurityCompanyDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3SecurityCompanyDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics::NewProp_SecurityCompanyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3SecurityCompanyDataAsset" },
		{ "ModuleRelativePath", "Public/PD3SecurityCompanyDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics::NewProp_SecurityCompanyName = { "SecurityCompanyName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3SecurityCompanyDataAsset, SecurityCompanyName), METADATA_PARAMS(Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics::NewProp_SecurityCompanyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics::NewProp_SecurityCompanyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics::NewProp_SecurityCompanyLogo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3SecurityCompanyDataAsset" },
		{ "ModuleRelativePath", "Public/PD3SecurityCompanyDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics::NewProp_SecurityCompanyLogo = { "SecurityCompanyLogo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3SecurityCompanyDataAsset, SecurityCompanyLogo), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics::NewProp_SecurityCompanyLogo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics::NewProp_SecurityCompanyLogo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics::NewProp_SecurityCompanyDescription_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3SecurityCompanyDataAsset" },
		{ "ModuleRelativePath", "Public/PD3SecurityCompanyDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics::NewProp_SecurityCompanyDescription = { "SecurityCompanyDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3SecurityCompanyDataAsset, SecurityCompanyDescription), METADATA_PARAMS(Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics::NewProp_SecurityCompanyDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics::NewProp_SecurityCompanyDescription_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics::NewProp_SecurityCompanyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics::NewProp_SecurityCompanyLogo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics::NewProp_SecurityCompanyDescription,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3SecurityCompanyDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics::ClassParams = {
		&UPD3SecurityCompanyDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3SecurityCompanyDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3SecurityCompanyDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3SecurityCompanyDataAsset, 2996873728);
	template<> STARBREEZE_API UClass* StaticClass<UPD3SecurityCompanyDataAsset>()
	{
		return UPD3SecurityCompanyDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3SecurityCompanyDataAsset(Z_Construct_UClass_UPD3SecurityCompanyDataAsset, &UPD3SecurityCompanyDataAsset::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3SecurityCompanyDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3SecurityCompanyDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

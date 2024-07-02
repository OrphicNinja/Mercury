// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlaceableWeaponBagItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlaceableWeaponBagItem() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableWeaponBagItem_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableWeaponBagItem();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBagItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableConfig();
// End Cross Module References
	void ASBZPlaceableWeaponBagItem::StaticRegisterNativesASBZPlaceableWeaponBagItem()
	{
	}
	UClass* Z_Construct_UClass_ASBZPlaceableWeaponBagItem_NoRegister()
	{
		return ASBZPlaceableWeaponBagItem::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPlaceableWeaponBagItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredWeaponConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoredWeaponConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPlaceableWeaponBagItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZBagItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableWeaponBagItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlaceableWeaponBagItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceableWeaponBagItem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableWeaponBagItem_Statics::NewProp_StoredWeaponConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableWeaponBagItem" },
		{ "ModuleRelativePath", "Public/SBZPlaceableWeaponBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlaceableWeaponBagItem_Statics::NewProp_StoredWeaponConfig = { "StoredWeaponConfig", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlaceableWeaponBagItem, StoredWeaponConfig), Z_Construct_UScriptStruct_FSBZEquippableConfig, METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableWeaponBagItem_Statics::NewProp_StoredWeaponConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableWeaponBagItem_Statics::NewProp_StoredWeaponConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPlaceableWeaponBagItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableWeaponBagItem_Statics::NewProp_StoredWeaponConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPlaceableWeaponBagItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPlaceableWeaponBagItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPlaceableWeaponBagItem_Statics::ClassParams = {
		&ASBZPlaceableWeaponBagItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZPlaceableWeaponBagItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableWeaponBagItem_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableWeaponBagItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableWeaponBagItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPlaceableWeaponBagItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPlaceableWeaponBagItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPlaceableWeaponBagItem, 1632471094);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPlaceableWeaponBagItem>()
	{
		return ASBZPlaceableWeaponBagItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPlaceableWeaponBagItem(Z_Construct_UClass_ASBZPlaceableWeaponBagItem, &ASBZPlaceableWeaponBagItem::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPlaceableWeaponBagItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPlaceableWeaponBagItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

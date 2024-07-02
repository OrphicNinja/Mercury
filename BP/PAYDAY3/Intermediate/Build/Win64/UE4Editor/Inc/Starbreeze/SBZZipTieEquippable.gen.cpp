// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZZipTieEquippable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZZipTieEquippable() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZZipTieEquippable_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZZipTieEquippable();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEquippable();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	void ASBZZipTieEquippable::StaticRegisterNativesASBZZipTieEquippable()
	{
	}
	UClass* Z_Construct_UClass_ASBZZipTieEquippable_NoRegister()
	{
		return ASBZZipTieEquippable::StaticClass();
	}
	struct Z_Construct_UClass_ASBZZipTieEquippable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrokenMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrokenMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZZipTieEquippable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZEquippable,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZipTieEquippable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZZipTieEquippable.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZZipTieEquippable.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZipTieEquippable_Statics::NewProp_BrokenMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZipTieEquippable" },
		{ "ModuleRelativePath", "Public/SBZZipTieEquippable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZZipTieEquippable_Statics::NewProp_BrokenMesh = { "BrokenMesh", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZZipTieEquippable, BrokenMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZZipTieEquippable_Statics::NewProp_BrokenMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipTieEquippable_Statics::NewProp_BrokenMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZZipTieEquippable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZipTieEquippable_Statics::NewProp_BrokenMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZZipTieEquippable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZZipTieEquippable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZZipTieEquippable_Statics::ClassParams = {
		&ASBZZipTieEquippable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZZipTieEquippable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipTieEquippable_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZZipTieEquippable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipTieEquippable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZZipTieEquippable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZZipTieEquippable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZZipTieEquippable, 2643786923);
	template<> STARBREEZE_API UClass* StaticClass<ASBZZipTieEquippable>()
	{
		return ASBZZipTieEquippable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZZipTieEquippable(Z_Construct_UClass_ASBZZipTieEquippable, &ASBZZipTieEquippable::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZZipTieEquippable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZZipTieEquippable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

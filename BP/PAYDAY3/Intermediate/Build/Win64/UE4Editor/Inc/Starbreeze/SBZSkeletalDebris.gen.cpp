// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkeletalDebris.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkeletalDebris() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSkeletalDebris_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSkeletalDebris();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBaseDebris();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void ASBZSkeletalDebris::StaticRegisterNativesASBZSkeletalDebris()
	{
	}
	UClass* Z_Construct_UClass_ASBZSkeletalDebris_NoRegister()
	{
		return ASBZSkeletalDebris::StaticClass();
	}
	struct Z_Construct_UClass_ASBZSkeletalDebris_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZSkeletalDebris_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZBaseDebris,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSkeletalDebris_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkeletalDebris.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkeletalDebris.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSkeletalDebris_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkeletalDebris" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSkeletalDebris.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSkeletalDebris_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSkeletalDebris, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSkeletalDebris_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSkeletalDebris_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZSkeletalDebris_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSkeletalDebris_Statics::NewProp_SkeletalMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZSkeletalDebris_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZSkeletalDebris>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZSkeletalDebris_Statics::ClassParams = {
		&ASBZSkeletalDebris::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZSkeletalDebris_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSkeletalDebris_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZSkeletalDebris_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSkeletalDebris_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZSkeletalDebris()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZSkeletalDebris_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZSkeletalDebris, 2618465245);
	template<> STARBREEZE_API UClass* StaticClass<ASBZSkeletalDebris>()
	{
		return ASBZSkeletalDebris::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZSkeletalDebris(Z_Construct_UClass_ASBZSkeletalDebris, &ASBZSkeletalDebris::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZSkeletalDebris"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZSkeletalDebris);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

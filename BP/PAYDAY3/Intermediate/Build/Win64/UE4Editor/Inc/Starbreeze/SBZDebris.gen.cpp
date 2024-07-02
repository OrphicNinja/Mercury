// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDebris.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDebris() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDebris_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDebris();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBaseDebris();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASBZDebris::StaticRegisterNativesASBZDebris()
	{
	}
	UClass* Z_Construct_UClass_ASBZDebris_NoRegister()
	{
		return ASBZDebris::StaticClass();
	}
	struct Z_Construct_UClass_ASBZDebris_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZDebris_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZBaseDebris,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDebris_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDebris.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDebris.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDebris_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDebris" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZDebris.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZDebris_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDebris, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZDebris_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDebris_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZDebris_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDebris_Statics::NewProp_StaticMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZDebris_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZDebris>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZDebris_Statics::ClassParams = {
		&ASBZDebris::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZDebris_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDebris_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZDebris_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDebris_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZDebris()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZDebris_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZDebris, 1467968879);
	template<> STARBREEZE_API UClass* StaticClass<ASBZDebris>()
	{
		return ASBZDebris::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZDebris(Z_Construct_UClass_ASBZDebris, &ASBZDebris::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZDebris"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZDebris);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

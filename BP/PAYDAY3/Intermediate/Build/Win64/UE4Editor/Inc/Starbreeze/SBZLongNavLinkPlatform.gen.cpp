// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLongNavLinkPlatform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLongNavLinkPlatform() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLongNavLinkPlatform_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLongNavLinkPlatform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavModifierComponent_NoRegister();
// End Cross Module References
	void ASBZLongNavLinkPlatform::StaticRegisterNativesASBZLongNavLinkPlatform()
	{
	}
	UClass* Z_Construct_UClass_ASBZLongNavLinkPlatform_NoRegister()
	{
		return ASBZLongNavLinkPlatform::StaticClass();
	}
	struct Z_Construct_UClass_ASBZLongNavLinkPlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavModifierComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavModifierComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZLongNavLinkPlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLongNavLinkPlatform_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLongNavLinkPlatform.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLongNavLinkPlatform.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLongNavLinkPlatform_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLongNavLinkPlatform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLongNavLinkPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLongNavLinkPlatform_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLongNavLinkPlatform, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZLongNavLinkPlatform_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLongNavLinkPlatform_Statics::NewProp_BoxComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLongNavLinkPlatform_Statics::NewProp_NavModifierComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLongNavLinkPlatform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLongNavLinkPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLongNavLinkPlatform_Statics::NewProp_NavModifierComponent = { "NavModifierComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLongNavLinkPlatform, NavModifierComponent), Z_Construct_UClass_UNavModifierComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZLongNavLinkPlatform_Statics::NewProp_NavModifierComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLongNavLinkPlatform_Statics::NewProp_NavModifierComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZLongNavLinkPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLongNavLinkPlatform_Statics::NewProp_BoxComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLongNavLinkPlatform_Statics::NewProp_NavModifierComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZLongNavLinkPlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZLongNavLinkPlatform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZLongNavLinkPlatform_Statics::ClassParams = {
		&ASBZLongNavLinkPlatform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZLongNavLinkPlatform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLongNavLinkPlatform_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZLongNavLinkPlatform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLongNavLinkPlatform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZLongNavLinkPlatform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZLongNavLinkPlatform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZLongNavLinkPlatform, 898462404);
	template<> STARBREEZE_API UClass* StaticClass<ASBZLongNavLinkPlatform>()
	{
		return ASBZLongNavLinkPlatform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZLongNavLinkPlatform(Z_Construct_UClass_ASBZLongNavLinkPlatform, &ASBZLongNavLinkPlatform::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZLongNavLinkPlatform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZLongNavLinkPlatform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

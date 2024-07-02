// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCarriedStaticInteractionActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCarriedStaticInteractionActor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCarriedStaticInteractionActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCarriedStaticInteractionActor();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDynamicInteractionActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAICharacter_NoRegister();
// End Cross Module References
	void ASBZCarriedStaticInteractionActor::StaticRegisterNativesASBZCarriedStaticInteractionActor()
	{
	}
	UClass* Z_Construct_UClass_ASBZCarriedStaticInteractionActor_NoRegister()
	{
		return ASBZCarriedStaticInteractionActor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZCarriedStaticInteractionActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedAIParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachedAIParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSingleUse_MetaData[];
#endif
		static void NewProp_bIsSingleUse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSingleUse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZCarriedStaticInteractionActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZDynamicInteractionActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCarriedStaticInteractionActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCarriedStaticInteractionActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCarriedStaticInteractionActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCarriedStaticInteractionActor_Statics::NewProp_AttachedAIParent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarriedStaticInteractionActor" },
		{ "ModuleRelativePath", "Public/SBZCarriedStaticInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCarriedStaticInteractionActor_Statics::NewProp_AttachedAIParent = { "AttachedAIParent", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCarriedStaticInteractionActor, AttachedAIParent), Z_Construct_UClass_ASBZAICharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCarriedStaticInteractionActor_Statics::NewProp_AttachedAIParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedStaticInteractionActor_Statics::NewProp_AttachedAIParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCarriedStaticInteractionActor_Statics::NewProp_bIsSingleUse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarriedStaticInteractionActor" },
		{ "ModuleRelativePath", "Public/SBZCarriedStaticInteractionActor.h" },
	};
#endif
	void Z_Construct_UClass_ASBZCarriedStaticInteractionActor_Statics::NewProp_bIsSingleUse_SetBit(void* Obj)
	{
		((ASBZCarriedStaticInteractionActor*)Obj)->bIsSingleUse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZCarriedStaticInteractionActor_Statics::NewProp_bIsSingleUse = { "bIsSingleUse", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZCarriedStaticInteractionActor), &Z_Construct_UClass_ASBZCarriedStaticInteractionActor_Statics::NewProp_bIsSingleUse_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZCarriedStaticInteractionActor_Statics::NewProp_bIsSingleUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedStaticInteractionActor_Statics::NewProp_bIsSingleUse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZCarriedStaticInteractionActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCarriedStaticInteractionActor_Statics::NewProp_AttachedAIParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCarriedStaticInteractionActor_Statics::NewProp_bIsSingleUse,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZCarriedStaticInteractionActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZCarriedStaticInteractionActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZCarriedStaticInteractionActor_Statics::ClassParams = {
		&ASBZCarriedStaticInteractionActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZCarriedStaticInteractionActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedStaticInteractionActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZCarriedStaticInteractionActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedStaticInteractionActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZCarriedStaticInteractionActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZCarriedStaticInteractionActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZCarriedStaticInteractionActor, 1255114846);
	template<> STARBREEZE_API UClass* StaticClass<ASBZCarriedStaticInteractionActor>()
	{
		return ASBZCarriedStaticInteractionActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZCarriedStaticInteractionActor(Z_Construct_UClass_ASBZCarriedStaticInteractionActor, &ASBZCarriedStaticInteractionActor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZCarriedStaticInteractionActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZCarriedStaticInteractionActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

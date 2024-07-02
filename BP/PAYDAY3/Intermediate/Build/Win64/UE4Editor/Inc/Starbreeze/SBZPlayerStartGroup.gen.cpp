// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerStartGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerStartGroup() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerStartGroup_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerStartGroup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnSpawnGroupChosen__DelegateSignature();
// End Cross Module References
	void ASBZPlayerStartGroup::StaticRegisterNativesASBZPlayerStartGroup()
	{
	}
	UClass* Z_Construct_UClass_ASBZPlayerStartGroup_NoRegister()
	{
		return ASBZPlayerStartGroup::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPlayerStartGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerStarts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStarts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerStarts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSpawnGroupChosen_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpawnGroupChosen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPlayerStartGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerStartGroup_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerStartGroup.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerStartGroup.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerStartGroup_Statics::NewProp_PlayerStarts_Inner = { "PlayerStarts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerStartGroup_Statics::NewProp_PlayerStarts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStartGroup" },
		{ "ModuleRelativePath", "Public/SBZPlayerStartGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZPlayerStartGroup_Statics::NewProp_PlayerStarts = { "PlayerStarts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerStartGroup, PlayerStarts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerStartGroup_Statics::NewProp_PlayerStarts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerStartGroup_Statics::NewProp_PlayerStarts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerStartGroup_Statics::NewProp_OnSpawnGroupChosen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStartGroup" },
		{ "ModuleRelativePath", "Public/SBZPlayerStartGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZPlayerStartGroup_Statics::NewProp_OnSpawnGroupChosen = { "OnSpawnGroupChosen", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerStartGroup, OnSpawnGroupChosen), Z_Construct_UDelegateFunction_Starbreeze_SBZOnSpawnGroupChosen__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerStartGroup_Statics::NewProp_OnSpawnGroupChosen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerStartGroup_Statics::NewProp_OnSpawnGroupChosen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerStartGroup_Statics::NewProp_Weight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStartGroup" },
		{ "ModuleRelativePath", "Public/SBZPlayerStartGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerStartGroup_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerStartGroup, Weight), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerStartGroup_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerStartGroup_Statics::NewProp_Weight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPlayerStartGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerStartGroup_Statics::NewProp_PlayerStarts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerStartGroup_Statics::NewProp_PlayerStarts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerStartGroup_Statics::NewProp_OnSpawnGroupChosen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerStartGroup_Statics::NewProp_Weight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPlayerStartGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPlayerStartGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPlayerStartGroup_Statics::ClassParams = {
		&ASBZPlayerStartGroup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZPlayerStartGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerStartGroup_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerStartGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerStartGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPlayerStartGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPlayerStartGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPlayerStartGroup, 1108730206);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPlayerStartGroup>()
	{
		return ASBZPlayerStartGroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPlayerStartGroup(Z_Construct_UClass_ASBZPlayerStartGroup, &ASBZPlayerStartGroup::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPlayerStartGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPlayerStartGroup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

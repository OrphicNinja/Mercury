// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SBZUtilityPlugin/Public/SBZGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameModeBase() {}
// Cross Module References
	SBZUTILITYPLUGIN_API UClass* Z_Construct_UClass_ASBZGameModeBase_NoRegister();
	SBZUTILITYPLUGIN_API UClass* Z_Construct_UClass_ASBZGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SBZUtilityPlugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ASBZGameModeBase::StaticRegisterNativesASBZGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASBZGameModeBase_NoRegister()
	{
		return ASBZGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASBZGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SeamlessActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeamlessActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SeamlessActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SBZUtilityPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZGameModeBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameModeBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGameModeBase_Statics::NewProp_SeamlessActors_Inner = { "SeamlessActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGameModeBase_Statics::NewProp_SeamlessActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameModeBase" },
		{ "ModuleRelativePath", "Public/SBZGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZGameModeBase_Statics::NewProp_SeamlessActors = { "SeamlessActors", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGameModeBase, SeamlessActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZGameModeBase_Statics::NewProp_SeamlessActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGameModeBase_Statics::NewProp_SeamlessActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGameModeBase_Statics::NewProp_SeamlessActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGameModeBase_Statics::NewProp_SeamlessActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZGameModeBase_Statics::ClassParams = {
		&ASBZGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGameModeBase_Statics::PropPointers),
		0,
		0x009002ADu,
		METADATA_PARAMS(Z_Construct_UClass_ASBZGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZGameModeBase, 2925821528);
	template<> SBZUTILITYPLUGIN_API UClass* StaticClass<ASBZGameModeBase>()
	{
		return ASBZGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZGameModeBase(Z_Construct_UClass_ASBZGameModeBase, &ASBZGameModeBase::StaticClass, TEXT("/Script/SBZUtilityPlugin"), TEXT("ASBZGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

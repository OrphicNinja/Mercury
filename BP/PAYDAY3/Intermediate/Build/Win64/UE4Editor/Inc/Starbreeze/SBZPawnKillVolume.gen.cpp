// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPawnKillVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPawnKillVolume() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPawnKillVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPawnKillVolume();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZPawnKillVolume::StaticRegisterNativesASBZPawnKillVolume()
	{
	}
	UClass* Z_Construct_UClass_ASBZPawnKillVolume_NoRegister()
	{
		return ASBZPawnKillVolume::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPawnKillVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldStartEnabled_MetaData[];
#endif
		static void NewProp_bShouldStartEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldStartEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldAffectDrones_MetaData[];
#endif
		static void NewProp_bShouldAffectDrones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldAffectDrones;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPawnKillVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPawnKillVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "SBZPawnKillVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPawnKillVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPawnKillVolume_Statics::NewProp_bShouldStartEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnKillVolume" },
		{ "ModuleRelativePath", "Public/SBZPawnKillVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPawnKillVolume_Statics::NewProp_bShouldStartEnabled_SetBit(void* Obj)
	{
		((ASBZPawnKillVolume*)Obj)->bShouldStartEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPawnKillVolume_Statics::NewProp_bShouldStartEnabled = { "bShouldStartEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPawnKillVolume), &Z_Construct_UClass_ASBZPawnKillVolume_Statics::NewProp_bShouldStartEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPawnKillVolume_Statics::NewProp_bShouldStartEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnKillVolume_Statics::NewProp_bShouldStartEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPawnKillVolume_Statics::NewProp_bShouldAffectDrones_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnKillVolume" },
		{ "ModuleRelativePath", "Public/SBZPawnKillVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPawnKillVolume_Statics::NewProp_bShouldAffectDrones_SetBit(void* Obj)
	{
		((ASBZPawnKillVolume*)Obj)->bShouldAffectDrones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPawnKillVolume_Statics::NewProp_bShouldAffectDrones = { "bShouldAffectDrones", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPawnKillVolume), &Z_Construct_UClass_ASBZPawnKillVolume_Statics::NewProp_bShouldAffectDrones_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPawnKillVolume_Statics::NewProp_bShouldAffectDrones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnKillVolume_Statics::NewProp_bShouldAffectDrones_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPawnKillVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPawnKillVolume_Statics::NewProp_bShouldStartEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPawnKillVolume_Statics::NewProp_bShouldAffectDrones,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPawnKillVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPawnKillVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPawnKillVolume_Statics::ClassParams = {
		&ASBZPawnKillVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZPawnKillVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnKillVolume_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPawnKillVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnKillVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPawnKillVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPawnKillVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPawnKillVolume, 943880530);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPawnKillVolume>()
	{
		return ASBZPawnKillVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPawnKillVolume(Z_Construct_UClass_ASBZPawnKillVolume, &ASBZPawnKillVolume::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPawnKillVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPawnKillVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

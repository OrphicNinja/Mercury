// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIAction_SetHostile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIAction_SetHostile() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_SetHostile_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_SetHostile();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAttractorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void USBZAIAction_SetHostile::StaticRegisterNativesUSBZAIAction_SetHostile()
	{
	}
	UClass* Z_Construct_UClass_USBZAIAction_SetHostile_NoRegister()
	{
		return USBZAIAction_SetHostile::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIAction_SetHostile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttractorOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttractorOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hostile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hostile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldCheckSightPerception_MetaData[];
#endif
		static void NewProp_bShouldCheckSightPerception_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldCheckSightPerception;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIAction_SetHostile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIAction,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_SetHostile_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIAction_SetHostile.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAction_SetHostile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_SetHostile_Statics::NewProp_AttractorOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_SetHostile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAction_SetHostile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAction_SetHostile_Statics::NewProp_AttractorOwner = { "AttractorOwner", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAction_SetHostile, AttractorOwner), Z_Construct_UClass_USBZAIAttractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_SetHostile_Statics::NewProp_AttractorOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_SetHostile_Statics::NewProp_AttractorOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_SetHostile_Statics::NewProp_Hostile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_SetHostile" },
		{ "ModuleRelativePath", "Public/SBZAIAction_SetHostile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAction_SetHostile_Statics::NewProp_Hostile = { "Hostile", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAction_SetHostile, Hostile), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_SetHostile_Statics::NewProp_Hostile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_SetHostile_Statics::NewProp_Hostile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_SetHostile_Statics::NewProp_bShouldCheckSightPerception_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_SetHostile" },
		{ "ModuleRelativePath", "Public/SBZAIAction_SetHostile.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIAction_SetHostile_Statics::NewProp_bShouldCheckSightPerception_SetBit(void* Obj)
	{
		((USBZAIAction_SetHostile*)Obj)->bShouldCheckSightPerception = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIAction_SetHostile_Statics::NewProp_bShouldCheckSightPerception = { "bShouldCheckSightPerception", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIAction_SetHostile), &Z_Construct_UClass_USBZAIAction_SetHostile_Statics::NewProp_bShouldCheckSightPerception_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_SetHostile_Statics::NewProp_bShouldCheckSightPerception_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_SetHostile_Statics::NewProp_bShouldCheckSightPerception_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIAction_SetHostile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_SetHostile_Statics::NewProp_AttractorOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_SetHostile_Statics::NewProp_Hostile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_SetHostile_Statics::NewProp_bShouldCheckSightPerception,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIAction_SetHostile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIAction_SetHostile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIAction_SetHostile_Statics::ClassParams = {
		&USBZAIAction_SetHostile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIAction_SetHostile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_SetHostile_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_SetHostile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_SetHostile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIAction_SetHostile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIAction_SetHostile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIAction_SetHostile, 3810578020);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIAction_SetHostile>()
	{
		return USBZAIAction_SetHostile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIAction_SetHostile(Z_Construct_UClass_USBZAIAction_SetHostile, &USBZAIAction_SetHostile::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIAction_SetHostile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIAction_SetHostile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

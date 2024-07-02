// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlaceToolAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlaceToolAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceToolAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceToolAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGhostTool_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	void USBZPlaceToolAbility::StaticRegisterNativesUSBZPlaceToolAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZPlaceToolAbility_NoRegister()
	{
		return USBZPlaceToolAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlaceToolAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GhostTool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GhostTool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachParent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlaceToolAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceToolAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlaceToolAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceToolAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceToolAbility_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceToolAbility" },
		{ "ModuleRelativePath", "Public/SBZPlaceToolAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlaceToolAbility_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlaceToolAbility, OwnerCharacter), Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlaceToolAbility_Statics::NewProp_OwnerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceToolAbility_Statics::NewProp_OwnerCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceToolAbility_Statics::NewProp_GhostTool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceToolAbility" },
		{ "ModuleRelativePath", "Public/SBZPlaceToolAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlaceToolAbility_Statics::NewProp_GhostTool = { "GhostTool", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlaceToolAbility, GhostTool), Z_Construct_UClass_ASBZGhostTool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlaceToolAbility_Statics::NewProp_GhostTool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceToolAbility_Statics::NewProp_GhostTool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceToolAbility_Statics::NewProp_AttachParent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceToolAbility" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceToolAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlaceToolAbility_Statics::NewProp_AttachParent = { "AttachParent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlaceToolAbility, AttachParent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlaceToolAbility_Statics::NewProp_AttachParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceToolAbility_Statics::NewProp_AttachParent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlaceToolAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlaceToolAbility_Statics::NewProp_OwnerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlaceToolAbility_Statics::NewProp_GhostTool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlaceToolAbility_Statics::NewProp_AttachParent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlaceToolAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlaceToolAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlaceToolAbility_Statics::ClassParams = {
		&USBZPlaceToolAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPlaceToolAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceToolAbility_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlaceToolAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceToolAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlaceToolAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlaceToolAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlaceToolAbility, 568156503);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlaceToolAbility>()
	{
		return USBZPlaceToolAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlaceToolAbility(Z_Construct_UClass_USBZPlaceToolAbility, &USBZPlaceToolAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlaceToolAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlaceToolAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

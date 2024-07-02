// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZArmMicroCameraAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZArmMicroCameraAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZArmMicroCameraAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZArmMicroCameraAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCharacter_NoRegister();
// End Cross Module References
	void USBZArmMicroCameraAbility::StaticRegisterNativesUSBZArmMicroCameraAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZArmMicroCameraAbility_NoRegister()
	{
		return USBZArmMicroCameraAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZArmMicroCameraAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZArmMicroCameraAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZArmMicroCameraAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZArmMicroCameraAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZArmMicroCameraAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZArmMicroCameraAbility_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmMicroCameraAbility" },
		{ "ModuleRelativePath", "Public/SBZArmMicroCameraAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZArmMicroCameraAbility_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZArmMicroCameraAbility, OwnerCharacter), Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZArmMicroCameraAbility_Statics::NewProp_OwnerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZArmMicroCameraAbility_Statics::NewProp_OwnerCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZArmMicroCameraAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZArmMicroCameraAbility_Statics::NewProp_OwnerCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZArmMicroCameraAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZArmMicroCameraAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZArmMicroCameraAbility_Statics::ClassParams = {
		&USBZArmMicroCameraAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZArmMicroCameraAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZArmMicroCameraAbility_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZArmMicroCameraAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZArmMicroCameraAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZArmMicroCameraAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZArmMicroCameraAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZArmMicroCameraAbility, 636605751);
	template<> STARBREEZE_API UClass* StaticClass<USBZArmMicroCameraAbility>()
	{
		return USBZArmMicroCameraAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZArmMicroCameraAbility(Z_Construct_UClass_USBZArmMicroCameraAbility, &USBZArmMicroCameraAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZArmMicroCameraAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZArmMicroCameraAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

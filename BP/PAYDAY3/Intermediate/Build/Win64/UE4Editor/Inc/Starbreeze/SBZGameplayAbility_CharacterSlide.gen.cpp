// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameplayAbility_CharacterSlide.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameplayAbility_CharacterSlide() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility_CharacterSlide_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility_CharacterSlide();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterMovementComponent_NoRegister();
// End Cross Module References
	void USBZGameplayAbility_CharacterSlide::StaticRegisterNativesUSBZGameplayAbility_CharacterSlide()
	{
	}
	UClass* Z_Construct_UClass_USBZGameplayAbility_CharacterSlide_NoRegister()
	{
		return USBZGameplayAbility_CharacterSlide::StaticClass();
	}
	struct Z_Construct_UClass_USBZGameplayAbility_CharacterSlide_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGameplayAbility_CharacterSlide_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_CharacterSlide_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGameplayAbility_CharacterSlide.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility_CharacterSlide.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_CharacterSlide_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayAbility_CharacterSlide" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility_CharacterSlide.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameplayAbility_CharacterSlide_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameplayAbility_CharacterSlide, MovementComponent), Z_Construct_UClass_USBZCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_CharacterSlide_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_CharacterSlide_Statics::NewProp_MovementComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGameplayAbility_CharacterSlide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameplayAbility_CharacterSlide_Statics::NewProp_MovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGameplayAbility_CharacterSlide_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGameplayAbility_CharacterSlide>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGameplayAbility_CharacterSlide_Statics::ClassParams = {
		&USBZGameplayAbility_CharacterSlide::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZGameplayAbility_CharacterSlide_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_CharacterSlide_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_CharacterSlide_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_CharacterSlide_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGameplayAbility_CharacterSlide()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGameplayAbility_CharacterSlide_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGameplayAbility_CharacterSlide, 1619304802);
	template<> STARBREEZE_API UClass* StaticClass<USBZGameplayAbility_CharacterSlide>()
	{
		return USBZGameplayAbility_CharacterSlide::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGameplayAbility_CharacterSlide(Z_Construct_UClass_USBZGameplayAbility_CharacterSlide, &USBZGameplayAbility_CharacterSlide::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGameplayAbility_CharacterSlide"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGameplayAbility_CharacterSlide);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

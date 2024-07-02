// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameplayAbility_Interact.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameplayAbility_Interact() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility_Interact_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility_Interact();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerInteractorComponent_NoRegister();
// End Cross Module References
	void USBZGameplayAbility_Interact::StaticRegisterNativesUSBZGameplayAbility_Interact()
	{
	}
	UClass* Z_Construct_UClass_USBZGameplayAbility_Interact_NoRegister()
	{
		return USBZGameplayAbility_Interact::StaticClass();
	}
	struct Z_Construct_UClass_USBZGameplayAbility_Interact_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGameplayAbility_Interact_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_Interact_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGameplayAbility_Interact.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility_Interact.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_Interact_Statics::NewProp_Interactor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayAbility_Interact" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameplayAbility_Interact_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameplayAbility_Interact, Interactor), Z_Construct_UClass_USBZPlayerInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_Interact_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_Interact_Statics::NewProp_Interactor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGameplayAbility_Interact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameplayAbility_Interact_Statics::NewProp_Interactor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGameplayAbility_Interact_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGameplayAbility_Interact>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGameplayAbility_Interact_Statics::ClassParams = {
		&USBZGameplayAbility_Interact::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZGameplayAbility_Interact_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_Interact_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_Interact_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_Interact_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGameplayAbility_Interact()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGameplayAbility_Interact_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGameplayAbility_Interact, 867119329);
	template<> STARBREEZE_API UClass* StaticClass<USBZGameplayAbility_Interact>()
	{
		return USBZGameplayAbility_Interact::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGameplayAbility_Interact(Z_Construct_UClass_USBZGameplayAbility_Interact, &USBZGameplayAbility_Interact::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGameplayAbility_Interact"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGameplayAbility_Interact);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

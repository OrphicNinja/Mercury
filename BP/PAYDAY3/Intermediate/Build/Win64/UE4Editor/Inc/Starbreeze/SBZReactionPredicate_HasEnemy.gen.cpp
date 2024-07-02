// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReactionPredicate_HasEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReactionPredicate_HasEnemy() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReactionPredicate_HasEnemy_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReactionPredicate_HasEnemy();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReactionPredicate();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZReactionPredicate_HasEnemy::StaticRegisterNativesUSBZReactionPredicate_HasEnemy()
	{
	}
	UClass* Z_Construct_UClass_USBZReactionPredicate_HasEnemy_NoRegister()
	{
		return USBZReactionPredicate_HasEnemy::StaticClass();
	}
	struct Z_Construct_UClass_USBZReactionPredicate_HasEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZReactionPredicate_HasEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZReactionPredicate,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReactionPredicate_HasEnemy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZReactionPredicate_HasEnemy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZReactionPredicate_HasEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZReactionPredicate_HasEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZReactionPredicate_HasEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZReactionPredicate_HasEnemy_Statics::ClassParams = {
		&USBZReactionPredicate_HasEnemy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZReactionPredicate_HasEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReactionPredicate_HasEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZReactionPredicate_HasEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZReactionPredicate_HasEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZReactionPredicate_HasEnemy, 4222476958);
	template<> STARBREEZE_API UClass* StaticClass<USBZReactionPredicate_HasEnemy>()
	{
		return USBZReactionPredicate_HasEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZReactionPredicate_HasEnemy(Z_Construct_UClass_USBZReactionPredicate_HasEnemy, &USBZReactionPredicate_HasEnemy::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZReactionPredicate_HasEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZReactionPredicate_HasEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

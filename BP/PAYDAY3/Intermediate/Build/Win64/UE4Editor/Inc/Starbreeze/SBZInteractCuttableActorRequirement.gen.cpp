// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInteractCuttableActorRequirement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInteractCuttableActorRequirement() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractCuttableActorRequirement_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractCuttableActorRequirement();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractRequirement();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZInteractCuttableActorRequirement::StaticRegisterNativesUSBZInteractCuttableActorRequirement()
	{
	}
	UClass* Z_Construct_UClass_USBZInteractCuttableActorRequirement_NoRegister()
	{
		return USBZInteractCuttableActorRequirement::StaticClass();
	}
	struct Z_Construct_UClass_USBZInteractCuttableActorRequirement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZInteractCuttableActorRequirement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBaseInteractRequirement,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractCuttableActorRequirement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZInteractCuttableActorRequirement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractCuttableActorRequirement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZInteractCuttableActorRequirement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZInteractCuttableActorRequirement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZInteractCuttableActorRequirement_Statics::ClassParams = {
		&USBZInteractCuttableActorRequirement::StaticClass,
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
		0x002010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZInteractCuttableActorRequirement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractCuttableActorRequirement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZInteractCuttableActorRequirement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZInteractCuttableActorRequirement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZInteractCuttableActorRequirement, 1333138977);
	template<> STARBREEZE_API UClass* StaticClass<USBZInteractCuttableActorRequirement>()
	{
		return USBZInteractCuttableActorRequirement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZInteractCuttableActorRequirement(Z_Construct_UClass_USBZInteractCuttableActorRequirement, &USBZInteractCuttableActorRequirement::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZInteractCuttableActorRequirement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZInteractCuttableActorRequirement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

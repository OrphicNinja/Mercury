// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStaticMeshComponentWindApplier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStaticMeshComponentWindApplier() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStaticMeshComponentWindApplier_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStaticMeshComponentWindApplier();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWindApplier();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZStaticMeshComponentWindApplier::StaticRegisterNativesUSBZStaticMeshComponentWindApplier()
	{
	}
	UClass* Z_Construct_UClass_USBZStaticMeshComponentWindApplier_NoRegister()
	{
		return USBZStaticMeshComponentWindApplier::StaticClass();
	}
	struct Z_Construct_UClass_USBZStaticMeshComponentWindApplier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStaticMeshComponentWindApplier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWindApplier,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStaticMeshComponentWindApplier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStaticMeshComponentWindApplier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStaticMeshComponentWindApplier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStaticMeshComponentWindApplier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStaticMeshComponentWindApplier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStaticMeshComponentWindApplier_Statics::ClassParams = {
		&USBZStaticMeshComponentWindApplier::StaticClass,
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
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStaticMeshComponentWindApplier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStaticMeshComponentWindApplier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStaticMeshComponentWindApplier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStaticMeshComponentWindApplier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStaticMeshComponentWindApplier, 1127433961);
	template<> STARBREEZE_API UClass* StaticClass<USBZStaticMeshComponentWindApplier>()
	{
		return USBZStaticMeshComponentWindApplier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStaticMeshComponentWindApplier(Z_Construct_UClass_USBZStaticMeshComponentWindApplier, &USBZStaticMeshComponentWindApplier::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStaticMeshComponentWindApplier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStaticMeshComponentWindApplier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

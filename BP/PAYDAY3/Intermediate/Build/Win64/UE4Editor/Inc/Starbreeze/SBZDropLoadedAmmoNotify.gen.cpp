// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDropLoadedAmmoNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDropLoadedAmmoNotify() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDropLoadedAmmoNotify_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDropLoadedAmmoNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZDropLoadedAmmoNotify::StaticRegisterNativesUSBZDropLoadedAmmoNotify()
	{
	}
	UClass* Z_Construct_UClass_USBZDropLoadedAmmoNotify_NoRegister()
	{
		return USBZDropLoadedAmmoNotify::StaticClass();
	}
	struct Z_Construct_UClass_USBZDropLoadedAmmoNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDropLoadedAmmoNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDropLoadedAmmoNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZDropLoadedAmmoNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDropLoadedAmmoNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDropLoadedAmmoNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDropLoadedAmmoNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDropLoadedAmmoNotify_Statics::ClassParams = {
		&USBZDropLoadedAmmoNotify::StaticClass,
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
		0x000120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDropLoadedAmmoNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDropLoadedAmmoNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDropLoadedAmmoNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDropLoadedAmmoNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDropLoadedAmmoNotify, 729909612);
	template<> STARBREEZE_API UClass* StaticClass<USBZDropLoadedAmmoNotify>()
	{
		return USBZDropLoadedAmmoNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDropLoadedAmmoNotify(Z_Construct_UClass_USBZDropLoadedAmmoNotify, &USBZDropLoadedAmmoNotify::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDropLoadedAmmoNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDropLoadedAmmoNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

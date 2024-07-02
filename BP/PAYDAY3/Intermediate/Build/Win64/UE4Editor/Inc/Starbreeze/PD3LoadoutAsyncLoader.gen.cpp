// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3LoadoutAsyncLoader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3LoadoutAsyncLoader() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3LoadoutAsyncLoader_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3LoadoutAsyncLoader();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void UPD3LoadoutAsyncLoader::StaticRegisterNativesUPD3LoadoutAsyncLoader()
	{
	}
	UClass* Z_Construct_UClass_UPD3LoadoutAsyncLoader_NoRegister()
	{
		return UPD3LoadoutAsyncLoader::StaticClass();
	}
	struct Z_Construct_UClass_UPD3LoadoutAsyncLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3LoadoutAsyncLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3LoadoutAsyncLoader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3LoadoutAsyncLoader.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3LoadoutAsyncLoader.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3LoadoutAsyncLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3LoadoutAsyncLoader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3LoadoutAsyncLoader_Statics::ClassParams = {
		&UPD3LoadoutAsyncLoader::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3LoadoutAsyncLoader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3LoadoutAsyncLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3LoadoutAsyncLoader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3LoadoutAsyncLoader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3LoadoutAsyncLoader, 2713239764);
	template<> STARBREEZE_API UClass* StaticClass<UPD3LoadoutAsyncLoader>()
	{
		return UPD3LoadoutAsyncLoader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3LoadoutAsyncLoader(Z_Construct_UClass_UPD3LoadoutAsyncLoader, &UPD3LoadoutAsyncLoader::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3LoadoutAsyncLoader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3LoadoutAsyncLoader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

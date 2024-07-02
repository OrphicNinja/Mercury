// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZToggleGadget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZToggleGadget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZToggleGadget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZToggleGadget();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGadget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZToggleGadget::StaticRegisterNativesASBZToggleGadget()
	{
	}
	UClass* Z_Construct_UClass_ASBZToggleGadget_NoRegister()
	{
		return ASBZToggleGadget::StaticClass();
	}
	struct Z_Construct_UClass_ASBZToggleGadget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZToggleGadget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZGadget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZToggleGadget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZToggleGadget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZToggleGadget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZToggleGadget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZToggleGadget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZToggleGadget_Statics::ClassParams = {
		&ASBZToggleGadget::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZToggleGadget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZToggleGadget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZToggleGadget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZToggleGadget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZToggleGadget, 694037280);
	template<> STARBREEZE_API UClass* StaticClass<ASBZToggleGadget>()
	{
		return ASBZToggleGadget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZToggleGadget(Z_Construct_UClass_ASBZToggleGadget, &ASBZToggleGadget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZToggleGadget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZToggleGadget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

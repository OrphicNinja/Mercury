// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillGrifterGrifterAced.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillGrifterGrifterAced() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillGrifterGrifterAced_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillGrifterGrifterAced();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillGrifterGrifterAced::StaticRegisterNativesUSBZSkillGrifterGrifterAced()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillGrifterGrifterAced_NoRegister()
	{
		return USBZSkillGrifterGrifterAced::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillGrifterGrifterAced_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActivationDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillGrifterGrifterAced_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillGrifterGrifterAced_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillGrifterGrifterAced.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillGrifterGrifterAced.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillGrifterGrifterAced_Statics::NewProp_ActivationDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillGrifterGrifterAced" },
		{ "ModuleRelativePath", "Public/SBZSkillGrifterGrifterAced.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSkillGrifterGrifterAced_Statics::NewProp_ActivationDelay = { "ActivationDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillGrifterGrifterAced, ActivationDelay), METADATA_PARAMS(Z_Construct_UClass_USBZSkillGrifterGrifterAced_Statics::NewProp_ActivationDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillGrifterGrifterAced_Statics::NewProp_ActivationDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSkillGrifterGrifterAced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillGrifterGrifterAced_Statics::NewProp_ActivationDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillGrifterGrifterAced_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillGrifterGrifterAced>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillGrifterGrifterAced_Statics::ClassParams = {
		&USBZSkillGrifterGrifterAced::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSkillGrifterGrifterAced_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillGrifterGrifterAced_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillGrifterGrifterAced_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillGrifterGrifterAced_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillGrifterGrifterAced()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillGrifterGrifterAced_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillGrifterGrifterAced, 4194502617);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillGrifterGrifterAced>()
	{
		return USBZSkillGrifterGrifterAced::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillGrifterGrifterAced(Z_Construct_UClass_USBZSkillGrifterGrifterAced, &USBZSkillGrifterGrifterAced::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillGrifterGrifterAced"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillGrifterGrifterAced);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

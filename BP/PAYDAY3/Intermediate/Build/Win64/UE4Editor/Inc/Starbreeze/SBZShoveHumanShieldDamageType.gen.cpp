// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZShoveHumanShieldDamageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZShoveHumanShieldDamageType() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZShoveHumanShieldDamageType_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZShoveHumanShieldDamageType();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMeleeDamageType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZShoveHumanShieldDamageType::StaticRegisterNativesUSBZShoveHumanShieldDamageType()
	{
	}
	UClass* Z_Construct_UClass_USBZShoveHumanShieldDamageType_NoRegister()
	{
		return USBZShoveHumanShieldDamageType::StaticClass();
	}
	struct Z_Construct_UClass_USBZShoveHumanShieldDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZShoveHumanShieldDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMeleeDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoveHumanShieldDamageType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZShoveHumanShieldDamageType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZShoveHumanShieldDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZShoveHumanShieldDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZShoveHumanShieldDamageType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZShoveHumanShieldDamageType_Statics::ClassParams = {
		&USBZShoveHumanShieldDamageType::StaticClass,
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
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZShoveHumanShieldDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoveHumanShieldDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZShoveHumanShieldDamageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZShoveHumanShieldDamageType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZShoveHumanShieldDamageType, 215412183);
	template<> STARBREEZE_API UClass* StaticClass<USBZShoveHumanShieldDamageType>()
	{
		return USBZShoveHumanShieldDamageType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZShoveHumanShieldDamageType(Z_Construct_UClass_USBZShoveHumanShieldDamageType, &USBZShoveHumanShieldDamageType::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZShoveHumanShieldDamageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZShoveHumanShieldDamageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

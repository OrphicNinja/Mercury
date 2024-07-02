// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTDecorator_TelegraphAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTDecorator_TelegraphAttack() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_TelegraphAttack_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_TelegraphAttack();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTDecorator_TelegraphAttack::StaticRegisterNativesUSBZBTDecorator_TelegraphAttack()
	{
	}
	UClass* Z_Construct_UClass_USBZBTDecorator_TelegraphAttack_NoRegister()
	{
		return USBZBTDecorator_TelegraphAttack::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTDecorator_TelegraphAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTDecorator_TelegraphAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_TelegraphAttack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTDecorator_TelegraphAttack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_TelegraphAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTDecorator_TelegraphAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTDecorator_TelegraphAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTDecorator_TelegraphAttack_Statics::ClassParams = {
		&USBZBTDecorator_TelegraphAttack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_TelegraphAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_TelegraphAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTDecorator_TelegraphAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTDecorator_TelegraphAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTDecorator_TelegraphAttack, 632601879);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTDecorator_TelegraphAttack>()
	{
		return USBZBTDecorator_TelegraphAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTDecorator_TelegraphAttack(Z_Construct_UClass_USBZBTDecorator_TelegraphAttack, &USBZBTDecorator_TelegraphAttack::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTDecorator_TelegraphAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTDecorator_TelegraphAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_SetCurrentEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_SetCurrentEnemy() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_SetCurrentEnemy_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_SetCurrentEnemy();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTTask_SetCurrentEnemy::StaticRegisterNativesUSBZBTTask_SetCurrentEnemy()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_SetCurrentEnemy_NoRegister()
	{
		return USBZBTTask_SetCurrentEnemy::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_SetCurrentEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_SetCurrentEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_SetCurrentEnemy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_SetCurrentEnemy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_SetCurrentEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_SetCurrentEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_SetCurrentEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_SetCurrentEnemy_Statics::ClassParams = {
		&USBZBTTask_SetCurrentEnemy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_SetCurrentEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_SetCurrentEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_SetCurrentEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_SetCurrentEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_SetCurrentEnemy, 2889058296);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_SetCurrentEnemy>()
	{
		return USBZBTTask_SetCurrentEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_SetCurrentEnemy(Z_Construct_UClass_USBZBTTask_SetCurrentEnemy, &USBZBTTask_SetCurrentEnemy::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_SetCurrentEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_SetCurrentEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

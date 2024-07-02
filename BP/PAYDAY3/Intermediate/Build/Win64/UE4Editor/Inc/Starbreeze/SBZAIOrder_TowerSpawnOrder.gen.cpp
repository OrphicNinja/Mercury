// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_TowerSpawnOrder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_TowerSpawnOrder() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_TowerSpawnOrder_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_TowerSpawnOrder();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISquadOrder();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIOrder_TowerSpawnOrder::StaticRegisterNativesUSBZAIOrder_TowerSpawnOrder()
	{
	}
	UClass* Z_Construct_UClass_USBZAIOrder_TowerSpawnOrder_NoRegister()
	{
		return USBZAIOrder_TowerSpawnOrder::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_TowerSpawnOrder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_TowerSpawnOrder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAISquadOrder,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_TowerSpawnOrder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_TowerSpawnOrder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_TowerSpawnOrder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_TowerSpawnOrder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_TowerSpawnOrder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_TowerSpawnOrder_Statics::ClassParams = {
		&USBZAIOrder_TowerSpawnOrder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_TowerSpawnOrder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_TowerSpawnOrder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_TowerSpawnOrder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_TowerSpawnOrder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_TowerSpawnOrder, 2295386513);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_TowerSpawnOrder>()
	{
		return USBZAIOrder_TowerSpawnOrder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_TowerSpawnOrder(Z_Construct_UClass_USBZAIOrder_TowerSpawnOrder, &USBZAIOrder_TowerSpawnOrder::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_TowerSpawnOrder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_TowerSpawnOrder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

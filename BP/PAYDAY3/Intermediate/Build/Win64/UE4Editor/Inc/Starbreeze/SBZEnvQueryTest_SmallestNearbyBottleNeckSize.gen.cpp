// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEnvQueryTest_SmallestNearbyBottleNeckSize.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEnvQueryTest_SmallestNearbyBottleNeckSize() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryTest_SmallestNearbyBottleNeckSize_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryTest_SmallestNearbyBottleNeckSize();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZEnvQueryTest_SmallestNearbyBottleNeckSize::StaticRegisterNativesUSBZEnvQueryTest_SmallestNearbyBottleNeckSize()
	{
	}
	UClass* Z_Construct_UClass_USBZEnvQueryTest_SmallestNearbyBottleNeckSize_NoRegister()
	{
		return USBZEnvQueryTest_SmallestNearbyBottleNeckSize::StaticClass();
	}
	struct Z_Construct_UClass_USBZEnvQueryTest_SmallestNearbyBottleNeckSize_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToCheck;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEnvQueryTest_SmallestNearbyBottleNeckSize_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryTest_SmallestNearbyBottleNeckSize_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEnvQueryTest_SmallestNearbyBottleNeckSize.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryTest_SmallestNearbyBottleNeckSize.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryTest_SmallestNearbyBottleNeckSize_Statics::NewProp_DistanceToCheck_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryTest_SmallestNearbyBottleNeckSize" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryTest_SmallestNearbyBottleNeckSize.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZEnvQueryTest_SmallestNearbyBottleNeckSize_Statics::NewProp_DistanceToCheck = { "DistanceToCheck", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnvQueryTest_SmallestNearbyBottleNeckSize, DistanceToCheck), METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryTest_SmallestNearbyBottleNeckSize_Statics::NewProp_DistanceToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_SmallestNearbyBottleNeckSize_Statics::NewProp_DistanceToCheck_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZEnvQueryTest_SmallestNearbyBottleNeckSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryTest_SmallestNearbyBottleNeckSize_Statics::NewProp_DistanceToCheck,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEnvQueryTest_SmallestNearbyBottleNeckSize_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEnvQueryTest_SmallestNearbyBottleNeckSize>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEnvQueryTest_SmallestNearbyBottleNeckSize_Statics::ClassParams = {
		&USBZEnvQueryTest_SmallestNearbyBottleNeckSize::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZEnvQueryTest_SmallestNearbyBottleNeckSize_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_SmallestNearbyBottleNeckSize_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryTest_SmallestNearbyBottleNeckSize_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_SmallestNearbyBottleNeckSize_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEnvQueryTest_SmallestNearbyBottleNeckSize()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEnvQueryTest_SmallestNearbyBottleNeckSize_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEnvQueryTest_SmallestNearbyBottleNeckSize, 4074293743);
	template<> STARBREEZE_API UClass* StaticClass<USBZEnvQueryTest_SmallestNearbyBottleNeckSize>()
	{
		return USBZEnvQueryTest_SmallestNearbyBottleNeckSize::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEnvQueryTest_SmallestNearbyBottleNeckSize(Z_Construct_UClass_USBZEnvQueryTest_SmallestNearbyBottleNeckSize, &USBZEnvQueryTest_SmallestNearbyBottleNeckSize::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEnvQueryTest_SmallestNearbyBottleNeckSize"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEnvQueryTest_SmallestNearbyBottleNeckSize);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

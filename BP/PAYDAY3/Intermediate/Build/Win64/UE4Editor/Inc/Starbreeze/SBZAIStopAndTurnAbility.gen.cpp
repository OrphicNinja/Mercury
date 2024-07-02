// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIStopAndTurnAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIStopAndTurnAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIStopAndTurnAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIStopAndTurnAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIStopAndTurnAbility::StaticRegisterNativesUSBZAIStopAndTurnAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZAIStopAndTurnAbility_NoRegister()
	{
		return USBZAIStopAndTurnAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIStopAndTurnAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngleThresholdRecomputePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngleThresholdRecomputePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceThresholdRecomputePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceThresholdRecomputePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIStopAndTurnAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIStopAndTurnAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIStopAndTurnAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIStopAndTurnAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIStopAndTurnAbility_Statics::NewProp_AngleThresholdRecomputePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIStopAndTurnAbility" },
		{ "ModuleRelativePath", "Public/SBZAIStopAndTurnAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIStopAndTurnAbility_Statics::NewProp_AngleThresholdRecomputePath = { "AngleThresholdRecomputePath", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIStopAndTurnAbility, AngleThresholdRecomputePath), METADATA_PARAMS(Z_Construct_UClass_USBZAIStopAndTurnAbility_Statics::NewProp_AngleThresholdRecomputePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIStopAndTurnAbility_Statics::NewProp_AngleThresholdRecomputePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIStopAndTurnAbility_Statics::NewProp_DistanceThresholdRecomputePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIStopAndTurnAbility" },
		{ "ModuleRelativePath", "Public/SBZAIStopAndTurnAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIStopAndTurnAbility_Statics::NewProp_DistanceThresholdRecomputePath = { "DistanceThresholdRecomputePath", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIStopAndTurnAbility, DistanceThresholdRecomputePath), METADATA_PARAMS(Z_Construct_UClass_USBZAIStopAndTurnAbility_Statics::NewProp_DistanceThresholdRecomputePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIStopAndTurnAbility_Statics::NewProp_DistanceThresholdRecomputePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIStopAndTurnAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIStopAndTurnAbility_Statics::NewProp_AngleThresholdRecomputePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIStopAndTurnAbility_Statics::NewProp_DistanceThresholdRecomputePath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIStopAndTurnAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIStopAndTurnAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIStopAndTurnAbility_Statics::ClassParams = {
		&USBZAIStopAndTurnAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIStopAndTurnAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIStopAndTurnAbility_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIStopAndTurnAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIStopAndTurnAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIStopAndTurnAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIStopAndTurnAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIStopAndTurnAbility, 1052189282);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIStopAndTurnAbility>()
	{
		return USBZAIStopAndTurnAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIStopAndTurnAbility(Z_Construct_UClass_USBZAIStopAndTurnAbility, &USBZAIStopAndTurnAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIStopAndTurnAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIStopAndTurnAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

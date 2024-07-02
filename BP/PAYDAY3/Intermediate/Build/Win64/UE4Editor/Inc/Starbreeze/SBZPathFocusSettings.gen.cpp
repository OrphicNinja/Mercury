// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPathFocusSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPathFocusSettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPathFocusSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPathFocusSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPathFocusSettings::StaticRegisterNativesUSBZPathFocusSettings()
	{
	}
	UClass* Z_Construct_UClass_USBZPathFocusSettings_NoRegister()
	{
		return USBZPathFocusSettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZPathFocusSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPathLengthGoal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinPathLengthGoal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPathLengthNoGoal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinPathLengthNoGoal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRemainingPathLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRemainingPathLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistanceFromEnemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistanceFromEnemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinShotRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinShotRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPathFocusSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPathFocusSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPathFocusSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPathFocusSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPathFocusSettings_Statics::NewProp_MinPathLengthGoal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPathFocusSettings" },
		{ "ModuleRelativePath", "Public/SBZPathFocusSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPathFocusSettings_Statics::NewProp_MinPathLengthGoal = { "MinPathLengthGoal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPathFocusSettings, MinPathLengthGoal), METADATA_PARAMS(Z_Construct_UClass_USBZPathFocusSettings_Statics::NewProp_MinPathLengthGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPathFocusSettings_Statics::NewProp_MinPathLengthGoal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPathFocusSettings_Statics::NewProp_MinPathLengthNoGoal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPathFocusSettings" },
		{ "ModuleRelativePath", "Public/SBZPathFocusSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPathFocusSettings_Statics::NewProp_MinPathLengthNoGoal = { "MinPathLengthNoGoal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPathFocusSettings, MinPathLengthNoGoal), METADATA_PARAMS(Z_Construct_UClass_USBZPathFocusSettings_Statics::NewProp_MinPathLengthNoGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPathFocusSettings_Statics::NewProp_MinPathLengthNoGoal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPathFocusSettings_Statics::NewProp_MinRemainingPathLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPathFocusSettings" },
		{ "ModuleRelativePath", "Public/SBZPathFocusSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPathFocusSettings_Statics::NewProp_MinRemainingPathLength = { "MinRemainingPathLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPathFocusSettings, MinRemainingPathLength), METADATA_PARAMS(Z_Construct_UClass_USBZPathFocusSettings_Statics::NewProp_MinRemainingPathLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPathFocusSettings_Statics::NewProp_MinRemainingPathLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPathFocusSettings_Statics::NewProp_MinDistanceFromEnemy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPathFocusSettings" },
		{ "ModuleRelativePath", "Public/SBZPathFocusSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPathFocusSettings_Statics::NewProp_MinDistanceFromEnemy = { "MinDistanceFromEnemy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPathFocusSettings, MinDistanceFromEnemy), METADATA_PARAMS(Z_Construct_UClass_USBZPathFocusSettings_Statics::NewProp_MinDistanceFromEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPathFocusSettings_Statics::NewProp_MinDistanceFromEnemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPathFocusSettings_Statics::NewProp_MinShotRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPathFocusSettings" },
		{ "ModuleRelativePath", "Public/SBZPathFocusSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPathFocusSettings_Statics::NewProp_MinShotRadius = { "MinShotRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPathFocusSettings, MinShotRadius), METADATA_PARAMS(Z_Construct_UClass_USBZPathFocusSettings_Statics::NewProp_MinShotRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPathFocusSettings_Statics::NewProp_MinShotRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPathFocusSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPathFocusSettings_Statics::NewProp_MinPathLengthGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPathFocusSettings_Statics::NewProp_MinPathLengthNoGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPathFocusSettings_Statics::NewProp_MinRemainingPathLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPathFocusSettings_Statics::NewProp_MinDistanceFromEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPathFocusSettings_Statics::NewProp_MinShotRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPathFocusSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPathFocusSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPathFocusSettings_Statics::ClassParams = {
		&USBZPathFocusSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPathFocusSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPathFocusSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPathFocusSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPathFocusSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPathFocusSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPathFocusSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPathFocusSettings, 1672860284);
	template<> STARBREEZE_API UClass* StaticClass<USBZPathFocusSettings>()
	{
		return USBZPathFocusSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPathFocusSettings(Z_Construct_UClass_USBZPathFocusSettings, &USBZPathFocusSettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPathFocusSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPathFocusSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

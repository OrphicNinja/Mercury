// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEnvQueryGenerator_SafeWallPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEnvQueryGenerator_SafeWallPosition() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter();
// End Cross Module References
	void USBZEnvQueryGenerator_SafeWallPosition::StaticRegisterNativesUSBZEnvQueryGenerator_SafeWallPosition()
	{
	}
	UClass* Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_NoRegister()
	{
		return USBZEnvQueryGenerator_SafeWallPosition::StaticClass();
	}
	struct Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SearchCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EnemyContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallToEnemyMinDot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WallToEnemyMinDot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavFilterProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavFilterProvider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEnvQueryGenerator_SafeWallPosition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryGenerator_SafeWallPosition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_SearchCenter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryGenerator_SafeWallPosition" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryGenerator_SafeWallPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_SearchCenter = { "SearchCenter", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnvQueryGenerator_SafeWallPosition, SearchCenter), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_SearchCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_SearchCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_SearchRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryGenerator_SafeWallPosition" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryGenerator_SafeWallPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0040008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnvQueryGenerator_SafeWallPosition, SearchRadius), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_SearchRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_SearchRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_EnemyContext_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryGenerator_SafeWallPosition" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryGenerator_SafeWallPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_EnemyContext = { "EnemyContext", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnvQueryGenerator_SafeWallPosition, EnemyContext), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_EnemyContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_EnemyContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_WallToEnemyMinDot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryGenerator_SafeWallPosition" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryGenerator_SafeWallPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_WallToEnemyMinDot = { "WallToEnemyMinDot", nullptr, (EPropertyFlags)0x0040008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnvQueryGenerator_SafeWallPosition, WallToEnemyMinDot), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_WallToEnemyMinDot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_WallToEnemyMinDot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_PointDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryGenerator_SafeWallPosition" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryGenerator_SafeWallPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_PointDistance = { "PointDistance", nullptr, (EPropertyFlags)0x0040008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnvQueryGenerator_SafeWallPosition, PointDistance), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_PointDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_PointDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_NavFilterProvider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryGenerator_SafeWallPosition" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryGenerator_SafeWallPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_NavFilterProvider = { "NavFilterProvider", nullptr, (EPropertyFlags)0x0040008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnvQueryGenerator_SafeWallPosition, NavFilterProvider), Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter, METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_NavFilterProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_NavFilterProvider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_SearchCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_SearchRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_EnemyContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_WallToEnemyMinDot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_PointDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::NewProp_NavFilterProvider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEnvQueryGenerator_SafeWallPosition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::ClassParams = {
		&USBZEnvQueryGenerator_SafeWallPosition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEnvQueryGenerator_SafeWallPosition, 1460814713);
	template<> STARBREEZE_API UClass* StaticClass<USBZEnvQueryGenerator_SafeWallPosition>()
	{
		return USBZEnvQueryGenerator_SafeWallPosition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEnvQueryGenerator_SafeWallPosition(Z_Construct_UClass_USBZEnvQueryGenerator_SafeWallPosition, &USBZEnvQueryGenerator_SafeWallPosition::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEnvQueryGenerator_SafeWallPosition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEnvQueryGenerator_SafeWallPosition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

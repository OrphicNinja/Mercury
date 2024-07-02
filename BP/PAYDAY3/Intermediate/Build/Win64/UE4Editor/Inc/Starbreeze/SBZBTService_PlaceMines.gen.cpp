// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTService_PlaceMines.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTService_PlaceMines() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_PlaceMines_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_PlaceMines();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_PlaceActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAITaserMine_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
	void USBZBTService_PlaceMines::StaticRegisterNativesUSBZBTService_PlaceMines()
	{
	}
	UClass* Z_Construct_UClass_USBZBTService_PlaceMines_NoRegister()
	{
		return USBZBTService_PlaceMines::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTService_PlaceMines_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacedMine_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlacedMine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnemyDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinWallAndMineDistance2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinWallAndMineDistance2D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistanceToMinesZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistanceToMinesZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMinesPlaced_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxMinesPlaced;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTService_PlaceMines_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBTService_PlaceActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_PlaceMines_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTService_PlaceMines.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTService_PlaceMines.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_PlaceMines_Statics::NewProp_PlacedMine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_PlaceMines" },
		{ "ModuleRelativePath", "Public/SBZBTService_PlaceMines.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZBTService_PlaceMines_Statics::NewProp_PlacedMine = { "PlacedMine", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_PlaceMines, PlacedMine), Z_Construct_UClass_ASBZAITaserMine_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_PlaceMines_Statics::NewProp_PlacedMine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_PlaceMines_Statics::NewProp_PlacedMine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_PlaceMines_Statics::NewProp_EnemyDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_PlaceMines" },
		{ "ModuleRelativePath", "Public/SBZBTService_PlaceMines.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTService_PlaceMines_Statics::NewProp_EnemyDistance = { "EnemyDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_PlaceMines, EnemyDistance), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_PlaceMines_Statics::NewProp_EnemyDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_PlaceMines_Statics::NewProp_EnemyDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_PlaceMines_Statics::NewProp_MinWallAndMineDistance2D_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_PlaceMines" },
		{ "ModuleRelativePath", "Public/SBZBTService_PlaceMines.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTService_PlaceMines_Statics::NewProp_MinWallAndMineDistance2D = { "MinWallAndMineDistance2D", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_PlaceMines, MinWallAndMineDistance2D), METADATA_PARAMS(Z_Construct_UClass_USBZBTService_PlaceMines_Statics::NewProp_MinWallAndMineDistance2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_PlaceMines_Statics::NewProp_MinWallAndMineDistance2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_PlaceMines_Statics::NewProp_MinDistanceToMinesZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_PlaceMines" },
		{ "ModuleRelativePath", "Public/SBZBTService_PlaceMines.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTService_PlaceMines_Statics::NewProp_MinDistanceToMinesZ = { "MinDistanceToMinesZ", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_PlaceMines, MinDistanceToMinesZ), METADATA_PARAMS(Z_Construct_UClass_USBZBTService_PlaceMines_Statics::NewProp_MinDistanceToMinesZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_PlaceMines_Statics::NewProp_MinDistanceToMinesZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_PlaceMines_Statics::NewProp_MaxMinesPlaced_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_PlaceMines" },
		{ "ModuleRelativePath", "Public/SBZBTService_PlaceMines.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZBTService_PlaceMines_Statics::NewProp_MaxMinesPlaced = { "MaxMinesPlaced", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_PlaceMines, MaxMinesPlaced), nullptr, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_PlaceMines_Statics::NewProp_MaxMinesPlaced_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_PlaceMines_Statics::NewProp_MaxMinesPlaced_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTService_PlaceMines_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_PlaceMines_Statics::NewProp_PlacedMine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_PlaceMines_Statics::NewProp_EnemyDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_PlaceMines_Statics::NewProp_MinWallAndMineDistance2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_PlaceMines_Statics::NewProp_MinDistanceToMinesZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_PlaceMines_Statics::NewProp_MaxMinesPlaced,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTService_PlaceMines_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTService_PlaceMines>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTService_PlaceMines_Statics::ClassParams = {
		&USBZBTService_PlaceMines::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTService_PlaceMines_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_PlaceMines_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTService_PlaceMines_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_PlaceMines_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTService_PlaceMines()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTService_PlaceMines_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTService_PlaceMines, 3076413201);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTService_PlaceMines>()
	{
		return USBZBTService_PlaceMines::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTService_PlaceMines(Z_Construct_UClass_USBZBTService_PlaceMines, &USBZBTService_PlaceMines::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTService_PlaceMines"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTService_PlaceMines);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
